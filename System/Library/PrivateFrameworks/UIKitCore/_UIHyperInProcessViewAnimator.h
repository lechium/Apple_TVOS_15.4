//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperAnimator-Protocol.h>
#import <UIKitCore/_UIHyperAnimator_Internal-Protocol.h>

@class NSString, UIViewSpringAnimationBehavior, _UIHyperInteractor, _UISpringParameters;
@protocol UIViewSpringAnimationBehaviorDescribing;

@interface _UIHyperInProcessViewAnimator : NSObject <_UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying>
{
    unsigned long long __dimensions;	// 8 = 0x8
    _UIHyperInteractor *__interactor;	// 16 = 0x10
    _UISpringParameters *__trackingSpringParameters;	// 24 = 0x18
    _UISpringParameters *__nonTrackingSpringParameters;	// 32 = 0x20
    UIViewSpringAnimationBehavior *__springAnimationBehavior;	// 40 = 0x28
    id <UIViewSpringAnimationBehaviorDescribing> __overrideSpringAnimationBehavior;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000089c0d
- (void).cxx_destruct;	// IMP=0x000000000008a116
@property(retain, nonatomic, setter=_setOverrideSpringAnimationBehavior:) id <UIViewSpringAnimationBehaviorDescribing> _overrideSpringAnimationBehavior; // @synthesize _overrideSpringAnimationBehavior=__overrideSpringAnimationBehavior;
@property(nonatomic, setter=_setInteractor:) __weak _UIHyperInteractor *_interactor; // @synthesize _interactor=__interactor;
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000089e98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000089ddc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000089d0a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000089c15
- (void)_animateInteractive:(_Bool)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089b44
- (void)_animateWithParameters:(id)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089b30
- (void)_interactionEndedMutatingState:(CDUnknownBlockType)arg1;	// IMP=0x00000000000899ff
- (void)_interactionChanged;	// IMP=0x00000000000898d7
- (void)_interactionBegan;	// IMP=0x00000000000898d1
@property(readonly, nonatomic) UIViewSpringAnimationBehavior *_springAnimationBehavior; // @synthesize _springAnimationBehavior=__springAnimationBehavior;
@property(copy, nonatomic, setter=_setNonTrackingSpringParameters:) _UISpringParameters *_nonTrackingSpringParameters; // @synthesize _nonTrackingSpringParameters=__nonTrackingSpringParameters;
@property(copy, nonatomic, setter=_setTrackingSpringParameters:) _UISpringParameters *_trackingSpringParameters; // @synthesize _trackingSpringParameters=__trackingSpringParameters;
@property(readonly, copy) NSString *description;
- (id)initWithDimensions:(unsigned long long)arg1;	// IMP=0x00000000000892f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

