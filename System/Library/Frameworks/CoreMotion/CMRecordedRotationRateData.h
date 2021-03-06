//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CMRecordedRotationRateData
{
    double _startDateValue;	// 24 = 0x18
    CDStruct_31142d93 _rotationRate;	// 32 = 0x20
    double _timestampValue;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ee2a8
- (id)description;	// IMP=0x00000000000ee4f5
@property(readonly) NSDate *startDate;
- (double)timestamp;	// IMP=0x00000000000ee4bb
- (CDStruct_31142d93)rotationRate;	// IMP=0x00000000000ee49b
- (void)dealloc;	// IMP=0x00000000000ee46c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ee3a7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ee2b0
- (id)initWithData:(struct CMGyro200 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3;	// IMP=0x00000000000ee1d6

@end

