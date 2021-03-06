//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAccessibilityListening-Protocol.h>
#import <AssistantServices/AFAudioPowerUpdaterDelegate-Protocol.h>
#import <AssistantServices/AFDeviceRingerSwitchListening-Protocol.h>
#import <AssistantServices/AFInterstitialProviderDelegate-Protocol.h>
#import <AssistantServices/NSXPCListenerDelegate-Protocol.h>

@class AFAnalytics, AFAudioPowerUpdater, AFCallSiteInfo, AFClientConfiguration, AFInstanceContext, AFInterstitialProvider, AFOneArgumentSafetyBlock, AFPreferences, AFQueue, AFSiriClientStateManager, AFWatchdogTimer, NSArray, NSError, NSMutableDictionary, NSString, NSUUID, NSXPCConnection;
@protocol AFAssistantUIService, AFSpeechDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface AFConnection : NSObject <NSXPCListenerDelegate, AFAudioPowerUpdaterDelegate, AFAccessibilityListening, AFDeviceRingerSwitchListening, AFInterstitialProviderDelegate>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_targetQueue;	// 16 = 0x10
    NSString *_outstandingRequestClass;	// 24 = 0x18
    void *_clientID;	// 32 = 0x20
    AFCallSiteInfo *_initiationCallSiteInfo;	// 40 = 0x28
    NSArray *_cachedBulletins;	// 48 = 0x30
    NSUUID *_activeRequestUUID;	// 56 = 0x38
    long long _activeRequestType;	// 64 = 0x40
    long long _activeRequestUsefulUserResultType;	// 72 = 0x48
    AFWatchdogTimer *_requestTimeoutTimer;	// 80 = 0x50
    AFOneArgumentSafetyBlock *_requestCompletion;	// 88 = 0x58
    long long _activeRequestActivationEvent;	// 96 = 0x60
    long long _activeRequestSpeechEvent;	// 104 = 0x68
    _Bool _activeRequestHasSpeechRecognition;	// 112 = 0x70
    _Bool _activeRequestIsDucking;	// 113 = 0x71
    _Bool _activeRequestIsTwoShot;	// 114 = 0x72
    double _activeRequestBeginTime;	// 120 = 0x78
    unsigned long long _activeRequestSpeechEndHostTime;	// 128 = 0x80
    unsigned long long _activeRequestNumberOfPresentedInterstitials;	// 136 = 0x88
    double _activeRequestStartSpeechTimeRequested;	// 144 = 0x90
    double _activeRequestStartSpeechTimeAPICalled;	// 152 = 0x98
    double _activeRequestStopSpeechTimeRequested;	// 160 = 0xa0
    double _activeRequestStopSpeechTimeAPICalled;	// 168 = 0xa8
    double _activeRequestSpeechRecordingEndTimeInterval;	// 176 = 0xb0
    double _activeRequestSpeechRecognitionTimeInterval;	// 184 = 0xb8
    double _activeRequestInitialInterstitialBeginTimeInterval;	// 192 = 0xc0
    NSUUID *_activeTurnIdentifier;	// 200 = 0xc8
    NSMutableDictionary *_replyHandlerForAceId;	// 208 = 0xd0
    unsigned int _stateInSync:1;	// 216 = 0xd8
    unsigned int _shouldSpeak:1;	// 216 = 0xd8
    unsigned int _isCapturingSpeech:1;	// 216 = 0xd8
    unsigned int _hasOutstandingRequest:1;	// 216 = 0xd8
    unsigned int _audioSessionID;	// 220 = 0xdc
    NSString *_recordRoute;	// 224 = 0xe0
    NSString *_playbackRoute;	// 232 = 0xe8
    AFAudioPowerUpdater *_inputAudioPowerUpdater;	// 240 = 0xf0
    AFClientConfiguration *_clientConfiguration;	// 248 = 0xf8
    AFInterstitialProvider *_interstitialProvider;	// 256 = 0x100
    AFQueue *_interstitialCommandQueue;	// 264 = 0x108
    unsigned int _clientConfigurationIsInSync:1;	// 272 = 0x110
    unsigned int _voiceOverIsActive:1;	// 272 = 0x110
    NSError *_lastRetryError;	// 280 = 0x118
    unsigned long long _pendingSpeechRequestCounter;	// 288 = 0x120
    NSObject<OS_dispatch_group> *_speechCallbackGroup;	// 296 = 0x128
    unsigned long long _uufrID;	// 304 = 0x130
    AFPreferences *_preferences;	// 312 = 0x138
    AFInstanceContext *_instanceContext;	// 320 = 0x140
    AFAnalytics *_analytics;	// 328 = 0x148
    AFSiriClientStateManager *_siriClientStateManager;	// 336 = 0x150
    _Atomic unsigned long long _activePlaybackCount;	// 344 = 0x158
    id <AFAssistantUIService> _delegate;	// 352 = 0x160
    id <AFSpeechDelegate> _speechDelegate;	// 360 = 0x168
}

+ (void)defrost;	// IMP=0x000000000000e2c8
+ (id)outputVoice;	// IMP=0x000000000000e074
+ (id)currentLanguageCode;	// IMP=0x000000000000e01d
+ (void)stopMonitoringAvailability;	// IMP=0x000000000000dfa8
+ (_Bool)isAvailable;	// IMP=0x000000000000dda9
+ (_Bool)isNetworkAvailable;	// IMP=0x000000000000dd47
+ (void)beginMonitoringAvailability;	// IMP=0x000000000000dcbb
+ (_Bool)assistantIsSupported;	// IMP=0x000000000000dcb1
+ (_Bool)siriIsSupportedForLanguageCode:(id)arg1 productName:(id)arg2 productVersion:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000db81
+ (_Bool)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000db67
+ (_Bool)assistantIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000da8d
+ (void)initialize;	// IMP=0x0000000000004736
+ (_Bool)userDataSyncNeeded;	// IMP=0x00000000000158a3
- (void).cxx_destruct;	// IMP=0x0000000000014f21
@property(nonatomic) __weak id <AFSpeechDelegate> speechDelegate; // @synthesize speechDelegate=_speechDelegate;
@property(nonatomic) __weak id <AFAssistantUIService> delegate; // @synthesize delegate=_delegate;
- (id)acquireUserInteractionAssertion;	// IMP=0x0000000000014ed3
- (void)_willStopRecordingWithSignpostID:(unsigned long long)arg1;	// IMP=0x0000000000014ec6
- (void)_speechRecordingDidFailWithError:(id)arg1;	// IMP=0x0000000000014e2e
- (void)fetchShouldSpeak:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014e1c
- (void)adviseSessionArbiterToContinueWithPreviousWinner:(_Bool)arg1;	// IMP=0x0000000000014dd0
- (void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x0000000000014d5e
- (void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x0000000000014d12
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x0000000000014c9a
- (void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014b47
- (void)checkLanguageReady:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014b2e
- (void)willPresentUsefulUserResultWithType:(long long)arg1 forCommand:(id)arg2;	// IMP=0x00000000000149ed
- (void)willPresentUsefulUserResultWithType:(long long)arg1;	// IMP=0x00000000000149d9
- (void)usefulUserResultWillPresent;	// IMP=0x00000000000149b9
- (void)telephonyRequestCompleted;	// IMP=0x000000000001497c
- (void)prepareForPhoneCall;	// IMP=0x000000000001493f
- (void)setAlertContextWithBulletins:(id)arg1;	// IMP=0x00000000000148d5
- (void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000001484f
- (void)setApplicationContextForApplicationInfos:(id)arg1;	// IMP=0x00000000000147d8
- (void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2;	// IMP=0x0000000000014750
- (void)fetchAppicationContextForApplicationInfo:(id)arg1 supplementalContext:(id)arg2 refID:(id)arg3;	// IMP=0x00000000000146b6
- (void)setApplicationContext:(id)arg1;	// IMP=0x0000000000014644
- (void)willSetApplicationContextWithRefId:(id)arg1;	// IMP=0x00000000000145d2
- (void)clearContext;	// IMP=0x0000000000014595
- (void)getRemoteClockTimerSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001446b
- (void)getCachedObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014025
- (void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013f9f
- (void)sendReplyCommand:(id)arg1;	// IMP=0x0000000000013ef6
- (void)sendGenericAceCommand:(id)arg1 turnIdentifier:(id)arg2 conflictHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013824
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001380d
- (void)sendGenericAceCommand:(id)arg1;	// IMP=0x00000000000137f6
- (float)peakPower;	// IMP=0x00000000000137dd
- (float)averagePower;	// IMP=0x00000000000137c4
- (unsigned int)audioSessionID;	// IMP=0x00000000000137b8
- (_Bool)shouldSpeak;	// IMP=0x00000000000137a8
@property(readonly, nonatomic) _Bool hasActiveRequest;
@property(readonly, nonatomic) _Bool isRecording;
- (void)rollbackRequest;	// IMP=0x000000000001370f
- (void)rollbackClearContext;	// IMP=0x00000000000136d2
- (void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2;	// IMP=0x00000000000136cc
- (void)recordUIMetrics:(id)arg1;	// IMP=0x00000000000136c6
- (void)updateSpeechOptions:(id)arg1;	// IMP=0x0000000000013592
- (void)stopSpeechWithOptions:(id)arg1;	// IMP=0x0000000000013353
- (void)stopSpeech;	// IMP=0x000000000001333f
- (void)reportIssueForType:(id)arg1 subtype:(id)arg2 context:(id)arg3;	// IMP=0x0000000000013298
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4;	// IMP=0x00000000000131e6
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3;	// IMP=0x000000000001314f
- (void)failRequestWithError:(id)arg1;	// IMP=0x0000000000012f0c
- (void)cancelRequestForReason:(long long)arg1;	// IMP=0x0000000000012da9
- (void)cancelRequest;	// IMP=0x0000000000012cfd
- (void)cancelSpeech;	// IMP=0x0000000000012c56
- (void)startAcousticIDRequestWithOptions:(id)arg1;	// IMP=0x00000000000125c3
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;	// IMP=0x0000000000011e2e
- (CDUnknownBlockType)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(id)arg1;	// IMP=0x0000000000011309
- (void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000112a5
- (void)startSpeechRequestWithOptions:(id)arg1;	// IMP=0x0000000000011272
- (void)_startRequestWithAceCommand:(id)arg1 turnIdentifier:(id)arg2 suppressAlert:(_Bool)arg3;	// IMP=0x000000000001115d
- (id)_metricContextValueForUseDeviceSpeakerForTTS:(long long)arg1;	// IMP=0x0000000000011128
- (id)_startRequestMetricSettings;	// IMP=0x0000000000010eb6
- (void)_startRequestWithInfo:(id)arg1;	// IMP=0x0000000000010646
- (void)startRequestWithInfo:(id)arg1 activationEvent:(long long)arg2;	// IMP=0x000000000001051d
- (void)startRequestWithInfo:(id)arg1;	// IMP=0x000000000001050b
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 userSelectionResults:(id)arg3 turnIdentifier:(id)arg4;	// IMP=0x000000000001023f
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 userSelectionResults:(id)arg3;	// IMP=0x000000000001022a
- (void)startRequestWithAceCommand:(id)arg1;	// IMP=0x0000000000010213
- (void)startContinuationRequestWithUserInfo:(id)arg1;	// IMP=0x0000000000010173
- (void)startDirectActionRequestWithString:(id)arg1;	// IMP=0x00000000000100e8
- (void)startRequestWithText:(id)arg1;	// IMP=0x000000000001005d
- (void)setConfiguration:(id)arg1;	// IMP=0x0000000000010011
- (void)setVoiceOverIsActive:(_Bool)arg1;	// IMP=0x000000000000fff9
- (void)setMyriadDecisionResult:(_Bool)arg1;	// IMP=0x000000000000ff74
- (void)setShouldWaitForMyriad:(_Bool)arg1;	// IMP=0x000000000000feef
- (void)setDeviceRingerSwitchState:(long long)arg1;	// IMP=0x000000000000fe05
- (void)setAccessibilityState:(id)arg1;	// IMP=0x000000000000fced
- (void)setWatchAuthenticated:(_Bool)arg1;	// IMP=0x000000000000fc03
- (void)setAnnouncementRequestsPermittedByPresentationWhileActive:(_Bool)arg1;	// IMP=0x000000000000fb19
- (void)setModesConfiguration:(id)arg1;	// IMP=0x000000000000fb13
- (void)setCarDNDActive:(_Bool)arg1;	// IMP=0x000000000000fa29
- (void)setIsDeviceInStarkMode:(_Bool)arg1;	// IMP=0x000000000000f93f
- (void)setLockState:(_Bool)arg1 screenLocked:(_Bool)arg2;	// IMP=0x000000000000f8ee
- (void)didDismissUI;	// IMP=0x000000000000f871
- (void)willPresentUI;	// IMP=0x000000000000f768
- (void)resumeInterruptedAudioPlaybackIfNeeded;	// IMP=0x000000000000f67b
- (void)forceAudioSessionInactiveWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f3fc
- (void)forceAudioSessionInactive;	// IMP=0x000000000000f3e3
- (void)acquireAudioSessionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000efcc
- (void)forceAudioSessionActiveWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ea12
- (void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 reason:(long long)arg2 speechRequestOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e7d8
- (void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e7c0
- (void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e7a9
- (void)forceAudioSessionActive;	// IMP=0x000000000000e793
- (void)boostedPreheatWithStyle:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e623
- (void)preheatWithStyle:(long long)arg1 forOptions:(id)arg2;	// IMP=0x000000000000e4cc
- (void)preheatWithStyle:(long long)arg1;	// IMP=0x000000000000e4b8
- (void)invalidate;	// IMP=0x000000000000e1e7
- (void)endSession;	// IMP=0x000000000000e0cb
- (void)_endInterstitialsForReason:(id)arg1;	// IMP=0x000000000000d98c
- (void)_handleInterstitialPhase:(long long)arg1 fromProvider:(id)arg2 displayText:(id)arg3 speakableText:(id)arg4 expectedDelay:(double)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000000d3e2
- (void)_beginInterstitialsForReason:(id)arg1;	// IMP=0x000000000000d1e0
- (void)_enqueueInterstitialCommand:(id)arg1;	// IMP=0x000000000000d148
- (void)_willPresentUsefulUserResultWithType:(long long)arg1;	// IMP=0x000000000000cf4b
- (void)_willCompleteRequest;	// IMP=0x000000000000cc65
- (void)_willFailRequestWithError:(id)arg1;	// IMP=0x000000000000bf69
- (void)_willCancelRequest;	// IMP=0x000000000000bc02
- (void)_willEndSession;	// IMP=0x000000000000bb0e
- (void)_willStartRequestWithSpeech:(_Bool)arg1 speechRequestOptions:(id)arg2 requestInfo:(id)arg3 analyticsEventProvider:(CDUnknownBlockType)arg4;	// IMP=0x000000000000abdd
- (_Bool)_shouldEmitUEIRequestLinkForRequestInfo:(id)arg1;	// IMP=0x000000000000abb7
- (void)_updateClientConfiguration;	// IMP=0x000000000000ab39
- (void)_updateState;	// IMP=0x000000000000a893
- (void)_fetchShouldSpeak:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a649
- (void)_updateStateIfNotInSync;	// IMP=0x000000000000a62c
- (void)_extendExistingRequestTimeoutForReason:(id)arg1;	// IMP=0x000000000000a562
- (void)_extendRequestTimeoutForReason:(id)arg1;	// IMP=0x000000000000a47e
- (void)_cancelRequestTimeoutForReason:(id)arg1;	// IMP=0x000000000000a3a0
- (void)_resumeRequestTimeoutForReason:(id)arg1;	// IMP=0x000000000000a2d8
- (void)_pauseRequestTimeoutForReason:(id)arg1;	// IMP=0x000000000000a210
- (void)_invokeRequestTimeoutForReason:(id)arg1;	// IMP=0x000000000000a0be
- (void)_scheduleRequestTimeoutForReason:(id)arg1;	// IMP=0x0000000000009e92
- (id)_connection;	// IMP=0x000000000000984d
- (void)_clearConnection;	// IMP=0x000000000000980f
- (void)_connectionFailedWithError:(id)arg1;	// IMP=0x00000000000095ff
- (void)interstitialProvider:(id)arg1 handlePhase:(long long)arg2 displayText:(id)arg3 speakableText:(id)arg4 expectedDelay:(double)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000093c3
- (void)deviceRingerObserver:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x0000000000009357
- (void)accessibilityObserver:(id)arg1 stateDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x00000000000092af
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;	// IMP=0x000000000000921f
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;	// IMP=0x0000000000009137
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1;	// IMP=0x000000000000904f
- (void)_tellSpeechDelegateRecognitionUpdateWillBeginForTask:(id)arg1;	// IMP=0x0000000000008f67
- (void)_tellSpeechDelegateRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;	// IMP=0x0000000000008df1
- (void)_tellSpeechDelegateRecognizedAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2;	// IMP=0x0000000000008cdc
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;	// IMP=0x0000000000008bce
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;	// IMP=0x0000000000008ae6
- (void)_tellSpeechDelegateRecordingDidCancel;	// IMP=0x0000000000008a48
- (void)_tellSpeechDelegateRecordingDidEnd;	// IMP=0x000000000000897f
- (void)_tellSpeechDelegateToPerformTwoShotPromptWithType:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000086e8
- (void)_tellSpeechDelegateRecordingDidDetectStartpoint;	// IMP=0x000000000000864a
- (void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1;	// IMP=0x0000000000008562
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2;	// IMP=0x0000000000008443
- (void)_tellSpeechDelegateRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;	// IMP=0x0000000000008333
- (void)_dispatchCallbackGroupBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000081a6
- (void)_tellDelegateFailedToLaunchAppWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000008115
- (void)_tellDelegateWillProcessAppLaunchWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000008084
- (void)_tellDelegateAudioSessionDidBecomeActive:(_Bool)arg1;	// IMP=0x0000000000007ff5
- (void)_tellDelegateAudioSessionWillBecomeActive:(_Bool)arg1;	// IMP=0x0000000000007f66
- (void)_tellDelegateStartPlaybackDidFail:(long long)arg1;	// IMP=0x0000000000007ed7
- (void)_tellDelegateWillProcessStartPlayback:(long long)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007da2
- (void)_tellDelegateAudioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;	// IMP=0x0000000000007cee
- (void)_tellDelegateAudioPlaybackRequestDidStart:(id)arg1;	// IMP=0x0000000000007c5d
- (void)_tellDelegateAudioPlaybackRequestWillStart:(id)arg1;	// IMP=0x0000000000007bcc
- (void)_tellDelegateAudioSessionDidEndInterruption:(_Bool)arg1 userInfo:(id)arg2;	// IMP=0x0000000000007ae2
- (void)_tellDelegateAudioSessionDidBeginInterruptionWithUserInfo:(id)arg1;	// IMP=0x0000000000007a10
- (void)_tellDelegateExtensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;	// IMP=0x000000000000795c
- (void)_tellDelegateExtensionRequestWillStartForApplication:(id)arg1;	// IMP=0x00000000000078cb
- (void)_tellDelegateCacheImage:(id)arg1;	// IMP=0x000000000000783a
- (void)_tellDelegateInvalidateCurrentUserActivity;	// IMP=0x00000000000077b3
- (void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;	// IMP=0x00000000000076ff
- (void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(_Bool)arg1;	// IMP=0x00000000000075ce
- (void)_tellDelegateDidDetectMusic;	// IMP=0x0000000000007547
- (void)_tellDelegateWillStartAcousticIDRequest;	// IMP=0x00000000000074a5
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;	// IMP=0x0000000000007418
- (void)_tellDelegateShouldSpeakChanged:(_Bool)arg1;	// IMP=0x0000000000007389
- (void)_completeRequestWithUUID:(id)arg1 forReason:(long long)arg2 error:(id)arg3;	// IMP=0x0000000000006fbd
- (void)_tellDelegateRequestWillStart;	// IMP=0x0000000000006f36
- (id)_siriClientStateManager;	// IMP=0x0000000000006edf
- (void)_updateSpeechEndHostTime:(unsigned long long)arg1;	// IMP=0x0000000000006d3d
- (void)_markSpeechRecognized;	// IMP=0x0000000000006cea
- (void)_markIsTwoShot;	// IMP=0x0000000000006c97
- (void)_markIsDucking;	// IMP=0x0000000000006c44
- (void)_setRecordRoute:(id)arg1;	// IMP=0x0000000000006b50
- (void)_setAudioSessionID:(unsigned int)arg1;	// IMP=0x0000000000006a49
- (void)_stopInputAudioPowerUpdates;	// IMP=0x0000000000006973
- (_Bool)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1;	// IMP=0x000000000000669e
- (void)_aceConnectionWillRetryOnError:(id)arg1;	// IMP=0x000000000000668a
- (void)_setShouldSpeak:(_Bool)arg1;	// IMP=0x0000000000006560
- (void)_dispatchCommand:(id)arg1 isInterstitial:(_Bool)arg2 interstitialPhase:(long long)arg3 interstitialDelay:(double)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000053ed
- (void)_handleCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005213
- (void)_startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005147
- (void)_startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000507b
- (void)_requestDidEnd;	// IMP=0x0000000000004f78
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(_Bool)arg2 speechRequestOptions:(id)arg3 requestInfo:(id)arg4 isBackgroundRequest:(_Bool)arg5 analyticsEventProvider:(CDUnknownBlockType)arg6;	// IMP=0x0000000000004db0
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(_Bool)arg2 speechRequestOptions:(id)arg3 requestInfo:(id)arg4 analyticsEventProvider:(CDUnknownBlockType)arg5;	// IMP=0x0000000000004d94
- (void)_checkAndSetIsCapturingSpeech:(_Bool)arg1;	// IMP=0x0000000000004c78
- (void)dealloc;	// IMP=0x0000000000004b2e
- (id)init;	// IMP=0x0000000000004b1a
- (id)initWithTargetQueue:(id)arg1;	// IMP=0x0000000000004b06
- (id)initWithTargetQueue:(id)arg1 instanceContext:(id)arg2;	// IMP=0x0000000000004740
- (void)broadcastCommandDictionary:(id)arg1;	// IMP=0x0000000000015474
- (void)sendFeedbackToAppPreferencesPredictorForMetricsContext:(id)arg1 selectedBundleId:(id)arg2;	// IMP=0x000000000001546e
- (void)requestBarrier:(CDUnknownBlockType)arg1;	// IMP=0x00000000000153a6
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(_Bool)arg2;	// IMP=0x000000000001507b
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;	// IMP=0x0000000000015067
- (void)startUIRequest;	// IMP=0x000000000001589d
- (id)_clientConfiguration;	// IMP=0x0000000000015775
- (id)_cachedBulletins;	// IMP=0x0000000000015767
- (id)_clientServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000156e4
- (id)_clientService;	// IMP=0x0000000000015694
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;	// IMP=0x0000000000015622
- (void)_barrier;	// IMP=0x00000000000154f4
- (id)_activeRequestUUID;	// IMP=0x00000000000154e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

