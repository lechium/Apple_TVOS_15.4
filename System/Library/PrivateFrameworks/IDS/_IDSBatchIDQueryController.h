//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSIDQueryControllerDelegate-Protocol.h>

@class CUTWeakReference, NSArray, NSDate, NSMutableArray, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate>
{
    NSString *_serviceName;	// 8 = 0x8
    CUTWeakReference *_delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSString *_listenerID;	// 32 = 0x20
    NSArray *_destinations;	// 40 = 0x28
    NSMutableArray *_destinationsToQuery;	// 48 = 0x30
    struct os_unfair_lock_s _destinationsToQuerylock;	// 56 = 0x38
    NSTimer *_nextQueryTimer;	// 64 = 0x40
    NSDate *_timeOfDeath;	// 72 = 0x48
    id _rateLimiter;	// 80 = 0x50
    CUTWeakReference *_parent;	// 88 = 0x58
    int _numberOfQueriesDone;	// 96 = 0x60
    _Bool _isDead;	// 100 = 0x64
}

- (void).cxx_destruct;	// IMP=0x0000000000103b6e
- (_Bool)underLimit;	// IMP=0x0000000000103aa4
- (void)_calloutToDelegateWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000001036a8
- (void)_invalidateNextQueryTimer;	// IMP=0x00000000001035e3
- (void)_nextQuery:(id)arg1;	// IMP=0x0000000000102db4
- (void)setDestinations:(id)arg1;	// IMP=0x000000000010241a
- (void)_scheduleNextQuery:(double)arg1;	// IMP=0x000000000010232d
- (void)invalidate;	// IMP=0x0000000000102236
- (void)dealloc;	// IMP=0x00000000001021f8
- (id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3 parent:(id)arg4;	// IMP=0x0000000000101c8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

