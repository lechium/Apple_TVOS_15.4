//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, INCodableDescription, NSArray, NSDictionary, NSString;

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding>
{
    NSDictionary *_originalDictionary;	// 8 = 0x8
    INCodableAttribute *_parentCodableAttribute;	// 16 = 0x10
    unsigned long long _relation;	// 24 = 0x18
    NSArray *_values;	// 32 = 0x20
    INCodableAttribute *_codableAttribute;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003afae1
- (void).cxx_destruct;	// IMP=0x00000000003afa3d
@property(readonly, nonatomic) __weak INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long relation; // @synthesize relation=_relation;
@property(nonatomic) __weak INCodableAttribute *parentCodableAttribute; // @synthesize parentCodableAttribute=_parentCodableAttribute;
@property(retain, nonatomic, setter=_setOriginalDictionary:) NSDictionary *_originalDictionary; // @synthesize _originalDictionary;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x00000000003af9a8
- (id)dictionaryRepresentation;	// IMP=0x00000000003af95c
@property(readonly, nonatomic) __weak INCodableDescription *_codableDescription;
- (void)updateWithDictionary:(id)arg1;	// IMP=0x00000000003af8fb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003af7b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003af725
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000003af649
@property(readonly, copy) NSString *description;
- (void)_establishRelationship;	// IMP=0x00000000003aef02
@property(readonly, nonatomic) Class valueClass;
- (id)initWithCodableAttribute:(id)arg1;	// IMP=0x00000000003aee41
- (_Bool)compareValue:(id)arg1;	// IMP=0x00000000003aeb84
- (id)__INCodableDescriptionParentNameKey;	// IMP=0x00000000003afeb1
- (id)__INIntentResponseCodableDescriptionParentNameKey;	// IMP=0x00000000003afd51
- (id)__INTypeCodableDescriptionParentNameKey;	// IMP=0x00000000003afbf1
- (id)__INCodableDescriptionPredicateNameKey;	// IMP=0x00000000003afe59
- (id)__INIntentResponseCodableDescriptionPredicateNameKey;	// IMP=0x00000000003afcf9
- (id)__INTypeCodableDescriptionPredicateNameKey;	// IMP=0x00000000003afb99
- (id)__INCodableDescriptionPredicateValueKey;	// IMP=0x00000000003afe01
- (id)__INIntentResponseCodableDescriptionPredicateValueKey;	// IMP=0x00000000003afca1
- (id)__INTypeCodableDescriptionPredicateValueKey;	// IMP=0x00000000003afb41
- (id)__INCodableDescriptionPredicateValuesKey;	// IMP=0x00000000003afda9
- (id)__INIntentResponseCodableDescriptionPredicateValuesKey;	// IMP=0x00000000003afc49
- (id)__INTypeCodableDescriptionPredicateValuesKey;	// IMP=0x00000000003afae9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

