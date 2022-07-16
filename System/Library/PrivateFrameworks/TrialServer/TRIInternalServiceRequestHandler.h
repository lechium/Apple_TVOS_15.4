//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIXPCInternalServiceProtocol-Protocol.h>

@class TRIXPCServerContextPromise;
@protocol TRITrialInternalEntitled;

@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol>
{
    TRIXPCServerContextPromise *_promise;	// 8 = 0x8
    id <TRITrialInternalEntitled> _entitlementWitness;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003fbb3
- (void)immediatelySchedulePostUpgradeActivityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f9af
- (void)activeExperimentInformationWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e255
- (void)_experimentRecordsWithDeploymentEnvironments:(id)arg1 privacyFilterPolicy:(unsigned char)arg2 serverContext:(id)arg3 taskQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000003d8cb
- (void)activeRolloutInformationWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003be9f
- (void)setSubscription:(id)arg1 namespaceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003bc51
- (void)subscriptionForNamespaceName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ba53
- (void)dynamicNamespaceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b64d
- (void)startDownloadNamespaceWithName:(id)arg1 teamId:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003af61
- (void)deregisterNamespaceWithNamespaceName:(id)arg1 teamId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003a8b3
- (void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000039f4e
- (void)resumeSQLiteCKDatabaseQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039be3
- (void)suspendSQLiteCKDatabaseQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039878
- (void)setFailureInjectionDelegate:(id)arg1;	// IMP=0x0000000000039571
- (void)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000038eff
- (void)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003891d
- (void)submitTask:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038309
- (void)rolloutNotificationWithLatestDeploymentForRolloutId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000037a80
- (void)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003711f
- (void)taskRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036d37
- (id)initWithPromise:(id)arg1 entitlementWitness:(id)arg2;	// IMP=0x0000000000036c29

@end
