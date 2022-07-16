//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding>
{
    NSMapTable *_factors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ff56f
+ (id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2;	// IMP=0x00000000000186b6
+ (id)factorizationWithFactorsAndExponents:(id)arg1;	// IMP=0x000000000001a6a8
+ (id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2;	// IMP=0x000000000001a691
+ (id)factorization;	// IMP=0x000000000001a82c
- (void).cxx_destruct;	// IMP=0x000000000001a9f7
- (void)_raiseToExponent:(long long)arg1;	// IMP=0x000000000001bdc1
- (void)_multiplyByFactorization:(id)arg1;	// IMP=0x000000000001bf89
- (void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2;	// IMP=0x000000000001a8a4
- (long long)_exponentForFactor:(id)arg1;	// IMP=0x000000000000dc4e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ff6f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ff577
- (id)unitString;	// IMP=0x000000000000e48b
- (long long)exponentForFactor:(id)arg1;	// IMP=0x000000000001a9af
- (id)anyFactor;	// IMP=0x000000000001a95b
- (unsigned long long)factorCount;	// IMP=0x000000000001a945
- (void)_enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ff3ac
- (void)enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000da0c
- (id)factorizationByRaisingToExponent:(long long)arg1;	// IMP=0x000000000001bd62
- (id)reciprocal;	// IMP=0x000000000001bd49
- (id)factorizationByDividing:(id)arg1;	// IMP=0x000000000001bce7
- (id)factorizationByMultiplying:(id)arg1;	// IMP=0x000000000001bf23
- (id)description;	// IMP=0x00000000000ff39a
- (unsigned long long)hash;	// IMP=0x00000000000ff290
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003efe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b46a
- (id)init;	// IMP=0x000000000001a83e

@end
