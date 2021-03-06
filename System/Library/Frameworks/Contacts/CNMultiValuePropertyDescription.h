//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CNMultiValuePropertyDescription
{
}

- (id)localizedStringForLabel:(id)arg1;	// IMP=0x00000000000ad985
@property(readonly, nonatomic) NSArray *managedLabels;
@property(readonly, nonatomic) NSArray *standardLabels;
- (id)standardLabelsWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000ad8ae
@property(readonly, nonatomic) CDUnknownBlockType fromPlistTransform;
@property(readonly, nonatomic) CDUnknownBlockType plistTransform;
- (id)valueWithResetIdentifiers:(id)arg1;	// IMP=0x00000000000ad61d
- (id)stringForIndexingForContact:(id)arg1;	// IMP=0x00000000000ad3b4
- (_Bool)isValidMultiValueValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ad353
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ad042
- (void)assertValueType:(id)arg1;	// IMP=0x00000000000acc6e
- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;	// IMP=0x00000000000acbcd
@property(readonly, nonatomic) Class labeledValueClass;
@property(readonly, nonatomic) Class valueClass;
@property(readonly, nonatomic) _Bool isSingleValue;
@property(readonly, nonatomic) _Bool isMultiValue;
- (_Bool)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5;	// IMP=0x00000000000499a7
- (_Bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;	// IMP=0x00000000000498e6
- (_Bool)applyCNValue:(id)arg1 toArray:(id)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5;	// IMP=0x0000000000049808
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000497bb
- (id)CNMutableValueForABMultivalue;	// IMP=0x00000000000497a2
- (void *)ABMutableMultiValueForABPerson:(void *)arg1;	// IMP=0x000000000009cab0
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2;	// IMP=0x000000000009c95c
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3;	// IMP=0x000000000009c869
- (struct __CFString *)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1;	// IMP=0x000000000009c7ee
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;	// IMP=0x000000000009c7e5
- (id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString *)arg1;	// IMP=0x000000000009c77f
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;	// IMP=0x000000000009c772
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000009c57d
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000009c265
- (unsigned int)abPropertyType;	// IMP=0x000000000009c25a

@end

