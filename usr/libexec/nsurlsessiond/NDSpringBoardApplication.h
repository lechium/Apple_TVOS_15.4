//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface NDSpringBoardApplication
{
    NSObject<OS_dispatch_source> *_delayTimer;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_nonDiscretionaryGracePeriodTimer;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_extendedNonDiscretionaryGracePeriodTimer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_transitionalDiscretionaryStateTimer;	// 64 = 0x40
    NDSpringBoardApplication *_containingApplication;	// 72 = 0x48
}

+ (id)requestDelayQueue;	// IMP=0x002000000003674f
- (void).cxx_destruct;	// IMP=0x00200000000363e5
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0010000000036358
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x00100000000361b6
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x0010000000036180
- (void)applicationBackgroundUpdatesTurnedOn:(id)arg1;	// IMP=0x001000000003614a
- (void)applicationBackgroundUpdatesTurnedOff:(id)arg1;	// IMP=0x0010000000036114
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x00100000000360de
- (void)startTransitionalDiscretionaryPeriodTimer;	// IMP=0x001000000003607a
- (void)disableTransitionalDiscretionaryPeriodTimer;	// IMP=0x0010000000036031
- (void)setupTransitionalDiscretionaryPeriodTimer;	// IMP=0x0010000000035f62
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000035df2
- (void)addObserver:(id)arg1;	// IMP=0x0010000000035bc6
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x0010000000035b57
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x0010000000035ae8
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x0010000000035a2c
- (_Bool)canBeSuspended;	// IMP=0x0010000000035a24
- (_Bool)isForeground;	// IMP=0x00100000000359b5
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x00100000000359ad
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000003588b
- (void)_onqueue_resetRequestDelay;	// IMP=0x00100000000357d3
- (void)setupDelayTimer;	// IMP=0x00100000000356fc
- (_Bool)supportsWakes;	// IMP=0x00100000000356f4
- (id)containerURL;	// IMP=0x0010000000035682
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000003550e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

