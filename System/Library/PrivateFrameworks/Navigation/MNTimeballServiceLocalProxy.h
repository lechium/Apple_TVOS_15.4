//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeballInternalObserver-Protocol.h>
#import <Navigation/MNTimeballInternalProvider-Protocol.h>
#import <Navigation/MNTimeballServiceProxyInterface-Protocol.h>

@class MNObserverHashTable, MNRouteRefreshPolicyScheduler, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, MNTimeballServicePeer, MNXPCTransactionCounter, NSMutableDictionary, NSString;
@protocol MNTimeballServiceProxyDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNTimeballServiceLocalProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballInternalProvider, MNTimeballInternalObserver>
{
    MNTimeballServicePeer *_peer;	// 8 = 0x8
    MNObserverHashTable *_observers;	// 16 = 0x10
    MNTimeballCache *_cache;	// 24 = 0x18
    MNRouteRefreshPolicyScheduler *_scheduler;	// 32 = 0x20
    MNTimeballRoutingProvider *_routingProvider;	// 40 = 0x28
    MNTimeballLocationManager *_locationManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_operationQueue;	// 56 = 0x38
    MNXPCTransactionCounter *_xpcTransactionCounter;	// 64 = 0x40
    NSMutableDictionary *_destinationOptions;	// 72 = 0x48
    _Bool _isLeeching;	// 80 = 0x50
    id <MNTimeballServiceProxyDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002887a
@property(readonly, nonatomic) MNTimeballServicePeer *peer; // @synthesize peer=_peer;
@property(nonatomic) id <MNTimeballServiceProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unsubscribeFromAllDestinations;	// IMP=0x0000000000028776
- (void)subscribeToAllDestinations;	// IMP=0x00000000000285bf
- (void)unsubscribeFromDestination:(id)arg1;	// IMP=0x000000000002838a
- (void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;	// IMP=0x0000000000027fb6
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;	// IMP=0x00000000000278c3
- (void)provider:(id)arg1 didReceiveUpdate:(id)arg2 forDestination:(id)arg3;	// IMP=0x00000000000272b7
- (void)provider:(id)arg1 didReceiveError:(id)arg2 forDestination:(id)arg3;	// IMP=0x0000000000026d78
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000026ccd
- (void)addObserver:(id)arg1;	// IMP=0x0000000000026c22
- (void)_requestOptions:(long long)arg1 forDestinations:(id)arg2 fromLocation:(id)arg3 freshness:(id)arg4 handlerID:(id)arg5;	// IMP=0x0000000000026609
- (void)_receivedNetworkError:(id)arg1 forDestination:(id)arg2;	// IMP=0x00000000000264e3
- (void)_receivedNetworkUpdate:(id)arg1 forDestination:(id)arg2;	// IMP=0x000000000002623d
- (void)_handleResult:(id)arg1 forDestination:(id)arg2 error:(id)arg3 fromNetwork:(_Bool)arg4 requestingClientID:(id)arg5 handlerID:(id)arg6 completed:(_Bool)arg7;	// IMP=0x000000000002609f
- (void)_completedUpdateForDelegateHandlerID:(id)arg1;	// IMP=0x0000000000026027
- (void)_invokeDelegateHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;	// IMP=0x0000000000025f59
- (void)_enqueOperation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025d8d
- (void)_removeHighMemoryThreshold;	// IMP=0x0000000000025d77
- (void)_requestHighMemoryThreshold:(id)arg1;	// IMP=0x0000000000025d61
- (id)_delegate;	// IMP=0x0000000000025cf8
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000025bd9
- (id)initWithPeer:(id)arg1 targetQueue:(id)arg2 cache:(id)arg3 locationManager:(id)arg4 routingProvider:(id)arg5 scheduler:(id)arg6;	// IMP=0x00000000000259db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

