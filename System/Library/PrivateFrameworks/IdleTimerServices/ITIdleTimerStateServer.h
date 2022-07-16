//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IdleTimerServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <IdleTimerServices/ITIdleTimerServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSString;
@protocol ITIdleTimerStateServerDelegate, OS_dispatch_queue;

@interface ITIdleTimerStateServer : NSObject <BSServiceConnectionListenerDelegate, ITIdleTimerServerInterface>
{
    struct os_unfair_lock_s _accessLock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    BSServiceConnectionListener *_connectionListener;	// 24 = 0x18
    NSMutableSet *_connections;	// 32 = 0x20
    NSMutableDictionary *_clientTargetsByConfigIdentifier;	// 40 = 0x28
    id <ITIdleTimerStateServerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000020da
@property(nonatomic) __weak id <ITIdleTimerStateServerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasIdleTimerServicesEntitlementForProcess:(id)arg1 missingEntitlementError:(id *)arg2;	// IMP=0x0000000000001f5b
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000001eff
- (void)_addConnection:(id)arg1;	// IMP=0x0000000000001ea3
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000017f3
- (void)removeIdleTimerServiceConfiguration:(id)arg1 forReason:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000015fd
- (void)addIdleTimerServiceConfiguration:(id)arg1 forReason:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000128d
- (_Bool)isIdleTimerServiceAvailableWithError:(id *)arg1;	// IMP=0x0000000000001285
- (_Bool)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned long long)arg2;	// IMP=0x000000000000118c
- (id)initWithCalloutQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000000f7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

