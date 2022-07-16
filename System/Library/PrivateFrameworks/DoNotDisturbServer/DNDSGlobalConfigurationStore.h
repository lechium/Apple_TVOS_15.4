//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSGlobalConfigurationStoring-Protocol.h>
#import <DoNotDisturbServer/DNDSIDSSyncEngineDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSSyncEngineDataSource-Protocol.h>

@class DNDSGlobalConfiguration, DNDSIDSSyncEngine, DNDSSyncEngine, NSString;
@protocol DNDSBackingStore, DNDSGlobalConfigurationStoreDelegate;

@interface DNDSGlobalConfigurationStore : NSObject <DNDSBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSGlobalConfigurationStoring>
{
    id <DNDSBackingStore> _backingStore;	// 8 = 0x8
    DNDSSyncEngine *_syncEngine;	// 16 = 0x10
    DNDSIDSSyncEngine *_idsSyncEngine;	// 24 = 0x18
    DNDSGlobalConfiguration *_configuration;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
    id <DNDSGlobalConfigurationStoreDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000916c2
@property(nonatomic) __weak id <DNDSGlobalConfigurationStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_purgeData;	// IMP=0x000000000009164d
- (void)_lock_purgeData;	// IMP=0x00000000000914bb
- (void)_lock_updateConfigurationWithCKRecord:(id)arg1;	// IMP=0x00000000000913ec
- (void)_lock_updateConfigurationWithDNDSIDSRecord:(id)arg1;	// IMP=0x000000000009131d
- (unsigned long long)_lock_writeRecord:(id)arg1 writePartition:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000090fc4
- (void)_notifyDelegateOfConfigurationChange;	// IMP=0x0000000000090dc9
- (void)_lock_prepareCKRecordToSave:(id)arg1;	// IMP=0x0000000000090d04
- (void)_lock_prepareDNDSIDSRecordToSave:(id)arg1;	// IMP=0x0000000000090c3f
- (void)_populateCKRecord:(id)arg1 withGlobalConfiguration:(id)arg2;	// IMP=0x0000000000090a61
- (void)_populateDNDSIDSRecord:(id)arg1 withGlobalConfiguration:(id)arg2;	// IMP=0x00000000000908b0
- (id)_lock_existingConfiguration;	// IMP=0x000000000009081c
- (id)_lock_mutableExistingConfigurationInStore:(id)arg1;	// IMP=0x00000000000907d4
- (id)_createConfigurationFromCKRecord:(id)arg1;	// IMP=0x0000000000090622
- (id)_createConfigurationFromDNDSIDSRecord:(id)arg1;	// IMP=0x000000000009048c
- (void)globalConfigurationSyncManager:(id)arg1 didReceiveUpdatedGlobalConfiguration:(id)arg2;	// IMP=0x000000000009036e
- (void)purgeRecordsForIDSSyncEngine:(id)arg1;	// IMP=0x000000000009022a
- (id)recordIDsForIDSSyncEngine:(id)arg1;	// IMP=0x000000000009018a
- (void)idsSyncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;	// IMP=0x000000000009013d
- (void)idsSyncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x000000000008fd92
- (void)idsSyncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;	// IMP=0x000000000008fc65
- (void)purgeRecordsForSyncEngine:(id)arg1;	// IMP=0x000000000008fc53
- (id)recordIDsForSyncEngine:(id)arg1;	// IMP=0x000000000008fb5d
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2 removingRecordIDs:(id)arg3;	// IMP=0x000000000008faf6
- (id)syncEngine:(id)arg1 recordTypeForRecordID:(id)arg2;	// IMP=0x000000000008fae9
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;	// IMP=0x000000000008fa9c
- (_Bool)syncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;	// IMP=0x000000000008f96d
- (void)syncEngine:(id)arg1 resolveConflictBetweenClientRecord:(id)arg2 andServerRecord:(id)arg3;	// IMP=0x000000000008f58b
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x000000000008f533
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x000000000008f0d2
- (_Bool)syncEngine:(id)arg1 wantsRecord:(id)arg2;	// IMP=0x000000000008ef15
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;	// IMP=0x000000000008ee69
- (unsigned long long)writeRecord:(id)arg1 writePartition:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000008ede5
- (unsigned long long)writeRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008edcb
- (id)readRecordWithError:(id *)arg1;	// IMP=0x000000000008ed76
- (id)initWithBackingStore:(id)arg1 syncEngine:(id)arg2 idsSyncEngine:(id)arg3;	// IMP=0x000000000008eba9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

