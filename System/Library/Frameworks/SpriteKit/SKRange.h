//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@interface SKRange : NSObject <NSSecureCoding, NSCopying>
{
    double _lowerLimit;	// 8 = 0x8
    double _upperLimit;	// 16 = 0x10
}

+ (id)rangeWithValue:(double)arg1 variance:(double)arg2;	// IMP=0x00000000000e647f
+ (id)rangeWithConstantValue:(double)arg1;	// IMP=0x00000000000e6440
+ (id)rangeWithUpperLimit:(double)arg1;	// IMP=0x00000000000e63fc
+ (id)rangeWithLowerLimit:(double)arg1;	// IMP=0x00000000000e63b8
+ (id)rangeWithNoLimits;	// IMP=0x00000000000e637e
+ (id)rangeWithLowerLimit:(double)arg1 upperLimit:(double)arg2;	// IMP=0x00000000000e6338
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e614a
@property double upperLimit; // @synthesize upperLimit=_upperLimit;
@property double lowerLimit; // @synthesize lowerLimit=_lowerLimit;
- (_Bool)isEqualToRange:(id)arg1;	// IMP=0x00000000000e66cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e666c
- (id)description;	// IMP=0x00000000000e64d7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e62ab
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6206
- (id)initWithLowerLimit:(double)arg1 upperLimit:(double)arg2;	// IMP=0x00000000000e6175
- (id)init;	// IMP=0x00000000000e6152

@end
