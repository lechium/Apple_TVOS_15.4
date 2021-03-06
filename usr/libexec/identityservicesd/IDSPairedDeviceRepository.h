//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol IDSPairedDevicePersister;

@interface IDSPairedDeviceRepository : NSObject
{
    NSMutableDictionary *_pairedDevices;	// 8 = 0x8
    struct os_unfair_lock_s _pairedDevicesLock;	// 16 = 0x10
    id <IDSPairedDevicePersister> _persister;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000006784a0
- (void)_accessPairedDevicesInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000678430
- (_Bool)_criticalPersistState;	// IMP=0x00100000006783a0
- (_Bool)_criticalPerformTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000006782f0
- (_Bool)_performTransactionInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000678120
- (_Bool)shouldUseIPsecLinkForDefaultPairedDevice;	// IMP=0x00100000006780c0
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x0010000000677a70
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x0010000000677670
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x00100000006772f0
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x0010000000676f70
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned int)arg6 minCompatibilityVersion:(unsigned int)arg7 maxCompatibilityVersion:(unsigned int)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9;	// IMP=0x0010000000675e70
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned int)arg6 minCompatibilityVersion:(unsigned int)arg7 maxCompatibilityVersion:(unsigned int)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9;	// IMP=0x00100000006757c0
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x0010000000675410
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x0010000000675080
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2;	// IMP=0x0010000000674e40
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2;	// IMP=0x0010000000674aa0
- (_Bool)_criticalPurgeSecuredEncryptionKeysForAllPairedDevices;	// IMP=0x00100000006747f0
- (_Bool)purgeSecuredEncryptionKeysForAllPairedDevices;	// IMP=0x0010000000674670
- (id)_criticalActivePairedDevice;	// IMP=0x00100000006743e0
- (id)activePairedDevice;	// IMP=0x0010000000674210
- (void)_criticalUpdatePairedDevice:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x0010000000674160
- (long long)_criticalPerformPairedDeviceActivationWithCBUUID:(id)arg1;	// IMP=0x0010000000673fa0
- (void)_criticalPerformPairedDeviceDeactivation;	// IMP=0x0010000000673c10
- (long long)_criticalActivatePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0010000000673b30
- (void)deactivatePairedDevices;	// IMP=0x00100000006739a0
- (long long)activatePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0010000000673670
- (_Bool)isEmpty;	// IMP=0x00100000006735f0
- (id)pairedDevicesWithIsPairingValue:(_Bool)arg1;	// IMP=0x0010000000673320
- (id)_criticalAllPairedDevices;	// IMP=0x0010000000673280
- (id)allPairedDevicesWithType:(long long)arg1;	// IMP=0x0010000000672f20
- (id)allPairedDevices;	// IMP=0x0010000000672d50
- (_Bool)_criticalRemovePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0010000000672b50
- (_Bool)removePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0010000000672810
- (void)_criticalPutPairedDevice:(id)arg1;	// IMP=0x0010000000672570
- (_Bool)_addPairedDevice:(id)arg1;	// IMP=0x0010000000672280
- (_Bool)addPairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x00100000006720e0
- (id)_criticalPairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0010000000671fd0
- (id)pairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0010000000671b60
- (_Bool)containsPairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0010000000671ad0
- (void)_criticalLoadPairedDeviceArray:(id)arg1;	// IMP=0x0010000000671750
- (_Bool)loadPairedDevicesFromStorage;	// IMP=0x0010000000671600
- (id)description;	// IMP=0x0010000000671360
- (id)initWithPersister:(id)arg1;	// IMP=0x0010000000671260

@end

