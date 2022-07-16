//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDate, NSDictionary, NSError, NSNumber, NSString;

@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSNumber *_role;	// 8 = 0x8
    NSDate *_setupStartTime;	// 16 = 0x10
    NSDate *_setupEndTime;	// 24 = 0x18
    NSDate *_configurationEndTime;	// 32 = 0x20
    NSError *_setupSessionError;	// 40 = 0x28
    NSString *_category;	// 48 = 0x30
    NSNumber *_retryCount;	// 56 = 0x38
    NSDate *_firstSettingTime;	// 64 = 0x40
    NSDate *_languageSettingTime;	// 72 = 0x48
}

+ (_Bool)submitEventWithHistogrammedCommonConfigurationDimensions;	// IMP=0x00000000005c01a7
- (void).cxx_destruct;	// IMP=0x000000000035b5eb
@property(readonly) NSDate *languageSettingTime; // @synthesize languageSettingTime=_languageSettingTime;
@property(readonly) NSDate *firstSettingTime; // @synthesize firstSettingTime=_firstSettingTime;
@property(readonly, copy) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy) NSString *category; // @synthesize category=_category;
@property(readonly, copy) NSError *setupSessionError; // @synthesize setupSessionError=_setupSessionError;
@property(readonly, copy) NSDate *configurationEndTime; // @synthesize configurationEndTime=_configurationEndTime;
@property(readonly, copy) NSDate *setupEndTime; // @synthesize setupEndTime=_setupEndTime;
@property(readonly, copy) NSDate *setupStartTime; // @synthesize setupStartTime=_setupStartTime;
@property(readonly, copy) NSNumber *role; // @synthesize role=_role;
- (id)initWithRole:(long long)arg1 setupStartTime:(id)arg2 setupEndTime:(id)arg3 configurationEndTime:(id)arg4 setupSessionError:(id)arg5 category:(id)arg6 retryCount:(unsigned long long)arg7 firstSettingTime:(id)arg8 languageSettingTime:(id)arg9;	// IMP=0x000000000035b318
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

