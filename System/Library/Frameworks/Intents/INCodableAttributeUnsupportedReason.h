//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface INCodableAttributeUnsupportedReason
{
    NSString *_code;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000116f6
- (void).cxx_destruct;	// IMP=0x00000000000116e3
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011626
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001158b
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x0000000000011448
- (void)updateWithDictionary:(id)arg1;	// IMP=0x0000000000011393
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000112b2
- (unsigned long long)hash;	// IMP=0x0000000000011231
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000111ba
@property(readonly, copy, nonatomic) NSString *predicateFormat;
- (id)__INCodableDescriptionCodeKey;	// IMP=0x000000000001185e
- (id)__INIntentResponseCodableDescriptionCodeKey;	// IMP=0x00000000000117ae
- (id)__INTypeCodableDescriptionCodeKey;	// IMP=0x00000000000116fe
- (id)__INCodableDescriptionKey;	// IMP=0x00000000000118b6
- (id)__INIntentResponseCodableDescriptionKey;	// IMP=0x0000000000011806
- (id)__INTypeCodableDescriptionKey;	// IMP=0x0000000000011756
- (id)__INCodableDescriptionFormatStringKey;	// IMP=0x0000000000023217
- (id)__INCodableDescriptionFormatStringIDKey;	// IMP=0x000000000002310f
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;	// IMP=0x00000000000230b7
- (id)__INCodableDescriptionFormatStringDictionaryKey;	// IMP=0x00000000000231bf
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;	// IMP=0x0000000000023167

@end
