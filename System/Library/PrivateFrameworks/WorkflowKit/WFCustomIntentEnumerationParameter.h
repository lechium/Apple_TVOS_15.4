//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INCodableEnumAttribute, NSArray, NSDictionary;

@interface WFCustomIntentEnumerationParameter
{
    NSArray *_possibleStates;	// 8 = 0x8
    INCodableEnumAttribute *_enumAttribute;	// 16 = 0x10
    NSDictionary *_enumNamesToKeys;	// 24 = 0x18
    NSDictionary *_keysToEnumNames;	// 32 = 0x20
    NSDictionary *_enumNamesToLabels;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001adaea
@property(readonly, nonatomic) NSDictionary *enumNamesToLabels; // @synthesize enumNamesToLabels=_enumNamesToLabels;
@property(readonly, nonatomic) NSDictionary *keysToEnumNames; // @synthesize keysToEnumNames=_keysToEnumNames;
@property(readonly, nonatomic) NSDictionary *enumNamesToKeys; // @synthesize enumNamesToKeys=_enumNamesToKeys;
@property(readonly, nonatomic) INCodableEnumAttribute *enumAttribute; // @synthesize enumAttribute=_enumAttribute;
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000001ad9a5
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000001ad413
- (Class)singleStateClass;	// IMP=0x00000000001ad402

@end
