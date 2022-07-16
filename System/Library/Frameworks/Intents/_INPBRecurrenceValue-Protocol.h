//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBRecurrenceValue <NSObject>
@property(readonly, nonatomic) unsigned long long weeklyRecurrenceDaysCount;
@property(readonly, nonatomic) int *weeklyRecurrenceDays;
@property(nonatomic) _Bool hasOrdinal;
@property(nonatomic) long long ordinal;
@property(nonatomic) _Bool hasInterval;
@property(nonatomic) unsigned long long interval;
@property(nonatomic) _Bool hasFrequency;
@property(nonatomic) int frequency;
- (int)StringAsWeeklyRecurrenceDays:(NSString *)arg1;
- (NSString *)weeklyRecurrenceDaysAsString:(int)arg1;
- (void)setWeeklyRecurrenceDays:(int *)arg1 count:(unsigned long long)arg2;
- (int)weeklyRecurrenceDaysAtIndex:(unsigned long long)arg1;
- (void)addWeeklyRecurrenceDays:(int)arg1;
- (void)clearWeeklyRecurrenceDays;
- (int)StringAsFrequency:(NSString *)arg1;
- (NSString *)frequencyAsString:(int)arg1;
@end

