//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/BSDescriptionProviding-Protocol.h>
#import <PineBoardServices/NSSecureCoding-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, NSString;

@interface PBSOverlayLayoutTransitionContext : NSObject <BSDescriptionProviding, NSSecureCoding>
{
    BSAnimationSettings *_animationSettings;	// 8 = 0x8
    BKSAnimationFenceHandle *_animationFence;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000077300
+ (id)transitionContextWithAnimationSettings:(id)arg1 animationFence:(id)arg2;	// IMP=0x00000000000771f0
+ (void)tryAnimatingWithContext:(id)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000077a80
- (void).cxx_destruct;	// IMP=0x0000000000077a40
@property(retain, nonatomic) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(copy, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000777c0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000077720
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000077650
- (id)succinctDescription;	// IMP=0x00000000000775e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077550
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077320
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

