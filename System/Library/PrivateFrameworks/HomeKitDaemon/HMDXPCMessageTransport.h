//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageTransportDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSXPCListenerDelegate-Protocol.h>

@class HMDProcessMonitor, HMDXPCMessageCountTracker, HMXPCMessageTransportConfiguration, NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSXPCInterface, NSXPCListener;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate, HMFTimerDelegate>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_connections;	// 24 = 0x18
    NSXPCInterface *_exportedInterface;	// 32 = 0x20
    NSXPCInterface *_remoteObjectInterface;	// 40 = 0x28
    HMDXPCMessageCountTracker *_xpcCounterTracker;	// 48 = 0x30
    NSMutableDictionary *_cachedResponses;	// 56 = 0x38
    HMDProcessMonitor *_processMonitor;	// 64 = 0x40
    NSXPCListener *_listener;	// 72 = 0x48
    HMXPCMessageTransportConfiguration *_configuration;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x00000000004f4509
+ (id)accessorySetupTransport;	// IMP=0x00000000004f44d9
+ (id)defaultTransport;	// IMP=0x00000000004f44a9
- (void).cxx_destruct;	// IMP=0x00000000004f2ee8
@property(readonly, copy) HMXPCMessageTransportConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly) HMDProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004f27e4
- (void)reportCompletionForMessageWithIdentifier:(id)arg1;	// IMP=0x00000000004f2534
- (void)_reportCompletion:(id)arg1;	// IMP=0x00000000004f1d42
- (id)retrieveAndClearMessagesForRequestInfo:(id)arg1;	// IMP=0x00000000004f19f8
- (id)__retrieveAndClearMessagesForCachedResponseEntry:(id)arg1;	// IMP=0x00000000004f179f
- (void)cacheResponsesForMessageWithIdentifier:(id)arg1 transport:(id)arg2 reportContext:(id)arg3;	// IMP=0x00000000004f124c
- (void)cacheResponseMessage:(id)arg1;	// IMP=0x00000000004f103a
- (id)dumpState;	// IMP=0x00000000004f101d
- (void)submitCounters;	// IMP=0x00000000004f1000
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000004f0804
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000004f077e
- (id)logIdentifier;	// IMP=0x00000000004f072e
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f0634
- (id)activeRequests;	// IMP=0x00000000004f0131
@property(readonly, copy) NSArray *connections;
- (void)stop;	// IMP=0x00000000004eff12
- (void)start;	// IMP=0x00000000004efe13
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000004efb37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

