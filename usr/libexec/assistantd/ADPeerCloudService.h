//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADPeerCloudService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSMutableDictionary *_completions;	// 24 = 0x18
    NSMapTable *_sharedDataObservers;	// 32 = 0x20
    NSMapTable *_sharedDataRequestObservers;	// 40 = 0x28
    NSMapTable *_remoteRequestObservers;	// 48 = 0x30
    NSString *_companionIdentifier;	// 56 = 0x38
    NSString *_airPlayRouteIdentifier;	// 64 = 0x40
    _Bool _airPlayRouteIdentifierNeedsUpdate;	// 72 = 0x48
    NSMutableSet *_deviceIdentifiers;	// 80 = 0x50
    NSMutableDictionary *_peerSharedData;	// 88 = 0x58
    _Bool _hasActiveAccount;	// 96 = 0x60
}

+ (id)_pointerToBlockMap;	// IMP=0x002000000011e078
+ (id)_wrappedSendFailureError:(id)arg1;	// IMP=0x001000000011df76
+ (id)_timedOutError;	// IMP=0x001000000011df3b
+ (id)_unexpectedMessageError;	// IMP=0x001000000011df03
+ (id)sharedInstance;	// IMP=0x001000000011de9e
- (void).cxx_destruct;	// IMP=0x0020000000125678
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00100000001250e1
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0010000000125007
- (void)_handleMessageResponse:(id)arg1 ofType:(unsigned short)arg2 orError:(id)arg3 fromID:(id)arg4 handler:(id)arg5;	// IMP=0x0010000000124aa1
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0010000000124948
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000124218
- (_Bool)_handleRemoteExecution:(id)arg1 peer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000123d16
- (void)_notifyObserversOfRequestInfo:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001237f1
- (void)setRemoteRequestObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x00100000001236d7
- (void)startListeningForRemote;	// IMP=0x001000000012340b
- (void)startRemoteSerialzedCommandExecution:(id)arg1 onPeer:(id)arg2 allowsRelay:(_Bool)arg3 executionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000122c70
- (void)startRemoteExecution:(id)arg1 onPeer:(id)arg2 allowsRelay:(_Bool)arg3 throughProxyDevice:(id)arg4 executionContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000122af6
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000122952
- (void)_startRemoteRequest:(id)arg1 onPeers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000122228
- (void)_notifyObserversOfSharedDataRequestFromPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000121d15
- (void)setSharedDataRequestObserver:(CDUnknownBlockType)arg1 withHandler:(void *)arg2;	// IMP=0x0010000000121bfb
- (void)getSharedDataFromPeers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001215e9
- (void)_notifyObserversOfSharedData:(id)arg1 fromPeer:(id)arg2;	// IMP=0x001000000012133d
- (void)setSharedDataObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x00100000001211aa
- (void)sendSharedData:(id)arg1 toPeers:(id)arg2;	// IMP=0x0010000000121002
- (void)_updateAirPlayRouteIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000120d18
- (void)_airplayRouteDidChange:(id)arg1;	// IMP=0x0010000000120c3a
- (void)_companionIdentifierDidChangeNotification:(id)arg1;	// IMP=0x0010000000120abd
- (void)_updateActiveAccountState;	// IMP=0x00100000001208ae
- (void)_setCachedSharedData:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x00100000001207ff
- (id)_cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x001000000012079f
- (id)cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x0010000000120654
- (id)_peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x0010000000120589
- (id)peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x001000000012042b
- (id)companionPeerUniqueIdentifier;	// IMP=0x0010000000120323
- (id)_companionPeer;	// IMP=0x00100000001202d4
- (id)companionPeer;	// IMP=0x001000000011ff0e
- (id)localPeerIDSDeviceUniqueIdentifier;	// IMP=0x001000000011fe1c
- (id)_peerInfoForIDSDeviceUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x001000000011fbce
- (id)peerInfoForIDSDeviceUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x001000000011fa89
- (id)_uniqueIdentifierForPeer:(id)arg1;	// IMP=0x001000000011f8d6
- (id)uniqueIdentifierForPeer:(id)arg1;	// IMP=0x001000000011f796
- (id)peers;	// IMP=0x001000000011f677
- (id)_peers;	// IMP=0x001000000011f3c5
- (_Bool)hasActiveAccount;	// IMP=0x001000000011f3bc
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 originalRequestId:(id)arg3 toPeers:(id)arg4 responseType:(unsigned short)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000011ec51
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3 responseType:(unsigned short)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000011ec2d
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3;	// IMP=0x001000000011ec09
- (id)_destinationsForPeers:(id)arg1;	// IMP=0x001000000011e753
- (id)_service;	// IMP=0x001000000011e745
- (id)_init;	// IMP=0x001000000011e0ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
