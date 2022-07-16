//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXVelocityNumberFilter
{
    double _minimumSampleInterval;	// 8 = 0x8
    double _previousVelocityWeight;	// 16 = 0x10
    double _lastValue;	// 24 = 0x18
    double _lastTime;	// 32 = 0x20
    double _velocity;	// 40 = 0x28
    double _previousVelocity;	// 48 = 0x30
    double _filteredVelocity;	// 56 = 0x38
}

+ (id)gestureVelocityFilter;	// IMP=0x00000000000661e6
- (double)updatedOutput;	// IMP=0x0000000000066100
- (id)initWithInput:(double)arg1;	// IMP=0x00000000000660b7

@end

