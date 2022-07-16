//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSMutableSet, NSString, SDActivityAdvertiser, SDActivityEncryptionManager, SDActivityPayloadManager, SDActivityScanner, SDAirDropReceiveManager, SDAutoUnlockSessionManager, SDNearbyIDSAgent, SDPairedDeviceAgent, SDShareSheetSlotManager, SDUnlockKeyManager, SDUnlockLockManager, SDXPCHelperConnection, SDXPCServer;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SharingDaemon : NSObject
{
    NSMutableSet *_activeObjects;	// 8 = 0x8
    SDActivityAdvertiser *_activityAdvertiser;	// 16 = 0x10
    SDActivityScanner *_activityScanner;	// 24 = 0x18
    SDAirDropReceiveManager *_airdropManager;	// 32 = 0x20
    SDShareSheetSlotManager *_sharesheetManager;	// 40 = 0x28
    SDAutoUnlockSessionManager *_autoUnlockSessionManager;	// 48 = 0x30
    SDActivityEncryptionManager *_encryptionManager;	// 56 = 0x38
    SDNearbyIDSAgent *_nearbyIDSAgent;	// 64 = 0x40
    NSMutableDictionary *_exportedOperations;	// 72 = 0x48
    SDPairedDeviceAgent *_pairedDeviceAgent;	// 80 = 0x50
    NSObject<OS_xpc_object> *_listener;	// 88 = 0x58
    SDActivityPayloadManager *_payloadManager;	// 96 = 0x60
    SDUnlockKeyManager *_unlockKeyManager;	// 104 = 0x68
    SDUnlockLockManager *_unlockLockManager;	// 112 = 0x70
    unsigned long long _stateHandle;	// 120 = 0x78
    SDXPCServer *_xpcServer;	// 128 = 0x80
    SDXPCHelperConnection *_helperConnection;	// 136 = 0x88
}

+ (id)sharedDaemon;	// IMP=0x00200000000d9020
- (void).cxx_destruct;	// IMP=0x00200000000dbc7c
- (_Bool)canAccessAirDropSettings:(id)arg1;	// IMP=0x00100000000dbc68
- (void)stop;	// IMP=0x00100000000dbb13
- (void)_performMigrations;	// IMP=0x00100000000dbb0d
- (void)start;	// IMP=0x00100000000db52b
- (struct os_state_data_s *)stateCapture;	// IMP=0x00100000000db419
@property(readonly, copy) NSString *description;
- (void)handleNewConnection:(id)arg1;	// IMP=0x00100000000daeb2
- (void)handleOperationMessage:(id)arg1 forConnection:(id)arg2;	// IMP=0x00100000000da8a0
- (void)handleBrowserMessage:(id)arg1 forConnection:(id)arg2;	// IMP=0x00100000000da2c8
- (void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00100000000d9d40
- (void)networkBrowser:(id)arg1 nodesChangedForParent:(struct __SFNode *)arg2 protocol:(id)arg3 error:(int)arg4;	// IMP=0x00100000000d98a8
- (id)xpcArrayForSFNodeArray:(id)arg1;	// IMP=0x00100000000d9733
- (id)numberFromXPCObject:(id)arg1;	// IMP=0x00100000000d9685
- (MISSING_TYPE *)arrayFromXPCObject: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000d95ec
- (id)stringFromXPCObject:(id)arg1;	// IMP=0x00100000000d9553
- (id)xpcObjectForSFOperationResults:(id)arg1;	// IMP=0x00100000000d9128
- (void)dealloc;	// IMP=0x00100000000d90ea
- (id)init;	// IMP=0x00100000000d9075

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
