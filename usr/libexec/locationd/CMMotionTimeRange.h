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

+ (CDStruct_2c43369c)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1;	// IMP=0x00400000008673c4
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(CDStruct_2c43369c)arg1;	// IMP=0x001000000086737f
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008671b6
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;	// IMP=0x00100000008672e1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000867282
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000008671be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000086712e
- (void)dealloc;	// IMP=0x00100000008670d6
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;	// IMP=0x0010000000867030

@end
