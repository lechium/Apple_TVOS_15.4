//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class IKStyleFactory, NSDictionary, NSMutableDictionary, NSString;

@interface IKTemplateStyleSheet : NSObject <NSCopying>
{
    IKStyleFactory *_styleFactory;	// 8 = 0x8
    NSDictionary *_templateTree;	// 16 = 0x10
    NSMutableDictionary *_styleComposersByKeypath;	// 24 = 0x18
    NSString *_templateName;	// 32 = 0x20
}

+ (id)_templateNodeWithXMLNode:(struct _xmlNode *)arg1 parentNode:(id)arg2;	// IMP=0x000000000009e484
+ (id)_templateTreeWithXMLTree:(struct _xmlNode *)arg1 parentNode:(id)arg2;	// IMP=0x000000000009e261
+ (void)_findNodesInXmlTree:(struct _xmlDoc *)arg1 styleNode:(struct _xmlNode **)arg2 templateNode:(struct _xmlNode **)arg3;	// IMP=0x000000000009db1f
+ (void)_resolveEmbeddedTemplatesInXmlTree:(struct _xmlNode *)arg1;	// IMP=0x000000000009d7f7
+ (struct _xmlDoc *)_xmlTreeWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009d641
+ (struct _xmlDoc *)_xmlTreeForTemplateName:(id)arg1;	// IMP=0x000000000009d460
+ (id)_coalesceNode:(struct _xmlNode *)arg1 overridingNode:(struct _xmlNode *)arg2 forcedTemplateName:(id)arg3;	// IMP=0x000000000009c179
+ (void)_coalesceTrees:(struct _xmlNode *)arg1 overridingTree:(struct _xmlNode *)arg2 forcedTemplateName:(id)arg3;	// IMP=0x000000000009bfee
+ (id)_styleSheetForTemplateName:(id)arg1;	// IMP=0x000000000009b84b
+ (id)styleSheetForTemplateName:(id)arg1;	// IMP=0x000000000009aad4
+ (void)loadStyleSheets;	// IMP=0x000000000009a85c
+ (void)registerStyleSheetURL:(id)arg1 parentStyleSheets:(id)arg2 forTemplateName:(id)arg3;	// IMP=0x000000000009a43f
+ (void)registerStyleSheetURL:(id)arg1 forTemplateName:(id)arg2;	// IMP=0x000000000009a428
- (void).cxx_destruct;	// IMP=0x000000000009e80c
@property(readonly, copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(readonly, retain, nonatomic) NSMutableDictionary *styleComposersByKeypath; // @synthesize styleComposersByKeypath=_styleComposersByKeypath;
@property(readonly, copy, nonatomic) NSDictionary *templateTree; // @synthesize templateTree=_templateTree;
@property(readonly, retain, nonatomic) IKStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;
- (id)_styleComposerForNode:(id)arg1;	// IMP=0x000000000009e62b
- (id)_initWithXMLDoc:(struct _xmlDoc *)arg1 templateName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009dc0d
- (void)setViewElementStylesDirty;	// IMP=0x000000000009b6c2
- (id)styleComposerForElement:(id)arg1;	// IMP=0x000000000009ab72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009a0da

@end

