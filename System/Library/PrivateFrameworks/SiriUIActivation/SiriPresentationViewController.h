//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SiriUIActivation/AFUISiriLanguageDelegate-Protocol.h>
#import <SiriUIActivation/AFUISiriSetupViewControllerDelegate-Protocol.h>
#import <SiriUIActivation/AFUISiriViewControllerDataSource-Protocol.h>
#import <SiriUIActivation/AFUISiriViewControllerDelegate-Protocol.h>
#import <SiriUIActivation/SASStateChangeListener-Protocol.h>
#import <SiriUIActivation/SiriPresentation-Protocol.h>

@class AFConnection, AFQueue, AFRequestCompletionOptions, AFUISiriLanguage, AFUISiriSetupViewController, AFUISiriViewController, AFWatchdogTimer, BSServiceConnection, NSArray, NSDate, NSObject, NSString, NSTimer, UINavigationController, UIScreen;
@protocol OS_dispatch_queue, SiriPresentationControllerDelegate, SiriPresentationIntentUsageDelegate;

@interface SiriPresentationViewController : UIViewController <SASStateChangeListener, AFUISiriLanguageDelegate, AFUISiriViewControllerDelegate, AFUISiriViewControllerDataSource, AFUISiriSetupViewControllerDelegate, SiriPresentation>
{
    struct InstrumentationDismissalState _instrumentationDismissalState;	// 8 = 0x8
    long long _identifier;	// 24 = 0x18
    NSDate *_lastGuideCheck;	// 32 = 0x20
    AFRequestCompletionOptions *_completionOptions;	// 40 = 0x28
    UIScreen *_activeScreen;	// 48 = 0x30
    _Bool _activationHandled;	// 56 = 0x38
    _Bool _isIdleAndQuiet;	// 57 = 0x39
    CDUnknownBlockType _buttonTrigger;	// 64 = 0x40
    _Bool _receivedIncomingPhoneCall;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_watchdogQueue;	// 80 = 0x50
    struct os_unfair_lock_s _presentationStateProcessingLock;	// 88 = 0x58
    CDUnknownBlockType _dismissalCompletion;	// 96 = 0x60
    _Bool _springBoardIdleTimerDisabled;	// 104 = 0x68
    _Bool _waitingForTelephonyToStart;	// 105 = 0x69
    _Bool _startGuidedAccessOnDismissal;	// 106 = 0x6a
    _Bool _wasScreenOffDuringActivation;	// 107 = 0x6b
    _Bool _isVoiceActivationMaskShown;	// 108 = 0x6c
    _Bool _buttonDownEventDidOccur;	// 109 = 0x6d
    _Bool _shouldDeferWake;	// 110 = 0x6e
    _Bool _predictedRecordRouteIsZLL;	// 111 = 0x6f
    struct os_unfair_lock_s _lock;	// 112 = 0x70
    long long identifier;	// 120 = 0x78
    id <SiriPresentationControllerDelegate> siriPresentationControllerDelegate;	// 128 = 0x80
    BSServiceConnection *_connection;	// 136 = 0x88
    AFConnection *_unownedConnection;	// 144 = 0x90
    NSDate *_lastAppUpdateTimestamp;	// 152 = 0x98
    double _buttonDownTimestamp;	// 160 = 0xa0
    NSTimer *_carSiriButtonHoldToTalkTimer;	// 168 = 0xa8
    double _carSiriButtonTimeInterval;	// 176 = 0xb0
    NSArray *_contextAppInfosForSiriViewController;	// 184 = 0xb8
    NSArray *_currentCarPlaySupportedOEMAppIdList;	// 192 = 0xc0
    NSArray *_starkAppBundleIdentifierContext;	// 200 = 0xc8
    unsigned long long _currentLockState;	// 208 = 0xd0
    AFWatchdogTimer *_animationDismissalTimer;	// 216 = 0xd8
    AFUISiriLanguage *_language;	// 224 = 0xe0
    id <SiriPresentationIntentUsageDelegate> _intentUsageDelegate;	// 232 = 0xe8
    NSTimer *_clearSiriViewControllerTimer;	// 240 = 0xf0
    long long _currentViewMode;	// 248 = 0xf8
    NSTimer *_pongTimer;	// 256 = 0x100
    long long _presentationState;	// 264 = 0x108
    AFUISiriViewController *_siriViewController;	// 272 = 0x110
    AFUISiriSetupViewController *_siriSetupViewController;	// 280 = 0x118
    UINavigationController *_siriSetupNavigationController;	// 288 = 0x120
    AFQueue *_testInputQueue;	// 296 = 0x128
    struct CGRect _hostedPresentationFrame;	// 304 = 0x130
}

+ (id)extractTestingInputsFromContext:(id)arg1;	// IMP=0x0000000000015030
- (void).cxx_destruct;	// IMP=0x000000000001497e
@property(copy, nonatomic, getter=_testInputQueue) AFQueue *testInputQueue; // @synthesize testInputQueue=_testInputQueue;
@property(retain, nonatomic) UINavigationController *siriSetupNavigationController; // @synthesize siriSetupNavigationController=_siriSetupNavigationController;
@property(retain, nonatomic) AFUISiriSetupViewController *siriSetupViewController; // @synthesize siriSetupViewController=_siriSetupViewController;
@property(retain, nonatomic) AFUISiriViewController *siriViewController; // @synthesize siriViewController=_siriViewController;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(retain, nonatomic) NSTimer *pongTimer; // @synthesize pongTimer=_pongTimer;
@property(nonatomic) long long currentViewMode; // @synthesize currentViewMode=_currentViewMode;
@property(retain, nonatomic) NSTimer *clearSiriViewControllerTimer; // @synthesize clearSiriViewControllerTimer=_clearSiriViewControllerTimer;
@property(retain, nonatomic) id <SiriPresentationIntentUsageDelegate> intentUsageDelegate; // @synthesize intentUsageDelegate=_intentUsageDelegate;
@property(readonly, nonatomic, getter=_language) AFUISiriLanguage *language; // @synthesize language=_language;
@property(retain, nonatomic) AFWatchdogTimer *animationDismissalTimer; // @synthesize animationDismissalTimer=_animationDismissalTimer;
@property(nonatomic) unsigned long long currentLockState; // @synthesize currentLockState=_currentLockState;
@property(nonatomic) _Bool predictedRecordRouteIsZLL; // @synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL;
@property(retain, nonatomic) NSArray *starkAppBundleIdentifierContext; // @synthesize starkAppBundleIdentifierContext=_starkAppBundleIdentifierContext;
@property(retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList; // @synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList;
@property(retain, nonatomic) NSArray *contextAppInfosForSiriViewController; // @synthesize contextAppInfosForSiriViewController=_contextAppInfosForSiriViewController;
@property(getter=_shouldDeferWake, setter=_setShouldDeferWake:) _Bool shouldDeferWake; // @synthesize shouldDeferWake=_shouldDeferWake;
@property(nonatomic, getter=_carSiriButtonTimeInterval, setter=_setCarSiriButtonTimeInterval:) double carSiriButtonTimeInterval; // @synthesize carSiriButtonTimeInterval=_carSiriButtonTimeInterval;
@property(retain, nonatomic, getter=_carSiriButtonHoldToTalkTimer, setter=_setCarSiriButtonHoldToTalkTimer:) NSTimer *carSiriButtonHoldToTalkTimer; // @synthesize carSiriButtonHoldToTalkTimer=_carSiriButtonHoldToTalkTimer;
@property(nonatomic, getter=_buttonDownTimestamp, setter=_setButtonDownTimestamp:) double buttonDownTimestamp; // @synthesize buttonDownTimestamp=_buttonDownTimestamp;
@property(nonatomic, getter=_buttonDownEventDidOccur, setter=_setButtonDownEventDidOccur:) _Bool buttonDownEventDidOccur; // @synthesize buttonDownEventDidOccur=_buttonDownEventDidOccur;
@property(nonatomic, getter=_isVoiceActivationMaskShown, setter=_setVoiceActivationMaskShown:) _Bool isVoiceActivationMaskShown; // @synthesize isVoiceActivationMaskShown=_isVoiceActivationMaskShown;
@property(nonatomic, getter=_wasScreenOffDuringActivation, setter=_setScreenOffDuringActivation:) _Bool wasScreenOffDuringActivation; // @synthesize wasScreenOffDuringActivation=_wasScreenOffDuringActivation;
@property(nonatomic, getter=_startGuidedAccessOnDismissal, setter=_setStartGuidedAccessOnDismissal:) _Bool startGuidedAccessOnDismissal; // @synthesize startGuidedAccessOnDismissal=_startGuidedAccessOnDismissal;
@property(nonatomic, getter=_isWaitingForTelephonyToStart, setter=_setWaitingForTelephonyToStart:) _Bool waitingForTelephonyToStart; // @synthesize waitingForTelephonyToStart=_waitingForTelephonyToStart;
@property(nonatomic, getter=_isSpringBoardIdleTimerDisabled, setter=_setSpringBoardIdleTimerDisabled:) _Bool springBoardIdleTimerDisabled; // @synthesize springBoardIdleTimerDisabled=_springBoardIdleTimerDisabled;
@property(retain, nonatomic, getter=_lastAppUpdateTimestamp, setter=_setLastAppUpdateTimestamp:) NSDate *lastAppUpdateTimestamp; // @synthesize lastAppUpdateTimestamp=_lastAppUpdateTimestamp;
@property(retain, nonatomic) AFConnection *unownedConnection; // @synthesize unownedConnection=_unownedConnection;
@property(nonatomic) struct CGRect hostedPresentationFrame; // @synthesize hostedPresentationFrame=_hostedPresentationFrame;
@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(nonatomic) __weak id <SiriPresentationControllerDelegate> siriPresentationControllerDelegate; // @synthesize siriPresentationControllerDelegate;
- (_Bool)_shouldKeepPonging;	// IMP=0x00000000000142d8
- (void)_teardownPongTimer;	// IMP=0x00000000000140c4
- (void)_waitForPing;	// IMP=0x0000000000013e19
- (void)_setupPongTimer;	// IMP=0x00000000000139e8
- (_Bool)_shouldAllowResizingBetweenModesForViewMode:(long long)arg1;	// IMP=0x00000000000139c4
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000139ba
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000001396b
- (_Bool)shouldAutorotate;	// IMP=0x0000000000013936
- (void)viewWillLayoutSubviews;	// IMP=0x000000000001377e
- (void)_updateLanguageCode;	// IMP=0x0000000000013719
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1;	// IMP=0x00000000000136eb
- (void)stopAnimationDimissalWatchdogTimerIfNeededThen:(CDUnknownBlockType)arg1 onQueue:(id)arg2;	// IMP=0x000000000001357d
- (void)_watchdogQueue_stopAnimationDismissalWatchdogTimerIfNeededThen:(CDUnknownBlockType)arg1 onQueue:(id)arg2;	// IMP=0x00000000000133fc
- (void)_watchdogQueue_startAnimationDismissalWatchdogTimerWithTimeoutHandler:(CDUnknownBlockType)arg1 shouldTurnScreenOff:(_Bool)arg2;	// IMP=0x0000000000013061
- (void)startAnimationDismissalWatchdogTimerWithTimeoutHandler:(CDUnknownBlockType)arg1 shouldTurnScreenOff:(_Bool)arg2;	// IMP=0x0000000000012f59
- (void)openSiriRequestedBySiriSetupViewController:(id)arg1;	// IMP=0x0000000000012d81
- (void)disableSiriActivationRequestedBySiriSetupViewController:(id)arg1;	// IMP=0x0000000000012d72
- (_Bool)siriSetupViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x0000000000012d52
- (void)dismissSiriSetupViewController:(id)arg1;	// IMP=0x0000000000012d40
- (void)_removeSetupViewControllerIfNecessary;	// IMP=0x0000000000012c6b
- (void)_setupSiriViewControllerPresentedSuccessHandler;	// IMP=0x0000000000012c0d
- (void)_showSetupViewControllerIfNecessary;	// IMP=0x0000000000012868
- (void)callStateChangedToIsActive:(_Bool)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000000126f8
- (_Bool)presentationHostedInSpringBoard;	// IMP=0x00000000000126e3
- (_Bool)_isDelayingSessionEnd;	// IMP=0x00000000000126d1
- (void)_callIsActiveDidChangeNotification:(id)arg1;	// IMP=0x00000000000125d0
- (void)_sendTelephonyHasStartedAfterDelay:(double)arg1;	// IMP=0x000000000001249c
- (void)_telephonyHasStarted;	// IMP=0x0000000000012488
- (_Bool)_cancelPendingPhoneCall;	// IMP=0x0000000000011fb7
- (void)_applicationsDidChange;	// IMP=0x0000000000011f71
- (void)_checkForGuideUpdatesIfNecessary;	// IMP=0x0000000000011cef
- (struct UIEdgeInsets)safeAreaInsetsForSceneCreationInSiriViewController:(id)arg1;	// IMP=0x000000000001196e
- (id)starkAppBundleIdentifierContextForSiriViewController:(id)arg1;	// IMP=0x000000000001195c
- (id)currentCarPlaySupportedOEMAppsForSiriViewController:(id)arg1;	// IMP=0x000000000001194a
- (id)contextAppInfosForSiriViewController:(id)arg1;	// IMP=0x0000000000011938
- (unsigned long long)lockStateForSiriViewController:(id)arg1;	// IMP=0x0000000000011926
- (id)siriViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;	// IMP=0x0000000000011885
- (void)siriViewController:(id)arg1 onboardingScreenContinueButtonTappedWithRequestOptions:(id)arg2;	// IMP=0x0000000000011870
- (void)siriViewController:(id)arg1 voiceActivationMaskViewIsVisible:(_Bool)arg2;	// IMP=0x000000000001182b
- (void)siriViewControllerSpeechRequestCancelledFromSiriOrb;	// IMP=0x0000000000011741
- (void)siriViewControllerSpeechRequestStartedFromSiriOrb;	// IMP=0x0000000000011657
- (void)siriViewController:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;	// IMP=0x00000000000115ad
- (id)bulletinsForSiriViewController:(id)arg1;	// IMP=0x00000000000112bb
- (void)userRelevantEventDidOccurInSiriViewController:(id)arg1;	// IMP=0x00000000000112b5
- (void)siriViewController:(id)arg1 presentedIntentWithBundleId:(id)arg2;	// IMP=0x0000000000011243
- (void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;	// IMP=0x000000000001123d
- (void)siriViewController:(id)arg1 requestsDismissalWithReason:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000110fe
- (void)siriViewController:(id)arg1 requestsPresentation:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010dc1
- (void)siriViewController:(id)arg1 didCompleteRequestWithError:(id)arg2;	// IMP=0x0000000000010c17
- (void)_requestHomeAffordanceSuppression:(long long)arg1;	// IMP=0x0000000000010a3f
- (void)siriViewController:(id)arg1 updateHomeAffordanceForBlurVisibilty:(_Bool)arg2;	// IMP=0x0000000000010a24
- (_Bool)siriViewControllerShouldSupportTextInput:(id)arg1;	// IMP=0x00000000000109d7
- (void)siriViewController:(id)arg1 didHideStatusView:(_Bool)arg2;	// IMP=0x00000000000109d1
- (_Bool)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2;	// IMP=0x0000000000010910
- (void)_punchout:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000104f1
- (void)openURL:(id)arg1 bundleId:(id)arg2 inPlace:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000100f3
- (void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(_Bool)arg2;	// IMP=0x000000000000ffc9
- (void)siriViewControllerDidChangeVisibility:(id)arg1;	// IMP=0x000000000000ffc3
- (_Bool)siriViewControllerShouldEndSession:(id)arg1;	// IMP=0x000000000000febf
- (id)_updateRequestOptionsWithTestingInput:(id)arg1;	// IMP=0x000000000000fde1
- (id)siriViewController:(id)arg1 didStopRequestWithOptions:(id)arg2;	// IMP=0x000000000000fdcb
- (id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2;	// IMP=0x000000000000fcce
- (void)startGuidedAccessForSiriViewController:(id)arg1;	// IMP=0x000000000000fc65
- (void)dismissSiriViewController:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x000000000000fb1a
- (void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2;	// IMP=0x000000000000fb05
- (void)siriViewControllerSessionDidResetContext:(id)arg1;	// IMP=0x000000000000faff
- (void)siriViewControllerDidFinishDismissing:(id)arg1;	// IMP=0x000000000000f9e8
- (void)siriViewController:(id)arg1 failedToLaunchAppWithBundleIdentifier:(id)arg2;	// IMP=0x000000000000f8d6
- (void)siriViewController:(id)arg1 willProcessAppLaunchWithBundleIdentifier:(id)arg2;	// IMP=0x000000000000f7b0
- (void)_logSignatureWithType:(id)arg1 subType:(id)arg2 context:(id)arg3;	// IMP=0x000000000000f690
- (id)_analytics;	// IMP=0x000000000000f677
- (void)_resetStateForInstrumentation;	// IMP=0x000000000000f64a
- (unsigned long long)_dismissalReasonForDismissalWithOptions:(id)arg1;	// IMP=0x000000000000f5dc
- (void)_emitInstrumentationDismissalStateWithReason:(unsigned long long)arg1;	// IMP=0x000000000000f57f
- (void)_instrumentSuccessfulAppLaunchIfNecessary;	// IMP=0x000000000000f4da
- (void)_logDismissalToPowerLogWithReason:(unsigned long long)arg1;	// IMP=0x000000000000f4d4
- (void)_logDismissalRequestedForViewMode:(long long)arg1 withDismissalReason:(unsigned long long)arg2;	// IMP=0x000000000000f3c7
- (unsigned long long)_impliedDismissalReasonFromState;	// IMP=0x000000000000f36a
- (void)_dismissDueToUnexpectedError:(id)arg1;	// IMP=0x000000000000f2cf
- (void)_enableSpringBoardIdleTimer;	// IMP=0x000000000000f220
- (_Bool)_isDeviceButton:(long long)arg1;	// IMP=0x000000000000f206
- (_Bool)_releaseExistingTrigger;	// IMP=0x000000000000f10b
- (void)_siriDidOpenURL:(id)arg1;	// IMP=0x000000000000f0f3
- (void)_wasDismissedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000eef4
- (void)_dismissSiriSetup;	// IMP=0x000000000000ed79
- (void)_handleContextClearForRequestOptions:(id)arg1;	// IMP=0x000000000000ec14
- (void)_invalidateCarSiriButtonHoldToTalkTimer;	// IMP=0x000000000000eabe
- (void)_finishClearingSiriViewController:(id)arg1;	// IMP=0x000000000000e8e0
- (void)_clearSiriViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e455
- (void)_cleanupUnownedConnection;	// IMP=0x000000000000e347
- (void)_processConnectionHouseKeeping;	// IMP=0x000000000000e2ab
- (void)_scheduleConnectionHouseKeepingAfterDelay:(double)arg1;	// IMP=0x000000000000e177
- (_Bool)siriViewControllerConfigured;	// IMP=0x000000000000e162
- (id)_createSiriViewControllerWithRequestOptions:(id)arg1;	// IMP=0x000000000000dd3d
- (void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;	// IMP=0x000000000000db71
- (void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;	// IMP=0x000000000000dad0
- (void)bulletinManagerDidChangeBulletins;	// IMP=0x000000000000dab3
- (_Bool)_buttonIdentifierIsHoldToTalkTrigger:(long long)arg1;	// IMP=0x000000000000da5e
- (void)_cancelPendingActivationWithReason:(unsigned long long)arg1;	// IMP=0x000000000000d82d
- (oneway void)cancelPendingActivationEventWithReason:(id)arg1;	// IMP=0x000000000000d687
- (void)_carSiriButtonHoldToTalkIntervalFiredWithButtonIdentifier:(long long)arg1;	// IMP=0x000000000000d541
- (void)_requestDismissalWithOptions:(id)arg1;	// IMP=0x000000000000d461
- (void)_requestDismissal;	// IMP=0x000000000000d407
- (oneway void)updateCurrentLockState:(id)arg1;	// IMP=0x000000000000d1e7
- (_Bool)_handleTapDismissal:(long long)arg1;	// IMP=0x000000000000cf37
- (_Bool)_handleTapButtonBehavior:(long long)arg1;	// IMP=0x000000000000cad8
- (oneway void)handleButtonLongPressFromButtonIdentifier:(id)arg1 deviceIdentifier:(id)arg2 timestamp:(id)arg3 context:(id)arg4;	// IMP=0x000000000000c6aa
- (oneway void)handleButtonTapFromButtonIdentifier:(id)arg1;	// IMP=0x000000000000c27f
- (oneway void)handleButtonUpFromButtonIdentifier:(id)arg1 deviceIdentifier:(id)arg2 timestamp:(id)arg3 context:(id)arg4;	// IMP=0x000000000000bb85
- (void)_handleButtonDownWhileListeningFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 context:(id)arg3;	// IMP=0x000000000000b8d9
- (oneway void)handleButtonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 context:(id)arg3;	// IMP=0x000000000000b1e2
- (oneway void)cancelPreheat;	// IMP=0x000000000000b10a
- (oneway void)preheat;	// IMP=0x000000000000aef6
- (void)_setUpUnownedConnectionIfNecessary;	// IMP=0x000000000000ad28
- (void)_presentationDismissalRequestedWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000994f
- (id)_updateDismissalOptionsIfNecessary:(id)arg1;	// IMP=0x0000000000009865
- (oneway void)presentationDismissalRequestedWithOptions:(id)arg1;	// IMP=0x00000000000097de
- (id)_fallbackScreenForIdentifier:(long long)arg1;	// IMP=0x00000000000097a1
- (struct CGRect)_fallbackFrameForScreen:(id)arg1 withIdentifier:(long long)arg2;	// IMP=0x00000000000096bc
- (id)_uiPresentationIdentifier;	// IMP=0x0000000000009686
- (_Bool)_shouldHandleNewRequestWithOptions:(id)arg1 currentRequest:(id)arg2;	// IMP=0x00000000000095eb
- (_Bool)_shouldRequestPresentationForState:(long long)arg1 forNewRequest:(id)arg2 currentRequest:(id)arg3;	// IMP=0x0000000000009568
- (void)_startRequestWithOptions:(id)arg1;	// IMP=0x0000000000008fa1
- (void)activateWithSource:(long long)arg1 requestOptions:(id)arg2 timestamp:(id)arg3;	// IMP=0x0000000000008aff
- (long long)_viewModeForRequestOptions:(id)arg1;	// IMP=0x000000000000891c
- (void)activateWithSource:(long long)arg1 timestamp:(id)arg2;	// IMP=0x0000000000008905
- (void)activateWithRequestOptions:(id)arg1;	// IMP=0x00000000000088ad
- (oneway void)handleRequestWithOptions:(id)arg1;	// IMP=0x0000000000008719
- (void)_presentationRequestedHandlerWithRequestOptions:(id)arg1;	// IMP=0x00000000000082fc
- (void)_prepareSiriViewControllerWithRequestOptions:(id)arg1;	// IMP=0x0000000000007e69
- (_Bool)_shouldProceedPresentingSiriViewController;	// IMP=0x0000000000007e22
- (void)_showPresentationAndActivateWithRequestOptions:(id)arg1;	// IMP=0x0000000000007d4a
- (id)_createPresentationPropertiesWithRequestOptions:(id)arg1;	// IMP=0x0000000000007c4a
- (void)_updateAnnouncementRequestsPermittedWhilePresentationActive:(_Bool)arg1;	// IMP=0x0000000000007bdb
- (void)_requestPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007690
- (void)_presentSiriViewControllerWithPresentationOptions:(id)arg1 requestOptions:(id)arg2;	// IMP=0x0000000000006d1e
- (void)_updateHostedPresentationFrame;	// IMP=0x0000000000006b34
- (oneway void)activationDeterminedShouldDeferWake:(id)arg1;	// IMP=0x0000000000006a17
- (oneway void)deviceWonMyriadElection;	// IMP=0x0000000000006973
- (oneway void)wakeScreenAfterActivationWithReason:(id)arg1;	// IMP=0x0000000000006686
- (_Bool)_shouldShowSetupViewController;	// IMP=0x000000000000663c
- (void)_presentationRequestedWithPresentationOptions:(id)arg1 requestOptions:(id)arg2;	// IMP=0x0000000000006396
- (oneway void)presentationRequestedWithPresentationOptions:(id)arg1 requestOptions:(id)arg2;	// IMP=0x000000000000612b
- (_Bool)presentationisIdleAndQuiet;	// IMP=0x000000000000611b
- (oneway void)ping;	// IMP=0x0000000000005f59
- (void)animatedDisappearanceWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005df3
- (void)animatedAppearanceWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005ac4
- (void)hasContentAtPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000059de
- (_Bool)isEnabled;	// IMP=0x0000000000005958
- (void)dismissWithOptions:(id)arg1;	// IMP=0x00000000000058ec
- (void)dismiss;	// IMP=0x0000000000005892
@property(readonly, nonatomic) long long identifier; // @synthesize identifier;
- (void)invalidate;	// IMP=0x0000000000005746
- (void)dealloc;	// IMP=0x000000000000568a
- (id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(struct CGRect)arg2;	// IMP=0x0000000000004dea
- (id)initWithIdentifier:(long long)arg1;	// IMP=0x0000000000004db8
- (long long)preferredFlamesViewFidelity;	// IMP=0x0000000000001fbb
- (void)prewarmOrbViewShaders;	// IMP=0x0000000000001df0
- (void)_enableAudioInjection:(_Bool)arg1 audioFiles:(id)arg2;	// IMP=0x0000000000015881
- (void)_removePreviousInjectAudioSettings;	// IMP=0x0000000000015866
- (void)_removePreviousConversationIfNeededWithTestName:(id)arg1 testOptions:(id)arg2;	// IMP=0x00000000000157de
- (void)_startUIRequestWithText:(id)arg1 testName:(id)arg2;	// IMP=0x0000000000015774
- (void)_runSyntheticButtonActivationTest;	// IMP=0x0000000000015721
- (id)_dequeueTestingInput;	// IMP=0x00000000000156d1
- (_Bool)_hasTestingInput;	// IMP=0x000000000001566e
- (void)_enqueueTestInput:(id)arg1;	// IMP=0x00000000000155fc
- (void)_clearAllTestingInputs;	// IMP=0x00000000000155b7
- (void)_processIncomingRequestOptionsForTestingPayload:(id)arg1;	// IMP=0x00000000000153e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
