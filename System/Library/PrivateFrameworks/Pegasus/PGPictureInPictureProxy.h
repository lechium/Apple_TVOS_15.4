//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureExportedInterface-Protocol.h>

@class NSArray, NSString, NSTimer, NSXPCConnection, PGHostedWindow, PGPlaybackState, PGRunLoopObserver, UIImage, UIViewController;
@protocol OS_dispatch_queue, PGPictureInPictureProxyDelegate, PGPictureInPictureViewController;

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface>
{
    struct CGSize _preferredContentSize;	// 8 = 0x8
    struct CGRect _initialLayerFrame;	// 24 = 0x18
    NSString *_sceneSessionPersistentIdentifier;	// 56 = 0x38
    NSString *_clientSessionIdentifier;	// 64 = 0x40
    NSString *_sceneSessionPersistentIdentifierAccordingToRemoteObject;	// 72 = 0x48
    NSString *_clientSessionIdentifierAccordingToRemoteObject;	// 80 = 0x50
    NSString *_screenSharingTitle;	// 88 = 0x58
    UIImage *_screenSharingAvatar;	// 96 = 0x60
    _Bool _canSendPlaybackState;	// 104 = 0x68
    _Bool _automaticallyInterruptsForLegacyFaceTimeBehaviors;	// 105 = 0x69
    _Bool _isInterruptedForStash;	// 106 = 0x6a
    _Bool _isInterruptedForDefaultReason;	// 107 = 0x6b
    _Bool _isInterruptedForAnyReason;	// 108 = 0x6c
    _Bool _isPictureInPicturePossible;	// 109 = 0x6d
    _Bool _isPictureInPictureActive;	// 110 = 0x6e
    _Bool _isPictureInPictureSuspended;	// 111 = 0x6f
    _Bool _pictureInPictureShouldStartWhenEnteringBackground;	// 112 = 0x70
    _Bool _pictureInPictureWasStartedWhenEnteringBackground;	// 113 = 0x71
    _Bool _shouldCancelActivePictureInPictureOnStart;	// 114 = 0x72
    _Bool _shouldPullCancellationPolicyOnStart;	// 115 = 0x73
    _Bool _isObservingViewController;	// 116 = 0x74
    _Bool _needsReinitialization;	// 117 = 0x75
    _Bool _shouldStopUponActivation;	// 118 = 0x76
    _Bool _shouldCancelUponActivation;	// 119 = 0x77
    id _windowSceneActivationStateObserver;	// 120 = 0x78
    double _playbackProgress;	// 128 = 0x80
    double _playbackRate;	// 136 = 0x88
    NSArray *_loadedTimeRanges;	// 144 = 0x90
    NSArray *_menuItems;	// 152 = 0x98
    PGPlaybackState *_playbackState;	// 160 = 0xa0
    PGPlaybackState *_playbackStateAccordingToRemoteObject;	// 168 = 0xa8
    PGRunLoopObserver *_runLoopObserver;	// 176 = 0xb0
    NSXPCConnection *_connection;	// 184 = 0xb8
    NSXPCConnection *_connectionIfInterrupted;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_queue;	// 200 = 0xc8
    PGHostedWindow *_hostedWindow;	// 208 = 0xd0
    UIViewController *_rootViewController;	// 216 = 0xd8
    long long _activationState;	// 224 = 0xe0
    NSTimer *_prewarmingTimeoutTimer;	// 232 = 0xe8
    _Bool _isHostedWindowSizeChangeDuringPinchGesture;	// 240 = 0xf0
    _Bool _isInViewService;	// 241 = 0xf1
    unsigned long long _resourcesUsageReductionReasons;	// 248 = 0xf8
    id <PGPictureInPictureProxyDelegate> _delegate;	// 256 = 0x100
    struct {
        unsigned int pictureInPictureProxyInterfaceOrientationForTransitionAnimation:1;
        unsigned int pictureInPictureProxyViewFrameForTransitionAnimation:1;
        unsigned int pictureInPictureProxyViewControllerWindowForTransitionAnimation:1;
        unsigned int pictureInPictureProxy_willStartPictureInPictureWithAnimationType:1;
        unsigned int pictureInPictureProxy_didStartPictureInPictureWithAnimationType:1;
        unsigned int pictureInPictureProxy_failedToStartPictureInPictureWithAnimationType_error:1;
        unsigned int pictureInPictureProxy_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:1;
        unsigned int pictureInPictureProxy_willStopPictureInPictureWithAnimationType_reason:1;
        unsigned int pictureInPictureProxy_didStopPictureInPictureWithAnimationType_reason:1;
        unsigned int pictureInPictureProxyPictureInPictureInterruptionBegan:1;
        unsigned int pictureInPictureProxyPictureInPictureInterruptionEnded:1;
        unsigned int pictureInPictureProxy_didUpdateStashedOrUnderLockState:1;
        unsigned int pictureInPictureProxy_didUpdateResourcesUsageReductionReasons_oldReasons:1;
        unsigned int pictureInPictureProxyWillSetupPictureInPictureStop:1;
    } _delegateRespondsTo;	// 264 = 0x108
    _Bool _readyForDisplay;	// 268 = 0x10c
    _Bool _pictureInPictureStashedOrUnderLock;	// 269 = 0x10d
    _Bool _stashed;	// 270 = 0x10e
    long long _controlsStyle;	// 272 = 0x110
    UIViewController<PGPictureInPictureViewController> *_viewController;	// 280 = 0x118
    CDUnknownBlockType __pipStopUserInterfaceRestoreContinuationBlock;	// 288 = 0x120
    CDUnknownBlockType __pipStopFinalStageCompletionHandler;	// 296 = 0x128
}

+ (id)pictureInPictureProxyWithControlsStyle:(long long)arg1 viewController:(id)arg2;	// IMP=0x00000000000316e5
+ (void)_updatePictureInPictureActive:(_Bool)arg1;	// IMP=0x0000000000031659
+ (_Bool)isPictureInPictureActive;	// IMP=0x0000000000031648
+ (_Bool)isPictureInPictureSupported;	// IMP=0x000000000003160c
- (void).cxx_destruct;	// IMP=0x0000000000040c6f
@property(copy, nonatomic) CDUnknownBlockType _pipStopFinalStageCompletionHandler; // @synthesize _pipStopFinalStageCompletionHandler=__pipStopFinalStageCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType _pipStopUserInterfaceRestoreContinuationBlock; // @synthesize _pipStopUserInterfaceRestoreContinuationBlock=__pipStopUserInterfaceRestoreContinuationBlock;
@property(nonatomic, getter=isPictureInPictureStashed) _Bool stashed; // @synthesize stashed=_stashed;
@property(readonly, nonatomic) unsigned long long resourcesUsageReductionReasons; // @synthesize resourcesUsageReductionReasons=_resourcesUsageReductionReasons;
@property(readonly, nonatomic, getter=isPictureInPictureStashedOrUnderLock) _Bool pictureInPictureStashedOrUnderLock; // @synthesize pictureInPictureStashedOrUnderLock=_pictureInPictureStashedOrUnderLock;
@property(readonly, nonatomic) UIViewController<PGPictureInPictureViewController> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
- (void)skipForwardButtonTappedWithTimeInterval:(double)arg1;	// IMP=0x0000000000040b8d
- (void)_notifyActionButtonTapped;	// IMP=0x0000000000040b50
- (oneway void)handleCommand:(id)arg1;	// IMP=0x000000000004006e
- (void)_setResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x000000000003fe25
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x000000000003fca3
- (oneway void)setStashedOrUnderLock:(_Bool)arg1;	// IMP=0x000000000003fad1
- (oneway void)actionButtonTapped;	// IMP=0x000000000003f96a
- (oneway void)hostedWindowSizeChangeEnded;	// IMP=0x000000000003f7fc
- (oneway void)hostedWindowSizeChangeBegan;	// IMP=0x000000000003f68a
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;	// IMP=0x000000000003f154
- (oneway void)pictureInPictureInvalidated;	// IMP=0x000000000003ef27
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;	// IMP=0x000000000003ed94
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ea44
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e7f0
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e23f
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003deec
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003db92
- (void)_updateIsInterruptedIfNeededForReason:(id)arg1 initiatedByRemoteObject:(_Bool)arg2;	// IMP=0x000000000003d92f
- (void)_updateIsInterruptedIfNeededForReason:(id)arg1;	// IMP=0x000000000003d91b
- (void)_setInterruptedForDefaultReason:(_Bool)arg1 initiatedByRemoteObject:(_Bool)arg2;	// IMP=0x000000000003d7b1
- (void)_setStashedOrUnderLock:(_Bool)arg1 reason:(id)arg2;	// IMP=0x000000000003d543
- (void)_setPictureInPicturePossible:(_Bool)arg1;	// IMP=0x000000000003d451
- (void)_setPictureInPictureSuspended:(_Bool)arg1;	// IMP=0x000000000003d34b
- (void)_setPictureInPictureActive:(_Bool)arg1;	// IMP=0x000000000003d245
- (void)_legacyPictureInPictureInterruptionEnded;	// IMP=0x000000000003d12b
- (void)_legacyPictureInPictureInterruptionBegan;	// IMP=0x000000000003d011
- (void)_deactivateIfNeededForInterruptedOrInvalidatedConnection;	// IMP=0x000000000003cf46
- (void)_applicationDidBecomeActive;	// IMP=0x000000000003cef8
- (id)_generatePlaybackStateDiffAndMarkAsSent;	// IMP=0x000000000003ce4c
- (void)_updatePlaybackStateIfNeeded;	// IMP=0x000000000003cc37
- (void)_setMaybeNeedsUpdatePlaybackState;	// IMP=0x000000000003cb5b
- (void)_invalidateConnectionForFailure;	// IMP=0x000000000003ca9a
- (void)_establishConnection;	// IMP=0x000000000003c388
- (_Bool)_isInCallService;	// IMP=0x000000000003c30c
- (_Bool)_canBeShownInMicroPIPMode;	// IMP=0x000000000003c2a3
- (void)_handleSceneConnectionChangedNotification:(id)arg1;	// IMP=0x000000000003bfea
- (void)_stopObservingWindowSceneActivationState;	// IMP=0x000000000003bf6f
- (void)_updateScreenSharingInfoIfNeeded;	// IMP=0x000000000003bf69
- (void)_updateAutoPIPSettingsAndNotifyRemoteObjectWithReason:(id)arg1;	// IMP=0x000000000003bd72
- (void)_addWindowSceneActivationStateObserverIfNeeded:(id)arg1;	// IMP=0x000000000003bbd8
- (void)_updateAutoPIPSettingsAndNotifyRemoteObjectIfNeeded;	// IMP=0x000000000003bb1b
- (id)_expectedScene;	// IMP=0x000000000003ba70
- (void)_executeDelegateCallbackBlock:(CDUnknownBlockType)arg1 assumeApplicationActive:(_Bool)arg2;	// IMP=0x000000000003ba1d
- (id)_sourceScene;	// IMP=0x000000000003b80c
- (_Bool)_isViewControllerWindowSceneActive;	// IMP=0x000000000003b798
- (_Bool)_isViewControllerWindowSceneConsideredActive;	// IMP=0x000000000003b756
- (id)_bestKnownConnectedSceneSessionPersistentIdentifier;	// IMP=0x000000000003b2c3
- (struct CGRect)_viewFrameForTransitionAnimationAssumeApplicationActive:(_Bool)arg1;	// IMP=0x000000000003b072
- (long long)_interfaceOrientationForTransitionAnimationAssumeApplicationActive:(_Bool)arg1;	// IMP=0x000000000003af30
- (void)_removeViewControllerFromHostedWindowIfNeeded;	// IMP=0x000000000003ada5
- (void)_addViewControllerToHostedWindowIfNeeded;	// IMP=0x000000000003a944
- (void)_startBackgroundPIPWhilePrewarmingIfNeeded;	// IMP=0x000000000003a88f
- (void)_cancelPrewarming;	// IMP=0x000000000003a808
- (void)_prewarmAndStartAfterTimeout;	// IMP=0x000000000003a623
- (void)_endDeactivatingPictureInPictureIfNeededWithAnimationType:(long long)arg1 stopReason:(long long)arg2 cleanupHandlerOrNil:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a265
- (void)_endDeactivatingPictureInPictureIfNeededWithAnimationType:(long long)arg1 stopReason:(long long)arg2;	// IMP=0x000000000003a250
- (void)_beginDeactivatingPictureInPictureWithAnimationType:(long long)arg1 stopReason:(long long)arg2;	// IMP=0x000000000003a089
- (void)_beginDeactivatingPictureInPicture;	// IMP=0x000000000003a070
- (void)__cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039c5a
- (void)__actuallyStopAnimated:(_Bool)arg1 reason:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 finalInterfaceOrientation:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000039467
- (void)__actuallyStopAnimated:(_Bool)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003942f
- (void)__restoreUserInterfaceAnimated:(_Bool)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039086
- (void)__waitForApplicationActivationWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038cd6
- (void)__setupStopAnimated:(_Bool)arg1 needsApplicationActivation:(_Bool)arg2 waitForApplicationActivation:(_Bool)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000387b7
- (void)__setupStopAnimated:(_Bool)arg1 needsApplicationActivation:(_Bool)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003878f
- (void)_stopPictureInPictureAnimated:(_Bool)arg1 restoreUserInterface:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000382cf
- (void)_twoStageStopForPictureInPictureRestoreWithContinueAfterUserInterfaceRestoreBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037c7c
- (void)__updateCancellationPolicyWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003784a
- (void)__didStartWithAnimationType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037682
- (void)__actuallyStartWithAnimationType:(long long)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003704f
- (void)__setupStartWithAnimationType:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000036783
- (void)__coordinateStartAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003647a
- (void)_startPictureInPictureAnimated:(_Bool)arg1 enteringBackground:(_Bool)arg2 reason:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000035e2c
- (void)_setActivationState:(long long)arg1 reason:(id)arg2;	// IMP=0x0000000000035beb
- (long long)_activationState;	// IMP=0x0000000000035b77
- (_Bool)_isInactive;	// IMP=0x0000000000035b5e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000035ac9
- (void)_updatePlaybackStateContentTypeIfNeeded;	// IMP=0x00000000000355b1
- (void)setScreenSharingTitle:(id)arg1 avatar:(id)arg2;	// IMP=0x000000000003543b
- (void)setAutomaticallyInterruptsForLegacyFaceTimeBehaviors:(_Bool)arg1;	// IMP=0x000000000003538f
- (_Bool)automaticallyInterruptsForLegacyFaceTimeBehaviors;	// IMP=0x0000000000035386
- (void)updatePlaybackStateUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035306
@property(readonly, nonatomic) PGPlaybackState *playbackState;
- (void)setControlsStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000350c4
- (void)_updateFaceTimePlaybackStateUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034f64
- (void)setMenuItems:(id)arg1;	// IMP=0x0000000000034e80
- (id)menuItems;	// IMP=0x0000000000034e63
- (void)setDisablesLayerCloning:(_Bool)arg1;	// IMP=0x0000000000034dd7
- (_Bool)disablesLayerCloning;	// IMP=0x0000000000034d93
- (void)setClientSessionIdentifier:(id)arg1;	// IMP=0x0000000000034b54
- (id)clientSessionIdentifier;	// IMP=0x0000000000034aeb
- (void)setMicrophoneMuted:(_Bool)arg1;	// IMP=0x0000000000034a81
- (_Bool)isMicrophoneMuted;	// IMP=0x0000000000034a3d
- (void)setCanSwitchCamera:(_Bool)arg1;	// IMP=0x00000000000349d3
- (_Bool)canSwitchCamera;	// IMP=0x000000000003498f
- (void)setCameraActive:(_Bool)arg1;	// IMP=0x0000000000034925
- (_Bool)isCameraActive;	// IMP=0x00000000000348e1
- (void)rotateContentContainer:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000344bf
- (void)setPlaybackProgress:(double)arg1 playbackRate:(double)arg2;	// IMP=0x000000000003441f
- (void)stopPictureInPictureAndRestoreUserInterface:(_Bool)arg1;	// IMP=0x00000000000341c3
- (void)startPictureInPicture;	// IMP=0x0000000000034095
- (void)_windowSceneForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewControllerWithReason:(id)arg1;	// IMP=0x0000000000033d47
- (void)windowSceneForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;	// IMP=0x0000000000033d2e
- (void)_viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewControllerWithReason:(id)arg1;	// IMP=0x00000000000338b5
- (void)viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;	// IMP=0x000000000003389c
- (void)preferredContentSizeDidChangeForViewController;	// IMP=0x00000000000334de
- (void)setLoadedTimeRanges:(id)arg1;	// IMP=0x0000000000033416
- (id)loadedTimeRanges;	// IMP=0x0000000000033364
- (double)playbackRate;	// IMP=0x00000000000332b4
- (double)playbackProgress;	// IMP=0x0000000000033204
@property(readonly, nonatomic) _Bool pictureInPictureWasStartedWhenEnteringBackground;
@property(nonatomic) _Bool pictureInPictureShouldStartWhenEnteringBackground;
@property(readonly, nonatomic, getter=isPictureInPictureInterrupted) _Bool pictureInPictureInterrupted;
@property(readonly, nonatomic, getter=isPictureInPictureSuspended) _Bool pictureInPictureSuspended;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property(readonly, nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property(nonatomic) __weak id <PGPictureInPictureProxyDelegate> delegate;
- (void)_resetInternalState;	// IMP=0x00000000000325d9
- (void)_initializeWithControlsStyle:(long long)arg1 viewController:(id)arg2 reason:(id)arg3;	// IMP=0x0000000000031f43
- (void)dealloc;	// IMP=0x0000000000031b43
- (id)init;	// IMP=0x0000000000031a97
- (id)initWithControlsStyle:(long long)arg1 viewController:(id)arg2;	// IMP=0x0000000000031741

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
