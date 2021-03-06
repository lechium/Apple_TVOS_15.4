//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSServiceMonitor-Protocol.h>

@class BSServiceManager, NSDictionary, NSMutableSet, NSString;
@protocol BSInvalidatable, BSServiceConnectionEndpointMonitorDelegate;

@interface BSServiceConnectionEndpointMonitor : NSObject <BSServiceMonitor, BSInvalidatable>
{
    BSServiceManager *_manager;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    id <BSServiceConnectionEndpointMonitorDelegate> _lock_delegate;	// 24 = 0x18
    NSDictionary *_lock_endpointToEnvironments;	// 32 = 0x20
    NSMutableSet *_lock_serialCallOut_endpoints;	// 40 = 0x28
    _Bool _lock_activated;	// 48 = 0x30
    _Bool _lock_invalidated;	// 49 = 0x31
    struct os_unfair_lock_s _registrationLock;	// 52 = 0x34
    id <BSInvalidatable> _registrationLock_assertion;	// 56 = 0x38
    NSString *_service;	// 64 = 0x40
}

+ (id)monitorForService:(id)arg1;	// IMP=0x000000000002ca4c
- (void).cxx_destruct;	// IMP=0x000000000002e720
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, copy) NSString *description;
- (void)serialCallOut_didUpdateEndpointEnvironments:(id)arg1;	// IMP=0x000000000002df6e
- (id)endpointsForEnvironment:(id)arg1;	// IMP=0x000000000002d995
- (void)invalidate;	// IMP=0x000000000002d884
- (void)activate;	// IMP=0x000000000002d3b9
@property(retain, nonatomic) id <BSServiceConnectionEndpointMonitorDelegate> delegate;
- (void)dealloc;	// IMP=0x000000000002c84a
- (id)init;	// IMP=0x000000000002c6d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

