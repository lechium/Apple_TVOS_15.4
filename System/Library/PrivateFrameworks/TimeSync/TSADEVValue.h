//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSADEVValue : NSObject
{
    double _observationInterval;	// 8 = 0x8
    double _adev;	// 16 = 0x10
}

@property(readonly, nonatomic) double adev; // @synthesize adev=_adev;
@property(readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;
- (id)description;	// IMP=0x0000000000015cef
- (id)initWithObservationInterval:(double)arg1 andADEV:(double)arg2;	// IMP=0x0000000000015c9d

@end

