//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSManagedObjectContext, NSMutableDictionary, NSPersistentContainer, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SYDCoreDataStore : NSObject
{
    _Bool _shouldLogValues;	// 8 = 0x8
    NSPersistentContainer *__persistentContainer;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_persistentContainerQueue;	// 32 = 0x20
    NSString *_fileProtectionType;	// 40 = 0x28
    NSManagedObjectContext *_transactionContext;	// 48 = 0x30
    NSMutableDictionary *_contexts;	// 56 = 0x38
    NSLock *_contextsLock;	// 64 = 0x40
}

+ (_Bool)isInvalidTokenError:(id)arg1;	// IMP=0x004000000006ada5
+ (_Bool)isCorruptionError:(id)arg1;	// IMP=0x001000000006a8fa
+ (id)managedObjectModel;	// IMP=0x0010000000069a59
- (void).cxx_destruct;	// IMP=0x002000000006af46
@property(retain, nonatomic) NSLock *contextsLock; // @synthesize contextsLock=_contextsLock;
- (id);	// IMP=0x001000000006af2b
@property(retain, nonatomic) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSManagedObjectContext *transactionContext; // @synthesize transactionContext=_transactionContext;
@property(retain, nonatomic) NSString *fileProtectionType; // @synthesize fileProtectionType=_fileProtectionType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentContainerQueue; // @synthesize persistentContainerQueue=_persistentContainerQueue;
@property(nonatomic) _Bool shouldLogValues; // @synthesize shouldLogValues=_shouldLogValues;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSPersistentContainer *_persistentContainer; // @synthesize _persistentContainer=__persistentContainer;
- (_Bool)_queue_handleCorruptionIfNecessaryFromError:(id)arg1 inPersistentStoreCoordinator:(id)arg2;	// IMP=0x001000000006ab1b
- (void)handleCorruptionIfNecessaryFromError:(id)arg1 inPersistentStoreCoordinator:(id)arg2;	// IMP=0x001000000006a7d4
- (void)transactionStoreDidSave:(id)arg1;	// IMP=0x001000000006a758
- (_Bool)saveTransaction:(id *)arg1;	// IMP=0x001000000006a4d6
- (id)transactionalStoreWithError:(id *)arg1;	// IMP=0x001000000006a394
- (unsigned long long)fileSizeBytes;	// IMP=0x0010000000069f26
- (void)_queue_destroyPersistentStoreInPersistentStoreCoordinator:(id)arg1;	// IMP=0x0010000000069d82
- (void)destroyPersistentStore;	// IMP=0x0010000000069bd0
- (id)persistentContainerWithError:(id *)arg1;	// IMP=0x0010000000069228
- (_Bool)saveContext:(id)arg1 reason:(id)arg2 includingTransactionContext:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000006905b
- (void)clearContexts;	// IMP=0x0010000000068faf
- (id)_contextForStoreIdentifier:(id)arg1 persistentContainer:(id)arg2;	// IMP=0x0010000000068df9
- (id)contextForStoreIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000068ced
- (id)managedKeyValuesMatchingPredicate:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000068abf
- (id)managedKeyValueWithRecordName:(id)arg1 inStoreWithIdentifier:(id)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000068886
- (id)managedKeyValueWithKey:(id)arg1 inStoreWithIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3 forceCreateNewRow:(_Bool)arg4 inContext:(id)arg5 error:(id *)arg6;	// IMP=0x00100000000683fb
- (id)managedKeyValueWithKey:(id)arg1 inStoreWithIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3 inContext:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000683da
- (id)managedStoreWithIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000680e2
- (id)managedDatabaseCreateIfNecessary:(_Bool)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000067eb8
- (id)syncEngineMetadataWithError:(id *)arg1;	// IMP=0x0010000000067c29
- (_Bool)saveSyncEngineMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000067997
- (id)dictionaryRepresentationForStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006700d
- (short)failedMigrationCountWithError:(id *)arg1;	// IMP=0x0010000000066ddb
- (_Bool)setFailedMigrationCount:(short)arg1 error:(id *)arg2;	// IMP=0x0010000000066ab9
- (_Bool)didMigrateFromPlistsWithError:(id *)arg1;	// IMP=0x001000000006688b
- (_Bool)setDidMigrateFromPlists:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000006656a
- (id)acAccountIdentifierWithError:(id *)arg1;	// IMP=0x0010000000066319
- (_Bool)setACAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000066049
- (_Bool)clearServerSystemFieldsRecordsForAllStoresWithError:(id *)arg1;	// IMP=0x0010000000065b35
- (id)changedKeysForStoreIdentifier:(id)arg1 sinceChangeToken:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000064330
- (id)currentChangeTokenForStoreIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000063e33
- (unsigned long long)numberOfKeyValuesInStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000063aa0
- (_Bool)clearServerSystemFieldsRecordsForAllKeyValuesInStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000063529
- (id)allStoreIdentifiersWithError:(id *)arg1;	// IMP=0x0010000000062fcf
- (id)allRecordNamesInStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000062a81
- (_Bool)deleteDataForStoresMatchingPredicate:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000627ad
- (_Bool)deleteDataForAllStoresWithError:(id *)arg1;	// IMP=0x00100000000626e8
- (_Bool)deleteDataForStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000625ce
- (_Bool)saveServerSyncAnchorSystemFieldsRecordData:(id)arg1 forStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006225c
- (id)serverSyncAnchorSystemFieldsRecordDataForStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000061f1d
- (_Bool)removeKeyValueForRecordName:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000061b57
- (_Bool)removeKeyValueForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000061b3f
- (_Bool)removeKeyValueForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000006171d
- (_Bool)saveKeyValue:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000061705
- (_Bool)_saveKeyValue:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 enforceQuota:(_Bool)arg4 forceCreateNewRow:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0010000000060cc1
- (_Bool)saveKeyValue:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 enforceQuota:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0010000000060ca5
- (_Bool)saveKeyValue:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000060c83
- (id)keyValueFromManagedKeyValue:(id)arg1;	// IMP=0x0010000000060afc
- (id)keyValueForRecordName:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000060780
- (id)keyValueForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000601bd
- (id)description;	// IMP=0x001000000006011b
- (void)dealloc;	// IMP=0x00100000000600a6
- (id)initWithURL:(id)arg1 fileProtectionType:(id)arg2 persistentContainer:(id)arg3 isTransactional:(_Bool)arg4;	// IMP=0x001000000005fde2
- (id)initWithURL:(id)arg1 fileProtectionType:(id)arg2;	// IMP=0x001000000005fdca
- (id)initWithURL:(id)arg1;	// IMP=0x001000000005fdae

@end

