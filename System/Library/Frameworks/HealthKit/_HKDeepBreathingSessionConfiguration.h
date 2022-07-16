//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface _HKDeepBreathingSessionConfiguration
{
    NSDate *_startDate;	// 8 = 0x8
    double _sessionDuration;	// 16 = 0x10
    double _inhaleExhaleRatio;	// 24 = 0x18
    double _respirationsPerMinute;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022bb1
+ (id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;	// IMP=0x00000000000228d3
- (void).cxx_destruct;	// IMP=0x0000000000022e2c
@property(nonatomic) double respirationsPerMinute; // @synthesize respirationsPerMinute=_respirationsPerMinute;
@property(nonatomic) double inhaleExhaleRatio; // @synthesize inhaleExhaleRatio=_inhaleExhaleRatio;
@property(nonatomic) double sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000022cbf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022bb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022b16
- (id)description;	// IMP=0x00000000000229fe
- (id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4;	// IMP=0x0000000000022942

@end

