//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFNetServiceBrowserDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMFTimer, HMFUnfairLock, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDBonjourBrowserHelper : HMFObject <HMFNetServiceBrowserDelegate, HMFTimerDelegate>
{
    unsigned long long _state;	// 8 = 0x8
    double _browsingInterval;	// 16 = 0x10
    double _browsingPeriodicity;	// 24 = 0x18
    HMFUnfairLock *_lock;	// 32 = 0x20
    HMFTimer *_timer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSArray *_serviceTypes;	// 56 = 0x38
    NSMutableArray *_browsers;	// 64 = 0x40
    NSDictionary *_latestDiscoveredServices;	// 72 = 0x48
    NSMutableDictionary *_internalDiscoveredServices;	// 80 = 0x50
    NSMutableArray *_browsingCompletions;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000006fc70d
@property(retain, nonatomic) NSMutableArray *browsingCompletions; // @synthesize browsingCompletions=_browsingCompletions;
@property(retain, nonatomic) NSMutableDictionary *internalDiscoveredServices; // @synthesize internalDiscoveredServices=_internalDiscoveredServices;
@property(retain, nonatomic) NSDictionary *latestDiscoveredServices; // @synthesize latestDiscoveredServices=_latestDiscoveredServices;
@property(retain, nonatomic) NSMutableArray *browsers; // @synthesize browsers=_browsers;
@property(retain, nonatomic) NSArray *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(nonatomic) double browsingPeriodicity; // @synthesize browsingPeriodicity=_browsingPeriodicity;
@property(nonatomic) double browsingInterval; // @synthesize browsingInterval=_browsingInterval;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;	// IMP=0x00000000006fc3ea
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;	// IMP=0x00000000006fc30c
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;	// IMP=0x00000000006fc22e
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006fc15f
- (void)_updateTimerWithTimeout:(double)arg1;	// IMP=0x00000000006fbffc
- (void)_removeBrowser:(id)arg1;	// IMP=0x00000000006fbf31
- (void)_addBrowser:(id)arg1;	// IMP=0x00000000006fbe66
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
- (unsigned long long)discoveredServicesCountForServiceType:(id)arg1;	// IMP=0x00000000006fba4e
- (void)_stopBrowsers;	// IMP=0x00000000006fb554
- (void)stop;	// IMP=0x00000000006fb4e3
- (_Bool)_startBrowsers;	// IMP=0x00000000006fb0a4
- (void)startWithBrowsingCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006faff3
- (id)initWithServicesOfTypes:(id)arg1 browsingTimeInterval:(double)arg2 browsingPeriodicity:(double)arg3 workQueue:(id)arg4;	// IMP=0x00000000006fad58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
