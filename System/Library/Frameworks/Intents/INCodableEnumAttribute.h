//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableEnum, NSString;

@interface INCodableEnumAttribute <NSSecureCoding>
{
    INCodableEnum *_codableEnum;	// 8 = 0x8
    NSString *_enumNamespace;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000188c98
- (void).cxx_destruct;	// IMP=0x0000000000188c67
@property(copy, nonatomic) NSString *enumNamespace; // @synthesize enumNamespace=_enumNamespace;
@property(retain, nonatomic) INCodableEnum *codableEnum; // @synthesize codableEnum=_codableEnum;
- (id)valueWithName:(id)arg1;	// IMP=0x0000000000188a2b
- (id)valueForIndex:(unsigned long long)arg1;	// IMP=0x00000000001889cc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001888ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001887fa
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x00000000001885e5
- (void)updateWithDictionary:(id)arg1;	// IMP=0x0000000000188306
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001881bd
- (unsigned long long)hash;	// IMP=0x0000000000188143
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000188092
- (Class)_relationshipValueTransformerClass;	// IMP=0x0000000000188081
- (Class)resolutionResultClass;	// IMP=0x0000000000188070
- (long long)valueType;	// IMP=0x0000000000187edd
- (id)__INCodableDescriptionEnumTypeNamespaceKey;	// IMP=0x0000000000188e00
- (id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;	// IMP=0x0000000000188d50
- (id)__INTypeCodableDescriptionEnumTypeNamespaceKey;	// IMP=0x0000000000188ca0
- (id)__INCodableDescriptionEnumTypeKey;	// IMP=0x0000000000188e58
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;	// IMP=0x0000000000188da8
- (id)__INTypeCodableDescriptionEnumTypeKey;	// IMP=0x0000000000188cf8

@end

