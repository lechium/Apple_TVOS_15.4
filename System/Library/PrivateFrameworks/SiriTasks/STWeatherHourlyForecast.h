//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherHourlyForecast : STSiriModelObject
{
    long long _timeIndex;	// 8 = 0x8
    long long _conditionCode;	// 16 = 0x10
    NSNumber *_temperature;	// 24 = 0x18
    NSNumber *_chanceOfPrecipitation;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c1d3
- (void).cxx_destruct;	// IMP=0x000000000000c3e3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c2b7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c1db
- (id)chanceOfPrecipitation;	// IMP=0x000000000000c1be
- (id)temperature;	// IMP=0x000000000000c1a9
- (long long)conditionCode;	// IMP=0x000000000000c198
- (long long)timeIndex;	// IMP=0x000000000000c187
- (id)_initWithConditionCodeIndex:(long long)arg1 timeIndex:(long long)arg2 temperature:(id)arg3 chanceOfPrecipitation:(id)arg4;	// IMP=0x000000000000c0c2

@end
