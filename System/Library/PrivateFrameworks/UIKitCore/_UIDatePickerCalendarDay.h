//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIDatePickerCalendarMonth;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarDay
{
    _UIDatePickerCalendarMonth *_month;	// 24 = 0x18
    _UIDatePickerCalendarMonth *_assignedMonth;	// 32 = 0x20
}

+ (unsigned long long)representedCalendarUnits;	// IMP=0x0000000000e62c32
- (void).cxx_destruct;	// IMP=0x0000000000e631d2
@property(readonly, nonatomic) _UIDatePickerCalendarMonth *assignedMonth; // @synthesize assignedMonth=_assignedMonth;
@property(readonly, nonatomic) _UIDatePickerCalendarMonth *month; // @synthesize month=_month;
- (id)description;	// IMP=0x0000000000e630e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e62fe4
- (unsigned long long)hash;	// IMP=0x0000000000e62f68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e62f07
@property(readonly, nonatomic) _Bool isToday;
- (id)copyWithAssignedMonth:(id)arg1;	// IMP=0x0000000000e62d94
- (id)initWithDate:(id)arg1 calendar:(id)arg2 month:(id)arg3 assignedMonth:(id)arg4;	// IMP=0x0000000000e62cdd
- (id)initWithDate:(id)arg1 calendar:(id)arg2;	// IMP=0x0000000000e62c3d

@end

