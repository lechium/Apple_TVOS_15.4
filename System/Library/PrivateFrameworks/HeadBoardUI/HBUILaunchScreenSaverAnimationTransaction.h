//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSTransaction.h>

@class BKSAnimationFenceHandle, HBUILaunchAnimationContext, HBUILaunchScreenSaverAnimationDescription, NSHashTable;

__attribute__((visibility("hidden")))
@interface HBUILaunchScreenSaverAnimationTransaction : BSTransaction
{
    BKSAnimationFenceHandle *_animationDidCompleteFence;	// 8 = 0x8
    HBUILaunchAnimationContext *_context;	// 16 = 0x10
    HBUILaunchScreenSaverAnimationDescription *_topShelfAnimation;	// 24 = 0x18
    HBUILaunchScreenSaverAnimationDescription *_appGridAnimation;	// 32 = 0x20
    NSHashTable *_appGridViewsToRestore;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002d40d
@property(readonly, nonatomic) NSHashTable *appGridViewsToRestore; // @synthesize appGridViewsToRestore=_appGridViewsToRestore;
@property(readonly, nonatomic) HBUILaunchScreenSaverAnimationDescription *appGridAnimation; // @synthesize appGridAnimation=_appGridAnimation;
@property(readonly, nonatomic) HBUILaunchScreenSaverAnimationDescription *topShelfAnimation; // @synthesize topShelfAnimation=_topShelfAnimation;
@property(readonly, nonatomic) HBUILaunchAnimationContext *context; // @synthesize context=_context;
@property(retain, nonatomic) BKSAnimationFenceHandle *animationDidCompleteFence; // @synthesize animationDidCompleteFence=_animationDidCompleteFence;
- (void)willInterruptTransaction:(id)arg1;	// IMP=0x000000000002d1f8
- (_Bool)_canBeInterrupted;	// IMP=0x000000000002d1db
- (void)_didComplete;	// IMP=0x000000000002cd65
- (void)_begin;	// IMP=0x000000000002c2b5
- (id)debugDescription;	// IMP=0x000000000002c1ce
- (id)initWithContext:(id)arg1 topShelfAnimation:(id)arg2 appGridAnimation:(id)arg3;	// IMP=0x000000000002beb5

@end

