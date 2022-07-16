//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRAVRoutingDiscoverySession, MRDHostedExternalDeviceManager, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRDHostedRoutingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;	// 16 = 0x10
    NSHashTable *_weakObservers;	// 24 = 0x18
    NSDictionary *_hostsByGroupID;	// 32 = 0x20
    NSDictionary *_availableOutputDevices;	// 40 = 0x28
    NSDictionary *_outputDevicesAndClusterMembers;	// 48 = 0x30
    NSArray *_endpoints;	// 56 = 0x38
    NSArray *_distantOutputDevices;	// 64 = 0x40
    MRAVEndpoint *_localEndpoint;	// 72 = 0x48
    id _discoverySessionOutputDevicesToken;	// 80 = 0x50
    id _discoverySessionEndpointsToken;	// 88 = 0x58
    MRDHostedExternalDeviceManager *_externalDeviceManager;	// 96 = 0x60
    MRAVRoutingDiscoverySession *_discoverySession;	// 104 = 0x68
    NSMutableDictionary *_virtualOutputDeviceDictionary;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000080104
@property(retain, nonatomic) NSMutableDictionary *virtualOutputDeviceDictionary; // @synthesize virtualOutputDeviceDictionary=_virtualOutputDeviceDictionary;
@property(retain) MRAVRoutingDiscoverySession *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)filterOutputDevices:(id)arg1 remoteControllableOnly:(_Bool)arg2;	// IMP=0x001000000007f928
- (id)resolveOutputDevices:(id)arg1;	// IMP=0x001000000007f5bd
- (id)computeHostsByGroupIDForOutputDevices:(id)arg1 unclusteredDevices:(id)arg2;	// IMP=0x001000000007efeb
- (void)hostedExternalDeviceManagerDidUpdateExternalDeviceMapping:(id)arg1;	// IMP=0x001000000007ef6d
- (void)_processDiscoveryObserverChanges;	// IMP=0x001000000007eba3
- (void)_handleEndpointOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x001000000007eb42
- (void)_handleObserverDiscoveryModeDidChangeNotification:(id)arg1;	// IMP=0x001000000007eb30
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x001000000007ea53
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x001000000007e142
- (id)_onQueue_determineGroupLeaderForOutputDevices:(id)arg1 availableOutputDevices:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000007d07d
- (void)_onQueue_reloadOutputDevices;	// IMP=0x001000000007d00e
- (void)removeVirtualOutputDevicesForClient:(id)arg1;	// IMP=0x001000000007cef6
- (void)addVirtualOutputDevice:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000007ccfd
@property(readonly, nonatomic) NSArray *virtualOutputDevices;
- (id)determineGroupLeaderForOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000007c992
- (id)_onQueue_makeHostedExternalDeviceForEndpoint:(id)arg1 didCreate:(_Bool *)arg2;	// IMP=0x001000000007c5b0
- (id)externalDeviceForOutputDeviceUID:(id)arg1;	// IMP=0x001000000007c5a3
- (id)externalDeviceForEndpoint:(id)arg1;	// IMP=0x001000000007c375
- (void)removeObserver:(id)arg1;	// IMP=0x001000000007c2ba
- (void)addObserver:(id)arg1;	// IMP=0x001000000007c1ff
@property(readonly, nonatomic) NSArray *availableDistantAudioOutputDevices;
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(readonly, nonatomic) NSArray *availableDistantOutputDevices;
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
@property(readonly, nonatomic) NSArray *availableEndpoints;
@property(readonly, nonatomic) unsigned int discoveryMode;
@property(readonly, nonatomic) _Bool devicePresenceDetected;
- (id)makeEndpointWithOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000007bd70
- (id)_onQueue_makeExternalDeviceTransportForEndpoint:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x001000000007bcd1
- (void)_onQueue_reloadEndpoints;	// IMP=0x001000000007bc48
- (id)createDiscoverySession;	// IMP=0x001000000007bbbf
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x001000000007baa3
- (id)init;	// IMP=0x001000000007ba8f
- (id)initWithDiscoverySession:(id)arg1;	// IMP=0x001000000007b51b

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
