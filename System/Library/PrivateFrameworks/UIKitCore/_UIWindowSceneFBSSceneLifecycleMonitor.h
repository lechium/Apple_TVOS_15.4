//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneFBSSceneLifecycleMonitor
{
    NSNumber *_transitioningState;	// 16 = 0x10
    _Bool _transitioning;	// 24 = 0x18
    _Bool _connected;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x000000000021db7f
- (void)willBecomeActive;	// IMP=0x000000000021d9ee
- (void)didEnterBackground;	// IMP=0x000000000021d86a
- (id)_windowScene;	// IMP=0x000000000021d7f6
- (void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(CDUnknownBlockType)arg4;	// IMP=0x000000000021cf3f
- (long long)currentActivationState;	// IMP=0x000000000021ce84
- (id)initWithScene:(id)arg1;	// IMP=0x000000000021ce19

@end

