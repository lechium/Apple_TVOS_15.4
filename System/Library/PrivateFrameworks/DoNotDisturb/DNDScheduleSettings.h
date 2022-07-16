//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDScheduleTimePeriod;

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _scheduleEnabledSetting;	// 8 = 0x8
    DNDScheduleTimePeriod *_timePeriod;	// 16 = 0x10
    unsigned long long _bedtimeBehaviorEnabledSetting;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000024f59
- (void).cxx_destruct;	// IMP=0x0000000000025104
@property(readonly, nonatomic) unsigned long long bedtimeBehaviorEnabledSetting; // @synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting;
@property(readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod; // @synthesize timePeriod=_timePeriod;
@property(readonly, nonatomic) unsigned long long scheduleEnabledSetting; // @synthesize scheduleEnabledSetting=_scheduleEnabledSetting;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025025
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024f61
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024f2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024f20
- (id)description;	// IMP=0x0000000000024e53
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024c9d
- (unsigned long long)hash;	// IMP=0x0000000000024c1f
- (id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3;	// IMP=0x0000000000024b60
- (id)_initWithSettings:(id)arg1;	// IMP=0x0000000000024abc
- (id)init;	// IMP=0x0000000000024aa8

@end
