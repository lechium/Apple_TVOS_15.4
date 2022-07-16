//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENExposureDetectionClientSession, NSMutableArray;
@protocol ENUIRemotePresentationController, OS_dispatch_queue, OS_xpc_object;

@interface ENManager : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    ENExposureDetectionClientSession *_detectionSession;	// 16 = 0x10
    NSMutableArray *_exposureWindows;	// 24 = 0x18
    _Bool _invalidateCalled;	// 32 = 0x20
    _Bool _invalidateDone;	// 33 = 0x21
    NSObject<OS_xpc_object> *_xpcCnx;	// 40 = 0x28
    _Bool _isTestEntitlement;	// 48 = 0x30
    id <ENUIRemotePresentationController> _remotePresentationController;	// 56 = 0x38
    _Bool _exposureNotificationEnabled;	// 64 = 0x40
    _Bool _exposureNotificationPaused;	// 65 = 0x41
    _Bool _analyticsEnabled;	// 66 = 0x42
    unsigned int _clientID;	// 68 = 0x44
    CDUnknownBlockType _activityHandler;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 80 = 0x50
    long long _exposureNotificationStatus;	// 88 = 0x58
    CDUnknownBlockType _invalidationHandler;	// 96 = 0x60
    CDUnknownBlockType _diagnosisKeysAvailableHandler;	// 104 = 0x68
    NSObject<OS_xpc_object> *_testListenerEndpoint;	// 112 = 0x70
    CDUnknownBlockType _statusChangedHandler;	// 120 = 0x78
}

+ (long long)authorizationStatus;	// IMP=0x000000000001d18b
- (void).cxx_destruct;	// IMP=0x000000000002d963
@property(readonly, nonatomic) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
@property(readonly, nonatomic) _Bool exposureNotificationPaused; // @synthesize exposureNotificationPaused=_exposureNotificationPaused;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) CDUnknownBlockType diagnosisKeysAvailableHandler; // @synthesize diagnosisKeysAvailableHandler=_diagnosisKeysAvailableHandler;
@property(readonly, nonatomic) _Bool exposureNotificationEnabled; // @synthesize exposureNotificationEnabled=_exposureNotificationEnabled;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) long long exposureNotificationStatus; // @synthesize exposureNotificationStatus=_exposureNotificationStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType activityHandler; // @synthesize activityHandler=_activityHandler;
- (void)verifyTextMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d669
- (void)showBuddyForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d440
- (void)fetchSubdivisionsForCountry:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cf46
- (void)fetchConfigurationsForRegion:(id)arg1 fetchReason:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c924
- (void)fetchConfigurationsForRegion:(id)arg1 forceServerFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c910
- (void)remotePresentationRequestDidComplete:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c6f3
- (void)clearDeveloperServerConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c568
- (void)setWeeklySummaryAlertEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c370
- (void)setDeveloperServerConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c105
- (void)setActiveRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bee8
- (void)setActiveEntityWithRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bccb
- (void)setActiveEntityWithAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ba9c
- (void)setCurrentActiveApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b8c2
- (void)setAvailabilityAlertEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b6ca
- (void)setAutomaticRegionSwitchEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b4d2
- (void)getLastExposureNotificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b2be
- (void)onboardingDidStartForRegion:(id)arg1 withSource:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002af7c
- (void)getAllEntitiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002aa30
- (void)getInfoForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a744
- (void)getDataVaultSizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a547
- (void)exposureNotificationGetStatusForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a314
- (void)downloadAndDetectExposure:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a169
- (void)deleteExposureDetectionHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a14f
- (void)setRegionUserConsent:(id)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029d2f
- (void)setRegionConsent:(long long)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029cc8
- (void)setRegionConsent:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029c61
- (void)regionHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000299ea
- (void)getRegionVisitHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029691
- (void)allAgencyConfigurationsForLocale:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000291d8
- (void)agencyConfigurationForLocale:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028d1f
- (void)regionServerConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028958
- (void)allRegionServerConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002853b
- (void)allRegionConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028162
- (void)regionConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027ee5
- (void)activeRegionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027c79
- (void)finishTestVerificationForSession:(id)arg1 userDidConsent:(_Bool)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000279e8
- (void)fetchTestMetadataForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027707
- (void)startTestVerificationSessionWithCode:(id)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002737a
- (void)startSelfReportWebSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026fe0
- (void)sendChaffTestVerificationRequestForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026d8a
- (void)_getDetectionHistorySessionsCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026969
- (void)getDetectionHistorySessionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000267ee
- (void)_getDetectionHistoryFilesCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000263cd
- (void)getDetectionHistoryFilesForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002619a
- (void)_populateDetectionHistoryChecks:(id)arg1 forSessions:(id)arg2 sessionIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025dd1
- (void)getDetectionHistoryChecksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025c30
- (void)exposureDetectionFileFinishWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025a14
- (void)exposureDetectionFileAdd:(id)arg1 signatureURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025315
- (void)exposureDetectionFileActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000250c2
- (void)exposureDetectionGetExposureInfoCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024d60
- (void)exposureDetectionGetExposureInfoWithMaximumCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024bc6
- (void)exposureDetectionFinishWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000249aa
- (void)exposureDetectionAddKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024651
- (void)exposureDetectionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000243c8
- (void)triggerNotificationOfType:(int)arg1 appBundleIdentifier:(id)arg2 classificationName:(id)arg3 interval:(id)arg4 region:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000023f98
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023cb6
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000239f5
- (void)resetDataWithFlags:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002376b
- (void)resetAllDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023751
- (void)_getDiagnosisKeysReply:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000233bd
- (void)getDiagnosisKeysForTesting:(_Bool)arg1 forceRefresh:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022fda
- (void)getTestDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022fbe
- (void)getDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022fa5
- (void)requestPreAuthorizedDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022d85
- (void)_handleRemotePresentationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022c5f
- (void)didEnterLegalConsentPage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000229dc
- (void)_checkRemoteDialogueRequirementForRequestType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000225fa
- (void)_preAuthorizeDiagnosisKeysWithSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000223ef
- (void)preAuthorizeDiagnosisKeysWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002219c
- (void)_getExposureWindowsCompleted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021c06
- (void)_getExposureWindowsFromIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021af1
- (id)getExposureWindowsFromSummary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021a14
- (void)_getExposureInfoCompleted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021665
- (id)getExposureInfoFromSummary:(id)arg1 userExplanation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021486
- (id)detectExposuresWithConfiguration:(id)arg1 diagnosisKeyURLs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000211b9
- (id)detectExposuresWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002119d
- (void)setTravelStatusEnabled:(_Bool)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020f0d
- (void)setTravelStatusEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020d04
- (void)getTravelStatusEnabledForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020a5a
- (void)getTravelStatusEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020849
- (void)getRegionMonitorEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020638
- (void)setRegionHistoryEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002042f
- (void)getRegionHistoryEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002021e
- (void)_setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001fe09
- (void)setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001fdf7
- (void)setPreAuthorizeDiagnosisKeysEnabled:(_Bool)arg1 region:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001fddf
- (void)getPreAuthorizeDiagnosisKeysEnabledForRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fa97
- (void)pauseWithExpiration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f829
- (void)setPaused:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f5e0
- (void)setExposureNotificationEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f2f4
- (void)_xpcHandleStatusChanged:(id)arg1 initial:(_Bool)arg2;	// IMP=0x000000000001ec48
- (void)_xpcHandlePreAuthorizedDiagnosisKeysAvailable:(id)arg1;	// IMP=0x000000000001e801
- (void)_xpcHandleActivity:(id)arg1;	// IMP=0x000000000001e7be
- (void)_xpcReceivedMessage:(id)arg1;	// IMP=0x000000000001e6ee
- (void)_xpcReceivedEvent:(id)arg1;	// IMP=0x000000000001e522
- (void)_tccCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e47e
- (void)getUserTraveledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e1bc
- (void)_entitlementCheckUpdate:(id)arg1;	// IMP=0x000000000001dfce
- (void)_entitlementCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ddce
- (void)_invalidated;	// IMP=0x000000000001dcf9
- (void)_invalidate;	// IMP=0x000000000001dc57
- (void)invalidate;	// IMP=0x000000000001db75
- (void)_interrupted;	// IMP=0x000000000001daed
- (id)_ensureXPCStarted;	// IMP=0x000000000001d9b5
- (void)_reactivate;	// IMP=0x000000000001d868
- (_Bool)_setActivationPropertiesOnRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d72b
- (void)_activateInitial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d474
- (void)activateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d2a0
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000001d26b
- (id)description;	// IMP=0x000000000001d254
- (void)dealloc;	// IMP=0x000000000001d20b
- (id)init;	// IMP=0x000000000001d193

@end

