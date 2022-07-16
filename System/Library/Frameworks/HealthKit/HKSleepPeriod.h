//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKRedactedDescription-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, NSString;

@interface HKSleepPeriod : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>
{
    NSDateInterval *_dateInterval;	// 8 = 0x8
    NSArray *_segments;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001947a8
+ (id)sleepPeriodWithDateInterval:(id)arg1 segments:(id)arg2;	// IMP=0x000000000019425c
- (void).cxx_destruct;	// IMP=0x0000000000194cb2
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000194c93
- (unsigned long long)hash;	// IMP=0x0000000000194c06
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019498e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019481e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001947b0
@property(readonly, nonatomic) _Bool containsSegmentsWithAppleSleepTrackingData;
- (double)durationForCategory:(long long)arg1 overlappingDateInterval:(id)arg2;	// IMP=0x0000000000194441
@property(readonly, copy) NSString *hk_redactedDescription;
- (id)description;	// IMP=0x0000000000194303

@end

