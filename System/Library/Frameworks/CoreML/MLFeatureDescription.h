//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class MLDictionaryConstraint, MLImageConstraint, MLMultiArrayConstraint, MLSequenceConstraint, NSDictionary, NSString;

@interface MLFeatureDescription : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _optional;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSDictionary *_valueConstraints;	// 32 = 0x20
    MLMultiArrayConstraint *_multiArrayConstraintCached;	// 40 = 0x28
    MLImageConstraint *_imageConstraintCached;	// 48 = 0x30
    MLDictionaryConstraint *_dictionaryConstraintCached;	// 56 = 0x38
    MLSequenceConstraint *_sequenceConstraintCached;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c1772
+ (id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(_Bool)arg3 constraints:(id)arg4;	// IMP=0x00000000000c16ef
- (void).cxx_destruct;	// IMP=0x00000000000c169b
@property(readonly, nonatomic) MLSequenceConstraint *sequenceConstraintCached; // @synthesize sequenceConstraintCached=_sequenceConstraintCached;
@property(readonly, nonatomic) MLDictionaryConstraint *dictionaryConstraintCached; // @synthesize dictionaryConstraintCached=_dictionaryConstraintCached;
@property(readonly, nonatomic) MLImageConstraint *imageConstraintCached; // @synthesize imageConstraintCached=_imageConstraintCached;
@property(readonly, nonatomic) MLMultiArrayConstraint *multiArrayConstraintCached; // @synthesize multiArrayConstraintCached=_multiArrayConstraintCached;
@property(retain) NSDictionary *valueConstraints; // @synthesize valueConstraints=_valueConstraints;
@property(readonly, nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c1312
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c121c
- (id)description;	// IMP=0x00000000000c1009
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c0f8f
- (_Bool)allowsValuesWithDescription:(id)arg1;	// IMP=0x00000000000c0bc3
- (id)sequenceConstraint;	// IMP=0x00000000000c0bb5
- (id)dictionaryConstraint;	// IMP=0x00000000000c0ba7
- (id)imageConstraint;	// IMP=0x00000000000c0b99
- (id)multiArrayConstraint;	// IMP=0x00000000000c0b8b
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c07f6
- (_Bool)isAllowedValue:(id)arg1;	// IMP=0x00000000000c07e2
- (id)initWithName:(id)arg1 type:(long long)arg2 optional:(_Bool)arg3 contraints:(id)arg4;	// IMP=0x00000000000c0425
- (id)debugQuickLookObject;	// IMP=0x0000000000120031

@end

