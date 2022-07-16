//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSSet, NSString;

@interface DMDActivationCurfewObserver
{
    NSString *_calendarIdentifier;	// 8 = 0x8
    NSSet *;	// 16 = 0x10
    NSMutableArray *_expiredNotificationTimes;	// 24 = 0x18
    NSMutableArray *_scheduledAlarmIdentifiers;	// 32 = 0x20
    long long _startDay;	// 40 = 0x28
    long long _startHour;	// 48 = 0x30
    long long _startMinute;	// 56 = 0x38
    long long _startSecond;	// 64 = 0x40
    long long _endDay;	// 72 = 0x48
    long long _endHour;	// 80 = 0x50
    long long _endMinute;	// 88 = 0x58
    long long _endSecond;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000000a72a
@property(nonatomic) long long endSecond; // @synthesize endSecond=_endSecond;
@property(nonatomic) long long endMinute; // @synthesize endMinute=_endMinute;
@property(nonatomic) long long endHour; // @synthesize endHour=_endHour;
@property(nonatomic) long long endDay; // @synthesize endDay=_endDay;
@property(nonatomic) long long startSecond; // @synthesize startSecond=_startSecond;
@property(nonatomic) long long startMinute; // @synthesize startMinute=_startMinute;
@property(nonatomic) long long startHour; // @synthesize startHour=_startHour;
@property(nonatomic) long long startDay; // @synthesize startDay=_startDay;
@property(retain, nonatomic) NSMutableArray *scheduledAlarmIdentifiers; // @synthesize scheduledAlarmIdentifiers=_scheduledAlarmIdentifiers;
@property(retain, nonatomic) NSMutableArray *expiredNotificationTimes; // @synthesize expiredNotificationTimes=_expiredNotificationTimes;
@property(retain, nonatomic) NSSet *notificationTimes; // @synthesize notificationTimes=_notificationTimes;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
- (id)_nextDateAfter:(id)arg1 matchingWeekday:(long long)arg2 hour:(long long)arg3 minute:(long long)arg4 second:(long long)arg5 inCalendar:(id)arg6;	// IMP=0x001000000000a499
- (id)_datesForNextCurfewBoundary;	// IMP=0x0010000000009fb9
- (void)_registerPredicateObserver;	// IMP=0x0010000000009afc
- (_Bool)_extractComponentsFromPredicate:(id)arg1;	// IMP=0x00100000000091c3
- (id)metadata;	// IMP=0x0010000000009092
- (void)updateObserverRegistration;	// IMP=0x0010000000009080
- (void)invalidate;	// IMP=0x0010000000008ec4
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x0010000000008927
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 curfewPredicate:(id)arg3;	// IMP=0x0010000000008836

@end

