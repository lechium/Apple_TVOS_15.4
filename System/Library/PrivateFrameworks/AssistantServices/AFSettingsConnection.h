//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, AFVoiceInfo, NSArray, NSXPCConnection;
@protocol AFSettingsDelegate, OS_dispatch_queue;

@interface AFSettingsConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_voicesQueue;	// 16 = 0x10
    NSArray *_voices;	// 24 = 0x18
    AFVoiceInfo *_selectedVoice;	// 32 = 0x20
    id <AFSettingsDelegate> _delegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    AFInstanceContext *_instanceContext;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x00000000000bf030
- (void).cxx_destruct;	// IMP=0x00000000000c9b8c
- (void)getActiveASRLanguagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9a71
- (oneway void)getAssistantIsEnabledForDeviceWithSiriInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c9940
- (void)triggerABCForType:(id)arg1 subType:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c97db
- (void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c96aa
- (void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c9579
- (void)getCurrentRequestIsWatchAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9461
- (oneway void)getAssetStatusForLanguage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c9333
- (oneway void)areSiriUODAssetsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9218
- (void)hasEverSetLanguageCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c90fd
- (void)getRecordedAudioDirectoryPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c8fe2
- (void)trimRecordedAudioWithIdentifier:(id)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c8e96
- (void)accessRecordedAudioWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c8d65
- (void)resetExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c8c36
- (void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c8b1d
- (void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c89ec
- (void)getProximityTuplesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c88d4
- (void)getCapabilitiesDataFromReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c87bc
- (void)getManagedLocalAndRemotePeerInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c86a2
- (void)setHardcodedBluetoothProximity:(id)arg1;	// IMP=0x00000000000c85e0
- (void)getContextCollectorsInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c84c6
- (void)getOriginDeviceInfoForContextIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c8398
- (void)getCurrentContextSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c8280
- (void)getCrossDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c8158
- (void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7fdb
- (void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7e60
- (void)deleteSiriHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7da6
- (void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7ad9
- (void)shouldSuppressSiriDataSharingOptInAlert:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c78c8
- (void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;	// IMP=0x00000000000c779a
- (void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c758a
- (void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c737a
- (void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c7008
- (void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6d45
- (void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c69eb
- (void)siriGradingIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c693c
- (void)setSiriGradingEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6920
- (oneway void)showMultiUserSharedUserIDsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6804
- (void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c66ea
- (void)showMultiUsers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c65d0
- (void)removeMultiUserWithSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c64ef
- (void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c640e
- (void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c62c4
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c61de
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c60f8
- (void)stopObservingWirelessSplitterSession;	// IMP=0x00000000000c606b
- (void)startObservingWirelessSplitterSession;	// IMP=0x00000000000c5fde
- (void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5eb3
- (void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5d88
- (void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5c5d
- (void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5b12
- (void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c59c7
- (void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c592f
- (void)setSiriOutputVolume:(float)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5918
- (void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5834
- (void)getSiriOutputVolumeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c581d
- (void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c574d
- (void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c567d
- (void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5611
- (void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c55a5
- (void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5539
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5453
- (void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5398
- (void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c52d9
- (void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5207
- (void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5135
- (void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5063
- (void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4f91
- (void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4ed2
- (void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4e13
- (void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4d54
- (void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4c95
- (void)getStereoPairState:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4bbc
- (void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4ae3
- (void)getMeCard:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c493b
- (void)setHorsemanSupplementalLanguageDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c491c
- (void)getHorsemanSupplementalLanguageDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c48f6
- (void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c47e1
- (void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c46eb
- (void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4612
- (void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4539
- (void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c4411
- (void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4306
- (void)postTestResultSelectedWithRcId:(id)arg1;	// IMP=0x00000000000c4244
- (void)postTestResultCandidateWithRcId:(id)arg1 recognitionSausage:(id)arg2;	// IMP=0x00000000000c416e
- (void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x00000000000c40d2
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00000000000c400a
- (void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3f11
- (void)getPeerIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3e2e
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3d23
- (void)dismissUI;	// IMP=0x00000000000c3c96
- (void)startMultiUserUIRequestWithText:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c3b70
- (void)startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3a9a
- (void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c39c4
- (void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c38ee
- (void)startUIRequestWithSpeechAudioFileURL:(id)arg1;	// IMP=0x00000000000c382c
- (void)startUIRequestWithInfo:(id)arg1;	// IMP=0x00000000000c375d
- (void)startUIRequestWithText:(id)arg1;	// IMP=0x00000000000c368e
- (void)startUIRequest:(id)arg1;	// IMP=0x00000000000c3573
- (void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x00000000000c34d7
- (void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c33be
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3179
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2;	// IMP=0x00000000000c3164
- (void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2f7f
- (void)setLanguage:(id)arg1;	// IMP=0x00000000000c2f6b
- (void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2df1
- (void)setOutputVoice:(id)arg1;	// IMP=0x00000000000c2ddd
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c2bf0
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2b62
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c2a46
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c297d
- (void)getOfflineAssistantStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c28b4
- (void)updateOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c27b9
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c27a2
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c272f
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2718
- (void)_updateVoicesIncludingAssetInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c25d9
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;	// IMP=0x00000000000c23a4
- (id)_voices;	// IMP=0x00000000000c22cd
- (void)_setVoices:(id)arg1;	// IMP=0x00000000000c2227
- (void)getAudioSessionCoordinationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c20fc
- (void)currectNWActivityId:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1f8d
- (void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1e69
- (void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1d51
- (void)clearOpportuneSpeakingEdgeDetectorSignalOverride;	// IMP=0x00000000000c1cc4
- (void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;	// IMP=0x00000000000c1c28
- (oneway void)clearAnnounceNotificationsInCarPlayType;	// IMP=0x00000000000c1b9b
- (oneway void)setAnnounceNotificationsInCarPlayType:(long long)arg1;	// IMP=0x00000000000c1aff
- (oneway void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c19e7
- (oneway void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;	// IMP=0x00000000000c195a
- (oneway void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c183f
- (oneway void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(_Bool)arg1;	// IMP=0x00000000000c17a3
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 forApp:(id)arg2 platform:(long long)arg3;	// IMP=0x00000000000c16c5
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)arg1 platform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c1590
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 platform:(long long)arg2;	// IMP=0x00000000000c14c8
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c13a3
- (void)setSpokenNotificationProxCardSeen:(_Bool)arg1;	// IMP=0x00000000000c1307
- (void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;	// IMP=0x00000000000c126b
- (void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c11a9
- (void)setSpokenNotificationShouldAnnounceAllNotifications:(_Bool)arg1;	// IMP=0x00000000000c110d
- (void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c104b
- (void)setSpokenNotificationIsAlwaysOpportune:(_Bool)arg1;	// IMP=0x00000000000c0faf
- (void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0eed
- (void)clearSpokenNotificationTemporarilyDisabledStatus;	// IMP=0x00000000000c0e60
- (void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c0cd2
- (void)configOverrides:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0bb9
- (void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c0a8d
- (void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0962
- (void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c081d
- (void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c06ee
- (void)barrier;	// IMP=0x00000000000c0654
- (void)shutdownSessionIfIdle;	// IMP=0x00000000000c05c7
- (void)killDaemon;	// IMP=0x00000000000c053a
- (void)setAssistantLoggingEnabled:(_Bool)arg1;	// IMP=0x00000000000c049e
- (void)setDictationEnabled:(_Bool)arg1;	// IMP=0x00000000000c0402
- (void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x00000000000c0366
- (void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x00000000000c0243
- (void)deleteAccountWithIdentifier:(id)arg1;	// IMP=0x00000000000c0120
- (void)saveAccount:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x00000000000bffd4
- (id)accounts;	// IMP=0x00000000000bfec1
- (void)fetchActiveAccount:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bfcd1
- (void)fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bfcba
- (void)fetchAccountsSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bf8c6
- (void)fetchSupportedMultiUserLanguageCodes:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bf86e
- (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bf816
- (id)_synchronousSettingsServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bf793
- (id)_settingsServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bf710
- (id)_connection;	// IMP=0x00000000000bf354
- (void)_clearConnection;	// IMP=0x00000000000bf2fa
- (void)dealloc;	// IMP=0x00000000000bf235
- (void)setXPCConnectionManagementQueue:(id)arg1;	// IMP=0x00000000000bf224
- (id)init;	// IMP=0x00000000000bf210
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00000000000bf0c0
- (id)description;	// IMP=0x00000000000bf03a
- (void)_tellDelegateServerVerificationReport:(id)arg1;	// IMP=0x00000000000cac30
- (void)_tellDelegatePartialVerificationResult:(id)arg1;	// IMP=0x00000000000cabbe
@property(nonatomic, setter=_setDelegate:) __weak id <AFSettingsDelegate> _delegate;
- (void)_handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca822
- (void)_getSharedUserID:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca750
- (void)_updateMultiUserInfoForUser:(id)arg1 score:(id)arg2 companionId:(id)arg3 companionSpeechId:(id)arg4 idsIdentifier:(id)arg5 aceHost:(id)arg6 reset:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000000ca193
- (void)_getSharedCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca0b3
- (void)_runServiceMaintenance;	// IMP=0x00000000000ca00b
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c9f33
- (void)_fetchPeerData:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9e71
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c9d6f
- (void)_clearSyncNeededForKey:(id)arg1;	// IMP=0x00000000000c9cad
- (void)_setSyncNeededForReason:(id)arg1;	// IMP=0x00000000000c9beb

@end
