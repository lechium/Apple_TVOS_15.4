//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeballInternalProvider-Protocol.h>

@class MNObserverHashTable, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, MNXPCTransactionCounter, NSDate, NSMutableDictionary, NSString;
@protocol MNRouteRefreshPolicySchedulerTimedActivity, OS_dispatch_queue, OS_dispatch_source;

@interface MNRouteRefreshPolicyScheduler : NSObject <MNTimeballInternalProvider>
{
    NSMutableDictionary *_refreshPolicyByDestination;	// 8 = 0x8
    NSMutableDictionary *_optionsByDestination;	// 16 = 0x10
    NSMutableDictionary *_auditTokenByDestination;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    MNTimeballRoutingProvider *_routingProvider;	// 40 = 0x28
    NSDate *_deferredRefreshDate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_deferTimer;	// 64 = 0x40
    MNTimeballCache *_cache;	// 72 = 0x48
    MNTimeballLocationManager *_locationManager;	// 80 = 0x50
    MNXPCTransactionCounter *_transactionCounter;	// 88 = 0x58
    MNObserverHashTable *_observers;	// 96 = 0x60
    CDUnknownBlockType _refreshCompletion;	// 104 = 0x68
    double _tolerance;	// 112 = 0x70
    id <MNRouteRefreshPolicySchedulerTimedActivity> _timedActivity;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000060d1d
@property(retain, nonatomic) id <MNRouteRefreshPolicySchedulerTimedActivity> timedActivity; // @synthesize timedActivity=_timedActivity;
@property(nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property(copy, nonatomic) CDUnknownBlockType refreshCompletion; // @synthesize refreshCompletion=_refreshCompletion;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000060cbd
- (void)addObserver:(id)arg1;	// IMP=0x0000000000060ca7
- (void)_leaveActiveWorkload;	// IMP=0x0000000000060be9
- (void)_enterActiveWorkload;	// IMP=0x0000000000060b02
- (id)_refreshPolicyForDestination:(id)arg1;	// IMP=0x0000000000060a9b
- (double)_timeIntervalForRefreshOfDestination:(id)arg1 routeUpdate:(id)arg2 atDate:(id)arg3;	// IMP=0x00000000000609e0
- (void)_scheduleNextRefreshDateForDestination:(id)arg1 routeUpdate:(id)arg2 fromDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000060569
- (id)_newActivityFromRefreshPolicyRules:(id)arg1;	// IMP=0x0000000000060468
- (void)_handleCompletionOfRefresh;	// IMP=0x000000000005fc15
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2 userLocation:(id)arg3;	// IMP=0x000000000005f256
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2;	// IMP=0x000000000005efb7
- (void)_refreshAllDestinationsAtDate:(id)arg1;	// IMP=0x000000000005eb5f
- (void)_updateNextRefreshDate:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005eaa6
- (void)_handleSchedulingThisDestinationAndRefreshAllDestinations:(id)arg1 nextRefreshDate:(id)arg2;	// IMP=0x000000000005e87b
- (void)_deferRefreshForScheduledDestinationsAfter:(id)arg1;	// IMP=0x000000000005e5bf
- (void)_performDeferredRefresh;	// IMP=0x000000000005e3d0
- (void)refreshScheduledDestinations;	// IMP=0x000000000005e37d
- (void)unscheduleUpdateForDestination:(id)arg1;	// IMP=0x000000000005e2fa
- (void)_handleSchedulingUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4;	// IMP=0x000000000005d97e
- (void)scheduleUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4;	// IMP=0x000000000005d7cc
- (void)dealloc;	// IMP=0x000000000005d780
- (id)initWithRoutingProvider:(id)arg1 cache:(id)arg2 locationManager:(id)arg3;	// IMP=0x000000000005d392
- (id)init;	// IMP=0x000000000005d368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

