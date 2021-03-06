//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface AFTreeNode : NSObject <NSFastEnumeration>
{
    id _item;	// 8 = 0x8
    AFTreeNode *_parentNode;	// 16 = 0x10
    NSMutableArray *_childNodes;	// 24 = 0x18
}

+ (id)absoluteIndexPathsForTreeNodes:(id)arg1;	// IMP=0x000000000006eb29
- (void).cxx_destruct;	// IMP=0x0000000000070390
@property(readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property(nonatomic, setter=_setParentNode:) __weak AFTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) id item; // @synthesize item=_item;
- (void)enumerateDescendentNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000701f5
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000007018e
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000070177
- (void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000700a5
- (void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2;	// IMP=0x0000000000070041
- (void)removeChildNode:(id)arg1;	// IMP=0x000000000006ff49
- (void)removeChildNodeAtIndex:(long long)arg1;	// IMP=0x000000000006fe0d
- (void)addChildNode:(id)arg1;	// IMP=0x000000000006fd8b
- (void)insertChildNode:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006fad9
- (id)lastChildNode;	// IMP=0x000000000006fa89
- (id)childNodeAtIndex:(long long)arg1;	// IMP=0x000000000006fa2a
- (long long)indexOfChildNode:(id)arg1;	// IMP=0x000000000006f9b3
- (long long)numberOfChildNodes;	// IMP=0x000000000006f96f
- (void)removeFromParentNode;	// IMP=0x000000000006f923
- (id)indexPathOfNodeWithItem:(id)arg1;	// IMP=0x000000000006f610
- (id)nodeAtIndexPath:(id)arg1;	// IMP=0x000000000006f4bb
- (_Bool)containsNodeAtIndexPath:(id)arg1;	// IMP=0x000000000006f33e
- (id)absoluteIndexPath;	// IMP=0x000000000006f253
- (id)indexPathFromAncestorNode:(id)arg1;	// IMP=0x000000000006f0c8
- (id)description;	// IMP=0x000000000006f06f
- (void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;	// IMP=0x000000000006ed5d
- (id)init;	// IMP=0x000000000006ecf7

@end

