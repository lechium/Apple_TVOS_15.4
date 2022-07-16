//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIStatusBarServerClient-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIColor, UILabel, UIStatusBarBackgroundView, UIStatusBarForegroundView, UIStatusBarStyleAnimationParameters, UIStatusBarStyleAttributes, UIView;

@interface UIStatusBar <UIStatusBarServerClient>
{
    _Bool _showsForeground;	// 112 = 0x70
    _Bool _observingDefaults;	// 113 = 0x71
    UIStatusBarBackgroundView *_backgroundView;	// 120 = 0x78
    UIStatusBarForegroundView *_foregroundView;	// 128 = 0x80
    UILabel *_doubleHeightLabel;	// 136 = 0x88
    UIView *_doubleHeightLabelContainer;	// 144 = 0x90
    NSString *_currentDoubleHeightText;	// 152 = 0x98
    CDStruct_e9def42b _currentRawData;	// 160 = 0xa0
    NSMutableArray *_interruptedAnimationCompositeViews;	// 4040 = 0xfc8
    UIStatusBarBackgroundView *_newStyleBackgroundView;	// 4048 = 0xfd0
    UIStatusBarForegroundView *_newStyleForegroundView;	// 4056 = 0xfd8
    UIStatusBar *_slidingStatusBar;	// 4064 = 0xfe0
    UIStatusBarStyleAttributes *_styleAttributes;	// 4072 = 0xfe8
    _Bool _waitingOnCallbackAfterChangingStyleOverridesLocally;	// 4080 = 0xff0
    _Bool _showOnlyCenterItems;	// 4081 = 0xff1
    _Bool _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;	// 4082 = 0xff2
    UIColor *_tintColor;	// 4088 = 0xff8
    UIColor *_lastUsedBackgroundColor;	// 4096 = 0x1000
    UIStatusBarStyleAnimationParameters *_nextTintTransition;	// 4104 = 0x1008
    NSNumber *_overrideHeight;	// 4112 = 0x1010
    NSMutableSet *_disableRasterizationReasons;	// 4120 = 0x1018
    NSMutableDictionary *_actions;	// 4128 = 0x1020
    _Bool _disablesRasterization;	// 4136 = 0x1028
    _Bool _timeHidden;	// 4137 = 0x1029
}

+ (long long)_deviceUserInterfaceLayoutDirection;	// IMP=0x0000000000caf6f8
+ (void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1;	// IMP=0x0000000000caf6eb
+ (id)_styleAttributesForStatusBarStyle:(long long)arg1;	// IMP=0x0000000000cadfc1
+ (id)_styleAttributesForRequest:(id)arg1;	// IMP=0x0000000000cadef8
+ (id)_newStyleAttributesForRequest:(id)arg1;	// IMP=0x0000000000cad8cb
+ (_Bool)_isLightContentStyle:(long long)arg1;	// IMP=0x0000000000cad88f
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1 inWindow:(id)arg2;	// IMP=0x0000000000caade9
+ (long long)lowBatteryLevel;	// IMP=0x0000000000caaa93
+ (void)getData:(CDStruct_e9def42b *)arg1 forRequestedData:(const CDStruct_e9def42b *)arg2 withOverrides:(const CDStruct_0caf55ee *)arg3;	// IMP=0x0000000000caa3ad
+ (void)enumerateStatusBarStyleOverridesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000caa37f
+ (long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(unsigned long long)arg2;	// IMP=0x0000000000caa36d
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3 inWindow:(id)arg4 isAzulBLinked:(_Bool)arg5;	// IMP=0x0000000000caa28e
+ (_Bool)_shouldForwardToImplementationClassForStyle:(long long)arg1;	// IMP=0x0000000000ca9ebb
+ (double)_regularPadBaselineOffset;	// IMP=0x0000000000c718ae
+ (double)_roundedPadBaselineOffset;	// IMP=0x0000000000c71895
+ (struct NSDirectionalEdgeInsets)_regularPadEdgeInsets;	// IMP=0x0000000000c7186f
+ (struct NSDirectionalEdgeInsets)_roundedPadEdgeInsets;	// IMP=0x0000000000c71849
- (void).cxx_destruct;	// IMP=0x0000000000cb081f
@property(nonatomic, getter=isTimeHidden) _Bool timeHidden; // @synthesize timeHidden=_timeHidden;
- (_Bool)disablesRasterization;	// IMP=0x0000000000cb07ef
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000cb0729
- (void)_dateTimePreferencesUpdated;	// IMP=0x0000000000cb06cd
- (_Bool)_rectIntersectsTimeItem:(struct CGRect)arg1;	// IMP=0x0000000000cb0668
- (void)_performBlockWhileIgnoringForegroundViewChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000cb063d
- (void)_clearOverrideHeight;	// IMP=0x0000000000cb061c
- (void)_setOverrideHeight:(double)arg1;	// IMP=0x0000000000cb05a3
- (id)_currentComposedDataForStyle:(id)arg1;	// IMP=0x0000000000cb00b3
- (id)_currentComposedData;	// IMP=0x0000000000cb0096
- (_Bool)_isTransparent;	// IMP=0x0000000000cb0047
- (id)_backgroundView;	// IMP=0x0000000000cb0032
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;	// IMP=0x0000000000caffac
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_e9def42b *)arg2 withActions:(int)arg3;	// IMP=0x0000000000cafebb
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;	// IMP=0x0000000000cafe50
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(_Bool)arg2 forStyle:(long long)arg3;	// IMP=0x0000000000cafdfa
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(unsigned long long)arg2;	// IMP=0x0000000000cafd5a
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_e9def42b *)arg2 withActions:(int)arg3;	// IMP=0x0000000000cafa67
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;	// IMP=0x0000000000caf9a4
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;	// IMP=0x0000000000caf8e1
- (void)_endDisablingRasterizationForReason:(id)arg1;	// IMP=0x0000000000caf871
- (void)_beginDisablingRasterizationForReason:(id)arg1;	// IMP=0x0000000000caf801
- (void)_updateShouldRasterize;	// IMP=0x0000000000caf732
- (void)_setDisablesRasterization:(_Bool)arg1;	// IMP=0x0000000000caf716
- (_Bool)_shouldReverseLayoutDirection;	// IMP=0x0000000000caf705
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000caf66a
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000caf5b8
- (id)enabledPartIdentifiers;	// IMP=0x0000000000caf567
- (void)setEnabledPartIdentifiers:(id)arg1;	// IMP=0x0000000000caf4b8
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000caf353
- (id)actionForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000caf336
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000caf29f
- (id)_currentStyleAttributes;	// IMP=0x0000000000caf1f8
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000caf0b4
- (id)styleRequest;	// IMP=0x0000000000caf083
- (id)currentStyleRequestForStyle:(long long)arg1;	// IMP=0x0000000000caefcd
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000caeef2
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000caee21
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000caed07
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;	// IMP=0x0000000000caec7f
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;	// IMP=0x0000000000caec21
- (void)setRegistered:(_Bool)arg1;	// IMP=0x0000000000caebb2
- (void)_itemViewPerformButtonAction:(id)arg1;	// IMP=0x0000000000cae9a2
- (void)jiggleLockIcon;	// IMP=0x0000000000cae959
- (void)animateUnlock;	// IMP=0x0000000000cae910
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000cae5a0
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000cae181
- (_Bool)_shouldSeekHigherPriorityTouchTarget;	// IMP=0x0000000000cae119
- (_Bool)_touchShouldProduceReturnEvent;	// IMP=0x0000000000cae086
- (id)_styleAttributesForRequest:(id)arg1;	// IMP=0x0000000000cae035
- (void)setSuppressesHiddenSideEffects:(_Bool)arg1;	// IMP=0x0000000000cad7f5
- (void)_statusBarDidAnimateRotation;	// IMP=0x0000000000cad7dc
- (void)_statusBarWillAnimateRotation;	// IMP=0x0000000000cad7c3
- (void)setOrientation:(long long)arg1;	// IMP=0x0000000000cad6e8
- (void)layoutSubviews;	// IMP=0x0000000000cad681
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;	// IMP=0x0000000000cad54f
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000cad4ef
- (void)_swapToNewForegroundView;	// IMP=0x0000000000cad485
- (void)_swapToNewBackgroundView;	// IMP=0x0000000000cad41b
- (void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1;	// IMP=0x0000000000cad3a8
- (void)_crossfadeToNewBackgroundView;	// IMP=0x0000000000cad2b8
- (void)_setStyle:(id)arg1;	// IMP=0x0000000000cad1b6
- (void)_setFrameForStyle:(id)arg1;	// IMP=0x0000000000cad0fd
- (void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3;	// IMP=0x0000000000cacffc
- (void)_setStyle:(id)arg1 animation:(int)arg2;	// IMP=0x0000000000cacef0
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(_Bool)arg3;	// IMP=0x0000000000cac6c2
- (void)_updateBackgroundFrame;	// IMP=0x0000000000cac62e
- (struct CGRect)_backgroundFrameForAttributes:(id)arg1;	// IMP=0x0000000000cac594
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;	// IMP=0x0000000000cac553
- (void)_setVisualAltitude:(double)arg1;	// IMP=0x0000000000cac512
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(_Bool)arg1;	// IMP=0x0000000000cac134
- (struct CGAffineTransform)_slideTransform;	// IMP=0x0000000000cac0b3
- (void)_adjustDoubleHeightTextVisibility;	// IMP=0x0000000000cabe49
- (void)_setDoubleHeightStatusString:(id)arg1;	// IMP=0x0000000000caba62
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;	// IMP=0x0000000000cab9c9
- (_Bool)_shouldUseInProcessProviderDoubleHeightStatusString;	// IMP=0x0000000000cab94e
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(_Bool)arg3;	// IMP=0x0000000000cab2a3
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000cab28e
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(_Bool)arg4;	// IMP=0x0000000000cab06c
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;	// IMP=0x0000000000caaf9b
- (_Bool)isTranslucent;	// IMP=0x0000000000caaf27
- (_Bool)isDoubleHeight;	// IMP=0x0000000000caaeb3
- (long long)currentStyle;	// IMP=0x0000000000caae88
- (double)heightForOrientation:(long long)arg1;	// IMP=0x0000000000caad64
- (struct CGRect)frameForOrientation:(long long)arg1;	// IMP=0x0000000000caacf0
- (double)defaultDoubleHeight;	// IMP=0x0000000000caace7
- (double)defaultHeight;	// IMP=0x0000000000caacde
- (void)setShowsOnlyCenterItems:(_Bool)arg1;	// IMP=0x0000000000caac7b
- (void)forgetEitherSideHistory;	// IMP=0x0000000000caac5e
- (void)_noteStyleOverridesChangedLocally;	// IMP=0x0000000000caac4d
- (void)forceUpdateDoubleHeightStatus;	// IMP=0x0000000000caabdf
- (void)forceUpdateToData:(const CDStruct_e9def42b *)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000caab42
- (void)forceUpdateData:(_Bool)arg1;	// IMP=0x0000000000caaaca
- (void)forceUpdate:(_Bool)arg1;	// IMP=0x0000000000caaab8
- (id)statusBarWindow;	// IMP=0x0000000000caaab0
- (void)dealloc;	// IMP=0x0000000000caa185
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;	// IMP=0x0000000000ca9f1d

@end
