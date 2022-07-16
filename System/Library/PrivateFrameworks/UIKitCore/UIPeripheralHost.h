//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIScrollViewIntersectionDelegate-Protocol.h>

@class CADisplayLink, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIInputViewPostPinningReloadState, UIInputViewSet, UIKBRenderConfig, UIKeyboardAutomatic, UIKeyboardRotationState, UIPanGestureRecognizer, UIPeripheralHostState, UIPeripheralHostView, UIResponder, UITextInputMode, UIView;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIGestureRecognizerDelegate>
{
    UIPeripheralHostView *_hostView;	// 8 = 0x8
    UIKeyboardAutomatic *_automaticKeyboard;	// 16 = 0x10
    _Bool _automaticAppearanceEnabled;	// 24 = 0x18
    _Bool _automaticAppearanceEnabledInternal;	// 25 = 0x19
    _Bool _automaticKeyboardAnimatingIn;	// 26 = 0x1a
    _Bool _automaticKeyboardAnimatingOut;	// 27 = 0x1b
    int _ignoringReloadInputViews;	// 28 = 0x1c
    int _ignoredReloads;	// 32 = 0x20
    _Bool _suppresingNotifications;	// 36 = 0x24
    _Bool _useHideNotificationsWhenNotVisible;	// 37 = 0x25
    _Bool _reloadInputViewsForcedIsAllowed;	// 38 = 0x26
    int _nextAutomaticOrderInDirection;	// 40 = 0x28
    long long _targetRotatedOrientation;	// 48 = 0x30
    _Bool _isTranslating;	// 56 = 0x38
    _Bool _isSplitting;	// 57 = 0x39
    _Bool _isUndocked;	// 58 = 0x3a
    _Bool _splitLockState;	// 59 = 0x3b
    UIPanGestureRecognizer *_translateRecognizer;	// 64 = 0x40
    CADisplayLink *_displayLink;	// 72 = 0x48
    double _lastBounceTime;	// 80 = 0x50
    double _lastTranslationNotificationTime;	// 88 = 0x58
    struct CGAffineTransform _targetTransform;	// 96 = 0x60
    struct CGAffineTransform _initialTransform;	// 144 = 0x90
    struct CGPoint _velocity;	// 192 = 0xc0
    NSDate *__transitionStartTime;	// 208 = 0xd0
    int _shadowStyle;	// 216 = 0xd8
    _Bool _wasBackgroundSplit;	// 220 = 0xdc
    struct CGRect _previousShadowFrameLeft;	// 224 = 0xe0
    struct CGRect _previousShadowFrameRight;	// 256 = 0x100
    CDUnknownBlockType _bounceCompletionBlock;	// 288 = 0x120
    double m_keyboardAttachedViewHeight;	// 296 = 0x128
    struct CGRect _lastKnownIVFrame;	// 304 = 0x130
    struct CGRect _lastKnownIAVFrame;	// 336 = 0x150
    NSMutableArray *_animationStyleStack;	// 368 = 0x170
    _Bool _hasCustomAnimationProperties;	// 376 = 0x178
    double _nextAutomaticOrderInDuration;	// 384 = 0x180
    double _lastAutomaticKeyboardDuration;	// 392 = 0x188
    long long _disableAnimationsCount;	// 400 = 0x190
    NSMutableArray *_targetStateStack;	// 408 = 0x198
    UIInputViewSet *_inputViewSet;	// 416 = 0x1a0
    UIResponder *_responder;	// 424 = 0x1a8
    NSMutableSet *_pinningResponders;	// 432 = 0x1b0
    _Bool _ignoresPinning;	// 440 = 0x1b8
    UIInputViewPostPinningReloadState *_postPinningReloadState;	// 448 = 0x1c0
    _Bool _animationFencingEnabled;	// 456 = 0x1c8
    _Bool _interfaceAutorotationDisabled;	// 457 = 0x1c9
    UIResponder *_selfHostingTrigger;	// 464 = 0x1d0
    NSMutableDictionary *_preservedViewSets;	// 472 = 0x1d8
    NSMutableDictionary *_persistentInputAccessoryResponders;	// 480 = 0x1e0
    NSMutableArray *_persistentInputAccessoryResponderOrder;	// 488 = 0x1e8
    _Bool _didFadeInputViews;	// 496 = 0x1f0
    _Bool _blockedReloadInputViewsForDictation;	// 497 = 0x1f1
    _Bool _allowNilResponderReload;	// 498 = 0x1f2
    _Bool _animateCornerRefresh;	// 499 = 0x1f3
    _Bool _showCorners;	// 500 = 0x1f4
    NSMutableArray *_extraViews;	// 504 = 0x1f8
    double _ambiguousControlCenterActivationMargin;	// 512 = 0x200
    UIResponder *_responderWithoutAutomaticAppearanceEnabled;	// 520 = 0x208
    int _hostedAnimationToggleCount;	// 528 = 0x210
    NSMutableDictionary *_deferredTransitionTasks;	// 536 = 0x218
    double _lastKeyplaneResize;	// 544 = 0x220
    _Bool _preservingInputViews;	// 552 = 0x228
    int _currentState;	// 556 = 0x22c
    UIKeyboardRotationState *_rotationState;	// 560 = 0x230
    UIInputViewSet *_transientInputViewSet;	// 568 = 0x238
    UITextInputMode *_documentInputMode;	// 576 = 0x240
    UIKBRenderConfig *_restorableRenderConfig;	// 584 = 0x248
}

+ (void)setKeyboardOnScreenNotifyKey:(_Bool)arg1;	// IMP=0x00000000009b1c5c
+ (void)_releaseSharedInstance;	// IMP=0x00000000009b1bd9
+ (id)activeInstance;	// IMP=0x00000000009b1bcc
+ (id)sharedInstance;	// IMP=0x00000000009b1ba7
+ (struct CGRect)screenBoundsInAppOrientation;	// IMP=0x00000000009b1194
+ (id)endPlacementForInputViewSet:(id)arg1 windowScene:(id)arg2;	// IMP=0x00000000009ba690
+ (id)passthroughViews;	// IMP=0x00000000009ba482
+ (double)gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double *)arg4;	// IMP=0x00000000009ba433
+ (void)setFloating:(_Bool)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009b7bc8
+ (struct CGPoint)defaultUndockedOffset;	// IMP=0x00000000009b7b90
+ (void)adjustFloatingPersistentOffsetForKeyboardSize:(struct CGSize)arg1;	// IMP=0x00000000009b79c1
+ (struct UIEdgeInsets)floatingChromeBuffer;	// IMP=0x00000000009b78a4
+ (_Bool)pointIsWithinKeyboardContent:(struct CGPoint)arg1;	// IMP=0x00000000009b72c6
+ (id)allVisiblePeripheralFrames;	// IMP=0x00000000009b6f07
+ (struct CGRect)visiblePeripheralFrame;	// IMP=0x00000000009b6e76
+ (struct CGRect)visibleInputViewFrame;	// IMP=0x00000000009b6de5
+ (_Bool)inputViewSetContainsView:(id)arg1;	// IMP=0x00000000009b6da2
+ (Class)hostViewClass;	// IMP=0x00000000009b696d
@property(nonatomic) _Bool preservingInputViews; // @synthesize preservingInputViews=_preservingInputViews;
@property(retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // @synthesize restorableRenderConfig=_restorableRenderConfig;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) UITextInputMode *documentInputMode; // @synthesize documentInputMode=_documentInputMode;
@property(retain, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState; // @synthesize postPinningReloadState=_postPinningReloadState;
@property(retain, nonatomic) UIResponder *selfHostingTrigger; // @synthesize selfHostingTrigger=_selfHostingTrigger;
@property(retain, nonatomic) UIInputViewSet *_transientInputViews; // @synthesize _transientInputViews=_transientInputViewSet;
@property(retain, nonatomic) UIInputViewSet *_inputViews; // @synthesize _inputViews=_inputViewSet;
@property(nonatomic) double lastKeyplaneResize; // @synthesize lastKeyplaneResize=_lastKeyplaneResize;
@property(nonatomic) _Bool animationFencingEnabled; // @synthesize animationFencingEnabled=_animationFencingEnabled;
@property(retain, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) UIKeyboardRotationState *rotationState; // @synthesize rotationState=_rotationState;
@property(nonatomic) _Bool automaticAppearanceEnabled; // @synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled;
- (void)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;	// IMP=0x00000000009b3eea
- (id)nextAnimationStyle:(_Bool)arg1;	// IMP=0x00000000009b3e55
- (id)nextAnimationStyle;	// IMP=0x00000000009b3e3e
- (void)orderOutWithAnimation:(_Bool)arg1 toDirection:(int)arg2 duration:(double)arg3;	// IMP=0x00000000009b3de6
- (void)orderOutWithAnimationStyle:(id)arg1;	// IMP=0x00000000009b3d87
- (void)orderOutAutomaticExceptAccessoryView;	// IMP=0x00000000009b3c5c
- (void)orderInWithAnimationStyle:(id)arg1;	// IMP=0x00000000009b3ac8
- (void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;	// IMP=0x00000000009b3a33
- (void)orderOutAutomaticSkippingAnimation;	// IMP=0x00000000009b39a7
- (void)orderOutAutomatic;	// IMP=0x00000000009b392f
- (void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;	// IMP=0x00000000009b389a
- (void)orderInAutomaticSkippingAnimation;	// IMP=0x00000000009b380e
- (void)orderInAutomatic;	// IMP=0x00000000009b3796
- (void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2;	// IMP=0x00000000009b374e
- (void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2;	// IMP=0x00000000009b3706
- (void)forceOrderOutAutomaticAnimated:(_Bool)arg1;	// IMP=0x00000000009b36d0
- (void)forceOrderInAutomaticAnimated:(_Bool)arg1;	// IMP=0x00000000009b369a
- (void)forceOrderOutAutomatic;	// IMP=0x00000000009b3663
- (void)forceOrderInAutomatic;	// IMP=0x00000000009b362c
- (void)layoutIfNeeded;	// IMP=0x00000000009b35f5
- (void)layoutInputViews;	// IMP=0x00000000009b2fa3
@property(readonly, nonatomic) UIKeyboardAutomatic *automaticKeyboard;
- (void)createAutomaticKeyboardIfNeeded;	// IMP=0x00000000009b2ec8
@property(readonly, nonatomic) _Bool animationsEnabled;
- (id)_sceneForFirstResponder:(id)arg1;	// IMP=0x00000000009b2df3
- (void)finishRotationOfKeyboard:(id)arg1;	// IMP=0x00000000009b2d03
- (void)rotateKeyboard:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x00000000009b2c01
- (void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x00000000009b2a2f
- (void)finishRotation;	// IMP=0x00000000009b29f1
- (void)rotateToOrientation:(long long)arg1;	// IMP=0x00000000009b29a4
- (void)prepareForRotationToOrientation:(long long)arg1;	// IMP=0x00000000009b2957
- (void)updateBackdrop;	// IMP=0x00000000009b2951
- (void)disableInterfaceAutorotation:(_Bool)arg1;	// IMP=0x00000000009b28e0
- (void)showInputViewsIfNeeded;	// IMP=0x00000000009b288d
- (void)fadeInputViewsIfNeeded;	// IMP=0x00000000009b2822
- (void)fadeInInputViews:(_Bool)arg1;	// IMP=0x00000000009b261a
- (_Bool)isUndocked;	// IMP=0x00000000009b25ad
- (void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2;	// IMP=0x00000000009b2489
- (id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2;	// IMP=0x00000000009b2480
- (void)postDidHideNotification;	// IMP=0x00000000009b23a2
- (void)postDidShowNotification;	// IMP=0x00000000009b229f
@property(retain, nonatomic) UIPeripheralHostState *targetState;
- (void)manualKeyboardWasOrderedOut:(id)arg1;	// IMP=0x00000000009b2184
- (void)manualKeyboardWillBeOrderedOut:(id)arg1;	// IMP=0x00000000009b2109
- (void)manualKeyboardWasOrderedIn:(id)arg1;	// IMP=0x00000000009b208e
- (void)manualKeyboardWillBeOrderedIn:(id)arg1;	// IMP=0x00000000009b2013
- (_Bool)isOffScreen;	// IMP=0x00000000009b1ffa
- (_Bool)isOnScreen;	// IMP=0x00000000009b1fe1
- (void)setKeyboardFencingEnabled:(_Bool)arg1;	// IMP=0x00000000009b1fab
- (void)_onScreenStateDidChange;	// IMP=0x00000000009b1f53
- (void)setKeyboardOnScreenNotifyKey:(_Bool)arg1;	// IMP=0x00000000009b1dbb
- (id)retain;	// IMP=0x00000000009b1c2d
- (void)updateRenderConfigForResponder:(id)arg1;	// IMP=0x00000000009b19fa
- (void)updateRenderConfigForCurrentResponder;	// IMP=0x00000000009b19c9
- (void)inputModeChangedForRenderConfig:(id)arg1;	// IMP=0x00000000009b1917
- (id)_renderConfigForResponder:(id)arg1;	// IMP=0x00000000009b1869
- (id)_renderConfigForCurrentResponder;	// IMP=0x00000000009b1838
- (struct CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(long long)arg2;	// IMP=0x00000000009b17d2
- (void)textEffectsWindowDidRotate:(id)arg1;	// IMP=0x00000000009b16d4
- (void)peripheralHostWillResume:(id)arg1;	// IMP=0x00000000009b154f
- (_Bool)hasDictationKeyboard;	// IMP=0x00000000009b1503
- (void)dealloc;	// IMP=0x00000000009b13d6
- (id)init;	// IMP=0x00000000009b121f
@property(readonly, nonatomic) _Bool automaticAppearanceReallyEnabled;
- (void)setInputViewsHidden:(_Bool)arg1;	// IMP=0x00000000009b5006
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(_Bool)arg2;	// IMP=0x00000000009b4fc6
- (struct CGRect)transitioningFrame;	// IMP=0x00000000009b4f7d
- (id)contentView;	// IMP=0x00000000009b4f6b
- (id)transitioningView;	// IMP=0x00000000009b4f40
- (id)viewForTransitionScreenSnapshot;	// IMP=0x00000000009b4f2e
- (void)postDidHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;	// IMP=0x00000000009b4e54
- (void)postWillHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;	// IMP=0x00000000009b4d0f
- (id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(_Bool)arg3 forShow:(_Bool)arg4;	// IMP=0x00000000009b4649
- (struct CGRect)screenRectFromBounds:(struct CGRect)arg1 atCenter:(struct CGPoint)arg2 applyingSourceHeightDelta:(double)arg3;	// IMP=0x00000000009b452f
- (_Bool)userInfoContainsActualGeometryChange:(id)arg1;	// IMP=0x00000000009b4468
- (void)logGeometryDescriptionFromUserInfo:(id)arg1;	// IMP=0x00000000009b4462
- (struct CGSize)totalPeripheralSizeForOrientation:(long long)arg1;	// IMP=0x00000000009b430a
- (_Bool)isHostingActiveImpl;	// IMP=0x00000000009b4275
- (_Bool)hasCustomInputView;	// IMP=0x00000000009b4217
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;	// IMP=0x00000000009ba62a
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;	// IMP=0x00000000009ba5c4
- (_Bool)_shouldDelayRotationForWindow:(id)arg1;	// IMP=0x00000000009ba575
- (_Bool)_isAccessoryViewChangedOnly;	// IMP=0x00000000009ba56d
- (_Bool)_isTransitioning;	// IMP=0x00000000009ba542
- (id)_inheritedRenderConfig;	// IMP=0x00000000009ba53a
- (void)updateInputAccessoryViewVisibility:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x00000000009ba3f2
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;	// IMP=0x00000000009ba3b0
- (_Bool)isSplitting;	// IMP=0x00000000009ba3a7
- (_Bool)isTranslating;	// IMP=0x00000000009ba37c
- (_Bool)isRotating;	// IMP=0x00000000009ba351
- (void)_endDisablingAnimations;	// IMP=0x00000000009ba318
- (void)_beginDisablingAnimations;	// IMP=0x00000000009ba2dd
- (void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1;	// IMP=0x00000000009ba1c4
- (_Bool)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2;	// IMP=0x00000000009ba181
- (_Bool)_isSelfHosting;	// IMP=0x00000000009ba179
- (void)performWithAllowingNilResponderReload:(CDUnknownBlockType)arg1;	// IMP=0x00000000009ba155
- (void)_endPersistingInputAccessoryViewWithId:(id)arg1;	// IMP=0x00000000009ba075
- (void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2;	// IMP=0x00000000009b9f49
- (void)removePreservedInputViewSetForInputView:(id)arg1;	// IMP=0x00000000009b9f11
- (void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1;	// IMP=0x00000000009b9ed9
- (void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(_Bool)arg2;	// IMP=0x00000000009b9e92
- (_Bool)_restoreInputViewsWithId:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000009b9e4b
- (void)_restoreInputAccessoryViewOverrideWithId:(id)arg1;	// IMP=0x00000000009b9e13
- (void)_preserveInputViewsWithId:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000009b9dfb
- (void)_preserveInputViewsWithId:(id)arg1;	// IMP=0x00000000009b9de4
- (void)_preserveInputViewsWithId:(id)arg1 animated:(_Bool)arg2 reset:(_Bool)arg3;	// IMP=0x00000000009b9d7e
- (void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;	// IMP=0x00000000009b9cf9
- (_Bool)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2;	// IMP=0x00000000009b9b6d
- (_Bool)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(_Bool)arg3;	// IMP=0x00000000009b9ada
@property(readonly, nonatomic) _Bool keyClicksEnabled;
- (_Bool)_isSuppressedByManualKeyboard;	// IMP=0x00000000009b9930
- (id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(_Bool)arg2;	// IMP=0x00000000009b98e8
- (id)_inputViewsForResponder:(id)arg1;	// IMP=0x00000000009b98a8
- (id)_currentInputView;	// IMP=0x00000000009b987d
@property(retain, nonatomic) UIInputViewSet *inputViews;
- (void)setInputViews:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000009b97fb
- (void)setInputViews:(id)arg1 animationStyle:(id)arg2;	// IMP=0x00000000009b92c0
- (_Bool)shouldApplySettingsForBackdropView:(id)arg1;	// IMP=0x00000000009b92ab
- (void)enableKeyboardTyping;	// IMP=0x00000000009b926f
@property(readonly, nonatomic) UIInputViewSet *loadAwareInputViews;
- (void)implBoundsHeightChangeDoneForGeometry:(struct UIPeripheralAnimationGeometry)arg1;	// IMP=0x00000000009b91e0
- (void)peripheralViewMinMaximized:(_Bool)arg1 state:(id)arg2;	// IMP=0x00000000009b9083
- (_Bool)maximizeWithAnimation:(_Bool)arg1;	// IMP=0x00000000009b904c
- (_Bool)maximize;	// IMP=0x00000000009b9035
- (_Bool)minimize;	// IMP=0x00000000009b9003
- (void)prepareToMoveKeyboardForInputViewSet:(id)arg1 animationStyle:(id)arg2;	// IMP=0x00000000009b8e4f
- (void)performMultipleOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;	// IMP=0x00000000009b8b2d
- (void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;	// IMP=0x00000000009b896b
- (void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1 duration:(double)arg2;	// IMP=0x00000000009b8725
- (_Bool)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry)arg1;	// IMP=0x00000000009b8679
- (void)resetNextAutomaticOrderInDirectionAndDuration;	// IMP=0x00000000009b865a
- (void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2;	// IMP=0x00000000009b8638
- (void)prepareForAlongsideTransitionWithContext:(id)arg1;	// IMP=0x00000000009b8574
- (void)popAnimationStyle;	// IMP=0x00000000009b8531
- (void)pushAnimationStyle:(id)arg1;	// IMP=0x00000000009b8511
- (id)topAnimationStyle;	// IMP=0x00000000009b84fa
- (void)setkeyboardAttachedViewHeight:(double)arg1;	// IMP=0x00000000009b84ec
- (double)keyboardAttachedViewHeight;	// IMP=0x00000000009b8479
- (double)getLastAutomaticDuration;	// IMP=0x00000000009b846b
- (void)resetCurrentOrderOutAnimationDuration:(double)arg1;	// IMP=0x00000000009b8465
- (double)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2;	// IMP=0x00000000009b81d1
- (struct CGPoint)offHostPointForPoint:(struct CGPoint)arg1;	// IMP=0x00000000009b7f70
- (_Bool)_isCoordinatingWithSystemGestures;	// IMP=0x00000000009b7ea9
@property(nonatomic) double ambiguousControlCenterActivationMargin;
- (struct CGRect)_inputViewRectToAvoid;	// IMP=0x00000000009b7d1e
- (unsigned long long)_clipCornersOfView:(id)arg1;	// IMP=0x00000000009b7c5c
- (void)moveToPersistentOffset;	// IMP=0x00000000009b7c56
- (void)setUndockedWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000000009b751d
- (struct CGPoint)adjustedPersistentOffset;	// IMP=0x00000000009b749d
- (double)minimumOffsetForBuffer:(double)arg1;	// IMP=0x00000000009b73bf
- (struct CGRect)visiblePeripheralFrame:(_Bool)arg1;	// IMP=0x00000000009b6a09
@property(readonly, nonatomic, getter=_isIgnoringReloadInputViews) _Bool ignoringReloadInputViews;
- (int)_endIgnoringReloadInputViews;	// IMP=0x00000000009b69ec
- (void)_beginIgnoringReloadInputViews;	// IMP=0x00000000009b69d3
@property(nonatomic) _Bool automaticAppearanceInternalEnabled;
@property(retain, nonatomic) NSDate *_transitionStartTime;
@property(readonly, nonatomic) UIView *view;
- (id)lastUsedInputModeForCurrentContext;	// IMP=0x00000000009b68dd
- (_Bool)_isTrackingResponder:(id)arg1;	// IMP=0x00000000009b6866
@property(nonatomic) _Bool ignoresPinning;
- (void)_setIgnoresPinning:(_Bool)arg1 allowImmediateReload:(_Bool)arg2;	// IMP=0x00000000009b67d0
- (_Bool)_hasPostPinningReloadState;	// IMP=0x00000000009b6795
- (_Bool)_isPinningInputViewsOnBehalfOfResponder:(id)arg1;	// IMP=0x00000000009b677c
- (void)_pinInputViewsOnBehalfOfResponder:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000009b6723
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1;	// IMP=0x00000000009b6655
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1;	// IMP=0x00000000009b663c
- (void)_clearPinningResponders;	// IMP=0x00000000009b6605
- (void)_setHosted:(_Bool)arg1;	// IMP=0x00000000009b65e7
- (void)performWithoutDeactivation:(CDUnknownBlockType)arg1;	// IMP=0x00000000009b64ff
- (int)_isKeyboardDeactivated;	// IMP=0x00000000009b64cd
- (void)setDeactivatedKeyboard:(_Bool)arg1 forScene:(id)arg2;	// IMP=0x00000000009b6175
- (void)forceReloadInputViews;	// IMP=0x00000000009b6130
- (void)_reloadInputViewsForResponder:(id)arg1;	// IMP=0x00000000009b57b8
- (void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2;	// IMP=0x00000000009b563c
- (void)_updateContainerWindowLevel;	// IMP=0x00000000009b55ef
- (void)_setReloadInputViewsForcedIsAllowed:(_Bool)arg1;	// IMP=0x00000000009b55e6
- (void)prepareForPinning;	// IMP=0x00000000009b5592
- (_Bool)pinningPreventsInputViews:(id)arg1;	// IMP=0x00000000009b5518
- (id)containerTextEffectsWindowAboveStatusBar;	// IMP=0x00000000009b54ed
- (id)containerTextEffectsWindow;	// IMP=0x00000000009b54b5
- (_Bool)hasDelayedTasksForKey:(id)arg1;	// IMP=0x00000000009b5495
- (void)flushDelayedTasksForKey:(id)arg1;	// IMP=0x00000000009b542e
- (void)flushDelayedTasks;	// IMP=0x00000000009b53f3
- (void)queueDelayedTask:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x00000000009b51b9
- (void)queueDelayedTask:(CDUnknownBlockType)arg1;	// IMP=0x00000000009b516f
- (id)transformedContainerView;	// IMP=0x00000000009b5129
- (id)existingContainerRootController;	// IMP=0x00000000009b50f7
- (id)containerRootController;	// IMP=0x00000000009b50c5
- (id)containerWindow;	// IMP=0x00000000009b5093
- (id)_screenForFirstResponder:(id)arg1;	// IMP=0x00000000009b5035

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

