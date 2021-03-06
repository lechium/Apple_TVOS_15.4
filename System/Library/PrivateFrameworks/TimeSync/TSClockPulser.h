//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TimeSync/TSClockClient-Protocol.h>

@class NSString, TSClock;

@interface TSClockPulser : NSObject <TSClockClient>
{
    TSClock *_pulseClock;	// 8 = 0x8
    _Bool _hasLastTimestamp;	// 16 = 0x10
    _Bool _holdoverMode;	// 17 = 0x11
    int _lastLockState;	// 20 = 0x14
    _Bool _threadIsRunning;	// 24 = 0x18
    _Bool _threadShouldBeRunning;	// 25 = 0x19
    unsigned int _startSemaphore;	// 28 = 0x1c
    unsigned int _stopSemaphore;	// 32 = 0x20
    _Bool _useRealtimePriority;	// 36 = 0x24
    int _pulseOffset;	// 40 = 0x28
    CDUnknownBlockType _pulseHandler;	// 48 = 0x30
    unsigned long long _pulsePeriod;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000e609
@property(nonatomic) int pulseOffset; // @synthesize pulseOffset=_pulseOffset;
@property(nonatomic) unsigned long long pulsePeriod; // @synthesize pulsePeriod=_pulsePeriod;
@property(nonatomic) _Bool useRealtimePriority; // @synthesize useRealtimePriority=_useRealtimePriority;
@property(copy, nonatomic) CDUnknownBlockType pulseHandler; // @synthesize pulseHandler=_pulseHandler;
- (void)dealloc;	// IMP=0x000000000000e54f
- (void)pulseThread;	// IMP=0x000000000000dc46
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;	// IMP=0x000000000000dbfa
- (void)didBeginClockGrandmasterChangeForClock:(id)arg1;	// IMP=0x000000000000dbae
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;	// IMP=0x000000000000db0e
- (void)didChangeClockMasterForClock:(id)arg1;	// IMP=0x000000000000dac2
- (_Bool)stopPulsing;	// IMP=0x000000000000d9ba
- (_Bool)startPulsing;	// IMP=0x000000000000d907
- (id)initWithPulseClock:(id)arg1;	// IMP=0x000000000000d6fa
- (id)init;	// IMP=0x000000000000d66e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

