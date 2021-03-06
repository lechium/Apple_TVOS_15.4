//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NearbyInteraction/NSCopying-Protocol.h>
#import <NearbyInteraction/NSSecureCoding-Protocol.h>

@interface NIAlgorithmConvergenceState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _insufficientSignalStrength;	// 8 = 0x8
    _Bool _insufficientHorizontalSweep;	// 9 = 0x9
    _Bool _insufficientVerticalSweep;	// 10 = 0xa
    _Bool _insufficientMovement;	// 11 = 0xb
    _Bool _insufficientLighting;	// 12 = 0xc
    long long _convergence;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017992
@property(nonatomic) _Bool insufficientLighting; // @synthesize insufficientLighting=_insufficientLighting;
@property(nonatomic) _Bool insufficientMovement; // @synthesize insufficientMovement=_insufficientMovement;
@property(nonatomic) _Bool insufficientVerticalSweep; // @synthesize insufficientVerticalSweep=_insufficientVerticalSweep;
@property(nonatomic) _Bool insufficientHorizontalSweep; // @synthesize insufficientHorizontalSweep=_insufficientHorizontalSweep;
@property(nonatomic) _Bool insufficientSignalStrength; // @synthesize insufficientSignalStrength=_insufficientSignalStrength;
@property(nonatomic) long long convergence; // @synthesize convergence=_convergence;
- (id)description;	// IMP=0x0000000000017df7
- (unsigned long long)hash;	// IMP=0x0000000000017d68
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017c00
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017abc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000179e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001799a
- (id)initWithAlgorithmConvergenceState:(id)arg1;	// IMP=0x000000000001788b
- (id)initWithConvergenceStatus:(long long)arg1;	// IMP=0x0000000000017843

@end

