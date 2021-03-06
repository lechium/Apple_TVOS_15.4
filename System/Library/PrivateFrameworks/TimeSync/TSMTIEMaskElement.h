//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@interface TSMTIEMaskElement : NSObject <NSCopying>
{
    double _a;	// 8 = 0x8
    double _b;	// 16 = 0x10
    double _lowerLimit;	// 24 = 0x18
    double _upperLimit;	// 32 = 0x20
}

@property(readonly, nonatomic) double upperLimit; // @synthesize upperLimit=_upperLimit;
@property(readonly, nonatomic) double lowerLimit; // @synthesize lowerLimit=_lowerLimit;
@property(readonly, nonatomic) double b; // @synthesize b=_b;
@property(readonly, nonatomic) double a; // @synthesize a=_a;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a310
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002a158
- (id)initWithCoefficient:(double)arg1 offset:(double)arg2 lowerLimit:(double)arg3 upperLimit:(double)arg4;	// IMP=0x000000000002a0e8

@end

