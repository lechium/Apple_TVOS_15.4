//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>
#import <FrontBoardServices/NSMutableCopying-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, BSMutableSettings, BSProcessHandle, FBSceneUpdateContext, FBWatchdogTransitionContext, NSSet, NSString;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    FBSceneUpdateContext *_updateContext;	// 8 = 0x8
    FBWatchdogTransitionContext *_watchdogTransitionContext;	// 16 = 0x10
    _Bool _allowCPUThrottling;	// 24 = 0x18
    _Bool _runningBoardAssertionDisabled;	// 25 = 0x19
    BSAnimationSettings *_animationSettings;	// 32 = 0x20
    BKSAnimationFenceHandle *_animationFence;	// 40 = 0x28
    NSSet *_actions;	// 48 = 0x30
    BSProcessHandle *_originatingProcess;	// 56 = 0x38
    BSMutableSettings *_otherSettings;	// 64 = 0x40
    BSMutableSettings *_transientLocalClientSettings;	// 72 = 0x48
}

+ (id)transitionContext;	// IMP=0x0000000000002966
- (void).cxx_destruct;	// IMP=0x00000000000033b3
@property(retain, nonatomic) BSProcessHandle *originatingProcess; // @synthesize originatingProcess=_originatingProcess;
@property(copy, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(copy, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000003343
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x000000000000333b
- (_Bool)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;	// IMP=0x0000000000003333
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;	// IMP=0x000000000000332b
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;	// IMP=0x0000000000003323
- (_Bool)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;	// IMP=0x000000000000331b
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000003279
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000003193
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000303a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003028
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000002db9
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000002d69
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000002d4d
- (id)succinctDescription;	// IMP=0x0000000000002cfd
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002b9c
@property(readonly) unsigned long long hash;
- (_Bool)_isEmpty;	// IMP=0x0000000000002a46
- (id)transientLocalClientSettings;	// IMP=0x0000000000002a0b
- (id)otherSettings;	// IMP=0x00000000000029bc
- (void)dealloc;	// IMP=0x0000000000002978

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(retain, nonatomic) FBSceneUpdateContext *updateContext; // @dynamic updateContext;
@property(retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext; // @dynamic watchdogTransitionContext;

@end

