//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLGeocoder, City;

@interface TWCLocationUpdater
{
    City *_currentCity;	// 8 = 0x8
    CLGeocoder *_reverseGeocoder;	// 16 = 0x10
    struct ct_green_tea_logger_s *_greenTeaLogger;	// 24 = 0x18
}

+ (id)sharedLocationUpdater;	// IMP=0x00000000000487bb
- (void).cxx_destruct;	// IMP=0x000000000004a26b
@property(nonatomic) struct ct_green_tea_logger_s *greenTeaLogger; // @synthesize greenTeaLogger=_greenTeaLogger;
@property(retain, nonatomic) CLGeocoder *reverseGeocoder; // @synthesize reverseGeocoder=_reverseGeocoder;
@property(retain, nonatomic) City *currentCity; // @synthesize currentCity=_currentCity;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a0e6
- (void)_completeReverseGeocodeForLocation:(id)arg1 currentCity:(id)arg2 geocodeError:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000499eb
- (void)_geocodeLocation:(id)arg1 currentCity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000492eb
- (void)_updateWeatherForLocation:(id)arg1 city:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000049186
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2;	// IMP=0x0000000000049107
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2 isFromFrameworkClient:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000049061
- (void)updateWeatherForCity:(id)arg1;	// IMP=0x0000000000048e42
- (void)enableProgressIndicator:(_Bool)arg1;	// IMP=0x0000000000048dad
- (void)parsedResultCity:(id)arg1;	// IMP=0x00000000000489d7
- (void)dealloc;	// IMP=0x0000000000048991
- (id)init;	// IMP=0x000000000004893e

@end

