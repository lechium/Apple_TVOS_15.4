//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBMirrorProtocol-Protocol.h>
#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class CKDatabase, HMBCloudDatabase, HMBCloudZoneConfiguration, HMBCloudZoneID, HMBCloudZoneShareModel, HMBLocalZone, HMBModelContainer, HMFUnfairLock, NAFuture, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSUUID;
@protocol HMBCloudZoneDelegate, HMBCloudZoneRebuilder;

@interface HMBCloudZone : HMFObject <HMFLogging, HMBMirrorProtocol>
{
    _Bool _needsZoneCreation;	// 8 = 0x8
    _Bool _needsZoneDeletion;	// 9 = 0x9
    NAFuture *_startUp;	// 16 = 0x10
    HMBCloudDatabase *_cloudDatabase;	// 24 = 0x18
    id <HMBCloudZoneDelegate> _delegate;	// 32 = 0x20
    HMBCloudZoneConfiguration *_configuration;	// 40 = 0x28
    HMBLocalZone *_localZone;	// 48 = 0x30
    CKDatabase *_database;	// 56 = 0x38
    HMBLocalZone *_stateZone;	// 64 = 0x40
    NSUUID *_stateModelID;	// 72 = 0x48
    HMBCloudZoneID *_zoneID;	// 80 = 0x50
    NSMapTable *_modelClassToRequiresPostProcessingMap;	// 88 = 0x58
    NSMutableDictionary *_inProgressPushFuturesByOutputBlockRow;	// 96 = 0x60
    HMFUnfairLock *_propertyLock;	// 104 = 0x68
    NSString *_deviceIdentifier;	// 112 = 0x70
    NAFuture *_shutdownFuture;	// 120 = 0x78
    NAFuture *_destroyFuture;	// 128 = 0x80
    id <HMBCloudZoneRebuilder> _rebuilder;	// 136 = 0x88
    NSOperationQueue *_recordOperationQueue;	// 144 = 0x90
    NSOperationQueue *_shareOperationQueue;	// 152 = 0x98
    NAFuture *_queuedCloudPullFuture;	// 160 = 0xa0
    NSMutableSet *_queuedFetchRecordsContexts;	// 168 = 0xa8
    HMBCloudZoneShareModel *_shareModel;	// 176 = 0xb0
    NSMutableDictionary *_shareParticipantModelsByClientIdentifier;	// 184 = 0xb8
    HMBModelContainer *_modelContainer;	// 192 = 0xc0
    NSArray *_defaultDesiredKeys;	// 200 = 0xc8
}

+ (id)logCategory;	// IMP=0x000000000001a551
- (void).cxx_destruct;	// IMP=0x0000000000018f73
@property(retain, nonatomic) NSArray *defaultDesiredKeys; // @synthesize defaultDesiredKeys=_defaultDesiredKeys;
@property(retain, nonatomic) HMBModelContainer *modelContainer; // @synthesize modelContainer=_modelContainer;
@property(readonly, nonatomic) NSMutableDictionary *shareParticipantModelsByClientIdentifier; // @synthesize shareParticipantModelsByClientIdentifier=_shareParticipantModelsByClientIdentifier;
@property(retain) HMBCloudZoneShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain) NSMutableSet *queuedFetchRecordsContexts; // @synthesize queuedFetchRecordsContexts=_queuedFetchRecordsContexts;
@property(retain) NAFuture *queuedCloudPullFuture; // @synthesize queuedCloudPullFuture=_queuedCloudPullFuture;
@property(readonly, nonatomic) NSOperationQueue *shareOperationQueue; // @synthesize shareOperationQueue=_shareOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *recordOperationQueue; // @synthesize recordOperationQueue=_recordOperationQueue;
@property(retain, nonatomic) id <HMBCloudZoneRebuilder> rebuilder; // @synthesize rebuilder=_rebuilder;
@property(retain, nonatomic) NAFuture *destroyFuture; // @synthesize destroyFuture=_destroyFuture;
@property(retain, nonatomic) NAFuture *shutdownFuture; // @synthesize shutdownFuture=_shutdownFuture;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) NSMutableDictionary *inProgressPushFuturesByOutputBlockRow; // @synthesize inProgressPushFuturesByOutputBlockRow=_inProgressPushFuturesByOutputBlockRow;
@property(readonly, nonatomic) NSMapTable *modelClassToRequiresPostProcessingMap; // @synthesize modelClassToRequiresPostProcessingMap=_modelClassToRequiresPostProcessingMap;
@property(retain, nonatomic) HMBCloudZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(readonly, nonatomic) _Bool needsZoneDeletion; // @synthesize needsZoneDeletion=_needsZoneDeletion;
@property(readonly, nonatomic) _Bool needsZoneCreation; // @synthesize needsZoneCreation=_needsZoneCreation;
@property(readonly, nonatomic) NSUUID *stateModelID; // @synthesize stateModelID=_stateModelID;
@property(nonatomic) __weak HMBLocalZone *stateZone; // @synthesize stateZone=_stateZone;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly, copy, nonatomic) HMBCloudZoneConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <HMBCloudZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(readonly, nonatomic) NAFuture *startUp; // @synthesize startUp=_startUp;
- (id)attributeDescriptions;	// IMP=0x0000000000018bd9
- (id)logIdentifier;	// IMP=0x0000000000018b89
- (void)handleDeletion;	// IMP=0x0000000000018abd
- (void)handleUpdatedInternalModels:(id)arg1;	// IMP=0x0000000000018681
- (_Bool)isInternalModel:(id)arg1;	// IMP=0x0000000000018595
- (id)flush;	// IMP=0x00000000000184f0
- (_Bool)startupWithModelContainer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001820f
- (void)_startUpWithPublicLocalZone:(id)arg1;	// IMP=0x0000000000017e9a
- (void)_startUpWithPrivateLocalZone:(id)arg1;	// IMP=0x00000000000179b2
- (void)startUpWithLocalZone:(id)arg1;	// IMP=0x00000000000177dd
- (void)notifyDelegateOfError:(id)arg1 forOperation:(id)arg2;	// IMP=0x0000000000017605
- (_Bool)retryCloudKitOperation:(id)arg1 afterError:(id)arg2 retryBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000173a9
- (id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x00000000000172d2
- (id)destroy;	// IMP=0x0000000000016f77
- (id)shutdown;	// IMP=0x0000000000016ec1
- (void)dealloc;	// IMP=0x0000000000016d88
- (id)initWithCloudDatabase:(id)arg1 configuration:(id)arg2 state:(id)arg3;	// IMP=0x000000000001697c
- (id)encodeRecordFromModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000003873
- (id)encodeRecordFromModel:(id)arg1 externalData:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000362b
- (id)decodeModelFromRecord:(id)arg1 externalRecordFields:(id)arg2 source:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000003558
@property(readonly, nonatomic) NAFuture *waitForPendingRebuild;
@property(readonly, nonatomic) long long keyStatus;
- (void)rebuild;	// IMP=0x0000000000003ebc
- (void)handleUpdatedRebuilderModel:(id)arg1;	// IMP=0x0000000000003cb1
- (void)handleZoneChangedNotification;	// IMP=0x0000000000003baf
@property(readonly, nonatomic, getter=isZoneRebuildInProgress) _Bool zoneRebuildInProgress;
- (void)handleLostKeys;	// IMP=0x0000000000003ab2
- (id)startUpRebuilderIfNeeded;	// IMP=0x00000000000039bf
- (id)decodeShareModelFromShare:(id)arg1;	// IMP=0x0000000000014c80
- (id)encodeShareModel:(id)arg1;	// IMP=0x0000000000014c35
- (id)pushRecordsToUpdate:(id)arg1 recordIDsToRemove:(id)arg2 configuration:(id)arg3 rollbackEnabled:(_Bool)arg4;	// IMP=0x000000000001c869
- (id)pushRecordsToUpdate:(id)arg1 recordIDsToRemove:(id)arg2 configuration:(id)arg3 rollbackEnabled:(_Bool)arg4 needsNewInvitationToken:(_Bool)arg5;	// IMP=0x000000000001a5b8
- (id)decodeManateeCloudFromRecord:(id)arg1 externalRecordFields:(id)arg2 source:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000025f42
- (id)encodeManateeCloudModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000025ac7
- (_Bool)populateManateeCloudRecord:(id)arg1 withModel:(id)arg2 encodingContext:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000257f4
- (id)recordIDForModel:(id)arg1;	// IMP=0x0000000000025705
- (_Bool)resolveConflicts:(id)arg1 options:(id)arg2;	// IMP=0x0000000000041102
- (id)performCloudPullWithFetchToken:(id)arg1 options:(id)arg2;	// IMP=0x00000000000450cd
- (id)performCloudPullWithOptions:(id)arg1;	// IMP=0x0000000000047dda
@property(readonly) _Bool hasPerformedInitialFetch;
- (id)unregisterSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x0000000000058cbd
- (id)registerSubscriptionForExternalRecordType:(id)arg1;	// IMP=0x0000000000058b36
@property(readonly, copy) NSSet *subscriptions;
- (id)_fetchCompleteModelsWithIDs:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000064800
- (id)fetchCompleteModels:(id)arg1 force:(_Bool)arg2;	// IMP=0x00000000000643f7
- (id)fetchCompleteModel:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000064302
- (id)fetchCompleteModelsWithIDs:(id)arg1;	// IMP=0x00000000000642a3
- (id)fetchCompleteModelWithID:(id)arg1;	// IMP=0x00000000000641b0
- (id)fetchCompleteModelsForRecordIDs:(id)arg1;	// IMP=0x0000000000063540
- (id)fetchCompleteModelForRecordID:(id)arg1;	// IMP=0x0000000000063452
- (id)fetchRecordWithRecordID:(id)arg1 canRetry:(_Bool)arg2;	// IMP=0x0000000000066eca
- (id)fetchRecordsWithRecordIDs:(id)arg1;	// IMP=0x0000000000066b89
- (void)_fetchRecordsForContexts:(id)arg1;	// IMP=0x00000000000669a4
- (id)_fetchRecordsWithRecordIDs:(id)arg1;	// IMP=0x0000000000066882
- (id)_triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x000000000006d85b
- (void)pushGroupWithBlockRow:(unsigned long long)arg1 tuples:(id)arg2 options:(id)arg3 activity:(id)arg4 completionPromise:(id)arg5;	// IMP=0x000000000006c417
- (id)_pushDeletedParticipantRecordIDs:(id)arg1;	// IMP=0x000000000007839c
- (id)_pushUpdatedShare:(id)arg1 participantRecord:(id)arg2;	// IMP=0x0000000000078235
- (id)_pushUpdatedShare:(id)arg1;	// IMP=0x0000000000078121
- (id)_addShareOperationAfterStartupWithName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000078020
- (id)_addShareOperationWithName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000077e6e
- (id)_leaveCloudShareRequestingNewInvitationToken:(_Bool)arg1 allowCloudPull:(_Bool)arg2;	// IMP=0x0000000000077a69
- (id)leaveCloudShareRequestingNewInvitationToken:(_Bool)arg1;	// IMP=0x0000000000077a04
- (id)_createShareModel;	// IMP=0x0000000000077728
- (id)createShareModel;	// IMP=0x00000000000776c6
- (void)handleUpdatedShareParticipantModels:(id)arg1;	// IMP=0x00000000000775d8
- (void)handleUpdatedShareModel:(id)arg1;	// IMP=0x00000000000771d6
- (_Bool)handleUpdatedShareParticipantRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076edd
- (_Bool)handleUpdatedShare:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000076d61
- (void)initializeShareModels;	// IMP=0x0000000000076211
- (id)participantWithClientIdentifier:(id)arg1;	// IMP=0x000000000007be59
@property(readonly, nonatomic) NSSet *participants;
- (id)_revokeShareForParticipant:(id)arg1 usingShare:(id)arg2;	// IMP=0x000000000007b8d7
- (id)revokeShareForParticipant:(id)arg1;	// IMP=0x000000000007b82c
- (id)_setWriteAccessEnabled:(_Bool)arg1 forParticipant:(id)arg2 usingShare:(id)arg3;	// IMP=0x000000000007b374
- (id)setWriteAccessEnabled:(_Bool)arg1 forParticipant:(id)arg2;	// IMP=0x000000000007b2c2
- (id)_fetchInvitationWithContext:(id)arg1 usingShare:(id)arg2;	// IMP=0x000000000007a949
- (id)fetchInvitationWithContext:(id)arg1;	// IMP=0x000000000007a89e
- (id)fetchCloudShareIDForShareParticipantClientIdentifier:(id)arg1;	// IMP=0x000000000007a7f3
- (id)fetchCurrentParticipantCloudShareID;	// IMP=0x000000000007a791
- (id)fetchOwnerParticipantCloudShareID;	// IMP=0x000000000007a72f
- (id)cloudFieldForEncoding:(unsigned long long)arg1;	// IMP=0x000000000008e631
- (id)cloudMetadataForModel:(id)arg1 usingEncoding:(unsigned long long)arg2;	// IMP=0x000000000008e47f
- (_Bool)populateV4CloudRecord:(id)arg1 withModel:(id)arg2 metadataFieldData:(id)arg3 startEncoding:(unsigned long long)arg4 endEncoding:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x000000000008decb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
