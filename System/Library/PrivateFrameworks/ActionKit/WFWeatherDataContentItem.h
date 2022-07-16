//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@interface WFWeatherDataContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)propertyBuilders;	// IMP=0x0000000000360b30
+ (id)countDescription;	// IMP=0x0000000000360b18
+ (id)pluralTypeDescription;	// IMP=0x0000000000360af9
+ (id)typeDescription;	// IMP=0x0000000000360ada
+ (id)contentCategories;	// IMP=0x0000000000360a70
+ (id)outputTypes;	// IMP=0x00000000003609b6
+ (id)ownedTypes;	// IMP=0x000000000036093a
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000036082e
- (id)pollutants;	// IMP=0x00000000003607de
- (id)localizedAirQualityCategory;	// IMP=0x000000000036078e
- (id)localizedAirQualityIndex;	// IMP=0x000000000036073e
- (id)sunsetTime;	// IMP=0x00000000003606ee
- (id)sunriseTime;	// IMP=0x000000000036069e
- (id)uvIndex;	// IMP=0x000000000036064e
- (id)windDirection;	// IMP=0x00000000003605fe
- (id)windSpeed;	// IMP=0x00000000003605ae
- (id)precipitationChance;	// IMP=0x000000000036055e
- (id)precipitationAmount;	// IMP=0x000000000036050e
- (id)pressure;	// IMP=0x00000000003604be
- (id)humidity;	// IMP=0x000000000036046e
- (id)dewpoint;	// IMP=0x000000000036041e
- (id)visibility;	// IMP=0x00000000003603ce
- (id)localizedConditionString;	// IMP=0x000000000036037e
- (id)feelsLikeTemperature;	// IMP=0x000000000036032e
- (id)lowTemperature;	// IMP=0x00000000003602de
- (id)highTemperature;	// IMP=0x000000000036028e
- (id)temperature;	// IMP=0x000000000036023e
- (id)location;	// IMP=0x00000000003601ee
- (id)date;	// IMP=0x000000000036019e
- (id)weatherData;	// IMP=0x0000000000360170

@end

