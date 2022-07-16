//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastDataParser-Protocol.h>

@class NSString;

@interface WFWeatherDataServiceParserV1 : NSObject <WFForecastDataParser>
{
}

+ (id)dateFormatter;	// IMP=0x000000000000243a
+ (id)dateFormatter;	// IMP=0x0000000000018f22
- (id)parsedGradientStopFromDictionary:(id)arg1;	// IMP=0x00000000000279d8
- (id)parsedCategoryFromDictionary:(id)arg1;	// IMP=0x0000000000027741
- (id)parseAQIScaleNamed:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000264cd
- (id)parseForecastDataFromDict:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id *)arg7 rules:(id)arg8;	// IMP=0x0000000000025d7e
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;	// IMP=0x0000000000025d47
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000025d10
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id *)arg7 rules:(id)arg8;	// IMP=0x0000000000025ac8
- (id)nextHourPrecipitationEventDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x0000000000003259
- (id)parseNextHourPrecipitationFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x000000000000248f
- (id)dailyAlmanacDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x000000000000ac8f
- (id)parseAlmanacFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x000000000000aad2
- (id)pollenDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x000000000000b314
- (id)parsePollenFromData:(id)arg1;	// IMP=0x000000000000acf4
- (id)hourlyForecastDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x0000000000013097
- (id)parseHourlyForecastFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x0000000000012e2a
- (id)severeWeatherEventDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x0000000000019443
- (id)parseSevereWeatherEventsFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x0000000000018f77
- (id)changeForecastDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x000000000001df72
- (id)parseChangeForecastFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x000000000001de49
- (id)hourlyHistoryDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x000000000001fbb5
- (id)parseHourlyHistoryFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x000000000001f948
- (id)currentObservationsDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x000000000002b59c
- (id)parseCurrentObservationsFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x000000000002b58a
- (id)parseMetaDataFromData:(id)arg1;	// IMP=0x00000000000364a8
- (void)parseWeatherComponentsFromData:(id)arg1 intoConditions:(id)arg2 withUnit:(int)arg3;	// IMP=0x000000000003bc3f
- (id)parseWeatherComponentsFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x000000000003bbd5
- (_Bool)isProviderAttribution:(id)arg1 stillValidWithMetadata:(id)arg2;	// IMP=0x0000000000040c03
- (id)airQualityDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x0000000000040b9e
- (id)parsePollutants:(id)arg1;	// IMP=0x0000000000040863
- (id)parseAirQualityFromData:(id)arg1 locale:(id)arg2;	// IMP=0x000000000003ff6a
- (id)dailyHistoryDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x000000000004e325
- (id)parseDailyHistoryFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x000000000004e0b8
- (id)dailyForecastDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x0000000000052cd6
- (id)parseDailyForecastFromData:(id)arg1 withUnit:(int)arg2;	// IMP=0x0000000000052952
- (id)nowLinksDictFromData:(id)arg1 types:(unsigned long long)arg2;	// IMP=0x0000000000056617
- (void)parseNowLinksFromData:(id)arg1 intoConditions:(id)arg2;	// IMP=0x00000000000561ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

