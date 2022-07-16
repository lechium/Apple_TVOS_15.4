//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NATreeNode, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying>
{
    NSMutableArray *_enumeratorStack;	// 8 = 0x8
    NATreeNode *_node;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002a39
@property(readonly, copy, nonatomic) NATreeNode *node; // @synthesize node=_node;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)nextObject;	// IMP=0x00000000000027a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000273b
- (id)initWithNode:(id)arg1;	// IMP=0x00000000000026c1

@end

