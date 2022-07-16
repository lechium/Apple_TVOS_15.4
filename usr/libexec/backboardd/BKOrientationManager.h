//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKIOHIDService, BKIOHIDServiceMatcher, CMDeviceOrientationManager, NSHashTable, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface BKOrientationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;	// 16 = 0x10
    NSHashTable *_queue_observers;	// 24 = 0x18
    NSMutableDictionary *_queue_processDeathWatchers;	// 32 = 0x20
    double _queue_updateInterval;	// 40 = 0x28
    float _queue_interruptEventThresholds;	// 48 = 0x30
    _Bool _queue_isOrientationEventsEnabled;	// 52 = 0x34
    long long _queue_lastUnambiguousRawAccelerometerDeviceOrientation;	// 56 = 0x38
    long long _queue_currentUserInterfaceOrientation;	// 64 = 0x40
    long long _queue_currentRawAccelerometerDeviceOrientation;	// 72 = 0x48
    long long _queue_lastEffectiveInterfaceOrientation;	// 80 = 0x50
    long long _queue_effectiveDeviceOrientation;	// 88 = 0x58
    unsigned long long _queue_orientationLocksEnabled;	// 96 = 0x60
    _Bool _queue_ignoreAccelerometerAndOrientationEventsForTesting;	// 104 = 0x68
    NSOperationQueue *_queue_orientationManagerOperationQueue;	// 112 = 0x70
    CMDeviceOrientationManager *_queue_orientationManager;	// 120 = 0x78
    BKIOHIDService *_queue_HIDService;	// 128 = 0x80
    BKIOHIDServiceMatcher *_queue_HIDServiceMatcher;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 144 = 0x90
}

+ (id)sharedInstance;	// IMP=0x002000000005a6cd
- (void).cxx_destruct;	// IMP=0x0020000000059d33
@property(retain, nonatomic, getter=_queue_HIDService, setter=_queue_setHIDService:) BKIOHIDService *queue_HIDService; // @synthesize queue_HIDService=_queue_HIDService;
- (void)_queue_postDeviceOrientationLockChangedNotification:(_Bool)arg1;	// IMP=0x0010000000059ccb
- (void)_queue_postUpdatedLastUnambiguousDeviceOrientation:(long long)arg1;	// IMP=0x0010000000059c79
- (void)_queue_postUpdatedRawAccelerometerDeviceOrientation:(long long)arg1;	// IMP=0x0010000000059c27
- (void)_queue_postUpdatedOrientation:(long long)arg1;	// IMP=0x0010000000059bd5
- (void)_queue_unlockDeviceOrientationForType:(unsigned long long)arg1 versionedPID:(long long)arg2;	// IMP=0x0010000000059ac3
- (_Bool)_queue_isDeviceLockedForAtLeastOneType:(unsigned long long)arg1;	// IMP=0x0010000000059ab6
- (_Bool)_queue_isDeviceLockedForAllTypes:(unsigned long long)arg1;	// IMP=0x0010000000059aa3
- (void)_queue_lockDeviceOrientation:(unsigned long long)arg1 deviceOrientation:(long long)arg2 versionedPID:(long long)arg3;	// IMP=0x001000000005979f
- (void)_queue_invalidateEntryForSystemLockProcess:(int)arg1;	// IMP=0x0010000000059717
- (void)_queue_postDeviceOrientationLockChangedNotification;	// IMP=0x00100000000596e6
- (void)_queue_noteUserInterfaceOrientationDidChange:(long long)arg1;	// IMP=0x001000000005952e
- (void)_queue_noteEffectiveOrRawDeviceOrientationDidChange:(long long)arg1 changeSource:(long long)arg2;	// IMP=0x0010000000059364
- (void)_queue_updateDeviceOrientation:(long long)arg1 changeSource:(long long)arg2;	// IMP=0x00100000000592e9
- (void)_queue_updateDeviceOrientationFromCoreMotion:(id)arg1;	// IMP=0x001000000005920c
- (void)_queue_updateDeviceOrientationWithTemporaryManager;	// IMP=0x00100000000590d1
- (void)_queue_updateDeviceOrientationSynchronously;	// IMP=0x0010000000059009
- (void)_queue_setLastUnambiguousDeviceOrientation:(long long)arg1;	// IMP=0x0010000000058feb
- (void)_queue_setCurrentRawAccelerometerDeviceOrientation:(long long)arg1;	// IMP=0x0010000000058fcd
- (void)_queue_setEffectiveDeviceOrientation:(long long)arg1 affectingLastEffectiveInterfaceOrientation:(_Bool)arg2;	// IMP=0x0010000000058ebe
- (void)_queue_setCurrentUserInterfaceOrientation:(long long)arg1;	// IMP=0x0010000000058d13
- (void)_queue_resetDeviceOrientation;	// IMP=0x0010000000058c67
- (void)_queue_setOrientationEventsEnabled:(_Bool)arg1;	// IMP=0x0010000000058b40
- (_Bool)_queue_isOrientationLocked;	// IMP=0x0010000000058b32
- (void)_queue_setUpdateInterval:(double)arg1;	// IMP=0x00100000000589ce
- (void)_queue_setInterruptEventThresholds:(float)arg1;	// IMP=0x00100000000587cc
- (void);	// IMP=0x0010000000058781
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000586f2
- (void)addObserver:(id)arg1;	// IMP=0x0010000000058663
- (void)refreshEffectiveDeviceOrientation;	// IMP=0x0010000000058618
- (void)updateDeviceOrientation:(long long)arg1 changeSource:(long long)arg2;	// IMP=0x00100000000585c5
- (void)unlockDeviceOrientation:(unsigned long long)arg1 versionedPID:(long long)arg2;	// IMP=0x0010000000058572
- (void)lockDeviceOrientation:(unsigned long long)arg1 deviceOrientation:(long long)arg2 versionedPID:(long long)arg3;	// IMP=0x001000000005851b
- (_Bool)isDeviceOrientationLockedForType:(unsigned long long)arg1;	// IMP=0x0010000000058489
- (_Bool)isDeviceOrientationLocked:(long long *)arg1;	// IMP=0x00100000000583f7
- (_Bool)isDeviceOrientationLocked;	// IMP=0x0010000000058369
@property(readonly, nonatomic) long long effectiveDeviceOrientation;
@property(readonly, nonatomic) long long currentRawAccelerometerDeviceOrientation;
@property(readonly, nonatomic) long long lastEffectiveInterfaceOrientation;
@property(nonatomic) long long currentUserInterfaceOrientation;
@property(nonatomic, getter=isOrientationEventsEnabled) _Bool orientationEventsEnabled;
@property(nonatomic) double updateInterval;
@property(nonatomic) float interruptEventThresholds;
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x0010000000057da7
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x0010000000057d0c
- (void)dealloc;	// IMP=0x0010000000057c86
- (id)_initWithDeviceOrientationManager:(id)arg1;	// IMP=0x0010000000057a22
- (id)init;	// IMP=0x00100000000579e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

