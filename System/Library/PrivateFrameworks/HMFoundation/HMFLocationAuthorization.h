//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/CLLocationManagerDelegate-Protocol.h>
#import <HMFoundation/HMFLogging-Protocol.h>

@class CLLocationManager, NSBundle, NSMutableSet, NSObject, NSString, __HMFLocationAuthorizationRequest;
@protocol OS_dispatch_queue;

@interface HMFLocationAuthorization <CLLocationManagerDelegate, HMFLogging>
{
    struct hmf_unfair_data_lock_s _lock;	// 8 = 0x8
    int _status;	// 12 = 0xc
    long long _state;	// 16 = 0x10
    NSMutableSet *_observers;	// 24 = 0x18
    __HMFLocationAuthorizationRequest *_request;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSString *_bundleIdentifier;	// 48 = 0x30
    NSBundle *_bundle;	// 56 = 0x38
    CLLocationManager *_internal;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x000000000000f9e2
+ (id)sharedAuthorization;	// IMP=0x000000000000df55
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000000de7c
+ (void)initialize;	// IMP=0x000000000000ddc0
- (void).cxx_destruct;	// IMP=0x000000000000fb25
@property(readonly) CLLocationManager *internal; // @synthesize internal=_internal;
@property(readonly) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)logIdentifier;	// IMP=0x000000000000fa49
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000000000f73c
- (void)mark;	// IMP=0x000000000000f6a4
- (void)requestAuthorization:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f160
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000000edee
- (void)registerObserver:(id)arg1;	// IMP=0x000000000000e7f3
@property(readonly, getter=isMonitoring) _Bool monitoring;
@property(readonly) int status;
@property(readonly, getter=isAuthorized) _Bool authorized;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)attributeDescriptions;	// IMP=0x000000000000e3e3
- (void)dealloc;	// IMP=0x000000000000e18d
- (id)initWithBundle:(id)arg1;	// IMP=0x000000000000e106
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000000e073
- (id)init;	// IMP=0x000000000000dfaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
