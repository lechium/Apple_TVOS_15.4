//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying>
{
    CDStruct_9878d8f4 _strideCalStruct;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000192a91
- (id)description;	// IMP=0x0000000000192eba
@property(readonly, nonatomic) long long gpsSource;
@property(readonly, nonatomic) double percentGrade;
@property(readonly, nonatomic) double speed;
- (int)session;	// IMP=0x0000000000192e92
@property(readonly, nonatomic) int steps;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) double endTime;
- (double)score;	// IMP=0x0000000000192e68
- (double)kvalueTrack;	// IMP=0x0000000000192e5d
- (double)kvalue;	// IMP=0x0000000000192e52
- (unsigned int)pacebin;	// IMP=0x0000000000192e49
@property(readonly, nonatomic) double startTime;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000192dc2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000192c79
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000192a99
- (id)initWithCLStrideCalEntry:(CDStruct_9878d8f4)arg1;	// IMP=0x0000000000192a22

@end

