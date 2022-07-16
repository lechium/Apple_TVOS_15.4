//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBCloudPushObserver-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class CKContainer, CKContainerID, CKDatabase, HMBCloudCredentialsAvailabilityListener, HMBCloudDatabaseConfiguration, HMBCloudDatabaseStateModel, HMBLocalDatabase, HMBLocalZone, HMFUnfairLock, NAFuture, NSMutableDictionary, NSOperationQueue, NSSet, NSString;
@protocol HMBCloudDatabaseDataSource, HMBCloudDatabaseDelegate;

@interface HMBCloudDatabase : HMFObject <HMBCloudPushObserver, HMFLogging>
{
    id <HMBCloudDatabaseDelegate> _delegate;	// 8 = 0x8
    HMBCloudDatabaseConfiguration *_configuration;	// 16 = 0x10
    id <HMBCloudDatabaseDataSource> _dataSource;	// 24 = 0x18
    HMBLocalDatabase *_localDatabase;	// 32 = 0x20
    HMBLocalZone *_stateZone;	// 40 = 0x28
    HMFUnfairLock *_propertyLock;	// 48 = 0x30
    HMBCloudDatabaseStateModel *_privateDatabaseState;	// 56 = 0x38
    HMBCloudDatabaseStateModel *_sharedDatabaseState;	// 64 = 0x40
    HMBCloudDatabaseStateModel *_publicDatabaseState;	// 72 = 0x48
    NSMutableDictionary *_zoneStateByZoneID;	// 80 = 0x50
    CKContainer *_container;	// 88 = 0x58
    HMBCloudCredentialsAvailabilityListener *_credentialsAvailabilityListener;	// 96 = 0x60
    CKDatabase *_sharedDatabase;	// 104 = 0x68
    CKDatabase *_privateDatabase;	// 112 = 0x70
    CKDatabase *_publicDatabase;	// 120 = 0x78
    CDUnknownBlockType _cloudZoneFactory;	// 128 = 0x80
    NSOperationQueue *_invitationOperationQueue;	// 136 = 0x88
    NSOperationQueue *_databaseFetchOperationQueue;	// 144 = 0x90
    NAFuture *_initialCloudSyncFuture;	// 152 = 0x98
}

+ (id)logCategory;	// IMP=0x00000000000541c1
+ (id)extantDatabasesLock;	// IMP=0x0000000000054191
+ (id)extantDatabases;	// IMP=0x0000000000054129
- (void).cxx_destruct;	// IMP=0x000000000004df19
@property(retain, nonatomic) NAFuture *initialCloudSyncFuture; // @synthesize initialCloudSyncFuture=_initialCloudSyncFuture;
@property(readonly, nonatomic) NSOperationQueue *databaseFetchOperationQueue; // @synthesize databaseFetchOperationQueue=_databaseFetchOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *invitationOperationQueue; // @synthesize invitationOperationQueue=_invitationOperationQueue;
@property(copy, nonatomic) CDUnknownBlockType cloudZoneFactory; // @synthesize cloudZoneFactory=_cloudZoneFactory;
@property(readonly, nonatomic) CKDatabase *publicDatabase; // @synthesize publicDatabase=_publicDatabase;
@property(readonly, nonatomic) CKDatabase *privateDatabase; // @synthesize privateDatabase=_privateDatabase;
@property(readonly, nonatomic) CKDatabase *sharedDatabase; // @synthesize sharedDatabase=_sharedDatabase;
@property(readonly, nonatomic) HMBCloudCredentialsAvailabilityListener *credentialsAvailabilityListener; // @synthesize credentialsAvailabilityListener=_credentialsAvailabilityListener;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSMutableDictionary *zoneStateByZoneID; // @synthesize zoneStateByZoneID=_zoneStateByZoneID;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *publicDatabaseState; // @synthesize publicDatabaseState=_publicDatabaseState;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *sharedDatabaseState; // @synthesize sharedDatabaseState=_sharedDatabaseState;
@property(retain, nonatomic) HMBCloudDatabaseStateModel *privateDatabaseState; // @synthesize privateDatabaseState=_privateDatabaseState;
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) HMBLocalZone *stateZone; // @synthesize stateZone=_stateZone;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(readonly, nonatomic) id <HMBCloudDatabaseDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) HMBCloudDatabaseConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <HMBCloudDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (id)attributeDescriptions;	// IMP=0x000000000004dc8d
- (id)logIdentifier;	// IMP=0x000000000004dc13
- (void)handler:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x000000000004dad0
- (void)handler:(id)arg1 didReceiveCKNotification:(id)arg2;	// IMP=0x000000000004d334
- (id)operationConfigurationWithProcessingOptions:(id)arg1;	// IMP=0x000000000004d24e
- (void)retryStartupBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d1d4
- (void)removeStateForZoneID:(id)arg1;	// IMP=0x000000000004d0e6
- (void)notifyDelegateOfError:(id)arg1 forOperation:(id)arg2;	// IMP=0x000000000004cebb
- (_Bool)_retryCloudKitOperationAfterError:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c7cd
- (_Bool)retryCloudKitOperation:(id)arg1 afterError:(id)arg2 retryBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004c74a
- (id)removeZoneWithID:(id)arg1;	// IMP=0x000000000004c2e0
- (id)openExistingSharedZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004c184
- (id)openExistingPrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004c028
- (id)openOrCreatePrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004bec9
- (void)handleRemovedZoneIDs:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x000000000004b6c9
- (void)handleUpdatedZonesIDs:(id)arg1;	// IMP=0x000000000004ad47
- (void)handleCreatedZoneIDs:(id)arg1;	// IMP=0x000000000004a80d
- (id)shutdown;	// IMP=0x000000000004a7f4
- (id)performAdministrativeFetchForDatabaseScope:(long long)arg1 withForce:(_Bool)arg2;	// IMP=0x000000000004a612
- (id)performAdministrativeFetchForAllDatabases:(_Bool)arg1;	// IMP=0x000000000004a5cd
- (void)addDatabaseOperation:(id)arg1 forScope:(long long)arg2;	// IMP=0x000000000004a543
- (void)addContainerOperation:(id)arg1;	// IMP=0x000000000004a4d1
- (id)waitForManateeAvailability;	// IMP=0x000000000004a3ec
- (void)_performInitialCloudSync;	// IMP=0x0000000000049e49
- (id)performInitialCloudSync;	// IMP=0x0000000000049bf4
@property(readonly, nonatomic) CKContainerID *containerID;
- (id)initWithLocalDatabase:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000048c65
- (id)initWithLocalDatabase:(id)arg1 stateZone:(id)arg2 container:(id)arg3 configuration:(id)arg4 databaseStateModelsByScope:(id)arg5 zoneStateModels:(id)arg6 credentialsAvailabilityListener:(id)arg7 dataSource:(id)arg8;	// IMP=0x000000000004853e
- (id)peformCodeOperationWithServiceName:(id)arg1 functionName:(id)arg2 request:(id)arg3 responseClass:(Class)arg4;	// IMP=0x0000000000033925
- (id)_acceptInvitation:(id)arg1;	// IMP=0x00000000000420dc
- (id)acceptInvitation:(id)arg1;	// IMP=0x0000000000041f18
- (id)removePrivateZoneWithID:(id)arg1;	// IMP=0x00000000000545f7
- (id)createPrivateZoneWithID:(id)arg1;	// IMP=0x00000000000543ae
- (id)fetchZonesOn:(id)arg1;	// IMP=0x000000000005428c
- (void)deallocForZoneWithID:(id)arg1;	// IMP=0x00000000000698ca
- (void)updateNeedsZoneDeletion:(_Bool)arg1 forZoneWithID:(id)arg2;	// IMP=0x0000000000069804
- (void)updateRebuildStatus:(id)arg1 forZoneWithID:(id)arg2;	// IMP=0x000000000006971c
- (id)serverChangeTokenForZoneWithID:(id)arg1;	// IMP=0x00000000000695a9
- (void)updateServerChangeToken:(id)arg1 forZoneWithID:(id)arg2;	// IMP=0x0000000000069496
- (void)updateServerChangeToken:(id)arg1 forDatabaseWithScope:(long long)arg2;	// IMP=0x00000000000693a9
- (id)subscriptionIDForZoneID:(id)arg1 recordType:(id)arg2;	// IMP=0x000000000006b837
- (id)subscriptionIDForCloudID:(id)arg1 recordType:(id)arg2;	// IMP=0x000000000006b708
- (id)fetchSubscriptionsOn:(id)arg1;	// IMP=0x000000000006b5e6
- (id)fetchCurrentUserRecordForDatabase:(id)arg1;	// IMP=0x00000000000807b4
- (id)acceptInvitationWithShareMetadata:(id)arg1;	// IMP=0x00000000000806d0
- (id)fetchShareMetadataForInvitation:(id)arg1;	// IMP=0x00000000000805ec
- (id)fetchParticipantWithLookupInfo:(id)arg1;	// IMP=0x0000000000080508
- (id)performCloudPullForScope:(long long)arg1;	// IMP=0x00000000000895ef
- (id)databaseStateForDatabaseScope:(long long)arg1;	// IMP=0x00000000000895b4
- (id)fetchZones:(_Bool)arg1;	// IMP=0x000000000008daa5
@property(readonly, nonatomic) NSSet *publicZoneIDs;
@property(readonly, nonatomic) NSSet *sharedZoneIDs;
@property(readonly, nonatomic) NSSet *privateZoneIDs;
- (id)_zonesWithScope:(long long)arg1;	// IMP=0x000000000008d784
- (id)registerPrivateSubscription:(id)arg1;	// IMP=0x00000000000a3ad2
- (id)unregisterSharedSubscriptionForSubscriptionID:(id)arg1;	// IMP=0x00000000000a394b
- (id)unregisterPrivateSubscriptionForSubscriptionID:(id)arg1;	// IMP=0x00000000000a37c4
- (id)subscriptionsForZoneWithID:(id)arg1;	// IMP=0x00000000000a3651
- (id)unregisterSubscription:(id)arg1 forZoneWithID:(id)arg2;	// IMP=0x00000000000a2f3c
- (id)registerSubscription:(id)arg1 forZoneWithID:(id)arg2;	// IMP=0x00000000000a28aa
- (id)pushSubscriptionsForDatabase:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToRemove:(id)arg3;	// IMP=0x00000000000a273c
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x00000000000a6f83
- (id)unregisterPrivateSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x00000000000a6dfc
- (id)registerSharedSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x00000000000a6c75
- (id)registerPrivateSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x00000000000a6aee
- (id)registerSubscriptionForExternalRecordType:(id)arg1 databaseState:(id)arg2;	// IMP=0x00000000000a65d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

