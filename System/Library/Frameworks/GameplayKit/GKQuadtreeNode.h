//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKQuadtreeNode : NSObject
{
    void *_cQuadTreeNode;	// 8 = 0x8
    struct GKQuad _quad;	// 16 = 0x10
}

@property(readonly, nonatomic) struct GKQuad quad; // @synthesize quad=_quad;
- (void)setCQuadTreeNode:(void *)arg1;	// IMP=0x00000000000326c4
- (void *)cQuadTreeNode;	// IMP=0x00000000000326ba
- (MISSING_TYPE *)max;	// IMP=0x00000000000326ab
- (MISSING_TYPE *)min;	// IMP=0x000000000003269c

@end

