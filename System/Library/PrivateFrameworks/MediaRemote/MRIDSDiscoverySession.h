//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRProtocolClientConnectionDelegate-Protocol.h>

@class MRProtocolClientConnection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRIDSDiscoverySession <MRProtocolClientConnectionDelegate>
{
    MRProtocolClientConnection *_discoveryChannel;	// 8 = 0x8
    unsigned int _discoveryMode;	// 16 = 0x10
    unsigned int _endpointFeatures;	// 20 = 0x14
    NSObject<OS_dispatch_queue> *_idsQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000016bbaa
@property(retain, nonatomic) MRProtocolClientConnection *discoveryChannel; // @synthesize discoveryChannel=_discoveryChannel;
- (void)_onIDSQueue_initializeDiscoveryChannel;	// IMP=0x000000000016b9e7
- (void)_onIDSQueue_disconnectDiscoveryChannel:(id)arg1;	// IMP=0x000000000016b8d1
- (void)_syncClientStateToConnection:(id)arg1;	// IMP=0x000000000016b730
- (void)_onIDSQueue_connectDiscoveryChannel:(id)arg1;	// IMP=0x000000000016b510
- (void)handleUpdateOutputDevicesMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x000000000016b4c1
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000000016b44e
- (void)_handleCompanionDeviceDidConnectNotification:(id)arg1;	// IMP=0x000000000016b3ac
- (void)_handleCompanionDeviceDisconnectedNotification:(id)arg1;	// IMP=0x000000000016b339
- (id)availableOutputDevices;	// IMP=0x000000000016b327
- (_Bool)devicePresenceDetected;	// IMP=0x000000000016b2df
- (unsigned int)endpointFeatures;	// IMP=0x000000000016b267
- (unsigned int)discoveryMode;	// IMP=0x000000000016b22b
- (void)setDiscoveryMode:(unsigned int)arg1;	// IMP=0x000000000016af1e
@property(readonly, copy) NSString *debugDescription;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000016abce

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

