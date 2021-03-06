//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSWPLinkManagerDelegate, WPContinuity;

@interface IDSWPLinkManager : NSObject
{
    id <WPContinuity> _continuity;	// 8 = 0x8
    _Bool _systemIsFastUserSwitched;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSMutableSet *_advertisingTypes;	// 32 = 0x20
    NSMutableSet *_scanningTypes;	// 40 = 0x28
    NSMutableDictionary *_linkIDToLink;	// 48 = 0x30
    NSMutableDictionary *_linkIDsConnecting;	// 56 = 0x38
    NSMutableDictionary *_linkIDsDisconnecting;	// 64 = 0x40
    NSMutableSet *_linkIDsAlwaysConnected;	// 72 = 0x48
    id <IDSWPLinkManagerDelegate> _delegate;	// 80 = 0x50
    NSHashTable *_connectivityDelegates;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x00200000002201c0
- (void).cxx_destruct;	// IMP=0x0020000000227a60
- (void)sendReset;	// IMP=0x0010000000227a50
- (unsigned long long)sendData:(id)arg1 peerID:(id)arg2;	// IMP=0x00100000002275c0
- (void)removeLink:(id)arg1;	// IMP=0x0010000000227230
- (void)disconnectFromPeer:(id)arg1;	// IMP=0x0010000000227100
- (void)disconnectOnMainQueueFromPeer:(id)arg1;	// IMP=0x00100000002267c0
- (void)connectToPeer:(id)arg1;	// IMP=0x0010000000226690
- (void)connectOnMainQueueToPeer:(id)arg1;	// IMP=0x0010000000225670
- (void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x0010000000225620
- (void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x00100000002255d0
- (void)stopScanningForType:(long long)arg1;	// IMP=0x00100000002251d0
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;	// IMP=0x00100000002249c0
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;	// IMP=0x0010000000223ff0
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;	// IMP=0x0010000000223930
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;	// IMP=0x0010000000222ff0
- (void)stopAdvertisingOfType:(long long)arg1;	// IMP=0x0010000000222bf0
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;	// IMP=0x0010000000222510
- (void)clientInstancesRemoved;	// IMP=0x0010000000221940
- (void)clientInstanceCreatedWithMessageContext:(id)arg1;	// IMP=0x00100000002213c0
- (void)setAlwaysConnectedForCBUUID:(id)arg1;	// IMP=0x0010000000221070
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x0010000000221010
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x0010000000220c90
- (_Bool)isScanningOrAdvertising;	// IMP=0x0010000000220c10
- (void)setDelegateOnMainQueue:(id)arg1;	// IMP=0x0010000000220ba0
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000220a70
- (void)_checkWPContinuitySetup;	// IMP=0x00100000002205e0
- (id)init;	// IMP=0x0010000000220280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

