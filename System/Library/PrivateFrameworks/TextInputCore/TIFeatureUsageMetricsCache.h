//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString, TIMetricDescriptorRegistry;

@interface TIFeatureUsageMetricsCache : NSObject
{
    NSString *_inputMode;	// 8 = 0x8
    TIMetricDescriptorRegistry *_metricDescriptorRegistry;	// 16 = 0x10
    NSDate *_testingTimestamp;	// 24 = 0x18
    NSDate *_queryEndDate;	// 32 = 0x20
    NSMutableDictionary *_cachedMetrics;	// 40 = 0x28
    NSDictionary *_defaultMetrics;	// 48 = 0x30
    _Bool _sufficientData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000012958a
- (void)setTestingTimestamp:(id)arg1;	// IMP=0x0000000000129579
- (id)startOfDay;	// IMP=0x00000000001294a2
- (id)defaultMetricsFromContext:(id)arg1;	// IMP=0x0000000000129398
- (id)metricsFromUserModel:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000129102
- (void)loadMetricsFromUserModelDataStore:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000128e2a
- (id)featureUsageMetricFromName:(id)arg1 forContext:(id)arg2;	// IMP=0x0000000000128b4b
- (id)initWithInputMode:(id)arg1 metricDescriptorRegistry:(id)arg2;	// IMP=0x0000000000128a78

@end
