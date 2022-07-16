//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICoordinateSpace-Protocol.h>
#import <UIKitCore/UIFocusItemContainer-Protocol.h>
#import <UIKitCore/UITraitEnvironment-Protocol.h>
#import <UIKitCore/_UIFallbackEnvironment-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentInternal-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>
#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>
#import <UIKitCore/_UITraitEnvironmentInternal-Protocol.h>

@class BKSHIDEventDisplay, FBSDisplayConfiguration, NSArray, NSDictionary, NSString, UIFocusSystem, UISDisplayContext, UIScreenMode, UISoftwareDimmingWindow, UITraitCollection, UIView, UIWindow, _UIScreenBoundingPathUtilities, _UIScreenFixedCoordinateSpace;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItem, UIFocusItemContainer, _UIDisplayInfoProviding, _UIFocusRegionContainer;

@interface UIScreen : NSObject <_UIFallbackEnvironment, UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment>
{
    struct CGRect _unjailedReferenceBounds;	// 8 = 0x8
    struct CGRect _referenceBounds;	// 40 = 0x28
    long long _interfaceOrientation;	// 72 = 0x48
    double _scale;	// 80 = 0x50
    long long _gamut;	// 88 = 0x58
    long long _userInterfaceIdiom;	// 96 = 0x60
    UISDisplayContext *_initialDisplayContext;	// 104 = 0x68
    NSDictionary *_capabilities;	// 112 = 0x70
    NSArray *_availableDisplayModes;	// 120 = 0x78
    double _pointsPerInch;	// 128 = 0x80
    double _nativePointsPerMillimeter;	// 136 = 0x88
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;	// 144 = 0x90
    id <_UIDisplayInfoProviding> _displayInfoProvider;	// 152 = 0x98
    FBSDisplayConfiguration *__displayConfiguration;	// 160 = 0xa0
    BKSHIDEventDisplay *__eventDisplay;	// 168 = 0xa8
    struct {
        unsigned int bitsPerComponent:4;
        unsigned int initialized:1;
        unsigned int connected:1;
        unsigned int hasSetOverscanCompensation:1;
        unsigned int overscanCompensation:2;
        unsigned int wantsWideContentMargins:1;
        unsigned int queriedDeviceContentMargins:1;
        unsigned int hasCalculatedPointsPerInch:1;
        unsigned int rightHandDrive:1;
        unsigned int carPlayNightModeEnabled:1;
    } _screenFlags;	// 176 = 0xb0
    struct {
        unsigned int isKnown:1;
        unsigned int isSupported:1;
        unsigned int isInRange:1;
    } _carPlayHumanPresenceStatus;	// 180 = 0xb4
    _Bool _performingSystemSnapshot;	// 184 = 0xb8
    _Bool _wantsSoftwareDimming;	// 185 = 0xb9
    _Bool _captured;	// 186 = 0xba
    _Bool __UIIBAlwaysProvidePeripheryInsets;	// 187 = 0xbb
    _Bool _mainScreen;	// 188 = 0xbc
    float _lastNotifiedBacklightLevel;	// 192 = 0xc0
    UITraitCollection *_defaultTraitCollection;	// 200 = 0xc8
    UITraitCollection *_overrideTraitCollection;	// 208 = 0xd0
    UITraitCollection *_lastNotifiedTraitCollection;	// 216 = 0xd8
    UISoftwareDimmingWindow *_softwareDimmingWindow;	// 224 = 0xe0
    _UIScreenBoundingPathUtilities *_boundingPathUtilities;	// 232 = 0xe8
    UIWindow<UIFocusEnvironment> *__focusedWindow;	// 240 = 0xf0
}

+ (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;	// IMP=0x000000000077f686
+ (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;	// IMP=0x000000000077f593
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;	// IMP=0x000000000077f4ce
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;	// IMP=0x000000000077f409
+ (id)__displayConfigurationsIncludingMain:(_Bool)arg1;	// IMP=0x000000000077e0aa
+ (id)_mainScreenThreadSafeTraitCollection;	// IMP=0x000000000077d21f
+ (_Bool)_shouldDisableJail;	// IMP=0x000000000077a0a9
+ (_Bool)_isProbablyBeingRecorded;	// IMP=0x0000000000779e07
+ (void)_FBSDisplayIdentityDisconnected:(id)arg1;	// IMP=0x00000000007788ba
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;	// IMP=0x000000000077886b
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;	// IMP=0x000000000077882b
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(_Bool)arg2;	// IMP=0x0000000000778816
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(_Bool)arg2 forceMain:(_Bool)arg3;	// IMP=0x00000000007787fc
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(_Bool)arg3 forceMain:(_Bool)arg4;	// IMP=0x0000000000778691
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(_Bool)arg3;	// IMP=0x0000000000778610
+ (id)_screenForScene:(id)arg1;	// IMP=0x000000000077858d
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;	// IMP=0x0000000000778575
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;	// IMP=0x0000000000778561
+ (void)_prepareScreensForAppResume;	// IMP=0x0000000000778434
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;	// IMP=0x0000000000778288
+ (id)_screenWithEventDisplay:(id)arg1;	// IMP=0x0000000000778082
+ (id)_screenWithDisplayName:(id)arg1;	// IMP=0x0000000000777e80
+ (id)_screenWithFBSDisplayIdentity:(id)arg1;	// IMP=0x0000000000777cba
+ (id)_carScreen;	// IMP=0x0000000000777b26
+ (id)screens;	// IMP=0x0000000000777a85
+ (void)_enumerateScreensWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000777943
+ (struct CGAffineTransform)transformToRotateScreen:(double)arg1;	// IMP=0x0000000000777824
+ (struct CGAffineTransform)transformForScreenOriginRotation:(double)arg1;	// IMP=0x000000000077772c
+ (id)mainScreen;	// IMP=0x00000000007774e9
+ (void)initialize;	// IMP=0x000000000077709f
- (void).cxx_destruct;	// IMP=0x0000000000780589
@property(nonatomic, setter=_setFocusedWindow:) UIWindow<UIFocusEnvironment> *_focusedWindow; // @synthesize _focusedWindow=__focusedWindow;
@property(nonatomic, getter=_isMainScreen, setter=_setMainScreen:) _Bool mainScreen; // @synthesize mainScreen=_mainScreen;
@property(retain, nonatomic, getter=_boundingPathUtilities, setter=_setBoundingPathUtilities:) _UIScreenBoundingPathUtilities *boundingPathUtilities; // @synthesize boundingPathUtilities=_boundingPathUtilities;
@property(nonatomic, setter=_setUIIBAlwaysProvidePeripheryInsets:) _Bool _UIIBAlwaysProvidePeripheryInsets; // @synthesize _UIIBAlwaysProvidePeripheryInsets=__UIIBAlwaysProvidePeripheryInsets;
@property(nonatomic, getter=isCaptured, setter=_setCaptured:) _Bool captured; // @synthesize captured=_captured;
@property(nonatomic, setter=_setLastNotifiedBacklightLevel:) float _lastNotifiedBacklightLevel; // @synthesize _lastNotifiedBacklightLevel;
@property(retain, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow; // @synthesize _softwareDimmingWindow;
@property(nonatomic) _Bool wantsSoftwareDimming; // @synthesize wantsSoftwareDimming=_wantsSoftwareDimming;
@property(nonatomic, getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:) _Bool _performingSystemSnapshot; // @synthesize _performingSystemSnapshot;
@property(readonly, nonatomic) struct CGRect _referenceBounds; // @synthesize _referenceBounds;
@property(retain, nonatomic, getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:) UITraitCollection *lastNotifiedTraitCollection; // @synthesize lastNotifiedTraitCollection=_lastNotifiedTraitCollection;
@property(retain, nonatomic, getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property(retain, nonatomic, getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:) UITraitCollection *defaultTraitCollection; // @synthesize defaultTraitCollection=_defaultTraitCollection;
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x00000000007803c7
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000007803bf
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000000780354
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x000000000078034b
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000780345
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000078033d
- (void)_setNeedsNonDeferredFocusUpdate;	// IMP=0x000000000078028b
- (void)updateFocusIfNeeded;	// IMP=0x000000000078024e
- (void)setNeedsFocusUpdate;	// IMP=0x00000000007801d4
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic, getter=_focusMapContainer) __weak id <_UIFocusRegionContainer> focusMapContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly, nonatomic) UIWindow *_preferredFocusedWindow;
- (_Bool)_supportsDeferredFocus;	// IMP=0x000000000077ff94
@property(readonly, nonatomic) _Bool supportsFocus;
@property(readonly, nonatomic) __weak UIView *focusedView;
@property(readonly, nonatomic) __weak id <UIFocusItem> focusedItem;
- (void)setFocusEnabled:(_Bool)arg1;	// IMP=0x000000000077fd93
- (_Bool)_isFocusSystemLoaded;	// IMP=0x000000000077fd2f
@property(readonly, nonatomic, getter=_focusSystem) UIFocusSystem *focusSystem;
- (id)_focusSystemManager;	// IMP=0x000000000077fc65
- (id)_focusMovementPerformer;	// IMP=0x000000000077fbeb
- (id)_focusScrollManager;	// IMP=0x000000000077fb71
- (id)_preferredFocusedWindowScene;	// IMP=0x000000000077fb21
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1;	// IMP=0x000000000077fb0f
- (void)_accessibilityTraitFlagsChanged:(id)arg1;	// IMP=0x000000000077fafd
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1;	// IMP=0x000000000077faeb
- (void)_accessibilityBoldTextChanged:(id)arg1;	// IMP=0x000000000077fad9
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;	// IMP=0x000000000077fac7
@property(readonly, nonatomic) double nativeScale;
- (double)_nativeScale;	// IMP=0x000000000077fa6c
- (double)_nativeScaleWithLevel:(unsigned long long)arg1;	// IMP=0x000000000077f9d6
@property(readonly, nonatomic) struct CGRect nativeBounds;
- (struct CGRect)_nativeDisplayBounds;	// IMP=0x000000000077f874
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect)arg2;	// IMP=0x000000000077f779
@property(readonly, copy) NSString *description;
@property(nonatomic) double brightness;
- (_Bool)_supportsBrightness;	// IMP=0x000000000077ed1d
- (void)_endObservingBacklightLevelNotifications;	// IMP=0x000000000077ecaa
- (void)_beginObservingBacklightLevelNotifications;	// IMP=0x000000000077ec21
- (void)_postBrightnessDidChangeNotificationIfAppropriate;	// IMP=0x000000000077ea74
- (float)rawBrightnessForBacklightLevel:(float)arg1;	// IMP=0x000000000077ea1a
- (id)_lazySoftwareDimmingWindow;	// IMP=0x000000000077e92c
- (struct CGPoint)_mainSceneOrigin;	// IMP=0x000000000077e7e8
- (struct CGRect)_mainSceneFrame;	// IMP=0x000000000077e681
- (id)_display;	// IMP=0x000000000077e620
- (_Bool)_isRightHandDrive;	// IMP=0x000000000077e5ee
- (_Bool)_isCarPlayNightModeEnabled;	// IMP=0x000000000077e5bc
- (_Bool)_areListsLimited;	// IMP=0x000000000077e5b4
- (_Bool)_areMusicListsLimited;	// IMP=0x000000000077e5ac
- (_Bool)_isSoftKeyboardLimited;	// IMP=0x000000000077e5a4
- (long long)_workspaceCapableScreenType;	// IMP=0x000000000077e533
- (_Bool)_isWorkspaceCapable;	// IMP=0x000000000077e4c9
- (id)_eventDisplay;	// IMP=0x000000000077e426
- (id)_displayID;	// IMP=0x000000000077e325
- (id)fbsDisplay;	// IMP=0x000000000077e2e8
- (void)_setExternalDeviceShouldInputText:(_Bool)arg1;	// IMP=0x000000000077e0a4
- (double)_displayCornerRadius;	// IMP=0x000000000077df94
- (double)_traitCollectionDisplayCornerRadius;	// IMP=0x000000000077df82
- (void)_setCapability:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000077de87
- (id)_capabilityForKey:(id)arg1;	// IMP=0x000000000077de04
- (id)_capabilities;	// IMP=0x000000000077dde6
- (void)_notifyTraitsChangedAndPropagateToAllWindows;	// IMP=0x000000000077da86
- (void)_willTransitionToTraitCollection:(id)arg1;	// IMP=0x000000000077d92d
- (void)_updateTraits;	// IMP=0x000000000077d6ad
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x000000000077d69b
- (long long)_effectiveUserInterfaceStyle;	// IMP=0x000000000077d67f
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x000000000077d331
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;	// IMP=0x000000000077d2c6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000077d2c0
- (id)_traitCollectionForChildEnvironment:(id)arg1;	// IMP=0x000000000077d2ae
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x000000000077d0fd
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x000000000077ccdc
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;	// IMP=0x000000000077cc79
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x000000000077cc16
@property(readonly) id <UICoordinateSpace> fixedCoordinateSpace;
@property(readonly) id <UICoordinateSpace> coordinateSpace;
- (void)_updateCapabilities;	// IMP=0x000000000077caa4
- (unsigned long long)_artworkSubtype;	// IMP=0x000000000077ca9c
- (void)_setUserInterfaceIdiom:(long long)arg1;	// IMP=0x000000000077c9e1
- (long long)_userInterfaceIdiom;	// IMP=0x000000000077c9d7
- (void)_updateUserInterfaceIdiom;	// IMP=0x000000000077c81f
- (void)_resetUserInterfaceIdiom;	// IMP=0x000000000077c7f1
- (void)_setInitialDisplayContext:(id)arg1;	// IMP=0x000000000077c7e0
- (void)_disconnectScreen;	// IMP=0x000000000077c774
- (void)_connectScreen;	// IMP=0x000000000077c733
- (_Bool)_isValidInterfaceOrientation:(long long)arg1;	// IMP=0x000000000077c727
- (double)_nativePointsPerMillimeter;	// IMP=0x000000000077c702
- (double)_pointsPerInch;	// IMP=0x000000000077c6dd
- (void)_ensureComputedMainScreenDPI;	// IMP=0x000000000077c5d0
- (long long)gamut;	// IMP=0x000000000077c5c6
- (double)_maximumSupportedScale;	// IMP=0x000000000077c3ec
- (void)_setScale:(double)arg1;	// IMP=0x000000000077c3e1
- (double)_scale;	// IMP=0x000000000077c3d6
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (double)_extendedDynamicRangeReferenceHeadroom;	// IMP=0x000000000077c11b
- (double)_extendedDynamicRangePotentialHeadroom;	// IMP=0x000000000077c0b9
- (double)_extendedDynamicRangeCurrentHeadroom;	// IMP=0x000000000077c057
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000077bf85
- (void)_prepareForWindow;	// IMP=0x000000000077bf6a
- (_Bool)_expectsSecureRendering;	// IMP=0x000000000077bf15
- (_Bool)_hasStatusBar;	// IMP=0x000000000077bede
- (void)_setCarPlayHumanPresenceInRange:(_Bool)arg1;	// IMP=0x000000000077bdc2
- (_Bool)_isCarPlayHumanPresenceInRange;	// IMP=0x000000000077bd9a
- (_Bool)_supportsCarPlayHumanPresence;	// IMP=0x000000000077bd73
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;	// IMP=0x000000000077bc87
- (_Bool)_isCarInstrumentsScreen;	// IMP=0x000000000077bc32
- (_Bool)_isCarScreen;	// IMP=0x000000000077bbdd
- (_Bool)_isMainScreenPointer;	// IMP=0x000000000077bb32
- (_Bool)_isExternal;	// IMP=0x000000000077bac7
- (id)_name;	// IMP=0x000000000077ba58
- (unsigned int)_seed;	// IMP=0x000000000077b9d5
- (unsigned int)_integerDisplayID;	// IMP=0x000000000077b991
@property(readonly, nonatomic) struct UIEdgeInsets overscanCompensationInsets;
@property(nonatomic) long long overscanCompensation;
@property(readonly, copy, nonatomic) NSArray *availableModes;
- (int)screenType;	// IMP=0x000000000077b626
- (void)setCurrentMode:(id)arg1;	// IMP=0x000000000077b543
@property(readonly, nonatomic) UIScreenMode *currentMode;
- (void)setBitsPerComponent:(int)arg1;	// IMP=0x000000000077b467
- (int)bitsPerComponent;	// IMP=0x000000000077b457
@property(readonly, nonatomic) UIScreenMode *preferredMode;
@property(readonly, nonatomic) UIScreen *mirroredScreen;
- (double)_latency;	// IMP=0x000000000077b2ee
@property(readonly, nonatomic) double calibratedLatency;
- (long long)_maximumFramesPerSecond;	// IMP=0x000000000077b251
@property(readonly) long long maximumFramesPerSecond;
- (double)_refreshRate;	// IMP=0x000000000077b153
- (long long)_imageOrientation;	// IMP=0x000000000077b072
- (double)_rotation;	// IMP=0x000000000077aff5
- (double)_touchRadiusScaleFactor;	// IMP=0x000000000077af66
- (struct CGRect)_applicationFrame;	// IMP=0x000000000077af2c
@property(readonly, nonatomic) struct CGRect applicationFrame;
- (struct CGRect)_interfaceOrientedMainSceneBounds;	// IMP=0x000000000077aed3
- (struct UIEdgeInsets)_peripheryInsets;	// IMP=0x000000000077ae2e
- (struct UIEdgeInsets)_displayPeripheryInsets;	// IMP=0x000000000077add0
- (id)_exclusionArea;	// IMP=0x000000000077ad80
- (id)_displayInfoProvider;	// IMP=0x000000000077ab31
- (struct CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1;	// IMP=0x000000000077aa37
- (struct CGRect)_boundsForInterfaceOrientation:(long long)arg1;	// IMP=0x000000000077a9b8
- (struct CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;	// IMP=0x000000000077a939
- (struct CGRect)_unjailedReferenceBoundsInPixels;	// IMP=0x000000000077a910
- (struct CGRect)_unjailedReferenceBounds;	// IMP=0x000000000077a8f8
@property(readonly, nonatomic) struct CGRect bounds;
- (void)_computeMetrics;	// IMP=0x000000000077a88b
- (void)_computeMetrics:(_Bool)arg1;	// IMP=0x000000000077a67a
- (struct CGRect)_overrideReferenceBounds;	// IMP=0x000000000077a660
- (_Bool)_isRotatable;	// IMP=0x000000000077a64e
- (struct CGRect)_mainSceneReferenceBounds;	// IMP=0x000000000077a568
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1;	// IMP=0x000000000077a546
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;	// IMP=0x000000000077a524
- (struct CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(_Bool)arg3;	// IMP=0x000000000077a32b
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(_Bool)arg3;	// IMP=0x000000000077a290
- (void)_setInterfaceOrientation:(long long)arg1;	// IMP=0x000000000077a179
- (long long)_interfaceOrientation;	// IMP=0x000000000077a16f
- (_Bool)_isOverscanned;	// IMP=0x0000000000779db2
- (_Bool)_hasWindows;	// IMP=0x0000000000779c3a
- (void)_updateDisplayConfiguration:(id)arg1;	// IMP=0x000000000077960d
- (id)displayIdentity;	// IMP=0x00000000007795ac
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
- (void)_updateAvailableDisplayModes;	// IMP=0x000000000077900c
- (void)_capturedStateUpdated:(_Bool)arg1;	// IMP=0x0000000000778f81
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000778ed7
- (void)dealloc;	// IMP=0x0000000000778e8d
- (void)_invalidate;	// IMP=0x0000000000778e02
- (id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(_Bool)arg2;	// IMP=0x0000000000778a4a
- (id)initWithDisplayConfiguration:(id)arg1;	// IMP=0x00000000007789ee
- (_Bool)_wantsWideContentMargins;	// IMP=0x00000000007806a4
- (id)snapshot;	// IMP=0x0000000000780692
- (id)snapshotView;	// IMP=0x0000000000780666
- (id)snapshotViewAfterScreenUpdates:(_Bool)arg1;	// IMP=0x000000000078063a
- (id)_fallbackTraitCollection;	// IMP=0x000000000078c5c6

// Remaining properties
@property(nonatomic) _Bool areChildrenFocused;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly) Class superclass;

@end
