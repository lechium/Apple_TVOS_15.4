//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDaemonRequestTimer : NSObject
{
    NSMutableDictionary *_requestContextMap;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _requestContextMapLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009db9a
- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;	// IMP=0x000000000009d8ea
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;	// IMP=0x000000000009d83e
- (id)invalidateTimeoutAndReturnHandlerForRequestID:(id)arg1;	// IMP=0x000000000009d6e7
- (void)_criticalInvokeTimeoutBlockForRequestID:(id)arg1;	// IMP=0x000000000009d595
- (void)_handleSystemTimerFired:(id)arg1;	// IMP=0x000000000009d4d3
- (id)_criticalFindRequestContextWithResponseHandler:(id)arg1;	// IMP=0x000000000009d31c
- (id)scheduleTimeoutWithResponseHandler:(id)arg1 timeoutInterval:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009cfe3
- (long long)inFlightRequestCount;	// IMP=0x000000000009cf0f
- (id)init;	// IMP=0x000000000009ceab
- (void)dealloc;	// IMP=0x000000000009ce71
- (void)_accessRequestContextMapInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009ce34

@end
