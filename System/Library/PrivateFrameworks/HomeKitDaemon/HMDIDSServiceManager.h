//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDIDSActivityMonitor, HMDIDSActivityMonitorBroadcaster, HMDIDSActivityMonitorObserver, IDSService, NSObject, NSString, _HMDIDSProxyLinkPreferenceAssertion;
@protocol OS_dispatch_queue;

@interface HMDIDSServiceManager : HMFObject <HMFLogging>
{
    IDSService *_service;	// 8 = 0x8
    IDSService *_legacyService;	// 16 = 0x10
    IDSService *_proxyService;	// 24 = 0x18
    IDSService *_streamService;	// 32 = 0x20
    HMDIDSActivityMonitorBroadcaster *_activityBroadcaster;	// 40 = 0x28
    HMDIDSActivityMonitorObserver *_activityObserver;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMDIDSActivityMonitor *_activityMonitor;	// 64 = 0x40
    _HMDIDSProxyLinkPreferenceAssertion *_proxyLinkPreferenceAssertion;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0000000000064ed6
+ (id)sharedIDSServiceName;	// IMP=0x0000000000064e73
+ (id)sharedIDSService;	// IMP=0x0000000000064e10
+ (id)sharedManager;	// IMP=0x0000000000064dad
- (void).cxx_destruct;	// IMP=0x0000000000064c3a
@property __weak _HMDIDSProxyLinkPreferenceAssertion *proxyLinkPreferenceAssertion; // @synthesize proxyLinkPreferenceAssertion=_proxyLinkPreferenceAssertion;
@property(readonly, nonatomic) HMDIDSActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDIDSActivityMonitorObserver *activityObserver; // @synthesize activityObserver=_activityObserver;
@property(readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster; // @synthesize activityBroadcaster=_activityBroadcaster;
@property(readonly) IDSService *streamService; // @synthesize streamService=_streamService;
@property(readonly) IDSService *proxyService; // @synthesize proxyService=_proxyService;
@property(readonly) IDSService *legacyService; // @synthesize legacyService=_legacyService;
@property(readonly) IDSService *service; // @synthesize service=_service;
- (void)addProxyServiceLinkPreferencesAssertionHolder:(id)arg1;	// IMP=0x0000000000064ab6
- (void)setActivityMonitorDataSource:(id)arg1;	// IMP=0x0000000000064a16
- (id)init;	// IMP=0x000000000006453d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

