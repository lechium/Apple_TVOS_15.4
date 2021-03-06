//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSTimeZone;

@interface DDMatchCalendarEvent
{
    _Bool _allDay;	// 32 = 0x20
    NSDate *_startDate;	// 40 = 0x28
    NSTimeZone *_startTimeZone;	// 48 = 0x30
    NSDate *_endDate;	// 56 = 0x38
    NSTimeZone *_endTimeZone;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000001d37
@property(readonly, nonatomic) NSTimeZone *endTimeZone; // @synthesize endTimeZone=_endTimeZone;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSTimeZone *startTimeZone; // @synthesize startTimeZone=_startTimeZone;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
- (id)initWithDDScannerResult:(id)arg1;	// IMP=0x0000000000001a85

@end

