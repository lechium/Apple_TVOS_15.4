//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval;

@interface HKValueHistogram : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_segments;	// 8 = 0x8
    NSDateInterval *_dateInterval;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fc176
- (void).cxx_destruct;	// IMP=0x00000000000fc2ee
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fc26c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fc17e
- (id)description;	// IMP=0x00000000000fc128
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fc11d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fc018
- (double)fractionOfValuesInSegmentAtIndex:(long long)arg1;	// IMP=0x00000000000fbf40
- (long long)totalSampleCount;	// IMP=0x00000000000fbe0c
- (id)initWithSegments:(id)arg1 dateInterval:(id)arg2;	// IMP=0x00000000000fbd68

@end

