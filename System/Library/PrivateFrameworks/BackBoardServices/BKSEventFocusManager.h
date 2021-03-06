//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSHIDEventDeferringObserving-Protocol.h>

@class BKSHIDEventDeliveryManager, BKSHIDEventObserver, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSXPCConnection;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKSEventFocusManager : NSObject <BKSHIDEventDeferringObserving>
{
    BKSHIDEventObserver *_observer;	// 8 = 0x8
    struct os_unfair_lock_s _focusDataLock;	// 16 = 0x10
    BKSHIDEventDeliveryManager *_focusDataLock_manager;	// 24 = 0x18
    id <BSInvalidatable> _queue_keyCommandRulesAssertion;	// 32 = 0x20
    NSMutableSet *_focusDataLock_currentState;	// 40 = 0x28
    NSMutableDictionary *_focusDataLock_pendingStatesByPriority;	// 48 = 0x30
    NSMutableArray *_focusDataLock_assertions;	// 56 = 0x38
    int _pid;	// 64 = 0x40
    NSString *_clientIdentifier;	// 72 = 0x48
    id <BSInvalidatable> _observingAssertion;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_focusClientQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 96 = 0x60
    unsigned long long _propertyUpdateGeneration;	// 104 = 0x68
    _Bool _needsFlush;	// 112 = 0x70
    NSXPCConnection *_connection;	// 120 = 0x78
    NSMapTable *_infoPerFocusChangeObserver;	// 128 = 0x80
    NSSet *_cachedFocusedDeferralProperties;	// 136 = 0x88
}

+ (id)sharedInstance;	// IMP=0x00000000000444a3
- (void).cxx_destruct;	// IMP=0x00000000000434d5
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSSet *cachedFocusedDeferralProperties; // @synthesize cachedFocusedDeferralProperties=_cachedFocusedDeferralProperties;
@property(retain, nonatomic) NSMapTable *infoPerFocusChangeObserver; // @synthesize infoPerFocusChangeObserver=_infoPerFocusChangeObserver;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool needsFlush; // @synthesize needsFlush=_needsFlush;
- (void)_syncObserverState;	// IMP=0x0000000000043427
- (void)_focusDataLock_reallyFlushWithSet:(id)arg1;	// IMP=0x0000000000043127
- (void)flush;	// IMP=0x0000000000042ff2
- (void)_focusDataLock_rebuildPendingStatesByPriority;	// IMP=0x0000000000042f7e
- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000042e37
- (id)_queryDeferralResolutions;	// IMP=0x00000000000429bc
- (void)_focusClientQueue_deferringResolutionsChanged;	// IMP=0x0000000000042895
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;	// IMP=0x000000000004288f
- (void)setSystemAppControlsFocusOnMainDisplay:(_Bool)arg1;	// IMP=0x0000000000042889
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000427fd
- (void)addObserver:(id)arg1;	// IMP=0x0000000000042772
@property(readonly, copy) NSString *description;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;	// IMP=0x0000000000042081
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;	// IMP=0x000000000004206c
- (void)deferringResolutionsChanged;	// IMP=0x0000000000042021
- (void)dealloc;	// IMP=0x0000000000041fdf
- (id)_initWithManager:(id)arg1 observer:(id)arg2 pid:(int)arg3 clientIdentifier:(id)arg4;	// IMP=0x0000000000041e3a
- (id)init;	// IMP=0x0000000000041d5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

