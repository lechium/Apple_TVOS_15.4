//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class NSCalendar, NSDictionary, NSString, NSTimeZone;

@interface FMFSchedule : NSObject <NSSecureCoding, NSCopying>
{
    NSCalendar *_gregorian;	// 8 = 0x8
    unsigned long long _startHour;	// 16 = 0x10
    unsigned long long _startMin;	// 24 = 0x18
    long long _daysOfWeek;	// 32 = 0x20
    unsigned long long _endHour;	// 40 = 0x28
    unsigned long long _endMin;	// 48 = 0x30
    unsigned long long _spanDays;	// 56 = 0x38
    NSTimeZone *_timeZone;	// 64 = 0x40
}

+ (id)firstDateFromDates:(id)arg1 order:(long long)arg2;	// IMP=0x000000000000570d
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000048f3
+ (id)localizedTimeStringForHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2;	// IMP=0x00000000000271e4
+ (id)localizedTimeStringForHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;	// IMP=0x0000000000027171
+ (id)localizedDaysOfWeekStringFor:(long long)arg1;	// IMP=0x0000000000027123
+ (id)_stringForDaysOfWeek:(long long)arg1;	// IMP=0x000000000002618c
+ (id)_dayStringForDayOfWeek:(long long)arg1;	// IMP=0x0000000000025f86
+ (void)_enumerateDaysOfWeekInFMFDaysOfWeek:(long long)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025e9a
+ (id)_dateFromHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2;	// IMP=0x0000000000025db8
- (void).cxx_destruct;	// IMP=0x00000000000059b8
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) unsigned long long spanDays; // @synthesize spanDays=_spanDays;
@property(nonatomic) unsigned long long endMin; // @synthesize endMin=_endMin;
@property(nonatomic) unsigned long long endHour; // @synthesize endHour=_endHour;
@property(nonatomic) long long daysOfWeek; // @synthesize daysOfWeek=_daysOfWeek;
@property(nonatomic) unsigned long long startMin; // @synthesize startMin=_startMin;
@property(nonatomic) unsigned long long startHour; // @synthesize startHour=_startHour;
@property(readonly, nonatomic) NSCalendar *_gregorian; // @synthesize _gregorian;
- (id)_nextStartDateOnDayOfWeek:(long long)arg1 from:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000000055dc
- (id)nextStartDateFrom:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000000544d
- (id)_daysOfWeek;	// IMP=0x000000000000520a
- (id)_endDateForStartDate:(id)arg1;	// IMP=0x0000000000004fec
- (id)description;	// IMP=0x0000000000004ed1
- (id)previousStartDateFrom:(id)arg1;	// IMP=0x0000000000004eba
- (id)nextStartOrEndDateFrom:(id)arg1;	// IMP=0x0000000000004dda
- (_Bool)isCurrentAt:(id)arg1;	// IMP=0x0000000000004c76
- (unsigned long long)hash;	// IMP=0x0000000000004bac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000049bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000048fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000047dd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000464b
@property(readonly, nonatomic) NSDictionary *dictionary;
@property(readonly) NSString *validityError;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000003f98
@property(readonly, nonatomic) NSString *localizedEndTimeString;
@property(readonly, nonatomic) NSString *localizedStartTimeString;
@property(readonly, nonatomic) NSString *localizedDaysOfWeekString;

@end
