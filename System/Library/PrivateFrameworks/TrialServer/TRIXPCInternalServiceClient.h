//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIInternalServiceProtocol-Protocol.h>

@class _PASXPCClientHelper;

@interface TRIXPCInternalServiceClient : NSObject <TRIInternalServiceProtocol>
{
    _PASXPCClientHelper *_helper;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000eda45
- (_Bool)immediatelySchedulePostUpgradeActivityWithError:(id *)arg1;	// IMP=0x00000000000ed891
- (_Bool)setSubscription:(id)arg1 namespaceName:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ed5d7
- (id)subscriptionForNamespaceName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ed360
- (id)dynamicNamespaceRecordsWithError:(id *)arg1;	// IMP=0x00000000000ed13e
- (_Bool)startNamespaceDownloadWithName:(id)arg1 withTeamId:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ecd72
- (_Bool)deregisterNamespaceWithNamespaceName:(id)arg1 withTeamId:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ec9d2
- (_Bool)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 withTeamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 error:(id *)arg8;	// IMP=0x00000000000ec566
- (_Bool)resumeSQLiteCKDatabaseQueueWithError:(id *)arg1;	// IMP=0x00000000000ec52b
- (_Bool)suspendSQLiteCKDatabaseQueueWithError:(id *)arg1;	// IMP=0x00000000000ec4f0
- (_Bool)setFailureInjectionDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ec3c1
- (_Bool)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ec0fa
- (id)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ebe7c
- (_Bool)submitTask:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000eba0d
- (id)rolloutNotificationWithLatestDeploymentForRolloutId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000eb719
- (id)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000eb40e
- (id)taskRecordsWithError:(id *)arg1;	// IMP=0x00000000000eb1ec
- (_Bool)_performSyncXpcWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb070
- (id)init;	// IMP=0x00000000000ead63

@end

