//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSFetchRequest, NSNumber, NSPersistentHistoryToken;

@interface NSPersistentHistoryChangeRequest
{
    NSPersistentHistoryToken *_token;	// 8 = 0x8
    long long _resultType;	// 16 = 0x10
    NSArray *_transactionIDs;	// 24 = 0x18
    NSNumber *_transactionNumber;	// 32 = 0x20
    struct __persistentHistoryChangeRequestDescriptionFlags {
        unsigned int _useQueryGenerationToken:1;
        unsigned int _deleteHistoryRequest:1;
        unsigned int _fetchTransactionForToken:1;
        unsigned int _percentageDeleteHistoryRequest:1;
        unsigned int _reservedPersistentHistoryChangeRequestDescription:28;
    } _persistentHistoryChangeRequestDescriptionFlags;	// 40 = 0x28
    id *_additionalPrivateIvars;	// 48 = 0x30
    unsigned long long _percentageOfDB;	// 56 = 0x38
}

+ (id)deleteHistoryBeforeToken:(id)arg1 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)arg2;	// IMP=0x00000000000128e0
+ (id)deleteHistoryBeforeDate:(id)arg1 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)arg2;	// IMP=0x00000000000128a7
+ (id)deleteHistoryBeforeTransaction:(id)arg1;	// IMP=0x0000000000012857
+ (id)deleteHistoryBeforeToken:(id)arg1;	// IMP=0x0000000000012823
+ (id)deleteHistoryBeforeDate:(id)arg1;	// IMP=0x00000000000127ef
+ (id)fetchHistoryWithFetchRequest:(id)arg1;	// IMP=0x00000000000127c0
+ (id)fetchHistoryTransactionForToken:(id)arg1;	// IMP=0x0000000000012789
+ (id)fetchHistoryAfterTransaction:(id)arg1;	// IMP=0x000000000001273e
+ (id)fetchHistoryAfterToken:(id)arg1;	// IMP=0x000000000001270f
+ (id)fetchHistoryAfterDate:(id)arg1;	// IMP=0x00000000000126e0
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 withPolicy:(id)arg3;	// IMP=0x00000000000052b3
@property(readonly) NSPersistentHistoryToken *token; // @synthesize token=_token;
- (id)debugDescription;	// IMP=0x0000000000014339
- (id)description;	// IMP=0x00000000000142bf
- (id)predicate;	// IMP=0x0000000000013dfd
- (id)predicateForStoreIdentifier:(id)arg1;	// IMP=0x0000000000013c5f
- (_Bool)includesSubentities;	// IMP=0x0000000000013c57
@property(retain, nonatomic) NSFetchRequest *fetchRequest;
- (void)setFetchBatchSize:(unsigned long long)arg1;	// IMP=0x0000000000013b87
- (unsigned long long)fetchBatchSize;	// IMP=0x0000000000013b5d
- (void)setFetchOffset:(unsigned long long)arg1;	// IMP=0x0000000000013ae3
- (unsigned long long)fetchOffset;	// IMP=0x0000000000013ab9
- (void)setFetchLimit:(unsigned long long)arg1;	// IMP=0x0000000000013a3f
- (unsigned long long)fetchLimit;	// IMP=0x0000000000013a15
- (void)setUseQueryGenerationToken:(_Bool)arg1;	// IMP=0x00000000000139fd
- (_Bool)useQueryGenerationToken;	// IMP=0x00000000000139eb
- (unsigned long long)percentageOfDB;	// IMP=0x00000000000139da
- (_Bool)isPercentageDelete;	// IMP=0x00000000000139c5
- (_Bool)isDelete;	// IMP=0x00000000000139b1
@property long long resultType; // @synthesize resultType=_resultType;
- (_Bool)isFetchTransactionForToken;	// IMP=0x0000000000013959
- (id)date;	// IMP=0x0000000000013945
- (id)entityNameToFetch;	// IMP=0x0000000000013807
- (id)propertiesToFetchForEntity:(id)arg1 includeTransactionStrings:(_Bool)arg2;	// IMP=0x0000000000013225
- (id)propertiesToFetchForEntity:(id)arg1;	// IMP=0x000000000001320e
- (id)propertiesToFetch;	// IMP=0x0000000000013206
- (id)transactionIDs;	// IMP=0x00000000000131f5
- (id)transactionNumber;	// IMP=0x00000000000131e4
- (unsigned long long)requestType;	// IMP=0x00000000000131d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012fc3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012e72
- (void)dealloc;	// IMP=0x0000000000012da2
- (id)initWithTransactionToken:(id)arg1;	// IMP=0x0000000000012d44
- (id)initWithToken:(id)arg1 delete:(_Bool)arg2 percentageOfDB:(unsigned long long)arg3;	// IMP=0x0000000000012cb4
- (id)initWithToken:(id)arg1 delete:(_Bool)arg2;	// IMP=0x0000000000012c9f
- (id)initWithToken:(id)arg1;	// IMP=0x0000000000012c8b
- (id)initWithTransactionID:(id)arg1 delete:(_Bool)arg2 transactionOnly:(_Bool)arg3 percentageOfDB:(unsigned long long)arg4;	// IMP=0x0000000000012bd3
- (id)initWithTransactionIDs:(id)arg1;	// IMP=0x0000000000012b89
- (id)initWithFetchRequest:(id)arg1;	// IMP=0x0000000000012a55
- (id)initWithDate:(id)arg1 delete:(_Bool)arg2 percentageOfDB:(unsigned long long)arg3;	// IMP=0x00000000000129a2
- (id)initWithDate:(id)arg1 delete:(_Bool)arg2;	// IMP=0x000000000001298d
- (id)initWithDate:(id)arg1;	// IMP=0x0000000000012979
- (id)init;	// IMP=0x0000000000012919
- (id)encodeForXPC;	// IMP=0x00000000000051a3

@end

