//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/CKSyncEngineDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSKeybagStateObserver-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class CKContainer, NSMapTable, NSString;
@protocol DNDSKeybagStateProviding, DNDSSyncEngineLastChanceDataStoring, DNDSSyncEngineMetadataStoring, DNDSSyncEngineSynchronizing, OS_dispatch_queue;

@interface DNDSSyncEngine : NSObject <DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, CKSyncEngineDataSource>
{
    id <DNDSSyncEngineMetadataStoring> _store;	// 8 = 0x8
    id <DNDSSyncEngineSynchronizing> _syncEngine;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_accountUpdateQueue;	// 32 = 0x20
    NSMapTable *_sourcesByZoneName;	// 40 = 0x28
    id <DNDSSyncEngineMetadataStoring> _metadataStore;	// 48 = 0x30
    id <DNDSSyncEngineLastChanceDataStoring> _lastChanceStore;	// 56 = 0x38
    struct {
        _Bool syncEnabled;
        _Bool featureEnabled;
        _Bool accountAvailable;
        _Bool encryptionAvailable;
        _Bool supportedDevice;
        _Bool testing;
    } _state;	// 64 = 0x40
    _Bool _allowSyncEngineCreation;	// 70 = 0x46
    CKContainer *_container;	// 72 = 0x48
    id <DNDSKeybagStateProviding> _keybag;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x000000000007cdc8
- (void).cxx_destruct;	// IMP=0x0000000000082a8a
- (void)_migrateOldStoresWithSyncEnabledState:(_Bool)arg1;	// IMP=0x00000000000820be
- (void)_initialSyncForDataSource:(id)arg1 withZoneName:(id)arg2;	// IMP=0x0000000000081f6b
- (void)_initialSyncForDataSources;	// IMP=0x0000000000081d15
- (void)_purgeDataFromDataSources;	// IMP=0x0000000000081a86
- (id)_lock_dataSourceForRecord:(id)arg1;	// IMP=0x00000000000819f7
- (id)_lock_dataSourceForZoneID:(id)arg1;	// IMP=0x0000000000081967
- (_Bool)_lock_isSyncPreferenceEnabled;	// IMP=0x0000000000081930
- (_Bool)_lock_isSyncAvailable;	// IMP=0x00000000000818e8
- (_Bool)_lock_isSyncEnabled;	// IMP=0x00000000000818a0
- (void)_lock_setCurrentUserRecordID:(id)arg1;	// IMP=0x00000000000817eb
- (void)_lock_setEncryptionAvailable:(_Bool)arg1;	// IMP=0x00000000000817bd
- (_Bool)_lock_encryptionAvailable;	// IMP=0x0000000000081794
- (id)_lock_currentUserRecordID;	// IMP=0x000000000008176b
- (void)_lock_setCurrentAccountStatus:(long long)arg1;	// IMP=0x00000000000816c8
- (long long)_lock_currentAccountStatus;	// IMP=0x000000000008169f
- (id)_lock_dataSources;	// IMP=0x00000000000814da
- (void)_lock_destroySyncEngine;	// IMP=0x000000000008145b
- (void)_lock_purgeData;	// IMP=0x00000000000813d8
- (void)_handleAccountFetchWithUpdatedUserRecordID:(id)arg1 updatedAccountStatus:(long long)arg2 updatedEncryptionAvailable:(_Bool)arg3 updatedSyncEnabled:(_Bool)arg4;	// IMP=0x0000000000080dd4
- (void)_fetchAccountStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000080b5d
- (void)_accountUpdateQueue_updateAccountWithSyncEnabledState:(_Bool)arg1;	// IMP=0x0000000000080445
- (void)_updateAccountWithSyncEnabledState:(_Bool)arg1;	// IMP=0x00000000000803da
- (void)_updateAccountWithCurrentSyncEnabledState;	// IMP=0x000000000008034b
- (void)_cloudKitAccountChanged:(id)arg1;	// IMP=0x0000000000080339
- (void)_lock_startSyncEngine;	// IMP=0x00000000000801da
- (void)_retryLastChanceRecordsForDataSource:(id)arg1 withZoneName:(id)arg2;	// IMP=0x000000000007fdae
- (void)_retryLastChanceRecords;	// IMP=0x000000000007fba8
- (id)_zoneIDForRecord:(id)arg1;	// IMP=0x000000000007fb55
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(_Bool)arg2;	// IMP=0x000000000007f24c
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;	// IMP=0x000000000007f1c9
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;	// IMP=0x000000000007f11e
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;	// IMP=0x000000000007f073
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;	// IMP=0x000000000007f001
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;	// IMP=0x000000000007ef56
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;	// IMP=0x000000000007ed67
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;	// IMP=0x000000000007e2e2
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x000000000007e199
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;	// IMP=0x000000000007e104
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;	// IMP=0x000000000007dfff
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x000000000007df0f
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;	// IMP=0x000000000007de4f
@property(readonly, nonatomic) _Bool hasLocalChanges;
- (void)pairedDeviceDidChange;	// IMP=0x000000000007de10
- (void)purgeZoneWithID:(id)arg1;	// IMP=0x000000000007dc73
- (void)removeZoneWithID:(id)arg1;	// IMP=0x000000000007db7b
- (void)handleDeletedRecordID:(id)arg1;	// IMP=0x000000000007da67
- (void)handleFetchedRecord:(id)arg1;	// IMP=0x000000000007d877
- (void)sync:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007d7c4
- (void)fetchChanges:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007d711
- (void)sendChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d65c
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;	// IMP=0x000000000007d55a
- (void)setDataSource:(id)arg1 forZoneName:(id)arg2;	// IMP=0x000000000007d469
- (void)setTesting:(_Bool)arg1;	// IMP=0x000000000007d437
@property(nonatomic, getter=isSyncPreferenceEnabled) _Bool syncPreferenceEnabled;
@property(readonly, nonatomic, getter=isSyncEnabled) _Bool syncEnabled;
@property(readonly, nonatomic, getter=isSyncAvailable) _Bool syncAvailable;
@property(readonly, nonatomic) unsigned long long cloudSyncState;
- (id)initWithMetadataStore:(id)arg1 lastChanceDataStore:(id)arg2 syncEngine:(id)arg3 keybag:(id)arg4 syncEnabled:(_Bool)arg5;	// IMP=0x000000000007cf16
- (id)initWithMetadataStore:(id)arg1 lastChanceDataStore:(id)arg2 keybag:(id)arg3 syncEnabled:(_Bool)arg4;	// IMP=0x000000000007ce37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

