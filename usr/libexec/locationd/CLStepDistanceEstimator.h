//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLStepDistanceEstimator : NSObject
{
    struct CLExtendedStepCountEntry _lastEntry;	// 8 = 0x8
    double _totalCalibratedDistance;	// 240 = 0xf0
    _Bool _supportsFirstStepTime;	// 248 = 0xf8
}

- (struct CLExtendedStepCountEntry)updateEntryDistanceAndPace:(struct CLStepCountEntry *)arg1;	// IMP=0x00200000004be132
- (double)computeWalkRunSigma:(double)arg1;	// IMP=0x00100000004be0e8
- (id)init;	// IMP=0x00100000004be07d

@end

