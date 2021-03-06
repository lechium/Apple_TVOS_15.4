//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRCompanionConnectionControllerDelegate-Protocol.h>
#import <MediaRemote/MRExpanseManagerObserver-Protocol.h>

@class AVOutputDeviceDiscoverySession, MRAVOutputDevice, MRAVRoutingDiscoverySession, MRCompanionConnectionController, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession <MRCompanionConnectionControllerDelegate, MRExpanseManagerObserver>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_reloadQueue;	// 16 = 0x10
    AVOutputDeviceDiscoverySession *_avDiscoverySession;	// 24 = 0x18
    MRAVRoutingDiscoverySession *_idsDiscoverySession;	// 32 = 0x20
    unsigned int _endpointFeatures;	// 40 = 0x28
    unsigned int _discoveryMode;	// 44 = 0x2c
    unsigned int _targetAudioSessionID;	// 48 = 0x30
    _Bool _hasClientProvidedTargetAudioSessionID;	// 52 = 0x34
    _Bool _hasRegisteredForExpanseMonitoring;	// 53 = 0x35
    NSString *_routingContextUID;	// 56 = 0x38
    NSArray *_availableOutputDevices;	// 64 = 0x40
    NSArray *_virtualOutputDevices;	// 72 = 0x48
    _Bool _scheduledAvailableOutputDevicesReload;	// 80 = 0x50
    MRCompanionConnectionController *_companionController;	// 88 = 0x58
    MRAVRoutingDiscoverySession *_companionDiscoverySession;	// 96 = 0x60
    MRAVOutputDevice *_unclusteredLocalOutputDevice;	// 104 = 0x68
    NSArray *_unclusteredOutputDevices;	// 112 = 0x70
}

+ (void)setDaemonVirtualDevices:(id)arg1;	// IMP=0x0000000000256640
+ (id)daemonVirtualDevices;	// IMP=0x00000000002564fc
- (void).cxx_destruct;	// IMP=0x0000000000258dc2
@property(readonly, nonatomic) NSArray *virtualOutputDevices; // @synthesize virtualOutputDevices=_virtualOutputDevices;
- (void)expanseManagerDidLeaveExpanseSession:(id)arg1;	// IMP=0x0000000000258cd5
- (void)expanseManagerDidJoinExpanseSession:(id)arg1;	// IMP=0x0000000000258cc3
- (void)_handleDidJoinExpanse;	// IMP=0x0000000000258b82
- (void)_setTargetAudioSessionID:(unsigned int)arg1;	// IMP=0x0000000000258a9c
- (_Bool)_shouldCreateClusterOutputDevices;	// IMP=0x0000000000258a32
- (void)_scheduleAvailableOutputDevicesReload;	// IMP=0x00000000002588fa
- (void)_scheduleReload;	// IMP=0x00000000002588e8
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)shouldUseDeviceInfoForLocalDevice;	// IMP=0x0000000000258412
- (id)_onQueue_reloadAvailableOutputDevicesFromDiscovery:(id)arg1;	// IMP=0x0000000000257bc2
- (void)_onQueue_reloadAvailableOutputDevices;	// IMP=0x0000000000257938
- (void)_onQueue_reload;	// IMP=0x0000000000257926
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x00000000002578b0
- (void)_deviceInfoDidChange:(id)arg1;	// IMP=0x000000000025789e
- (void)controllerDidUndiscoverCompanion:(id)arg1;	// IMP=0x0000000000257818
- (void)controller:(id)arg1 didDiscoverCompanion:(id)arg2;	// IMP=0x000000000025758d
@property(retain, nonatomic) MRAVOutputDevice *unclusteredLocalOutputDevice; // @synthesize unclusteredLocalOutputDevice=_unclusteredLocalOutputDevice;
@property(retain, nonatomic) NSArray *unclusteredOutputDevices; // @synthesize unclusteredOutputDevices=_unclusteredOutputDevices;
- (void)setRoutingContextUID:(id)arg1;	// IMP=0x0000000000257165
- (id)routingContextUID;	// IMP=0x0000000000257064
- (void)setTargetAudioSessionID:(unsigned int)arg1;	// IMP=0x0000000000256fd7
- (unsigned int)targetAudioSessionID;	// IMP=0x0000000000256ebd
- (void)setDiscoveryMode:(unsigned int)arg1;	// IMP=0x0000000000256b37
- (unsigned int)discoveryMode;	// IMP=0x0000000000256a87
@property(retain, nonatomic) NSArray *availableOutputDevices; // @dynamic availableOutputDevices;
@property(retain, nonatomic) NSArray *availableEndpoints; // @dynamic availableEndpoints;
- (_Bool)devicePresenceDetected;	// IMP=0x000000000025674a
- (unsigned int)endpointFeatures;	// IMP=0x000000000025673a
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000255f61

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

