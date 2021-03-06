//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRAVDistantRoutingDiscoveryClientProtocol-Protocol.h>

@class NSArray, NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    unsigned int _endpointFeatures;	// 16 = 0x10
    unsigned int _discoveryMode;	// 20 = 0x14
    _Bool _enableThrottling;	// 24 = 0x18
    NSArray *_distantEndpoints;	// 32 = 0x20
    NSArray *_distantOutputDevices;	// 40 = 0x28
    NSString *_routingContextUID;	// 48 = 0x30
    int _serviceResetNotifyToken;	// 56 = 0x38
    _Bool _hostedRoutingConnectionDidInitialize;	// 60 = 0x3c
    NSXPCConnection *_hostedRoutingSessionConnection;	// 64 = 0x40
    NSMutableDictionary *_distantExternalDevices;	// 72 = 0x48
}

+ (id)clientInterface;	// IMP=0x00000000000e3e2b
+ (id)serviceInterface;	// IMP=0x00000000000e3cfb
- (void).cxx_destruct;	// IMP=0x00000000000e5fb7
@property(retain, nonatomic) NSMutableDictionary *distantExternalDevices; // @synthesize distantExternalDevices=_distantExternalDevices;
@property(retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection; // @synthesize hostedRoutingSessionConnection=_hostedRoutingSessionConnection;
- (_Bool)_shouldAddLocalEndpoint;	// IMP=0x00000000000e5f31
- (void)_reloadAvailableDistantOutputDevices;	// IMP=0x00000000000e5d92
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1;	// IMP=0x00000000000e5cb4
- (void)_reloadAvailableDistantEndpoints;	// IMP=0x00000000000e5b15
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1;	// IMP=0x00000000000e55ee
- (void)_reloadHostedRoutingServiceDiscoveryMode;	// IMP=0x00000000000e5508
- (id)_hostedRoutingConnection;	// IMP=0x00000000000e5414
- (void)_initializeHostedRoutingConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e540e
- (void)availableOutputDevicesDidChange:(id)arg1;	// IMP=0x00000000000e53fc
- (void)availableEndpointsDidChange:(id)arg1;	// IMP=0x00000000000e53ea
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *distantOutputDevices;
@property(retain, nonatomic) NSArray *distantEndpoints;
- (void)setRoutingContextUID:(id)arg1;	// IMP=0x00000000000e4660
- (id)routingContextUID;	// IMP=0x00000000000e453a
- (id)availableOutputDevices;	// IMP=0x00000000000e4528
- (id)availableEndpoints;	// IMP=0x00000000000e4516
- (_Bool)devicePresenceDetected;	// IMP=0x00000000000e4346
- (void)setDiscoveryMode:(unsigned int)arg1;	// IMP=0x00000000000e4116
- (unsigned int)discoveryMode;	// IMP=0x00000000000e4106
- (unsigned int)endpointFeatures;	// IMP=0x00000000000e40f6
- (void)dealloc;	// IMP=0x00000000000e409e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000e3f55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

