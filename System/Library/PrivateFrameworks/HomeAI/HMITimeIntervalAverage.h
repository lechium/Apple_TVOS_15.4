//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject
{
    MovingAverage *_average;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000a95b
- (double)valueForInterval:(double)arg1 defaultValue:(double)arg2;	// IMP=0x000000000000a93e
- (double)value;	// IMP=0x000000000000a921
- (void)addValue:(double)arg1;	// IMP=0x000000000000a8c6
- (id)initWithMaxCapacity:(long long)arg1;	// IMP=0x000000000000a84f

@end

