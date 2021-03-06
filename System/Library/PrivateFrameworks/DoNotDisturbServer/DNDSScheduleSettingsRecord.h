//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSNumber, NSString;

@interface DNDSScheduleSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSNumber *_lastUpdatedTimestamp;	// 8 = 0x8
    NSNumber *_scheduleEnabledSetting;	// 16 = 0x10
    NSNumber *_timePeriodStartTimeHour;	// 24 = 0x18
    NSNumber *_timePeriodStartTimeMinute;	// 32 = 0x20
    NSNumber *_timePeriodEndTimeHour;	// 40 = 0x28
    NSNumber *_timePeriodEndTimeMinute;	// 48 = 0x30
    NSNumber *_timePeriodWeekdays;	// 56 = 0x38
    NSNumber *_bedtimeBehaviorEnabledSetting;	// 64 = 0x40
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021397
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;	// IMP=0x0000000000021381
+ (id)recordForLegacyBehaviorOverride:(id)arg1 lastUpdated:(id)arg2;	// IMP=0x000000000006dc29
+ (id)_recordWithEncodedInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006da29
- (void).cxx_destruct;	// IMP=0x0000000000021809
@property(readonly, copy, nonatomic) NSNumber *bedtimeBehaviorEnabledSetting; // @synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting;
@property(readonly, copy, nonatomic) NSNumber *timePeriodWeekdays; // @synthesize timePeriodWeekdays=_timePeriodWeekdays;
@property(readonly, copy, nonatomic) NSNumber *timePeriodEndTimeMinute; // @synthesize timePeriodEndTimeMinute=_timePeriodEndTimeMinute;
@property(readonly, copy, nonatomic) NSNumber *timePeriodEndTimeHour; // @synthesize timePeriodEndTimeHour=_timePeriodEndTimeHour;
@property(readonly, copy, nonatomic) NSNumber *timePeriodStartTimeMinute; // @synthesize timePeriodStartTimeMinute=_timePeriodStartTimeMinute;
@property(readonly, copy, nonatomic) NSNumber *timePeriodStartTimeHour; // @synthesize timePeriodStartTimeHour=_timePeriodStartTimeHour;
@property(readonly, copy, nonatomic) NSNumber *scheduleEnabledSetting; // @synthesize scheduleEnabledSetting=_scheduleEnabledSetting;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x00000000000215bb
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021353
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021348
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000209e7
@property(readonly) unsigned long long hash;
- (id)_initWithLastUpdatedTimestamp:(id)arg1 scheduleEnabledSetting:(id)arg2 timePeriodStartTimeHour:(id)arg3 timePeriodStartTimeMinute:(id)arg4 timePeriodEndTimeHour:(id)arg5 timePeriodEndTimeMinute:(id)arg6 timePeriodWeekdays:(id)arg7 bedtimeBehaviorEnabledSetting:(id)arg8;	// IMP=0x00000000000205be
- (id)_initWithRecord:(id)arg1;	// IMP=0x0000000000020442
- (id)init;	// IMP=0x000000000002042e
- (id)legacyBehaviorOverride;	// IMP=0x000000000006def8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

