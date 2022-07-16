//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDContainer, CKSQLite, NSDate, NSNumber;

@interface CKDRecordCache : NSObject
{
    CKSQLite *_db;	// 8 = 0x8
    CKDContainer *_container;	// 16 = 0x10
    long long _scope;	// 24 = 0x18
    NSNumber *_explicitCacheSizeLimit;	// 32 = 0x20
    NSDate *_lastExpiryAttempt;	// 40 = 0x28
}

+ (id)_expiryDateFormatter;	// IMP=0x0000000000009ed4
- (void).cxx_destruct;	// IMP=0x000000000000acf3
@property(retain, nonatomic) NSDate *lastExpiryAttempt; // @synthesize lastExpiryAttempt=_lastExpiryAttempt;
@property(retain, nonatomic) NSNumber *explicitCacheSizeLimit; // @synthesize explicitCacheSizeLimit=_explicitCacheSizeLimit;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) __weak CKDContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) CKSQLite *db; // @synthesize db=_db;
- (void)scheduleRecordExpirationWithExpiryDate:(id)arg1;	// IMP=0x000000000000a1ab
- (unsigned long long)recordCacheSizeLimit;	// IMP=0x000000000000a0f5
- (void)_attemptRecordExpiryIfNeeded;	// IMP=0x0000000000009fbf
- (unsigned long long)_lockedSizeOfAllRecordsInDb;	// IMP=0x0000000000009f44
- (void)clearAssetAuthTokensForRecord:(id)arg1;	// IMP=0x0000000000009a3f
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1;	// IMP=0x0000000000009886
- (void)clearAllRecordsForZoneWithID:(id)arg1;	// IMP=0x00000000000094cd
- (void)clearAllRecords;	// IMP=0x00000000000091a1
- (void)clearAllRecordsInScope;	// IMP=0x0000000000008e2f
- (void)deleteRecordWithID:(id)arg1;	// IMP=0x000000000000886b
- (id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2;	// IMP=0x0000000000007fbd
- (void)addRecord:(id)arg1 knownUserKeys:(id)arg2;	// IMP=0x0000000000006ebb
- (unsigned long long)numberOfRecordsWithID:(id)arg1;	// IMP=0x0000000000006a55
- (id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2;	// IMP=0x00000000000059bf
- (id)recordWithID:(id)arg1 requiredKeys:(id)arg2;	// IMP=0x0000000000005859
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;	// IMP=0x00000000000054b9
- (id)_recordWithID:(id)arg1 requiredKeys:(id)arg2;	// IMP=0x0000000000004828
- (_Bool)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;	// IMP=0x0000000000004354
- (_Bool)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;	// IMP=0x00000000000040e1
- (id)_dsid;	// IMP=0x0000000000004013
- (void)replaceDatabase:(id)arg1;	// IMP=0x0000000000003fc1
- (void)releaseDatabase;	// IMP=0x0000000000003f61
- (id)initWithDatabase:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x0000000000003d24

@end

