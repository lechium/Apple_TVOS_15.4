//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXFloatingCardAnimation;

@interface PXFloatingCardAnimationManager : NSObject
{
    PXFloatingCardAnimation *_heightAnimation;	// 8 = 0x8
    unsigned long long _heightAnimationPushCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000051dae
- (void)popHeightAnimation;	// IMP=0x0000000000051cfa
- (void)pushHeightAnimation:(id)arg1;	// IMP=0x0000000000051c30
@property(readonly, nonatomic) PXFloatingCardAnimation *heightAnimation;
- (id)defaultHeightAnimation;	// IMP=0x0000000000051bca

@end
