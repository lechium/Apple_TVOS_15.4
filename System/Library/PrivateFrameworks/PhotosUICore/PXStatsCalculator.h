//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXStatsCalculator : NSObject
{
    double _sum;	// 8 = 0x8
    double _squareSum;	// 16 = 0x10
    long long _count;	// 24 = 0x18
    double _min;	// 32 = 0x20
    double _max;	// 40 = 0x28
    double _first;	// 48 = 0x30
}

@property(readonly, nonatomic) double first; // @synthesize first=_first;
@property(readonly, nonatomic) double max; // @synthesize max=_max;
@property(readonly, nonatomic) double min; // @synthesize min=_min;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) double standardDeviation;
@property(readonly, nonatomic) double mean;
- (void)addValue:(double)arg1;	// IMP=0x000000000059b394
- (id)init;	// IMP=0x000000000059b347

@end

