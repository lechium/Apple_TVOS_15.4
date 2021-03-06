//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMITimeIntervalAverage, HMIVideoTimeline;

@interface HMIVideoTimelineProfiler : HMFObject
{
    HMIVideoTimeline *_timeline;	// 8 = 0x8
    HMITimeIntervalAverage *_average;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a81e
- (double)averageTime;	// IMP=0x000000000000a801
- (void)endedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000000a752
- (void)startedAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000000a6e3
- (id)initWithMaxCapacity:(long long)arg1;	// IMP=0x000000000000a62d

@end

