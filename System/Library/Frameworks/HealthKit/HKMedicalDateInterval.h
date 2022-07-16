//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying>
{
    HKMedicalDate *_startDate;	// 8 = 0x8
    HKMedicalDate *_endDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002037a0
+ (id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000002033df
+ (id)medicalDateIntervalWithEndDate:(id)arg1;	// IMP=0x0000000000203310
+ (id)medicalDateIntervalWithStartDate:(id)arg1;	// IMP=0x0000000000203241
- (void).cxx_destruct;	// IMP=0x0000000000203ca6
@property(readonly, copy, nonatomic) HKMedicalDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) HKMedicalDate *startDate; // @synthesize startDate=_startDate;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002039c8
- (unsigned long long)hash;	// IMP=0x000000000020393b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000203930
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000203882
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002037a8
- (id)description;	// IMP=0x00000000002036b3
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00000000002035fa

@end

