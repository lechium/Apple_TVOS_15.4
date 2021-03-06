//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXOneSidedRegion
{
    double _a;	// 8 = 0x8
    double _b;	// 16 = 0x10
    double _c;	// 24 = 0x18
}

+ (id)identityRegion;	// IMP=0x0000000000150312
@property(readonly, nonatomic) double c; // @synthesize c=_c;
@property(readonly, nonatomic) double b; // @synthesize b=_b;
@property(readonly, nonatomic) double a; // @synthesize a=_a;
- (unsigned long long)hash;	// IMP=0x0000000000150142
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000150032
- (_Bool)_getIntersectionWithLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 intersectionFromPoint:(struct CGPoint *)arg3 toPoint:(struct CGPoint *)arg4;	// IMP=0x000000000014fec1
- (const struct CGPath *)createPathInRect:(struct CGRect)arg1;	// IMP=0x000000000014fc0a
- (double)valueAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000014fbdc
- (id)transformedWithAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000014fac2
- (id)initWithA:(double)arg1 b:(double)arg2 c:(double)arg3;	// IMP=0x000000000014fa4c
- (id)initWithSideAngle:(double)arg1 point:(struct CGPoint)arg2 width:(double)arg3 offset:(double)arg4;	// IMP=0x000000000014f9a6
- (id)init;	// IMP=0x000000000014f98b
- (id)initWithEdge:(unsigned int)arg1 tiltedInset:(CDStruct_39925896)arg2 rect:(struct CGRect)arg3;	// IMP=0x00000000004413ca

@end

