//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMCameraClipManagerObserver-Protocol.h>
#import <HomeKit/HMCameraRecordingReachabilityEventManagerObserver-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>

@class HMCameraClipManager, HMCameraRecordingReachabilityEventManager, HMFUnfairLock, NSHashTable, NSString, _HMContext;

@interface HMCameraRecordingEventManager : NSObject <HMCameraClipManagerObserver, HMCameraRecordingReachabilityEventManagerObserver, HMFLogging>
{
    _HMContext *_context;	// 8 = 0x8
    HMCameraRecordingReachabilityEventManager *_reachabilityEventManager;	// 16 = 0x10
    HMCameraClipManager *_clipManager;	// 24 = 0x18
    HMFUnfairLock *_lock;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000000713a8
- (void).cxx_destruct;	// IMP=0x0000000000070529
@property(readonly) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly) HMCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(readonly) HMCameraRecordingReachabilityEventManager *reachabilityEventManager; // @synthesize reachabilityEventManager=_reachabilityEventManager;
@property(readonly) _HMContext *context; // @synthesize context=_context;
- (void)reachabilityEventManager:(id)arg1 didRemoveReachabilityEventsWithUUIDs:(id)arg2;	// IMP=0x0000000000070386
- (void)reachabilityEventManager:(id)arg1 didUpdateReachabilityEvents:(id)arg2;	// IMP=0x0000000000070247
- (void)clipManager:(id)arg1 didRemoveClipsWithUUIDs:(id)arg2;	// IMP=0x0000000000070108
- (void)clipManager:(id)arg1 didUpdateClips:(id)arg2;	// IMP=0x000000000006ffc9
- (void)notifyObserversOfUpdatedEvents:(id)arg1 removedEventsWithUUIDs:(id)arg2;	// IMP=0x000000000006fe23
- (id)mergedRecordingEventsWithRecordingEvents1:(id)arg1 recordingEvents2:(id)arg2 limit:(unsigned long long)arg3 shouldOrderAscending:(_Bool)arg4;	// IMP=0x000000000006fb06
- (void)deleteAllEventsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006f99c
- (void)fetchCountOfAllEventsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006f8d1
- (void)fetchCountOfEventsWithDateInterval:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f6a3
- (void)fetchAllEventsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006f585
- (void)fetchEventsWithDateInterval:(id)arg1 quality:(long long)arg2 limit:(unsigned long long)arg3 shouldOrderAscending:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000006f2bd
- (void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006f293
- (void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006f278
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006f15e
- (void)removeObserver:(id)arg1;	// IMP=0x000000000006f00a
- (void)addObserver:(id)arg1;	// IMP=0x000000000006eef4
- (id)initWithContext:(id)arg1 clipManager:(id)arg2 reachabilityEventManager:(id)arg3;	// IMP=0x000000000006ed89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

