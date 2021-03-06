//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CMMotionTimeRange
{
    NSDate *fStartDate;	// 16 = 0x10
    NSDate *fEndDate;	// 24 = 0x18
}

+ (CDStruct_c3b9c2ee)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1;	// IMP=0x000000000010b626
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000010b5e1
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010b418
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;	// IMP=0x000000000010b543
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010b4e4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010b420
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010b390
- (void)dealloc;	// IMP=0x000000000010b338
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;	// IMP=0x000000000010b292

@end

