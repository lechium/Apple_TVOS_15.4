//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/VCSDictifiable-Protocol.h>

@class NSArray, NSMutableArray, NSString, VCSDate;

@interface VCSRecurrenceRule : NSObject <VCSDictifiable>
{
    _Bool _hasDuration;	// 8 = 0x8
    unsigned long long _recurrenceType;	// 16 = 0x10
    long long _interval;	// 24 = 0x18
    long long _duration;	// 32 = 0x20
    NSArray *_dayNumberList;	// 40 = 0x28
    NSArray *_monthList;	// 48 = 0x30
    NSArray *_dayList;	// 56 = 0x38
    NSMutableArray *_occurrenceList;	// 64 = 0x40
    NSMutableArray *_weekdayList;	// 72 = 0x48
    VCSDate *_endDate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000029e2b
@property(retain, nonatomic) VCSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSMutableArray *weekdayList; // @synthesize weekdayList=_weekdayList;
@property(retain, nonatomic) NSMutableArray *occurrenceList; // @synthesize occurrenceList=_occurrenceList;
@property(retain, nonatomic) NSArray *dayList; // @synthesize dayList=_dayList;
@property(retain, nonatomic) NSArray *monthList; // @synthesize monthList=_monthList;
@property(retain, nonatomic) NSArray *dayNumberList; // @synthesize dayNumberList=_dayNumberList;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool hasDuration; // @synthesize hasDuration=_hasDuration;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) unsigned long long recurrenceType; // @synthesize recurrenceType=_recurrenceType;
- (_Bool)decodeDigits:(const char **)arg1 withResult:(long long *)arg2;	// IMP=0x0000000000029cb5
- (_Bool)decodeDuration:(const char **)arg1;	// IMP=0x0000000000029c5e
- (id)_decodeNumberList:(const char **)arg1 min:(long long)arg2 max:(long long)arg3;	// IMP=0x0000000000029b2d
- (_Bool)decodeOccurrenceList:(const char **)arg1;	// IMP=0x0000000000029a0d
- (_Bool)decodeWeekdayList:(const char **)arg1;	// IMP=0x00000000000298f3
- (_Bool)decodeInterval:(const char **)arg1;	// IMP=0x00000000000298c6
- (_Bool)decodeYearlyByDay:(const char **)arg1;	// IMP=0x0000000000029848
- (_Bool)decodeYearlyByMonth:(const char **)arg1;	// IMP=0x00000000000297ca
- (_Bool)decodeMonthlyByDay:(const char **)arg1;	// IMP=0x000000000002974c
- (_Bool)decodeMonthlyByPos:(const char **)arg1;	// IMP=0x00000000000296be
- (_Bool)decodeWeekly:(const char **)arg1;	// IMP=0x000000000002966a
- (_Bool)decodeDaily:(const char **)arg1;	// IMP=0x0000000000029658
- (id)dictify;	// IMP=0x00000000000292ef
- (id)initWithString:(const char *)arg1;	// IMP=0x00000000000290cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

