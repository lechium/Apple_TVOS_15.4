//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFSettings-Protocol.h>

@class NSDictionary, NSSet, NSString, NSURL, WFWeatherEventsConfig;

@interface WFInternalAppSettings : NSObject <WFSettings>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021856
@property(readonly, nonatomic) _Bool disableLimitReverseGeocoding;
@property(readonly, nonatomic) _Bool loadSavedCitiesFromKVSOnly;
@property(readonly, nonatomic) _Bool disablePriorityForecastRequestQueue;
@property(readonly, nonatomic) _Bool disableForecastRequestCancelation;
@property(readonly, nonatomic) WFWeatherEventsConfig *weatherEventsConfig;
@property(readonly, nonatomic) double locationUpdateMinDistance;
@property(readonly, nonatomic) double locationUpdateMinTimeInterval;
@property(readonly, nonatomic) double cachedGeocodeLocationExpirationTimeInterval;
@property(readonly, nonatomic) double privateUserIdentifierResetTimeInterval;
@property(readonly, nonatomic) double userIdentifierResetTimeInterval;
@property(readonly, nonatomic) float locationGeocodingSamplingRate;
@property(readonly, nonatomic) float telemetrySamplingRate;
@property(readonly, nonatomic) float dataSamplingRate;
@property(readonly, nonatomic) NSURL *appAnalyticsEndpointUrl;
@property(readonly, nonatomic) unsigned long long locationNumDecimalsOfPrecision;
@property(readonly, nonatomic) unsigned long long networkSwitchExpirationTimeInSeconds;
@property(readonly, nonatomic) unsigned long long networkFailedAttemptsLimit;
@property(readonly, nonatomic) NSString *apiVersionFallback;
@property(readonly, nonatomic) NSSet *aqiEnabledCountryCodes;
@property(readonly, nonatomic) NSString *apiVersion;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDictionary *widgetRefreshPolicy;

@end
