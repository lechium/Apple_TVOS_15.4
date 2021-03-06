//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SFProximityEstimator : NSObject
{
    int _rssiEnter;	// 8 = 0x8
    int _rssiExit;	// 12 = 0xc
    int _rssiImmediate;	// 16 = 0x10
    int _rssiNear;	// 20 = 0x14
    int _rssiFar;	// 24 = 0x18
    int _estimatedRSSI;	// 28 = 0x1c
}

+ (id)proximityEstimatorWithProximityInfo:(id)arg1;	// IMP=0x00000000000f027d
@property(readonly, nonatomic) int estimatedRSSI; // @synthesize estimatedRSSI=_estimatedRSSI;
- (int)_estimateRSSIForSFBLEDevice:(id)arg1;	// IMP=0x00000000000f0bf9
- (unsigned int)updateWithSFBLEDevice:(id)arg1;	// IMP=0x00000000000f069f
- (id)descriptionParams;	// IMP=0x00000000000f053b
- (id)description;	// IMP=0x00000000000f0491
- (id)initWithProximityInfo:(id)arg1;	// IMP=0x00000000000f031c

@end

