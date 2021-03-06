//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSDateComponents, NSString, NSTimeZone;

@interface HMTimerTrigger <NSSecureCoding>
{
    NSArray *_recurrences;	// 16 = 0x10
    NSString *_significantEvent;	// 24 = 0x18
    NSDateComponents *_significantEventOffset;	// 32 = 0x20
    NSDate *_fireDate;	// 40 = 0x28
    NSTimeZone *_timeZone;	// 48 = 0x30
    NSDateComponents *_recurrence;	// 56 = 0x38
    NSCalendar *_recurrenceCalendar;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e3c1c
- (void).cxx_destruct;	// IMP=0x00000000000e3696
@property(readonly, copy, nonatomic) NSCalendar *recurrenceCalendar; // @synthesize recurrenceCalendar=_recurrenceCalendar;
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000e2ef3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2eed
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e2c81
- (void)_handleTriggerFired:(id)arg1;	// IMP=0x00000000000e2c52
- (void)_updateTimerTriggerPropertiesFromResponse:(id)arg1;	// IMP=0x00000000000e2977
- (id)_serializeForAdd;	// IMP=0x00000000000e2506
- (void)_updateTimerTriggerWithResponse:(CDUnknownBlockType)arg1 payloadToSend:(id)arg2;	// IMP=0x00000000000e2265
- (void)_updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1e62
- (void)updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1b68
- (void)_updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e188d
- (void)updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e1593
- (void)_updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e12b8
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e0fbe
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e0cde
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e09e4
- (void)_updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e0709
- (void)updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e040f
- (void)_updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dfff7
- (void)updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dfcfd
- (void)setSignificantEventOffset:(id)arg1;	// IMP=0x00000000000dfc39
@property(readonly, copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
- (void)setSignificantEvent:(id)arg1;	// IMP=0x00000000000dfa50
@property(readonly, copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void)setRecurrences:(id)arg1;	// IMP=0x00000000000df867
@property(readonly, copy, nonatomic) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(copy, nonatomic) NSDateComponents *recurrence; // @synthesize recurrence=_recurrence;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4;	// IMP=0x00000000000deff2
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4;	// IMP=0x00000000000deeca
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5;	// IMP=0x00000000000ded25
- (id)init;	// IMP=0x00000000000ded17

@end

