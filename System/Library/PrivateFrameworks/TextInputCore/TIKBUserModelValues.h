//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIUserModelValues.h>

@class NSMutableDictionary, TIKBAnalyticsMetricsContext;

@interface TIKBUserModelValues : TIUserModelValues
{
    NSMutableDictionary *_stringValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000019a8d2
- (id)calcAutocorrectionEnabled;	// IMP=0x000000000019a823
- (id)calcTypingSpeedFromUserModel:(id)arg1;	// IMP=0x000000000019a19d
- (id)calcFloatingKeyboardUsageFromUserModel:(id)arg1;	// IMP=0x0000000000199950
- (id)computeValueFromExpression:(id)arg1 precondition:(id)arg2 defaultValue:(id)arg3 bindings:(id)arg4 bucketThresholds:(id)arg5 bucketValues:(id)arg6;	// IMP=0x000000000019981f
- (id)computeValueFromCount:(id)arg1 bucketThresholds:(id)arg2 bucketValues:(id)arg3;	// IMP=0x0000000000199806
- (id)bucketCountsByWordLength:(id)arg1;	// IMP=0x00000000001995fc
- (id)computeValuesByWordLengthWithDescriptor:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;	// IMP=0x0000000000198c84
- (id)computeValueWithDescriptor:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;	// IMP=0x0000000000198796
- (id)metricValuesByWordLength:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;	// IMP=0x000000000019869c
- (void)persistForDate:(id)arg1;	// IMP=0x0000000000198437
- (id)settingValueFromName:(id)arg1;	// IMP=0x000000000019839f
- (id)metricValue:(id)arg1 userModel:(id)arg2 forNumberOfDays:(int)arg3;	// IMP=0x0000000000197ef3
- (id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5;	// IMP=0x00000000001979df
@property(readonly, nonatomic) TIKBAnalyticsMetricsContext *kbContext;

@end

