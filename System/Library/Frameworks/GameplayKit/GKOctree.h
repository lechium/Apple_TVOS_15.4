//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKOctree : NSObject
{
    void *_cOctree;	// 8 = 0x8
}

+ (id)octreeWithBoundingBox:(struct GKBox)arg1 minimumCellSize:(float)arg2;	// IMP=0x000000000004a4f4
- (_Bool)removeElement:(id)arg1 withNode:(id)arg2;	// IMP=0x000000000004a8a0
- (_Bool)removeElement:(id)arg1;	// IMP=0x000000000004a88a
- (id)elementsInBox:(struct GKBox)arg1;	// IMP=0x000000000004a7b8
- (id)elementsAtPoint: /* Error: Ran out of types for this method. */;	// IMP=0x000000000004a6f0
- (id)addElement:(id)arg1 withBox:(struct GKBox)arg2;	// IMP=0x000000000004a6c4
- (id)addElement:(id)arg1 withPoint: /* Error: Ran out of types for this method. */;	// IMP=0x000000000004a6a3
- (void)dealloc;	// IMP=0x000000000004a663
- (id)initWithBoundingBox:(struct GKBox)arg1 minimumCellSize:(float)arg2;	// IMP=0x000000000004a5c3
- (id)init;	// IMP=0x000000000004a540

@end

