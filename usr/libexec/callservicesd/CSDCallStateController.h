//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDAudioArbitrationController, CSDAudioController, CSDCallController, CSDCallHistoryManager, CSDCallHistoryManagerXPCServer, CSDCallProviderManager, CSDCallProviderManagerXPCServer, CSDClientManager, CSDProviderCallDataSource, CSDRecentsController, CSDRelayCallDataSource, CSDRelayCallDelegate, CSDRelayMessagingController, CSDRouteController, CSDVoIPApplicationController, NSNumber, NSString, TUCallCenter, TUCarPlayHardwareControlsBroadcaster;
@protocol CSDProcessObserverProtocol, OS_dispatch_queue, TUCallContainerPrivate, TUFeatureFlags;

@interface CSDCallStateController : NSObject
{
    CSDCallHistoryManager *_callHistoryManager;	// 8 = 0x8
    CSDCallProviderManager *_callProviderManager;	// 16 = 0x10
    CSDCallController *_callController;	// 24 = 0x18
    CSDVoIPApplicationController *_voipApplicationController;	// 32 = 0x20
    CSDRelayMessagingController *_relayMessagingController;	// 40 = 0x28
    CSDRecentsController *_recentsController;	// 48 = 0x30
    CSDAudioController *_audioController;	// 56 = 0x38
    CSDAudioArbitrationController *_audioArbitrationController;	// 64 = 0x40
    CSDRouteController *_localRouteController;	// 72 = 0x48
    CSDRouteController *_pairedHostDeviceRouteController;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSString *_currentlyTrackedA2DPRouteIdentifier;	// 96 = 0x60
    CSDCallHistoryManagerXPCServer *_callHistoryManagerXPCServer;	// 104 = 0x68
    CSDCallProviderManagerXPCServer *_callProviderManagerXPCServer;	// 112 = 0x70
    id <TUFeatureFlags> _featureFlags;	// 120 = 0x78
    CSDRelayCallDataSource *_relayCallDataSource;	// 128 = 0x80
    CSDRelayCallDelegate *_relayCallDelegate;	// 136 = 0x88
    CSDClientManager *_clientManager;	// 144 = 0x90
    TUCarPlayHardwareControlsBroadcaster *_carPlayHardwareControlsBroadcaster;	// 152 = 0x98
    id <CSDProcessObserverProtocol> _processObserver;	// 160 = 0xa0
    CDUnknownBlockType _clientInvalidationHandler;	// 168 = 0xa8
    CSDProviderCallDataSource *_providerCallDataSource;	// 176 = 0xb0
    NSNumber *_shouldHandleSecureMicrophoneEvents;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x002000000012270e
@property(retain, nonatomic) NSNumber *shouldHandleSecureMicrophoneEvents; // @synthesize shouldHandleSecureMicrophoneEvents=_shouldHandleSecureMicrophoneEvents;
@property(readonly, nonatomic) CSDProviderCallDataSource *providerCallDataSource; // @synthesize providerCallDataSource=_providerCallDataSource;
@property(copy, nonatomic) CDUnknownBlockType clientInvalidationHandler; // @synthesize clientInvalidationHandler=_clientInvalidationHandler;
@property(readonly, nonatomic) id <CSDProcessObserverProtocol> processObserver; // @synthesize processObserver=_processObserver;
@property(readonly, nonatomic) TUCarPlayHardwareControlsBroadcaster *carPlayHardwareControlsBroadcaster; // @synthesize carPlayHardwareControlsBroadcaster=_carPlayHardwareControlsBroadcaster;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDRelayCallDelegate *relayCallDelegate; // @synthesize relayCallDelegate=_relayCallDelegate;
@property(readonly, nonatomic) CSDRelayCallDataSource *relayCallDataSource; // @synthesize relayCallDataSource=_relayCallDataSource;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) CSDCallProviderManagerXPCServer *callProviderManagerXPCServer; // @synthesize callProviderManagerXPCServer=_callProviderManagerXPCServer;
@property(readonly, nonatomic) CSDCallHistoryManagerXPCServer *callHistoryManagerXPCServer; // @synthesize callHistoryManagerXPCServer=_callHistoryManagerXPCServer;
@property(copy, nonatomic) NSString *currentlyTrackedA2DPRouteIdentifier; // @synthesize currentlyTrackedA2DPRouteIdentifier=_currentlyTrackedA2DPRouteIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDRouteController *pairedHostDeviceRouteController; // @synthesize pairedHostDeviceRouteController=_pairedHostDeviceRouteController;
@property(readonly, nonatomic) CSDRouteController *localRouteController; // @synthesize localRouteController=_localRouteController;
@property(retain, nonatomic) CSDAudioArbitrationController *audioArbitrationController; // @synthesize audioArbitrationController=_audioArbitrationController;
@property(retain, nonatomic) CSDAudioController *audioController; // @synthesize audioController=_audioController;
@property(readonly, nonatomic) CSDRecentsController *recentsController; // @synthesize recentsController=_recentsController;
@property(retain, nonatomic) CSDRelayMessagingController *relayMessagingController; // @synthesize relayMessagingController=_relayMessagingController;
@property(retain, nonatomic) CSDVoIPApplicationController *voipApplicationController; // @synthesize voipApplicationController=_voipApplicationController;
@property(readonly, nonatomic) CSDCallController *callController; // @synthesize callController=_callController;
@property(readonly, nonatomic) CSDCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) CSDCallHistoryManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
- (_Bool)isInCallUIActive;	// IMP=0x00100000001225b0
- (void)updateAudioArbitration;	// IMP=0x00100000001225aa
- (void)didChangeFaceTimeCallingAvailability;	// IMP=0x00100000001225a4
- (void)didChangeRelayCallingCapabilities;	// IMP=0x001000000012252e
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x0010000000122528
- (oneway void)reportLocalPreviewStoppedForCallWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x00100000001223ee
- (oneway void)requestInitialState:(CDUnknownBlockType)arg1;	// IMP=0x00100000001222fb
- (_Bool)isTrackingVoIPCallForBundleIdentifier:(id)arg1;	// IMP=0x00100000001220b7
- (id)currentCallsForClient:(id)arg1;	// IMP=0x0010000000121ff3
- (id);	// IMP=0x0010000000121f5e
- (id)currentProxyCalls;	// IMP=0x0010000000121d44
- (void)propertiesChangedForCall:(id)arg1;	// IMP=0x0010000000121cd2
- (void)messagingConnectionCouldNotEstablishLinkForCalls:(id)arg1 didStartConnecting:(_Bool)arg2;	// IMP=0x0010000000121b95
- (void)messagingConnectionFailedForCalls:(id)arg1 didStartConnecting:(_Bool)arg2;	// IMP=0x0010000000121a58
- (void)messagingConnectionEndedForCalls:(id)arg1 didStartConnecting:(_Bool)arg2;	// IMP=0x00100000001218e8
- (oneway void)setClientCapabilities:(id)arg1;	// IMP=0x00100000001217e5
- (oneway void)filterStatusForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001215fa
- (oneway void)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001213a0
- (oneway void)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001212ab
- (oneway void)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001210c0
- (oneway void)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000120fc6
- (oneway void)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000120d9b
- (oneway void)pickPairedHostDeviceRouteWithUniqueIdentifier:(id)arg1 shouldWaitUntilAvailable:(_Bool)arg2;	// IMP=0x0010000000120bdd
- (oneway void)pickLocalRouteWithUniqueIdentifier:(id)arg1 shouldWaitUntilAvailable:(_Bool)arg2;	// IMP=0x0010000000120a1f
- (oneway void)pairedHostDeviceRoutesByUniqueIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00100000001208c7
- (oneway void)localRoutesByUniqueIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0010000000120744
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;	// IMP=0x0010000000120574
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;	// IMP=0x00100000001203a4
- (oneway void)joinConversationWithRequest:(id)arg1;	// IMP=0x0010000000120222
- (oneway void)sendUserScoreToRTCReporting:(id)arg1 withScore:(int)arg2;	// IMP=0x001000000012012b
- (oneway void)activateInCallUIWithActivityContinuationIdentifier:(id)arg1;	// IMP=0x0010000000120125
- (oneway void)shouldAllowRingingCallStatusIndicator:(_Bool)arg1;	// IMP=0x0010000000120082
- (oneway void)shouldSuppressInCallStatusBar:(_Bool)arg1;	// IMP=0x001000000011ffdf
- (oneway void)setBluetoothAudioFormatForCallWithUniqueProxyIdentifier:(id)arg1 bluetoothAudioFormat:(long long)arg2;	// IMP=0x001000000011fd7f
- (oneway void)setSharingScreen:(_Bool)arg1 attributes:(id)arg2 forCallWithUniqueProxyIdentifier:(id)arg3;	// IMP=0x001000000011fb3d
- (oneway void)setScreenShareAttributesForCallWithUniqueProxyIdentifier:(id)arg1 attributes:(id)arg2;	// IMP=0x001000000011f926
- (oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2;	// IMP=0x001000000011f72f
- (oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x001000000011f4f9
- (oneway void)enteredBackgroundForAllCalls;	// IMP=0x001000000011f3e7
- (oneway void)willEnterBackgroundForAllCalls;	// IMP=0x001000000011f2c9
- (oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000011f08f
- (oneway void)updateCallWithProxy:(id)arg1;	// IMP=0x001000000011ef16
- (oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000011ed46
- (oneway void)pullHostedCallsFromPairedHostDevice;	// IMP=0x001000000011ec31
- (oneway void)pushHostedCallsToDestination:(id)arg1;	// IMP=0x001000000011eab8
- (oneway void)setSharingScreen:(_Bool)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;	// IMP=0x001000000011e7f7
- (oneway void)setMixesVoiceWithMedia:(_Bool)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;	// IMP=0x001000000011e536
- (oneway void)setIsSendingVideo:(_Bool)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;	// IMP=0x001000000011e21d
- (oneway void)setDownlinkMuted:(_Bool)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;	// IMP=0x001000000011df5c
- (oneway void)setUplinkMuted:(_Bool)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;	// IMP=0x001000000011dc83
- (oneway void)sendMMIOrUSSDCodeWithRequest:(id)arg1;	// IMP=0x001000000011db0a
- (oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000011d7fb
- (oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;	// IMP=0x001000000011d682
- (oneway void)pullRelayingCallsFromClient;	// IMP=0x001000000011d563
- (oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;	// IMP=0x001000000011d39e
- (oneway void)disconnectAllCalls;	// IMP=0x001000000011d289
- (oneway void)disconnectCurrentCallAndActivateHeld;	// IMP=0x001000000011d174
- (oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;	// IMP=0x001000000011ce8d
- (oneway void)swapCalls;	// IMP=0x001000000011cd78
- (oneway void)ungroupCallWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000011cab5
- (oneway void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2;	// IMP=0x001000000011c6c6
- (oneway void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000011c403
- (oneway void)requestVideoUpgradeForCallWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000011be09
- (oneway void)unholdCallWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000011bb46
- (oneway void)holdCallWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000011b883
- (oneway void)answerCallWithRequest:(id)arg1;	// IMP=0x001000000011b475
- (void)_dial:(id)arg1 displayContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011b38c
- (oneway void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x001000000011b1b4
- (oneway void)dialWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000011addc
- (void)_handleMessagingConnectionEndForCalls:(id)arg1 withDisconnectedReason:(int)arg2 didStartConnecting:(_Bool)arg3;	// IMP=0x001000000011aa82
- (void)performUpdateCallWithProxy:(id)arg1;	// IMP=0x001000000011a9ce
- (void)performPullHostedCallsFromPairedHostDevice;	// IMP=0x001000000011a765
- (void)performPushHostedCallsToDestination:(id)arg1;	// IMP=0x001000000011a512
- (void)performPushRelayingCallsToHostWithSourceIdentifier:(id)arg1;	// IMP=0x001000000011a4a0
- (void)performPullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011a39c
- (void)performSetUplinkMuted:(_Bool)arg1 forCall:(id)arg2;	// IMP=0x001000000011a125
- (void)performSetTTYType:(int)arg1 forCall:(id)arg2;	// IMP=0x0010000000119f4d
- (void)performPlayDTMFToneForCall:(id)arg1 key:(unsigned char)arg2;	// IMP=0x0010000000119ec5
- (void)performSendMMIOrUSSDCodeWithRequest:(id)arg1;	// IMP=0x0010000000119e53
- (void)performPullRelayingCallsFromClientAndUpdateEndpoint:(_Bool)arg1 updateExpectedDestination:(_Bool)arg2;	// IMP=0x0010000000119b84
- (void)performDisconnectAllCalls;	// IMP=0x001000000011989b
- (void)performDisconnectCurrentCallAndActivateHeld;	// IMP=0x0010000000118d07
- (void)performDisconnectCall:(id)arg1;	// IMP=0x001000000011894e
- (void)performAnswerCallAsAudioDowngrade:(id)arg1 withRequest:(id)arg2;	// IMP=0x00100000001188ca
- (void)performAnswerCallAsVideoUpgrade:(id)arg1 withRequest:(id)arg2;	// IMP=0x0010000000118846
- (void)performHoldActiveAndAnswerCall:(id)arg1 withRequest:(id)arg2;	// IMP=0x0010000000117fba
- (void)performEndHeldAndAnswerCall:(id)arg1 withRequest:(id)arg2;	// IMP=0x0010000000117787
- (void)performEndActiveAndAnswerCall:(id)arg1 withRequest:(id)arg2;	// IMP=0x00100000001170ab
- (id)callWithUniqueProxyIdentifier:(id)arg1 fromCallsToAnswer:(id)arg2;	// IMP=0x0010000000116ed7
- (void)performAnswerCall:(id)arg1 withRequest:(id)arg2;	// IMP=0x0010000000116c78
- (void)performSwapCalls;	// IMP=0x001000000011664d
- (void)performUngroupCall:(id)arg1;	// IMP=0x001000000011629b
- (void)performGroupCall:(id)arg1 withCall:(id)arg2;	// IMP=0x0010000000115eb3
- (void)performUnholdCall:(id)arg1;	// IMP=0x0010000000115cc5
- (void)performHoldCall:(id)arg1;	// IMP=0x0010000000115ad7
- (id)performJoinConversation:(id)arg1;	// IMP=0x00100000001159b6
- (id)performDialCall:(id)arg1 displayContext:(id)arg2;	// IMP=0x0010000000115857
- (void)setCallDelegatesIfNeeded:(id)arg1;	// IMP=0x00100000001155ec
- (id)outgoingCallFromDialRequest:(id)arg1;	// IMP=0x001000000011553c
- (void)_updateBluetoothAudioFormatIfNecessaryDueToMVMChange:(_Bool)arg1;	// IMP=0x0010000000115507
- (void)_handleDisconnectedCallStatusChangeForHostedCall:(id)arg1;	// IMP=0x00100000001153c8
- (void)_updateRoutesForDisconnectedCall;	// IMP=0x0010000000115347
- (void)_handleDisconnectedCallStatusChangeForVoicemailCall;	// IMP=0x0010000000115281
- (void)_handleHeldCallStatusChangeForHostedCall:(id)arg1;	// IMP=0x001000000011520d
- (void)_handleActiveCallStatusChangeForHostedCall:(id)arg1;	// IMP=0x001000000011511f
- (void)_handleConnectedCallStatusChangeForHostedCall:(id)arg1;	// IMP=0x0010000000115008
- (void)_handleConnectingCallStatusChangeForHostedCall:(id)arg1;	// IMP=0x0010000000114e37
- (void)_handleSendingCallStatusChangeForHostedCall:(id)arg1;	// IMP=0x0010000000114d9a
- (void)_handleRingingCallStatusChangeForHostedCall:(id)arg1;	// IMP=0x0010000000114ac4
- (_Bool)_nonRingingCallExistsOnThisDevice;	// IMP=0x0010000000114848
- (void)_handlePreferredRouteChangedNotification:(id)arg1;	// IMP=0x0010000000114389
- (void)_handleCSDRelayPairedDeviceConnectedNotification:(id)arg1;	// IMP=0x0010000000114383
- (void)_handleCSDRelayIDSActiveAccountsChanged:(id)arg1;	// IMP=0x001000000011422f
- (void)_handleInvitationSentNotification:(id)arg1;	// IMP=0x00100000001140ed
- (void)_handleFaceTimeAvailabilityChangedNotification:(id)arg1;	// IMP=0x0010000000113fa4
- (void)_handleCallIsUsingBasebandChangedNotification:(id)arg1;	// IMP=0x0010000000113e13
- (void)_handleHardPauseStateChangedNotification:(id)arg1;	// IMP=0x0010000000113caf
- (void)_handleResetCallStateNotification:(id)arg1;	// IMP=0x0010000000113ba1
- (void)_handleCallModelChangedNotification:(id)arg1;	// IMP=0x0010000000113a5f
- (void)_handleCallShouldSuppressRingtoneChangedNotification:(id)arg1;	// IMP=0x00100000001138f5
- (void)_handleCallWantsHoldMusicChangedNotification:(id)arg1;	// IMP=0x001000000011379f
- (void)_handleNeedsManualInCallSoundsChangedNotification:(id)arg1;	// IMP=0x001000000011365d
- (void)_handleCallConnectedNotification:(id)arg1;	// IMP=0x0010000000113539
- (void)_handleCallStartedConnectingNotification:(id)arg1;	// IMP=0x00100000001133f1
- (void)_handleCallStartedOutgoingNotification:(id)arg1;	// IMP=0x0010000000113288
- (void)_handleCallStatusChangedNotification:(id)arg1;	// IMP=0x0010000000112f2c
- (void)_handleMixesVoiceWithMediaChangedNotification:(id)arg1;	// IMP=0x0010000000112e0c
- (void)_handleTUCallTTYTypeChangedNotification:(id)arg1;	// IMP=0x0010000000112c88
- (void)_handleTUCallSupportsTTYWithVoiceChangedNotification:(id)arg1;	// IMP=0x0010000000112b13
- (void)_handleUpdateRemoteUplinkMutedChangedNotification:(id)arg1;	// IMP=0x00100000001129d1
- (void)_handleCallDisplayContextChangedNotification:(id)arg1;	// IMP=0x001000000011288f
- (void)sendClientsNotificationName:(id)arg1 forCall:(id)arg2 userInfo:(id)arg3;	// IMP=0x001000000011260f
- (void)sendClientsNotificationName:(id)arg1 forCall:(id)arg2;	// IMP=0x00100000001125fa
- (void)sendClientsNotificationName:(id)arg1;	// IMP=0x00100000001125e3
- (void)resetClientCallProvisionalStates;	// IMP=0x00100000001124e6
- (void)updateClientsWithMeterLevel:(float)arg1 inDirection:(int)arg2 forCalls:(id)arg3;	// IMP=0x001000000011223b
- (void)updateClientsWithFrequency:(id)arg1 inDirection:(int)arg2 forCalls:(id)arg3;	// IMP=0x0010000000111f24
- (_Bool)isCallEligible:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000111eaa
- (id)eligibleCallsByFilteringCalls:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000111cbe
- (void)updateClientsWithCall:(id)arg1;	// IMP=0x00100000001116cb
- (void)_endProxyCallsForConnectingVideoCall;	// IMP=0x0010000000111480
- (void)_launchInCallApplicationForExistingCall;	// IMP=0x001000000011147a
- (void)_launchInCallApplicationForOutgoingCallIfNecessary:(id)arg1;	// IMP=0x001000000011124d
- (void)_launchInCallApplicationForOutgoingConversationIfNecessary:(id)arg1;	// IMP=0x0010000000111247
- (void)_launchInCallApplicationForIncomingCallIfNecessary:(id)arg1;	// IMP=0x001000000011101a
- (void)_answerIncomingCallAsConversation:(id)arg1;	// IMP=0x0010000000110e46
- (void)_answerIncomingCall:(id)arg1 withBehavior:(long long)arg2;	// IMP=0x0010000000110cf3
- (void)_handleCarPlayControlEventNotification:(id)arg1;	// IMP=0x001000000011049b
- (void)_handleAudioSessionInterruptionNotification:(id)arg1;	// IMP=0x0010000000110217
- (_Bool)shouldHandleCarPlayControlEvents;	// IMP=0x001000000011020f
- (void)_requestCallStateFromHost;	// IMP=0x0010000000110209
- (void)_handleRelayCallingChanged;	// IMP=0x001000000010fca4
@property(readonly, nonatomic) _Bool shouldRelayToOtherDevices;
- (id)callFilterManager;	// IMP=0x001000000010fc1f
@property(readonly, nonatomic) id <TUCallContainerPrivate> callContainer;
@property(readonly, nonatomic) TUCallCenter *callCenter;
- (void)dealloc;	// IMP=0x001000000010fac6
- (void)invalidate;	// IMP=0x001000000010fa89
- (id)initWithQueue:(id)arg1 featureFlags:(id)arg2;	// IMP=0x001000000010dddc
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000010dd78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

