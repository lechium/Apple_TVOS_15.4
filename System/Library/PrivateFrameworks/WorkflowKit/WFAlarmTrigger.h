//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WFAlarmTrigger
{
    long long _alarmType;	// 8 = 0x8
    NSArray *_alarmIDs;	// 16 = 0x10
    NSArray *_cachedAlarmDescriptions;	// 24 = 0x18
    long long _alarmState;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001aa8ce
+ (long long)triggerBacking;	// IMP=0x00000000001aa8c3
+ (id)displayGlyphName;	// IMP=0x00000000001aa8b6
+ (id)localizedDisplayExplanation;	// IMP=0x00000000001aa8a5
+ (id)localizedDisplayName;	// IMP=0x00000000001aa894
+ (_Bool)isAllowedToRunAutomatically;	// IMP=0x00000000001aa88c
- (void).cxx_destruct;	// IMP=0x00000000001aa85b
@property(nonatomic) long long alarmState; // @synthesize alarmState=_alarmState;
@property(copy, nonatomic) NSArray *cachedAlarmDescriptions; // @synthesize cachedAlarmDescriptions=_cachedAlarmDescriptions;
@property(copy, nonatomic) NSArray *alarmIDs; // @synthesize alarmIDs=_alarmIDs;
@property(nonatomic) long long alarmType; // @synthesize alarmType=_alarmType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001aa6af
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001aa20a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001aa096
- (id)localizedPastTenseDescription;	// IMP=0x00000000001a9c65
- (id)localizedDescriptionWithConfigurationSummary;	// IMP=0x00000000001a9834
- (_Bool)hasValidConfiguration;	// IMP=0x00000000001a979b
- (id)init;	// IMP=0x00000000001a96f5

@end

