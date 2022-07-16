//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateInterval;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface REUpNextTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDate *_lastFireDate;	// 16 = 0x10
    NSDateInterval *_fireInterval;	// 24 = 0x18
    double _rate;	// 32 = 0x20
    CDUnknownBlockType _block;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_dispatch_timer;	// 48 = 0x30
}

+ (id)timerWithFireInterval:(id)arg1 atRate:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cc6fa
+ (id)timerWithFireDate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc630
+ (id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc616
- (void).cxx_destruct;	// IMP=0x00000000000cd203
@property(retain) NSObject<OS_dispatch_source> *dispatch_timer; // @synthesize dispatch_timer=_dispatch_timer;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) NSDateInterval *fireInterval; // @synthesize fireInterval=_fireInterval;
- (void)invalidate;	// IMP=0x00000000000cd0eb
@property(readonly, getter=isValid) _Bool valid;
- (void)_rescheduleTimer;	// IMP=0x00000000000ccff6
- (void)_handleTimer;	// IMP=0x00000000000ccefd
- (void)_scheduleTimerWithInterval:(id)arg1 rate:(double)arg2;	// IMP=0x00000000000ccae3
- (_Bool)_isNowRepeatingTimerWithCurrentDate:(id)arg1;	// IMP=0x00000000000ccac4
- (void)dealloc;	// IMP=0x00000000000cca3a
- (id)initWithDateInterval:(id)arg1 rate:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cc795

@end
