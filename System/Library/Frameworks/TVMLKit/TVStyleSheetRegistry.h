//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TVStyleSheetRegistry : NSObject
{
    NSMutableArray *_rootNodes;	// 8 = 0x8
    NSMutableDictionary *_nodesByTemplateName;	// 16 = 0x10
}

+ (id)_urlForStyleSheetName:(id)arg1;	// IMP=0x0000000000029a3c
- (void).cxx_destruct;	// IMP=0x000000000002b34c
@property(retain, nonatomic) NSMutableDictionary *nodesByTemplateName; // @synthesize nodesByTemplateName=_nodesByTemplateName;
@property(retain, nonatomic) NSMutableArray *rootNodes; // @synthesize rootNodes=_rootNodes;
- (void)_commitTemplateTreeNode:(id)arg1 withParentStyleSheetURLs:(id)arg2;	// IMP=0x000000000002aeca
- (void)_createDefaultRootNodes;	// IMP=0x0000000000029aca
- (void)commitStyleSheets;	// IMP=0x0000000000029900
- (void)registerStyleSheetURLs:(id)arg1 forTemplateName:(id)arg2 basedOnTemplateName:(id)arg3;	// IMP=0x00000000000297bb
- (id)init;	// IMP=0x000000000002962a

@end

