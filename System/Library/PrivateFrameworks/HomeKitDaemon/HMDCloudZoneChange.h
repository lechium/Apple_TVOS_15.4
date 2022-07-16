//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, HMDCloudGroupChange, HMDCloudZone, NSArray, NSUUID;

@interface HMDCloudZoneChange : HMFObject
{
    _Bool _temporaryCache;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    HMDCloudZone *_cloudZone;	// 24 = 0x18
    HMDCloudGroupChange *_rootGroupChange;	// 32 = 0x20
}

+ (id)shortDescription;	// IMP=0x00000000008977d3
- (void).cxx_destruct;	// IMP=0x0000000000897793
@property(retain, nonatomic) HMDCloudGroupChange *rootGroupChange; // @synthesize rootGroupChange=_rootGroupChange;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=isTemporaryCache) _Bool temporaryCache; // @synthesize temporaryCache=_temporaryCache;
@property(readonly, nonatomic) NSArray *objectChanges;
- (id)changeWithRecordName:(id)arg1;	// IMP=0x000000000089764d
- (id)changeWithObjectID:(id)arg1;	// IMP=0x00000000008975ca
- (void)flushAllChangesToCache;	// IMP=0x000000000089758d
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;	// IMP=0x000000000089751b
- (void)resetRecordWithRecordID:(id)arg1;	// IMP=0x00000000008974a9
- (void)setSaveAsProcessedWithRecord:(id)arg1;	// IMP=0x0000000000897437
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;	// IMP=0x00000000008973c5
- (_Bool)moreChangesToProcess;	// IMP=0x0000000000897381
- (void)setAllChangedAsProcessed;	// IMP=0x0000000000897344
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;	// IMP=0x00000000008972d2
- (void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000089724c
- (id)cachedCloudRecordWithObjectID:(id)arg1;	// IMP=0x00000000008971c9
@property(readonly) _Bool doRecordsExistInCache;
- (_Bool)doesRecordExistInCacheWithObjectID:(id)arg1;	// IMP=0x0000000000897104
- (_Bool)doesRecordExistWithObjectID:(id)arg1;	// IMP=0x0000000000897083
@property(readonly, nonatomic) _Bool hasValidChanges;
- (void)removeChangeWithObjectID:(id)arg1;	// IMP=0x0000000000896fcd
- (void)addChangeWithDeletedRecordID:(id)arg1;	// IMP=0x0000000000896f5b
- (void)addChangeWithRecord:(id)arg1;	// IMP=0x0000000000896ee9
- (void)addChangeWithObjectChange:(id)arg1;	// IMP=0x0000000000896e77
@property(readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property(readonly, nonatomic) _Bool controllerIdentifierChanged;
@property(readonly, nonatomic) _Bool encryptionFailed;
@property(readonly, nonatomic) _Bool decryptionFailed;
- (id)description;	// IMP=0x0000000000896c28
- (id)shortDescription;	// IMP=0x0000000000896b8d
- (id)initWithZone:(id)arg1 temporaryCache:(_Bool)arg2;	// IMP=0x00000000008969b6
- (id)init;	// IMP=0x000000000089690e

@end

