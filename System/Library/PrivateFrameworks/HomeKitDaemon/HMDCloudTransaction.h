//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, CKServerChangeToken, HMDCloudChange, HMDCloudZone, HMDCloudZoneChange, HMFOSTransaction, NSArray, NSUUID;

@interface HMDCloudTransaction : HMFObject
{
    _Bool _needConflictResolution;	// 8 = 0x8
    _Bool _iCloudSwitchStateEnabled;	// 9 = 0x9
    _Bool _temporaryCache;	// 10 = 0xa
    _Bool _zoneHasNoLocalData;	// 11 = 0xb
    _Bool _createZone;	// 12 = 0xc
    _Bool _zoneWasCreated;	// 13 = 0xd
    _Bool _deleteZone;	// 14 = 0xe
    _Bool _zoneWasDeleted;	// 15 = 0xf
    HMFOSTransaction *_osTransaction;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    HMDCloudZone *_cloudZone;	// 32 = 0x20
    CKServerChangeToken *_updatedServerChangeToken;	// 40 = 0x28
    NSArray *_recordsToSave;	// 48 = 0x30
    NSArray *_recordsToDelete;	// 56 = 0x38
    unsigned long long _transactionType;	// 64 = 0x40
    HMDCloudZoneChange *_cloudZoneChange;	// 72 = 0x48
    HMDCloudChange *_homeDataChange;	// 80 = 0x50
}

+ (id)shortDescription;	// IMP=0x0000000000a7c5db
- (void).cxx_destruct;	// IMP=0x0000000000a7c546
@property(retain, nonatomic) HMDCloudChange *homeDataChange; // @synthesize homeDataChange=_homeDataChange;
@property(retain, nonatomic) HMDCloudZoneChange *cloudZoneChange; // @synthesize cloudZoneChange=_cloudZoneChange;
@property(nonatomic) unsigned long long transactionType; // @synthesize transactionType=_transactionType;
@property(readonly, nonatomic) NSArray *recordsToDelete; // @synthesize recordsToDelete=_recordsToDelete;
@property(readonly, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property(nonatomic, getter=wasZoneDeleted) _Bool zoneWasDeleted; // @synthesize zoneWasDeleted=_zoneWasDeleted;
@property(nonatomic, getter=shouldDeleteZone) _Bool deleteZone; // @synthesize deleteZone=_deleteZone;
@property(nonatomic, getter=wasZoneCreated) _Bool zoneWasCreated; // @synthesize zoneWasCreated=_zoneWasCreated;
@property(nonatomic, getter=shouldCreateZone) _Bool createZone; // @synthesize createZone=_createZone;
@property(readonly, nonatomic) _Bool zoneHasNoLocalData; // @synthesize zoneHasNoLocalData=_zoneHasNoLocalData;
@property(readonly, nonatomic, getter=isTemporaryCache) _Bool temporaryCache; // @synthesize temporaryCache=_temporaryCache;
@property(retain, nonatomic) CKServerChangeToken *updatedServerChangeToken; // @synthesize updatedServerChangeToken=_updatedServerChangeToken;
@property(nonatomic) _Bool iCloudSwitchStateEnabled; // @synthesize iCloudSwitchStateEnabled=_iCloudSwitchStateEnabled;
@property(nonatomic) _Bool needConflictResolution; // @synthesize needConflictResolution=_needConflictResolution;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *objectChanges;
- (id)replayTransaction:(id)arg1 stagedTransaction:(id)arg2;	// IMP=0x0000000000a7bfe1
- (void)loadObjectChanges;	// IMP=0x0000000000a7bfbe
- (id)changeWithRecordName:(id)arg1;	// IMP=0x0000000000a7bf3b
- (id)changeWithObjectID:(id)arg1;	// IMP=0x0000000000a7beb8
@property(readonly, nonatomic, getter=isHomeTransaction) _Bool homeTransaction;
@property(readonly, nonatomic, getter=isHomeManagerTransaction) _Bool homeManagerTransaction;
@property(readonly, nonatomic, getter=isMetadataTransaction) _Bool metadataTransaction;
@property(readonly, nonatomic, getter=isLegacyTransaction) _Bool legacyTransaction;
- (void)updateCloudCache;	// IMP=0x0000000000a7bc98
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;	// IMP=0x0000000000a7bc26
- (void)resetRecordWithRecordID:(id)arg1;	// IMP=0x0000000000a7bbb4
- (void)setSaveAsProcessedWithRecord:(id)arg1;	// IMP=0x0000000000a7bb42
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a7bad0
- (_Bool)moreChangesToProcess;	// IMP=0x0000000000a7ba8c
- (void)setAllChangedAsProcessed;	// IMP=0x0000000000a7ba4f
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a7b8bb
- (void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a7b835
- (id)cachedCloudRecordWithObjectID:(id)arg1;	// IMP=0x0000000000a7b7b2
@property(readonly) _Bool doRecordsExistInCache;
- (_Bool)doesRecordExistInCacheWithObjectID:(id)arg1;	// IMP=0x0000000000a7b6f7
- (_Bool)doesRecordExistWithObjectID:(id)arg1;	// IMP=0x0000000000a7b680
@property(readonly, nonatomic) _Bool hasValidChanges;
- (void)removeChangeWithObjectID:(id)arg1;	// IMP=0x0000000000a7b5ca
- (void)addChangeWithDeletedRecordID:(id)arg1;	// IMP=0x0000000000a7b558
- (void)addChangeWithRecord:(id)arg1;	// IMP=0x0000000000a7b4e6
- (void)addChangeWithObjectChange:(id)arg1;	// IMP=0x0000000000a7b474
@property(readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property(readonly, nonatomic) _Bool controllerIdentifierChanged;
@property(readonly, nonatomic) _Bool encryptionFailed;
@property(readonly, nonatomic) _Bool decryptionFailed;
@property(retain, nonatomic) HMFOSTransaction *osTransaction; // @synthesize osTransaction=_osTransaction;
- (id)description;	// IMP=0x0000000000a7b198
- (id)shortDescription;	// IMP=0x0000000000a7b066
- (void)updateCloudZone:(id)arg1;	// IMP=0x0000000000a7afe1
- (id)initWithType:(unsigned long long)arg1 temporaryCache:(_Bool)arg2 noLocalData:(_Bool)arg3;	// IMP=0x0000000000a7af3e
- (id)initWithType:(unsigned long long)arg1 temporaryCache:(_Bool)arg2;	// IMP=0x0000000000a7af29
- (id)init;	// IMP=0x0000000000a7ae81

@end

