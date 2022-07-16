//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, WFAirQualityConditions, WFNextHourPrecipitation, WFWeatherConditions;

@interface WFParsedForecastData : NSObject
{
    NSData *_rawData;	// 8 = 0x8
    WFAirQualityConditions *_airQualityObservations;	// 16 = 0x10
    WFWeatherConditions *_currentConditions;	// 24 = 0x18
    NSArray *_lastTwentyFourHoursOfObservations;	// 32 = 0x20
    NSArray *_dailyForecasts;	// 40 = 0x28
    NSArray *_hourlyForecasts;	// 48 = 0x30
    NSArray *_pollenForecasts;	// 56 = 0x38
    NSArray *_changeForecasts;	// 64 = 0x40
    NSArray *_severeWeatherEvents;	// 72 = 0x48
    WFNextHourPrecipitation *_nextHourPrecipitation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000013aba
@property(retain, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation; // @synthesize nextHourPrecipitation=_nextHourPrecipitation;
@property(retain, nonatomic) NSArray *severeWeatherEvents; // @synthesize severeWeatherEvents=_severeWeatherEvents;
@property(retain, nonatomic) NSArray *changeForecasts; // @synthesize changeForecasts=_changeForecasts;
@property(retain, nonatomic) NSArray *pollenForecasts; // @synthesize pollenForecasts=_pollenForecasts;
@property(retain, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
@property(retain, nonatomic) NSArray *dailyForecasts; // @synthesize dailyForecasts=_dailyForecasts;
@property(retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations; // @synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations;
@property(retain, nonatomic) WFWeatherConditions *currentConditions; // @synthesize currentConditions=_currentConditions;
@property(retain, nonatomic) WFAirQualityConditions *airQualityObservations; // @synthesize airQualityObservations=_airQualityObservations;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
- (id)objectForForecastType:(unsigned long long)arg1;	// IMP=0x00000000000138f4

@end
