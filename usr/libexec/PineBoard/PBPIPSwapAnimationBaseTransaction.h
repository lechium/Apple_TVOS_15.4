//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class NSString, PBPIPContainerViewControllerLayout, PBPIPSwapPortalClippingView, UIView;

@interface PBPIPSwapAnimationBaseTransaction : BSTransaction
{
    PBPIPSwapPortalClippingView *_currentFullscreenPortalView;	// 8 = 0x8
    PBPIPSwapPortalClippingView *_currentPIPPortalView;	// 16 = 0x10
    PBPIPSwapPortalClippingView *_destinationFullscreenContentPortalView;	// 24 = 0x18
    PBPIPSwapPortalClippingView *_destinationPIPContentPortalView;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    PBPIPContainerViewControllerLayout *_destinationFullscreenLayout;	// 48 = 0x30
    PBPIPContainerViewControllerLayout *_destinationPIPLayout;	// 56 = 0x38
    UIView *_backgroundView;	// 64 = 0x40
    struct CGRect _destinationFullscreenFrame;	// 72 = 0x48
    struct CGRect _destinationPIPFrame;	// 104 = 0x68
}

+ (id)_animationGroupWithAnimations:(id)arg1;	// IMP=0x001000000023ff60
+ (id)_cubicAnimationForKeyPath:(id)arg1;	// IMP=0x001000000023fe10
+ (id)_springAnimationForKeyPath:(id)arg1;	// IMP=0x001000000023fcf0
+ (id)_springAnimationSettings;	// IMP=0x001000000023fca0
+ (id)_springAnimationForScaleY;	// IMP=0x001000000023fc70
+ (id)_springAnimationForScaleX;	// IMP=0x001000000023fc40
+ (id)_springAnimationForPositionY;	// IMP=0x001000000023fc10
+ (id)_springAnimationForPositionX;	// IMP=0x001000000023fbe0
+ (id)_springAnimationForCornerRadius;	// IMP=0x001000000023fbb0
+ (id)_cubicAnimationForOpacity;	// IMP=0x001000000023fb80
+ (id)_springAnimationForOpacity;	// IMP=0x001000000023fb50
+ (id)_keyPathLayer;	// IMP=0x001000000023fb40
- (void).cxx_destruct;	// IMP=0x00200000000fa370
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) struct CGRect destinationPIPFrame; // @synthesize destinationPIPFrame=_destinationPIPFrame;
@property(readonly, nonatomic) PBPIPContainerViewControllerLayout *destinationPIPLayout; // @synthesize destinationPIPLayout=_destinationPIPLayout;
@property(readonly, nonatomic) struct CGRect destinationFullscreenFrame; // @synthesize destinationFullscreenFrame=_destinationFullscreenFrame;
@property(readonly, nonatomic) PBPIPContainerViewControllerLayout *destinationFullscreenLayout; // @synthesize destinationFullscreenLayout=_destinationFullscreenLayout;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)_destinationPIPViewController;	// IMP=0x00100000000fa200
- (id)_destinationFullscreenViewController;	// IMP=0x00100000000fa190
- (struct CATransform3D)_destinationPIPScaleTransform;	// IMP=0x00100000000fa120
- (struct CATransform3D)_destinationFullscreenScaleTransform;	// IMP=0x00100000000fa0b0
- (struct CGSize)_destinationPIPScaleFactor;	// IMP=0x00100000000f9fe0
- (struct CGSize)_destinationFullscreenScaleFactor;	// IMP=0x00100000000f9f10
- (void)invalidate;	// IMP=0x00100000000f9a60
- (void)_begin;	// IMP=0x00100000000f9870
@property(readonly, nonatomic) UIView *destinationPIPPortalView;
@property(readonly, nonatomic) UIView *destinationFullscreenPortalView;
@property(readonly, nonatomic) UIView *currentPIPPortalView;
@property(readonly, nonatomic) UIView *currentFullscreenPortalView;
@property(readonly, nonatomic) double defaultPIPCornerRadius;
- (void)dealloc;	// IMP=0x00100000000f8770
- (id)initWithContainingView:(id)arg1 destinationFullscreenLayout:(id)arg2 destinationPIPLayout:(id)arg3 quadrant:(long long)arg4;	// IMP=0x00100000000f8400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
