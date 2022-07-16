//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemWake/BSInvalidatable-Protocol.h>
#import <SystemWake/SWSystemSleepObserver-Protocol.h>

@class BSAbsoluteMachTimer, NSString, SWSystemSleepMonitor;
@protocol SWSystemActivityProviding;

@interface SWSystemActivityAssertion : NSObject <SWSystemSleepObserver, BSInvalidatable>
{
    NSString *_identifier;	// 8 = 0x8
    BSAbsoluteMachTimer *_lock_timeoutTimer;	// 16 = 0x10
    SWSystemSleepMonitor *_sleepMonitor;	// 24 = 0x18
    id <SWSystemActivityProviding> _provider;	// 32 = 0x20
    unsigned int _lock_assertionID;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 44 = 0x2c
    CDUnknownBlockType _lock_acquisitionHandler;	// 48 = 0x30
    unsigned long long _lock_startKernelAPWakeTime;	// 56 = 0x38
    unsigned long long _lock_state;	// 64 = 0x40
    double _lock_timeout;	// 72 = 0x48
    _Bool _lock_wasSleepImminent;	// 80 = 0x50
    _Bool _lock_didFailToRevertPendingSleep;	// 81 = 0x51
    _Bool _lock_clientDidInvalidate;	// 82 = 0x52
}

- (void).cxx_destruct;	// IMP=0x000000000000723d
- (void)systemSleepMonitorWillWakeFromSleep:(id)arg1;	// IMP=0x000000000000722c
- (void)systemSleepMonitorSleepRequestAborted:(id)arg1;	// IMP=0x0000000000006f88
- (void)invalidate;	// IMP=0x0000000000006888
- (void)acquireWithTimeout:(double)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000056f7
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000053c0
- (id)initWithIdentifier:(id)arg1 sleepMonitor:(id)arg2 systemActivityProvider:(id)arg3;	// IMP=0x00000000000052b9
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000051dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

