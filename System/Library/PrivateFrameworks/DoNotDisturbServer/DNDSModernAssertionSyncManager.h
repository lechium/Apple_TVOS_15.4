//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSAssertionSyncManager-Protocol.h>
#import <DoNotDisturbServer/DNDSSyncServiceDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class DNDSClientDetailsProvider, DNDSModernAssertionSyncMetadataStore, NSMutableSet, NSString;
@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSBackingStore, DNDSSyncService, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSSysdiagnoseDataProvider, DNDSAssertionSyncManager>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_fuzzTimer;	// 16 = 0x10
    id <DNDSSyncService> _localSyncService;	// 24 = 0x18
    id <DNDSSyncService> _cloudSyncService;	// 32 = 0x20
    DNDSClientDetailsProvider *_clientDetailsProvider;	// 40 = 0x28
    DNDSModernAssertionSyncMetadataStore *_metadata;	// 48 = 0x30
    NSObject<DNDSBackingStore> *_metadataBackingStore;	// 56 = 0x38
    NSMutableSet *_timerQueuedDevices;	// 64 = 0x40
    _Bool _timerQueuedForceUpdate;	// 72 = 0x48
    unsigned long long _timerCurrentDelay;	// 80 = 0x50
    NSObject<OS_os_transaction> *_timerQueuedTransaction;	// 88 = 0x58
    struct os_unfair_lock_s _timerLock;	// 96 = 0x60
    id <DNDSAssertionSyncManagerDataSource> _dataSource;	// 104 = 0x68
    id <DNDSAssertionSyncManagerDelegate> _delegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000004bd4f
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(_Bool)arg2;	// IMP=0x000000000004b405
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (_Bool)_saveMetadataToBackingStore;	// IMP=0x000000000004b28a
- (_Bool)_maintainMetadataBackingStore;	// IMP=0x000000000004ab98
- (void)_loadMetadataFromBackingStore;	// IMP=0x000000000004aa73
- (void)_queue_handleDidSendRequestIdentifier:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000004a36c
- (void)_queue_sendStateSnapshotToPairedDevices:(id)arg1 force:(_Bool)arg2;	// IMP=0x00000000000492f1
- (void)_queue_handleMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 fromDeviceIdentifier:(id)arg3;	// IMP=0x00000000000483de
- (void)syncService:(id)arg1 didSendWithRequestIdentifier:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000481f3
- (void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(id)arg4 fromDeviceIdentifier:(id)arg5;	// IMP=0x0000000000048056
- (_Bool)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(id)arg4 fromDeviceIdentifier:(id)arg5;	// IMP=0x0000000000047e30
- (void)_queue_updateDevices;	// IMP=0x0000000000047d1d
- (void)updateDevices:(id)arg1 force:(_Bool)arg2 shouldFuzz:(_Bool)arg3;	// IMP=0x00000000000479c2
- (void)forceUpdateAllDevices;	// IMP=0x000000000004791b
- (void)updateDevices:(id)arg1;	// IMP=0x0000000000047904
- (void)updateForModeAssertionUpdateResult:(id)arg1;	// IMP=0x00000000000474c4
- (void)resume;	// IMP=0x00000000000470c5
- (void)dealloc;	// IMP=0x000000000004708f
- (id)initWithClientDetailsProvider:(id)arg1 localSyncService:(id)arg2 cloudSyncService:(id)arg3;	// IMP=0x0000000000046e87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

