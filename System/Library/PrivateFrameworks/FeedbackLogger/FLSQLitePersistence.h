//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLLoggingContext, NSDate, NSString;
@protocol OS_os_log;

@interface FLSQLitePersistence : NSObject
{
    _Atomic _Bool _configured;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    struct sqlite3 *_db;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    FLLoggingContext *_context;	// 40 = 0x28
    struct sqlite3_stmt *_insertRecordsStatement;	// 48 = 0x30
    struct sqlite3_stmt *_iteratePayloadStatement;	// 56 = 0x38
    NSString *_storeIdentifier;	// 64 = 0x40
    unsigned long long _maxBatchPayloadInBytes;	// 72 = 0x48
    unsigned long long _maxAllowedDatabaseSizeInBytes;	// 80 = 0x50
    NSString *_currentBatchIdentifier;	// 88 = 0x58
    NSDate *_currentBatchCreationDate;	// 96 = 0x60
    unsigned long long _currentBatchPayloadSize;	// 104 = 0x68
    double _batchMaximumDuration;	// 112 = 0x70
}

+ (id)uploadStatusDescription:(int)arg1;	// IMP=0x0000000000006ddc
+ (id)batchStatusDescription:(int)arg1;	// IMP=0x0000000000008c34
- (void).cxx_destruct;	// IMP=0x000000000000b28f
@property(nonatomic) double batchMaximumDuration; // @synthesize batchMaximumDuration=_batchMaximumDuration;
@property(nonatomic) unsigned long long currentBatchPayloadSize; // @synthesize currentBatchPayloadSize=_currentBatchPayloadSize;
@property(copy, nonatomic) NSDate *currentBatchCreationDate; // @synthesize currentBatchCreationDate=_currentBatchCreationDate;
@property(copy, nonatomic) NSString *currentBatchIdentifier; // @synthesize currentBatchIdentifier=_currentBatchIdentifier;
@property(nonatomic) unsigned long long maxAllowedDatabaseSizeInBytes; // @synthesize maxAllowedDatabaseSizeInBytes=_maxAllowedDatabaseSizeInBytes;
@property(nonatomic) unsigned long long maxBatchPayloadInBytes; // @synthesize maxBatchPayloadInBytes=_maxBatchPayloadInBytes;
@property(nonatomic) _Atomic _Bool configured; // @synthesize configured=_configured;
@property(readonly, copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(nonatomic) struct sqlite3_stmt *iteratePayloadStatement; // @synthesize iteratePayloadStatement=_iteratePayloadStatement;
@property(nonatomic) struct sqlite3_stmt *insertRecordsStatement; // @synthesize insertRecordsStatement=_insertRecordsStatement;
@property(retain, nonatomic) FLLoggingContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(readonly, copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (_Bool)deleteDatabase;	// IMP=0x000000000000adc5
- (_Bool)createDatabase;	// IMP=0x000000000000ad83
- (_Bool)getIntValueForPragma:(id)arg1 into:(inout int *)arg2;	// IMP=0x000000000000abf8
- (_Bool)iteratePayloadForBatch:(id)arg1 codeblock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a990
- (_Bool)executeInTransactionMultipleSQLStatements:(id)arg1;	// IMP=0x000000000000a872
- (_Bool)executeSQLStatement:(const char *)arg1;	// IMP=0x000000000000a85b
- (_Bool)executeSQLStatement:(const char *)arg1 usingTransaction:(_Bool)arg2;	// IMP=0x000000000000a6d7
- (_Bool)tryPrepare:(const char *)arg1 preparedStatement:(inout struct sqlite3_stmt **)arg2;	// IMP=0x000000000000a5ff
- (_Bool)tryRolloverBatchIfNecessary:(unsigned long long)arg1;	// IMP=0x000000000000a2ad
- (_Bool)open;	// IMP=0x000000000000a09a
- (id)persist:(id)arg1;	// IMP=0x0000000000009a44
- (_Bool)initializeConnectionForUseBy:(int)arg1;	// IMP=0x000000000000979c
- (void)dealloc;	// IMP=0x0000000000009723
- (id)initWithStoreId:(id)arg1 loggingContext:(id)arg2;	// IMP=0x0000000000009510
- (_Bool)deleteAllUploads;	// IMP=0x0000000000006d35
- (_Bool)__deleteStatementHelper:(const char *)arg1 forUploadId:(id)arg2;	// IMP=0x0000000000006b48
- (_Bool)deleteUploadWithIdentifier:(id)arg1;	// IMP=0x00000000000069f7
- (_Bool)iterateUploadsWithCodeblock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000064ee
- (id)getUploadRecordWithId:(id)arg1;	// IMP=0x0000000000005ff8
- (id)persistUploadPayload:(id)arg1;	// IMP=0x0000000000005a6d
- (long long)cleanupPurgableUploads;	// IMP=0x0000000000005a22
- (_Bool)markUploadsForPurge;	// IMP=0x0000000000005a09
- (long long)doUploadHousekeeping;	// IMP=0x0000000000005540
- (_Bool)recoverOrphanedProcessingUploads;	// IMP=0x0000000000005527
- (_Bool)updateStatusForUpload:(id)arg1 toStatus:(int)arg2;	// IMP=0x0000000000005466
- (_Bool)_updateMetadataHelperForUpload:(id)arg1 query:(const char *)arg2;	// IMP=0x0000000000005309
- (_Bool)_updateStatusHelperForUpload:(id)arg1 toStatus:(int)arg2;	// IMP=0x0000000000005199
- (id)getUploadsRangeStart:(long long)arg1 end:(long long)arg2;	// IMP=0x0000000000004ded
- (id)_getUploadIdsHelper:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000000004cfa
- (id)getPurgableUploadIds;	// IMP=0x0000000000004bcb
- (id)getUploadIdsWithAllStatuses;	// IMP=0x0000000000004a9c
- (id)getUploadIdsWithStatus:(int)arg1;	// IMP=0x0000000000004951
- (_Bool)purgeAllBatches;	// IMP=0x0000000000008b8d
- (_Bool)__purgeStatementHelper:(const char *)arg1 forBatchId:(id)arg2;	// IMP=0x00000000000089a0
- (_Bool)purgeBatch:(id)arg1;	// IMP=0x000000000000878d
- (long long)doBatchesHousekeeping;	// IMP=0x0000000000008742
- (_Bool)markBatchesforPurge;	// IMP=0x0000000000008729
- (_Bool)recoverOrphanedProcessingBatches;	// IMP=0x0000000000008710
- (_Bool)closeOpenBatch;	// IMP=0x0000000000008535
- (_Bool)forceCloseOpenBatches;	// IMP=0x00000000000084aa
- (_Bool)closeAllBatches;	// IMP=0x0000000000008498
- (_Bool)closeOrphanedBatches;	// IMP=0x00000000000082dd
- (_Bool)initializeNewBatch;	// IMP=0x0000000000007ee4
- (int)getDataVersion;	// IMP=0x0000000000007e4a
- (_Bool)updateStatusForBatch:(id)arg1 toStatus:(int)arg2;	// IMP=0x0000000000007d89
- (_Bool)_updateMetadataHelperForBatch:(id)arg1 query:(const char *)arg2;	// IMP=0x0000000000007c5c
- (_Bool)_updateStatusHelperForBatch:(id)arg1 toStatus:(int)arg2;	// IMP=0x0000000000007aed
- (_Bool)getBatchMetadata:(id)arg1 batchMetadata:(inout id *)arg2;	// IMP=0x0000000000007690
- (id)getRecordsRangeStart:(long long)arg1 end:(long long)arg2;	// IMP=0x00000000000072e4
- (id)_getBatchIdsHelper:(struct sqlite3_stmt *)arg1;	// IMP=0x00000000000071f1
- (id)getPurgableBatchIds;	// IMP=0x00000000000070c2
- (id)getBatchIdsWithAllStatuses;	// IMP=0x0000000000006f93
- (id)getBatchIdsWithStatus:(int)arg1;	// IMP=0x0000000000006e48
- (_Bool)setDatabaseSizeLimit;	// IMP=0x00000000000092c7
- (unsigned long long)getCurrentDatabaseSize;	// IMP=0x000000000000925c
- (int)getSchemaVersion;	// IMP=0x00000000000091c2
- (_Bool)updateSchema;	// IMP=0x0000000000008cfe
- (_Bool)isSchemaReady;	// IMP=0x0000000000008ce5
- (_Bool)prepareSchema;	// IMP=0x0000000000008cac
- (void)observeInsertionAtRow:(long long)arg1 observer:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c182
- (id)registerInsertionObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bf19
- (long long)maxRowId;	// IMP=0x000000000000bdf6

@end

