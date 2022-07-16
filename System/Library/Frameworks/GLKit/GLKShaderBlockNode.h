//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GLKit/NSCopying-Protocol.h>
#import <GLKit/NSXMLParserDelegate-Protocol.h>

@class NSMutableString, NSString;

@interface GLKShaderBlockNode : NSObject <NSXMLParserDelegate, NSCopying>
{
    struct GLKBigInt_s _mask;	// 8 = 0x8
    GLKShaderBlockNode *_parent;	// 24 = 0x18
    GLKShaderBlockNode *_next;	// 32 = 0x20
    GLKShaderBlockNode *_children;	// 40 = 0x28
    NSString *_label;	// 48 = 0x30
    NSString *_loopVar;	// 56 = 0x38
    int _type;	// 64 = 0x40
    int _unrollCt;	// 68 = 0x44
    unsigned int _index;	// 72 = 0x48
    NSMutableString *_blockText;	// 80 = 0x50
    int _propertyClass;	// 88 = 0x58
    _Bool _indexedMask;	// 92 = 0x5c
}

+ (void)printTreeVerbose:(id)arg1;	// IMP=0x000000000001bd5c
+ (void)printTree:(id)arg1;	// IMP=0x000000000001bc49
+ (void)setIndicesForRoot:(id)arg1 andReplaceLoopVar:(id)arg2 baseLabel:(id)arg3 basePropertyClass:(int)arg4 usingIndex:(unsigned int)arg5 indexString:(id)arg6;	// IMP=0x000000000001ba1f
+ (unsigned int)nodeCt:(id)arg1 nodeCt:(unsigned int *)arg2;	// IMP=0x000000000001b973
+ (void)insertNode:(id)arg1 afterSibling:(id)arg2;	// IMP=0x000000000001b91b
+ (void)buildUnrollNodeArray:(id)arg1 array:(id)arg2;	// IMP=0x000000000001b83c
+ (void)setMasksWithRoot:(id)arg1 treeRoot:(id)arg2 mask:(struct GLKBigInt_s *)arg3;	// IMP=0x000000000001b6e3
+ (struct GLKBigInt_s)maskForLabel:(id)arg1 root:(id)arg2 index:(int)arg3;	// IMP=0x000000000001b5b5
+ (id)copyTreeWithRootButNotSiblings:(id)arg1 parent:(id)arg2;	// IMP=0x000000000001b51e
+ (id)copyTreeWithRoot:(id)arg1 parent:(id)arg2;	// IMP=0x000000000001b437
@property(nonatomic) _Bool indexedMask; // @synthesize indexedMask=_indexedMask;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) int propertyClass; // @synthesize propertyClass=_propertyClass;
@property(retain, nonatomic) NSMutableString *blockText; // @synthesize blockText=_blockText;
@property(nonatomic) int unrollCt; // @synthesize unrollCt=_unrollCt;
@property(nonatomic) struct GLKBigInt_s mask; // @synthesize mask=_mask;
@property(nonatomic) GLKShaderBlockNode *children; // @synthesize children=_children;
@property(nonatomic) GLKShaderBlockNode *next; // @synthesize next=_next;
@property(nonatomic) GLKShaderBlockNode *parent; // @synthesize parent=_parent;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *loopVar; // @synthesize loopVar=_loopVar;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)dealloc;	// IMP=0x000000000001c461
@property(readonly, copy) NSString *description;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x000000000001c377
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x000000000001c217
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x000000000001be87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b2ce
- (id)init;	// IMP=0x000000000001b261

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

