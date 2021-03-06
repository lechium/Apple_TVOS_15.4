//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKSync2Coordinator.h>

#import <CoreDuetSync/_CDRemoteUserContextServer-Protocol.h>
#import <CoreDuetSync/_DKSyncRemoteContextStorageDelegate-Protocol.h>

@class NSObject, NSUUID;
@protocol OS_os_transaction, _DKSyncRemoteContextStorage;

@interface _DKSync3Coordinator : _DKSync2Coordinator <_DKSyncRemoteContextStorageDelegate, _CDRemoteUserContextServer>
{
    unsigned long long _watchingDeviceTypes;	// 8 = 0x8
    NSObject<OS_os_transaction> *_watchingDevicesTransaction;	// 16 = 0x10
    id <_DKSyncRemoteContextStorage> _transportMDCSRapport;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000385d
@property(retain, nonatomic) id <_DKSyncRemoteContextStorage> transportMDCSRapport; // @synthesize transportMDCSRapport=_transportMDCSRapport;
- (void)handleContextChangedNotification:(id)arg1;	// IMP=0x0000000000002d01
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;	// IMP=0x0000000000002779
- (id)multiDeviceContextStoreDevices;	// IMP=0x00000000000021ba
- (void)start;	// IMP=0x00000000000020e5
- (void)setupStorage;	// IMP=0x0000000000001ee3
- (void)_syncDisabledToggle;	// IMP=0x0000000000001e7e
- (void)_syncEnabledToggle;	// IMP=0x0000000000001dc7
- (void)dealloc;	// IMP=0x0000000000001d45
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000001bec
- (void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;	// IMP=0x00000000000047b9
- (void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;	// IMP=0x0000000000003d95
- (void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4;	// IMP=0x0000000000003ca8
- (id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2;	// IMP=0x0000000000003a14
- (_Bool)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2;	// IMP=0x000000000000388e
- (id)peersForContextStoreDeviceIDs:(id)arg1;	// IMP=0x000000000000917a
- (id)registrationIdentifierForPeer:(id)arg1 remoteRegistrationIdentifier:(id)arg2;	// IMP=0x00000000000090a1
- (void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 keyPaths:(id)arg3;	// IMP=0x000000000000895a
- (void)setArchivedObjects:(id)arg1 peer:(id)arg2;	// IMP=0x0000000000007f0c
- (id)archivedObjectsForKeyPaths:(id)arg1;	// IMP=0x00000000000078a4
- (id)keyPathsByDeviceIDFromRemoteKeyPaths:(id)arg1;	// IMP=0x00000000000075d1
- (void)_requestActivateDevicesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007418
- (void)requestActivateDevicesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000072f9
- (void)_fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000064ac
- (void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000062fe
- (_Bool)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000006225
- (_Bool)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005a81
- (_Bool)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000527d
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005126
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004fd5
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004e06
- (id)sourceDeviceUUID;	// IMP=0x0000000000004df4

// Remaining properties
@property(readonly, nonatomic) NSUUID *deviceUUID;

@end

