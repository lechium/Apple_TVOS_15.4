//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSManagedObjectContext, NSPersistentContainer, TransparencyManagedDataStore;

@interface TransparencyManagedDataStoreController : NSObject
{
    _Atomic long long _sequenceId;	// 8 = 0x8
    _Bool _movedDatabase;	// 16 = 0x10
    TransparencyManagedDataStore *_dataStore;	// 24 = 0x18
    TransparencyManagedDataStore *_xpcQueueDataStore;	// 32 = 0x20
    TransparencyManagedDataStore *_mainQueueDataStore;	// 40 = 0x28
    NSPersistentContainer *_persistentContainer;	// 48 = 0x30
    NSManagedObjectContext *_topLevelContext;	// 56 = 0x38
    NSManagedObjectContext *_mainQueueContext;	// 64 = 0x40
    NSHashTable *_mocStore;	// 72 = 0x48
}

+ (void)reportCoreDataEventForEntity:(id)arg1 hardFailure:(_Bool)arg2 write:(_Bool)arg3 code:(long long)arg4 underlyingError:(id)arg5;	// IMP=0x000000000000a160
+ (void)reportCoreDataEventForEntity:(id)arg1 write:(_Bool)arg2 code:(long long)arg3 underlyingError:(id)arg4;	// IMP=0x000000000000a12c
- (void).cxx_destruct;	// IMP=0x000000000000af7f
@property(retain) NSHashTable *mocStore; // @synthesize mocStore=_mocStore;
@property _Bool movedDatabase; // @synthesize movedDatabase=_movedDatabase;
@property(retain) NSManagedObjectContext *mainQueueContext; // @synthesize mainQueueContext=_mainQueueContext;
@property(retain) NSManagedObjectContext *topLevelContext; // @synthesize topLevelContext=_topLevelContext;
@property(retain) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain) TransparencyManagedDataStore *mainQueueDataStore; // @synthesize mainQueueDataStore=_mainQueueDataStore;
@property(retain) TransparencyManagedDataStore *xpcQueueDataStore; // @synthesize xpcQueueDataStore=_xpcQueueDataStore;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly) NSManagedObjectContext *backgroundContext;
@property(readonly) _Atomic long long *sequenceId;
- (void)saveTopLevelContext;	// IMP=0x000000000000ab7b
- (_Bool)saveContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a3e3
- (void)handleDidSaveNotification:(id)arg1;	// IMP=0x000000000000a313
- (void)loadPersistentStores;	// IMP=0x0000000000009ccb
- (long long)currentSequenceId:(id *)arg1;	// IMP=0x000000000000983e
- (_Bool)createDataStores:(id *)arg1;	// IMP=0x00000000000096be
- (_Bool)createContexts:(id *)arg1;	// IMP=0x00000000000093f8
- (_Bool)moveAsideDatabase:(id)arg1;	// IMP=0x0000000000008b7e
- (_Bool)shouldMoveAsideDatabase:(id)arg1;	// IMP=0x0000000000008a3e
@property(readonly) _Bool loadedStore;
- (id)bundleURL;	// IMP=0x000000000000896a
- (id)init;	// IMP=0x00000000000086ab

@end

