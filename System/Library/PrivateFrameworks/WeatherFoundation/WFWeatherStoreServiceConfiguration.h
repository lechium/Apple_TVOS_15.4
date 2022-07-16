//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, NSURL, NSURLSession, NWPathEvaluator, WFSettingsManager;

@interface WFWeatherStoreServiceConfiguration : NSObject <NSURLSessionTaskDelegate, NSCopying>
{
    struct os_unfair_lock_s _serviceConnectivityEvaluationURLLock;	// 8 = 0x8
    struct os_unfair_lock_s _serviceConnectivityEvaluatorLock;	// 12 = 0xc
    NWPathEvaluator *_serviceConnectivityEvaluator;	// 16 = 0x10
    NSURL *_serviceConnectivityEvaluationURL;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    NSURL *_cacheURL;	// 40 = 0x28
    Class _cacheClass;	// 48 = 0x30
    WFSettingsManager *_settingsManager;	// 56 = 0x38
}

+ (id)generateUserAgent;	// IMP=0x0000000000005c90
+ (id)defaultConfiguration;	// IMP=0x0000000000004b16
+ (id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1;	// IMP=0x000000000000491a
- (void).cxx_destruct;	// IMP=0x0000000000005f79
@property(retain, nonatomic) WFSettingsManager *settingsManager; // @synthesize settingsManager=_settingsManager;
@property(retain, nonatomic) Class cacheClass; // @synthesize cacheClass=_cacheClass;
@property(nonatomic) struct os_unfair_lock_s serviceConnectivityEvaluatorLock; // @synthesize serviceConnectivityEvaluatorLock=_serviceConnectivityEvaluatorLock;
@property(nonatomic) struct os_unfair_lock_s serviceConnectivityEvaluationURLLock; // @synthesize serviceConnectivityEvaluationURLLock=_serviceConnectivityEvaluationURLLock;
@property(copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NWPathEvaluator *serviceConnectivityEvaluator; // @synthesize serviceConnectivityEvaluator=_serviceConnectivityEvaluator;
- (_Bool)isServiceAvailableSync;	// IMP=0x0000000000005dfc
@property(retain, nonatomic) NSURL *serviceConnectivityEvaluationURL; // @synthesize serviceConnectivityEvaluationURL=_serviceConnectivityEvaluationURL;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005af3
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x0000000000005621
- (id)parseAQIScaleNamed:(id)arg1 data:(id)arg2 apiVersion:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000555b
- (id)aqiScaleRequestForScaleNamed:(id)arg1 language:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005499
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 apiVersion:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000005303
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id *)arg7;	// IMP=0x000000000000520c
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 apiVersion:(id)arg5 error:(id *)arg6 requestOptions:(id)arg7;	// IMP=0x0000000000004f50
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 apiVersion:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000004f24
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 apiVersion:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000004f00
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000004e4f
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isServiceAvailable;
- (id)apiConfigurationForAPIVersion:(id)arg1;	// IMP=0x0000000000004cc5
- (id)apiConfiguration;	// IMP=0x0000000000004c66
@property(readonly, nonatomic) NSString *apiVersion;
- (void)invalidate;	// IMP=0x0000000000004bb3
- (id)init;	// IMP=0x0000000000004b32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

