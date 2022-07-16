//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _count;	// 8 = 0x8
    union {
        double vec[4];
        double *ptr;
    } _u;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001775e3
+ (id)vectorWithString:(id)arg1;	// IMP=0x0000000000176ae1
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000176a9d
+ (id)vectorWithCGRect:(struct CGRect)arg1;	// IMP=0x0000000000176a62
+ (id)vectorWithCGPoint:(struct CGPoint)arg1;	// IMP=0x0000000000176a24
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;	// IMP=0x00000000001769d2
+ (id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;	// IMP=0x000000000017698a
+ (id)vectorWithX:(double)arg1 Y:(double)arg2;	// IMP=0x000000000017694c
+ (id)vectorWithX:(double)arg1;	// IMP=0x0000000000176918
+ (id)vectorWithValues:(const double *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001768e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000177819
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001775eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001775d8
- (unsigned long long)hash;	// IMP=0x0000000000177577
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001774f4
- (id)description;	// IMP=0x00000000001772b6
@property(readonly) NSString *stringRepresentation;
@property(readonly) struct CGAffineTransform CGAffineTransformValue;
@property(readonly) struct CGRect CGRectValue;
@property(readonly) struct CGPoint CGPointValue;
@property(readonly) double W;
@property(readonly) double Z;
@property(readonly) double Y;
@property(readonly) double X;
- (double)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000177061
@property(readonly) unsigned long long count;
- (void)finalize;	// IMP=0x0000000000177016
- (void)dealloc;	// IMP=0x0000000000176fd5
- (id)initWithString:(id)arg1;	// IMP=0x0000000000176e0f
- (id)initWithValues:(const double *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000176d21
- (id)initWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000176d05
- (id)initWithCGRect:(struct CGRect)arg1;	// IMP=0x0000000000176caf
- (id)initWithCGPoint:(struct CGPoint)arg1;	// IMP=0x0000000000176c5f
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4;	// IMP=0x0000000000176c05
- (id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3;	// IMP=0x0000000000176bb0
- (id)initWithX:(double)arg1 Y:(double)arg2;	// IMP=0x0000000000176b60
- (id)initWithX:(double)arg1;	// IMP=0x0000000000176b38
- (id)init;	// IMP=0x0000000000176b10
- (float)_dot:(id)arg1;	// IMP=0x000000000008793d
- (id)_orthonormalizeTo:(id)arg1;	// IMP=0x000000000008783a
- (float)_norm;	// IMP=0x00000000000877b7
@property(readonly) double *_values;

@end
