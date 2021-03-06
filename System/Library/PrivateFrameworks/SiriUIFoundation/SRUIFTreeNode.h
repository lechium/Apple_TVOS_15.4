//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUIFoundation/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface SRUIFTreeNode : NSObject <NSFastEnumeration>
{
    id _item;	// 8 = 0x8
    SRUIFTreeNode *_parentNode;	// 16 = 0x10
    NSMutableArray *_childNodes;	// 24 = 0x18
}

+ (id)absoluteIndexPathsForTreeNodes:(id)arg1;	// IMP=0x00000000000114ed
- (void).cxx_destruct;	// IMP=0x0000000000012a4e
@property(readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property(nonatomic, setter=_setParentNode:) __weak SRUIFTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) id item; // @synthesize item=_item;
- (void)enumerateDescendentNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000128b3
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001284c
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012835
- (void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012763
- (void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2;	// IMP=0x00000000000126ff
- (void)removeChildNode:(id)arg1;	// IMP=0x0000000000012674
- (void)removeChildNodeAtIndex:(long long)arg1;	// IMP=0x00000000000125c6
- (void)addChildNode:(id)arg1;	// IMP=0x0000000000012544
- (void)insertChildNode:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000123f5
- (id)lastChildNode;	// IMP=0x00000000000123a5
- (id)childNodeAtIndex:(long long)arg1;	// IMP=0x0000000000012346
- (long long)indexOfChildNode:(id)arg1;	// IMP=0x00000000000122cf
- (long long)numberOfChildNodes;	// IMP=0x000000000001228b
- (void)removeFromParentNode;	// IMP=0x000000000001223f
- (id)indexPathOfNodeWithItem:(id)arg1;	// IMP=0x0000000000011ef9
- (id)nodeAtIndexPath:(id)arg1;	// IMP=0x0000000000011e1e
- (_Bool)containsNodeAtIndexPath:(id)arg1;	// IMP=0x0000000000011d02
- (id)absoluteIndexPath;	// IMP=0x0000000000011c17
- (id)indexPathFromAncestorNode:(id)arg1;	// IMP=0x0000000000011a8c
- (id)description;	// IMP=0x0000000000011a33
- (void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;	// IMP=0x0000000000011721
- (id)init;	// IMP=0x00000000000116bb

@end

