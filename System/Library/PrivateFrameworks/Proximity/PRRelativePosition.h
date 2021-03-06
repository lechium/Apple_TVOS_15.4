//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@class PRAngleMeasurement, PRRangeMeasurement;

@interface PRRelativePosition : NSObject <NSCopying, NSSecureCoding>
{
    double _timestamp;	// 8 = 0x8
    long long _cycleIndex;	// 16 = 0x10
    PRRangeMeasurement *_range;	// 24 = 0x18
    PRAngleMeasurement *_azimuth;	// 32 = 0x20
    PRAngleMeasurement *_elevation;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000236f7
+ (id)relativePositionWithTimestamp:(double)arg1 range:(id)arg2 azimuth:(id)arg3 elevation:(id)arg4;	// IMP=0x000000000002365c
- (void).cxx_destruct;	// IMP=0x0000000000023b5a
@property(readonly, nonatomic) PRAngleMeasurement *elevation; // @synthesize elevation=_elevation;
@property(readonly, nonatomic) PRAngleMeasurement *azimuth; // @synthesize azimuth=_azimuth;
@property(readonly, nonatomic) PRRangeMeasurement *range; // @synthesize range=_range;
@property(readonly) long long cycleIndex; // @synthesize cycleIndex=_cycleIndex;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023947
- (id)description;	// IMP=0x0000000000023912
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000238d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002381b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000236ff
- (id)initWithTimestamp:(double)arg1 range:(id)arg2 azimuth:(id)arg3 elevation:(id)arg4;	// IMP=0x0000000000023595

@end

