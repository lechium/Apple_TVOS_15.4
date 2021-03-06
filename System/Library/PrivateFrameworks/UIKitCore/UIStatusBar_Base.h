//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIStatusBarServerClient-Protocol.h>
#import <UIKitCore/UIStatusBarStateObserver-Protocol.h>

@class NSArray, NSString, UIColor, UIStatusBarServer, UIStatusBarStyleRequest, UIStatusBarWindow, UIView;
@protocol UIStatusBarCarPlayDockDataProviding, UIStatusBarManager, UIStatusBarStateProvider, UIStatusBarStyleDelegate, UIViewControllerTransitionCoordinator;

@interface UIStatusBar_Base <UIStatusBarServerClient, UIStatusBarStateObserver>
{
    _Bool _persistentAnimationsEnabled;	// 8 = 0x8
    _Bool _foreground;	// 9 = 0x9
    _Bool _hidden;	// 10 = 0xa
    _Bool _registered;	// 11 = 0xb
    _Bool _serverUpdatesDisabled;	// 12 = 0xc
    _Bool _suppressesHiddenSideEffects;	// 13 = 0xd
    _Bool _homeItemsDisabled;	// 14 = 0xe
    _Bool _disablesRasterization;	// 15 = 0xf
    id <UIStatusBarStyleDelegate> _styleDelegate;	// 16 = 0x10
    id <UIStatusBarCarPlayDockDataProviding> _dockDataProvider;	// 24 = 0x18
    unsigned long long _styleOverrides;	// 32 = 0x20
    UIStatusBarWindow *_statusBarWindow;	// 40 = 0x28
    long long _orientation;	// 48 = 0x30
    UIStatusBarServer *_statusBarServer;	// 56 = 0x38
    id <UIStatusBarStateProvider> _inProcessStateProvider;	// 64 = 0x40
    CDStruct_0caf55ee *_localDataOverrides;	// 72 = 0x48
    long long _requestedStyle;	// 80 = 0x50
    id <UIViewControllerTransitionCoordinator> __transitionCoordinator;	// 88 = 0x58
    UIColor *_foregroundColor;	// 96 = 0x60
    long long _legibilityStyle;	// 104 = 0x68
    UIStatusBarStyleRequest *_styleRequest;	// 112 = 0x70
    unsigned long long _activeStyleOverride;	// 120 = 0x78
    long long _mode;	// 128 = 0x80
    NSArray *_enabledPartIdentifiers;	// 136 = 0x88
    id <UIStatusBarManager> _manager;	// 144 = 0x90
    struct CGRect _avoidanceFrame;	// 152 = 0x98
}

+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1 inWindow:(id)arg2;	// IMP=0x0000000000cc23c2
+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(unsigned long long)arg2 activeStyleOverride:(unsigned long long *)arg3;	// IMP=0x0000000000cc1f19
+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(unsigned long long)arg2;	// IMP=0x0000000000cc1f04
+ (struct CGRect)_frameInSceneReferenceSpaceForStyle:(long long)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(struct CGSize)arg3;	// IMP=0x0000000000cc1c7d
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3 inWindow:(id)arg4 isAzulBLinked:(_Bool)arg5;	// IMP=0x0000000000cc0c93
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3 inWindow:(id)arg4;	// IMP=0x0000000000cc0c71
+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2;	// IMP=0x0000000000cc0c5c
+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2 inWindow:(id)arg3;	// IMP=0x0000000000cc0c44
+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2 inWindow:(id)arg3 isAzulBLinked:(_Bool)arg4;	// IMP=0x0000000000cc0c1c
+ (Class)_implementationClass;	// IMP=0x0000000000cc06a5
+ (void)_setImplementationClass:(Class)arg1;	// IMP=0x0000000000cc0698
- (void).cxx_destruct;	// IMP=0x0000000000cc29b4
@property(nonatomic) __weak id <UIStatusBarManager> manager; // @synthesize manager=_manager;
@property(nonatomic) struct CGRect avoidanceFrame; // @synthesize avoidanceFrame=_avoidanceFrame;
@property(copy, nonatomic) NSArray *enabledPartIdentifiers; // @synthesize enabledPartIdentifiers=_enabledPartIdentifiers;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long activeStyleOverride; // @synthesize activeStyleOverride=_activeStyleOverride;
@property(copy, nonatomic) UIStatusBarStyleRequest *styleRequest; // @synthesize styleRequest=_styleRequest;
@property(nonatomic) long long legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic, setter=_setDisablesRasterization:) _Bool disablesRasterization; // @synthesize disablesRasterization=_disablesRasterization;
@property(nonatomic) _Bool homeItemsDisabled; // @synthesize homeItemsDisabled=_homeItemsDisabled;
@property(nonatomic) _Bool suppressesHiddenSideEffects; // @synthesize suppressesHiddenSideEffects=_suppressesHiddenSideEffects;
@property(nonatomic) __weak id <UIViewControllerTransitionCoordinator> _transitionCoordinator; // @synthesize _transitionCoordinator=__transitionCoordinator;
@property(nonatomic, getter=_requestStyle, setter=_setRequestedStyle:) long long requestedStyle; // @synthesize requestedStyle=_requestedStyle;
@property(nonatomic) _Bool serverUpdatesDisabled; // @synthesize serverUpdatesDisabled=_serverUpdatesDisabled;
@property(readonly, nonatomic) CDStruct_0caf55ee *localDataOverrides; // @synthesize localDataOverrides=_localDataOverrides;
@property(retain, nonatomic) id <UIStatusBarStateProvider> inProcessStateProvider; // @synthesize inProcessStateProvider=_inProcessStateProvider;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(retain, nonatomic) UIStatusBarServer *statusBarServer; // @synthesize statusBarServer=_statusBarServer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) __weak UIStatusBarWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
@property(nonatomic) _Bool persistentAnimationsEnabled; // @synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled;
@property(readonly, nonatomic) unsigned long long styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property(nonatomic) __weak id <UIStatusBarCarPlayDockDataProviding> dockDataProvider; // @synthesize dockDataProvider=_dockDataProvider;
@property(nonatomic) __weak id <UIStatusBarStyleDelegate> styleDelegate; // @synthesize styleDelegate=_styleDelegate;
@property(nonatomic) __weak UIView *sensorActivityIndicator;
- (_Bool)_usesModernBar;	// IMP=0x0000000000cc262b
- (void)_performAnimations:(CDUnknownBlockType)arg1 withParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cc2408
- (_Bool)_rectIntersectsTimeItem:(struct CGRect)arg1;	// IMP=0x0000000000cc2400
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc23fa
- (void)_statusBarDidAnimateRotation;	// IMP=0x0000000000cc23f4
- (void)_statusBarWillAnimateRotation;	// IMP=0x0000000000cc23ee
- (void)_performBlockWhileIgnoringForegroundViewChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cc23dc
- (void)_clearOverrideHeight;	// IMP=0x0000000000cc23bc
- (void)_setOverrideHeight:(double)arg1;	// IMP=0x0000000000cc23b6
- (double)_hiddenAlphaForHideAnimationParameters:(id)arg1;	// IMP=0x0000000000cc1ed9
- (struct CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1;	// IMP=0x0000000000cc1d64
- (_Bool)_isTransparent;	// IMP=0x0000000000cc1c75
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000cc1c57
- (double)alphaForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000cc1c49
- (void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000cc1c43
- (struct UIOffset)offsetForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000cc1c37
- (void)setOffset:(struct UIOffset)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000cc1c31
- (id)actionForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000cc1c29
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000cc1c23
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc1b86
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc1b61
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc1b39
- (void)forceUpdateToData:(const CDStruct_e9def42b *)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000cc1b1f
- (void)jiggleLockIcon;	// IMP=0x0000000000cc1b19
- (void)animateUnlock;	// IMP=0x0000000000cc1b13
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000cc1b0d
- (_Bool)showsContentsOnScreen;	// IMP=0x0000000000cc1a8d
- (void)forgetEitherSideHistory;	// IMP=0x0000000000cc1a87
- (void)_noteStyleOverridesChangedLocally;	// IMP=0x0000000000cc1a81
- (void)setLocalDataOverrides:(CDStruct_0caf55ee *)arg1;	// IMP=0x0000000000cc1a12
- (void)setShowsOnlyCenterItems:(_Bool)arg1;	// IMP=0x0000000000cc1a0c
- (void)forceUpdateStyleOverrides:(_Bool)arg1;	// IMP=0x0000000000cc19a7
- (void)forceUpdateDoubleHeightStatus;	// IMP=0x0000000000cc19a1
- (void)forceUpdateData:(_Bool)arg1;	// IMP=0x0000000000cc199b
- (void)forceUpdate:(_Bool)arg1;	// IMP=0x0000000000cc1995
- (void)setAlpha:(double)arg1;	// IMP=0x0000000000cc18bc
- (_Bool)isHidden;	// IMP=0x0000000000cc18ac
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000cc1837
- (void)_setHidden:(_Bool)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc150f
- (void)setHidden:(_Bool)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc14fd
- (_Bool)_canShowInOrientation:(long long)arg1;	// IMP=0x0000000000cc14df
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;	// IMP=0x0000000000cc14d9
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000cc14d3
- (id)activeTintColor;	// IMP=0x0000000000cc14cb
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;	// IMP=0x0000000000cc14c5
- (void)requestStyle:(long long)arg1;	// IMP=0x0000000000cc14b1
- (void)requestStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000cc149c
- (void)requestStyle:(long long)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;	// IMP=0x0000000000cc1436
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cc1421
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(_Bool)arg3;	// IMP=0x0000000000cc1407
- (void)requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(_Bool)arg4;	// IMP=0x0000000000cc1380
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(_Bool)arg4;	// IMP=0x0000000000cc137a
- (long long)styleForRequestedStyle:(long long)arg1;	// IMP=0x0000000000cc1351
- (void)_getStyle:(long long *)arg1 andActiveOverride:(unsigned long long *)arg2 forRequestedStyle:(long long)arg3;	// IMP=0x0000000000cc110f
- (_Bool)isTranslucent;	// IMP=0x0000000000cc1107
- (_Bool)isDoubleHeight;	// IMP=0x0000000000cc10ff
- (long long)currentStyle;	// IMP=0x0000000000cc10f7
- (double)heightForOrientation:(long long)arg1;	// IMP=0x0000000000cc10e0
- (double)heightForOrientation:(long long)arg1 isAzulBLinked:(_Bool)arg2;	// IMP=0x0000000000cc10af
- (double)currentHeight;	// IMP=0x0000000000cc107e
- (struct CGRect)frameForOrientation:(long long)arg1;	// IMP=0x0000000000cc0f9b
- (struct CGRect)currentFrame;	// IMP=0x0000000000cc0ef5
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000cc0ed7
- (double)defaultDoubleHeight;	// IMP=0x0000000000cc0ece
- (double)defaultHeight;	// IMP=0x0000000000cc0eb7
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_e9def42b *)arg2 withActions:(int)arg3;	// IMP=0x0000000000cc0eb1
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;	// IMP=0x0000000000cc0eab
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(_Bool)arg2 forStyle:(long long)arg3;	// IMP=0x0000000000cc0ea5
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(unsigned long long)arg2;	// IMP=0x0000000000cc0e94
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_e9def42b *)arg2 withActions:(int)arg3;	// IMP=0x0000000000cc0e8e
- (void)_styleOverridesDidChange:(id)arg1;	// IMP=0x0000000000cc0e5b
- (void)_willEnterForeground:(id)arg1;	// IMP=0x0000000000cc0e3e
- (void)_didEnterBackground:(id)arg1;	// IMP=0x0000000000cc0e21
- (void)_evaluateServerRegistration;	// IMP=0x0000000000cc0ceb
- (void)didMoveToSuperview;	// IMP=0x0000000000cc0cd9
- (_Bool)_shouldSeekHigherPriorityTouchTarget;	// IMP=0x0000000000cc0c9c
- (void)dealloc;	// IMP=0x0000000000cc0b07
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000cc0af0
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2;	// IMP=0x0000000000cc0adc
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 inProcessStateProvider:(id)arg3;	// IMP=0x0000000000cc09e3
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;	// IMP=0x0000000000cc0814

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

