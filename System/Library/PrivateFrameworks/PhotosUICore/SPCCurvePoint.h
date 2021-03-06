//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SPCCurvePoint : NSObject
{
    double _x;	// 8 = 0x8
    double _y;	// 16 = 0x10
    double _roundness;	// 24 = 0x18
    double _smoothness;	// 32 = 0x20
    struct CGPoint _leftTangentPoint;	// 40 = 0x28
    struct CGPoint _rightTangentPoint;	// 56 = 0x38
}

+ (id)pointWithX:(double)arg1 y:(double)arg2;	// IMP=0x0000000000523b94
+ (id)pointWithCGPoint:(struct CGPoint)arg1;	// IMP=0x0000000000523b82
@property double smoothness; // @synthesize smoothness=_smoothness;
@property double roundness; // @synthesize roundness=_roundness;
@property struct CGPoint rightTangentPoint; // @synthesize rightTangentPoint=_rightTangentPoint;
@property struct CGPoint leftTangentPoint; // @synthesize leftTangentPoint=_leftTangentPoint;
@property double y; // @synthesize y=_y;
@property double x; // @synthesize x=_x;
@property struct CGPoint CGPoint;
- (id)initWithX:(double)arg1 y:(double)arg2;	// IMP=0x00000000005239ea

@end

