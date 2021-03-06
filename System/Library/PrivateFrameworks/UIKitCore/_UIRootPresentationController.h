//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIStatusBarAnimationProviding-Protocol.h>

@class NSString, UIStatusBarHideAnimationParameters, UIStatusBarStyleAnimationParameters, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIRootPresentationController <_UIStatusBarAnimationProviding>
{
    UIWindow *_presentingWindow;	// 8 = 0x8
}

+ (_Bool)_allowsDeferredTransitions;	// IMP=0x00000000003a1709
- (void).cxx_destruct;	// IMP=0x00000000003a1768
@property(readonly, nonatomic) __weak UIWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
@property(readonly, nonatomic) long long preferredStatusBarUpdateAnimation;
@property(readonly, nonatomic, getter=_preferredStatusBarHideAnimationParameters) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property(readonly, nonatomic, getter=_preferredStatusBarStyleAnimationParameters) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
- (id)_createVisualStyleForProvider:(id)arg1;	// IMP=0x00000000003a1719
- (_Bool)_mayChildGrabPresentedViewControllerView;	// IMP=0x00000000003a1711
- (_Bool)_isRootPresentation;	// IMP=0x00000000003a1701
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000003a1618
@property(readonly, nonatomic) int _preferredStatusBarVisibility;
@property(readonly, nonatomic) long long preferredStatusBarStyle;
- (id)_fullscreenPresentationSuperview;	// IMP=0x00000000003a15f0
- (id)_parentTraitEnvironment;	// IMP=0x00000000003a15de
- (id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2;	// IMP=0x00000000003a156b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

