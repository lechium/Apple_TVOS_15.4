//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CDDHistoryWindow : NSObject
{
    NSDate *_start;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _recurrenceDelta;	// 24 = 0x18
    double _recurrenceWidth;	// 32 = 0x20
}

+ (id)singleDayHistoryWindowWithWidth:(double)arg1 forDate:(id)arg2;	// IMP=0x0000000000009fe9
+ (id)dailyHistoryWindowWithWidth:(double)arg1 endingOnDate:(id)arg2 historyLengthInDays:(int)arg3;	// IMP=0x0000000000009f12
+ (id)allTimeHistoryWindow;	// IMP=0x0000000000009e95
- (void).cxx_destruct;	// IMP=0x000000000000a1f2
@property(readonly) double recurrenceWidth; // @synthesize recurrenceWidth=_recurrenceWidth;
@property(readonly) double recurrenceDelta; // @synthesize recurrenceDelta=_recurrenceDelta;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) NSDate *start; // @synthesize start=_start;
- (id)description;	// IMP=0x000000000000a181
- (id)initWithStart:(id)arg1 duration:(double)arg2 recurrenceDelta:(double)arg3 recurrenceWidth:(double)arg4 error:(id *)arg5;	// IMP=0x000000000000a096

@end

