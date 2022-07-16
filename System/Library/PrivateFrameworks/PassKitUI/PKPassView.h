//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPassFaceViewDelegate-Protocol.h>
#import <PassKitUI/PKPasscodeLockManagerObserver-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSObject, NSString, PKPass, PKPassColorProfile, PKPassFaceViewRendererState, PKPassFrontFaceView, PKPasscodeLockManager, UITapGestureRecognizer;
@protocol OS_dispatch_source, WLCardViewDelegate;

@interface PKPassView : UIView <UIGestureRecognizerDelegate, PKPassFaceViewDelegate, PKPasscodeLockManagerObserver>
{
    PKPassFrontFaceView *_frontFace;	// 8 = 0x8
    PKPassColorProfile *_colorProfile;	// 16 = 0x10
    PKPassFaceViewRendererState *_rendererState;	// 24 = 0x18
    UITapGestureRecognizer *_tapRecognizer;	// 32 = 0x20
    long long _priorContentMode;	// 40 = 0x28
    PKPasscodeLockManager *_passcodeLockManager;	// 48 = 0x30
    NSString *_suppressingIdentifier;	// 56 = 0x38
    _Bool _contentLoading;	// 64 = 0x40
    _Bool _contentLoaded;	// 65 = 0x41
    NSObject<OS_dispatch_source> *_contentModeUpdateTimer;	// 72 = 0x48
    NSMutableArray *_delayedAnimations;	// 80 = 0x50
    _Bool _invalidated;	// 88 = 0x58
    _Bool _modallyPresented;	// 89 = 0x59
    PKPass *_pass;	// 96 = 0x60
    id <WLCardViewDelegate> _delegate;	// 104 = 0x68
    long long _contentMode;	// 112 = 0x70
    unsigned long long _suppressedContent;	// 120 = 0x78
    double _modalShadowVisibility;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000c9acc
@property(nonatomic) double modalShadowVisibility; // @synthesize modalShadowVisibility=_modalShadowVisibility;
@property(nonatomic, getter=isModallyPresented) _Bool modallyPresented; // @synthesize modallyPresented=_modallyPresented;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) __weak id <WLCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void)_updateFrontFaceSuppressedContent;	// IMP=0x00000000000c988d
- (_Bool)_visibleFaceShouldClipForCurrentViewMode:(double *)arg1;	// IMP=0x00000000000c97fa
- (unsigned long long)_regionsForCurrentModes;	// IMP=0x00000000000c97cd
- (long long)_frontFaceBackgroundModeForContentMode;	// IMP=0x00000000000c97af
- (void)_applyContentMode:(_Bool)arg1;	// IMP=0x00000000000c9425
- (void)passFaceViewExpandButtonTapped:(id)arg1;	// IMP=0x00000000000c93c8
- (void)passcodeLockManager:(id)arg1 didReceivePasscodeSet:(_Bool)arg2;	// IMP=0x00000000000c9336
- (void)_updateHighEndLayerShadowAnimated:(_Bool)arg1 withDelay:(double)arg2;	// IMP=0x00000000000c894b
- (void)_updateLowEndLayerShadowAnimated:(_Bool)arg1 withDelay:(double)arg2;	// IMP=0x00000000000c891c
- (void)_updateLayerShadowAnimated:(_Bool)arg1 withDelay:(double)arg2;	// IMP=0x00000000000c88d1
- (void)updateValidityDisplay;	// IMP=0x00000000000c88b4
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c8897
@property(readonly, nonatomic) _Bool isFrontFaceExpanded;
- (void)setFrontFaceExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000c86f9
- (_Bool)needsAuthentication;	// IMP=0x00000000000c86dc
- (void)didTransact;	// IMP=0x00000000000c86bf
- (void)didAuthenticate;	// IMP=0x00000000000c86a2
- (void)layoutSubviews;	// IMP=0x00000000000c84dc
- (void)setContentMode:(long long)arg1 animated:(_Bool)arg2 withDelay:(double)arg3;	// IMP=0x00000000000c82e1
- (void)setContentMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000c82cc
- (void)setModalShadowVisibility:(double)arg1 animated:(_Bool)arg2 withDelay:(double)arg3;	// IMP=0x00000000000c8275
- (void)setModalShadowVisibility:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000c8260
- (void)setDimmer:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000c800e
@property(nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) _Bool frontFaceBodyContentCreated;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) PKPassFaceViewRendererState *rendererState;
- (id)item;	// IMP=0x00000000000c7f4e
- (_Bool)canShowBarcode;	// IMP=0x00000000000c7f33
- (void)drawFrontFaceAtSize:(struct CGSize)arg1;	// IMP=0x00000000000c7e0b
- (id)snapshotViewOfVisibleFaceAfterScreenUpdates:(_Bool)arg1;	// IMP=0x00000000000c7b15
- (id)snapshotOfFrontFaceWithRequestedSize:(struct CGSize)arg1;	// IMP=0x00000000000c7762
- (id)snapshotOfFrontFace;	// IMP=0x00000000000c76f8
- (struct CGRect)frameOfVisibleFace;	// IMP=0x00000000000c767a
- (struct CGSize)sizeOfFrontFace;	// IMP=0x00000000000c7655
- (struct CGSize)sizeOfFront;	// IMP=0x00000000000c7638
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000c7626
- (void)setPaymentBarcodeData:(id)arg1;	// IMP=0x00000000000c7609
- (void)tapRecognized:(id)arg1;	// IMP=0x00000000000c75a7
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000c7569
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000c750c
- (void)invalidate;	// IMP=0x00000000000c74dc
- (void)dealloc;	// IMP=0x00000000000c732a
- (id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3 rendererState:(id)arg4;	// IMP=0x00000000000c7037
- (id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3;	// IMP=0x00000000000c7022
- (id)initWithPass:(id)arg1 content:(long long)arg2;	// IMP=0x00000000000c700d
- (id)initWithPass:(id)arg1;	// IMP=0x00000000000c6ff6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
