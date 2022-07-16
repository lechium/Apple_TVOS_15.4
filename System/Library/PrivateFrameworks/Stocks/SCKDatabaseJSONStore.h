//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/NSFilePresenter-Protocol.h>
#import <Stocks/SCKDatabaseStore-Protocol.h>
#import <Stocks/SCKDatabaseStoreCoordinator-Protocol.h>
#import <Stocks/SCKOperationThrottlerDelegate-Protocol.h>

@class CKServerChangeToken, NSDate, NSFileCoordinator, NSHashTable, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, SCKDatabaseStore, SCKOperationThrottler;

@interface SCKDatabaseJSONStore : NSObject <SCKOperationThrottlerDelegate, NSFilePresenter, SCKDatabaseStoreCoordinator, SCKDatabaseStore>
{
    _Bool _cloudBackupEnabled;	// 8 = 0x8
    _Bool _loadedFromDisk;	// 9 = 0x9
    _Bool _havePendingChanges;	// 10 = 0xa
    unsigned int _lastKnownStoreChangeTag;	// 12 = 0xc
    NSDate *_lastSyncDate;	// 16 = 0x10
    NSDate *_lastDirtyDate;	// 24 = 0x18
    CKServerChangeToken *_serverChangeToken;	// 32 = 0x20
    NSURL *_presentedItemURL;	// 40 = 0x28
    NSOperationQueue *_presentedItemOperationQueue;	// 48 = 0x30
    NSFileCoordinator *_fileCoordinator;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_accessQueue;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
    NSMutableDictionary *_zoneStoresByName;	// 80 = 0x50
    NSMutableDictionary *_foreignZoneDictsByName;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_workQueue;	// 96 = 0x60
    id <SCKOperationThrottler> _saveThrottler;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_changeListenerSource;	// 112 = 0x70
    NSSet *_allowedCommandClasses;	// 120 = 0x78
    NSURL *_storeURL;	// 128 = 0x80
    unsigned long long _diskReadCount;	// 136 = 0x88
    unsigned long long _diskWriteCount;	// 144 = 0x90
}

+ (id)preferredFileURLForSchema:(id)arg1 parentDirectoryURL:(id)arg2;	// IMP=0x0000000000022a5e
- (void).cxx_destruct;	// IMP=0x0000000000026695
@property(readonly, nonatomic) unsigned long long diskWriteCount; // @synthesize diskWriteCount=_diskWriteCount;
@property(readonly, nonatomic) unsigned long long diskReadCount; // @synthesize diskReadCount=_diskReadCount;
@property(readonly, copy, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) NSSet *allowedCommandClasses; // @synthesize allowedCommandClasses=_allowedCommandClasses;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *changeListenerSource; // @synthesize changeListenerSource=_changeListenerSource;
@property(retain, nonatomic) id <SCKOperationThrottler> saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool havePendingChanges; // @synthesize havePendingChanges=_havePendingChanges;
@property(retain, nonatomic) NSMutableDictionary *foreignZoneDictsByName; // @synthesize foreignZoneDictsByName=_foreignZoneDictsByName;
@property(retain, nonatomic) NSMutableDictionary *zoneStoresByName; // @synthesize zoneStoresByName=_zoneStoresByName;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned int lastKnownStoreChangeTag; // @synthesize lastKnownStoreChangeTag=_lastKnownStoreChangeTag;
@property(nonatomic) _Bool loadedFromDisk; // @synthesize loadedFromDisk=_loadedFromDisk;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(nonatomic, getter=isCloudBackupEnabled) _Bool cloudBackupEnabled; // @synthesize cloudBackupEnabled=_cloudBackupEnabled;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
- (id)_decodeDate:(id)arg1;	// IMP=0x000000000002645f
- (id)_encodeDate:(id)arg1;	// IMP=0x00000000000263f5
- (id)_decodeCodableObjectOfClasses:(id)arg1 from:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000026331
- (id)_decodeCodableObjectOfClass:(Class)arg1 from:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000026285
- (id)_encodeCodableObject:(id)arg1;	// IMP=0x00000000000261c2
- (void)_listenForChangesToFileURL:(id)arg1;	// IMP=0x0000000000025cae
- (_Bool)_reloadIfNeededFromFileURL:(id)arg1;	// IMP=0x0000000000025bce
- (void)_loadFromFileURL:(id)arg1;	// IMP=0x0000000000024e7b
- (void)_saveIfNeededToFileURL:(id)arg1;	// IMP=0x0000000000024c8d
- (void)_applyCloudBackupEnabledPropertyToStoreURL;	// IMP=0x0000000000024b17
- (void)_saveToFileURL:(id)arg1;	// IMP=0x0000000000023eba
- (_Bool)flushToDiskWithTimeout:(double)arg1;	// IMP=0x0000000000023e6b
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023d8f
- (void)operationThrottlerPerformOperation:(id)arg1;	// IMP=0x0000000000023cd6
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000023c64
- (void)addObserver:(id)arg1;	// IMP=0x0000000000023bf2
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023aef
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;	// IMP=0x00000000000239ec
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;	// IMP=0x00000000000237e7
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023557
- (void)readWithAccessor:(CDUnknownBlockType)arg1;	// IMP=0x00000000000231fc
@property(readonly, nonatomic) id <SCKDatabaseStore> underlyingStore;
- (id)zoneStoreForSchema:(id)arg1;	// IMP=0x000000000002313c
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2;	// IMP=0x0000000000023127
- (id)initWithSchema:(id)arg1 fileURL:(id)arg2;	// IMP=0x0000000000023112
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2 allowedCommands:(id)arg3;	// IMP=0x0000000000023059
- (id)initWithSchema:(id)arg1 fileURL:(id)arg2 allowedCommands:(id)arg3;	// IMP=0x0000000000022b58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
