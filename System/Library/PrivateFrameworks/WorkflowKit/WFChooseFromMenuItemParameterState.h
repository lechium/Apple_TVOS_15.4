//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WFChooseFromMenuItemParameterState
{
    NSArray *_synonyms;	// 8 = 0x8
}

+ (Class)processingValueClass;	// IMP=0x00000000000c797b
- (void).cxx_destruct;	// IMP=0x00000000000c7454
@property(readonly, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c727f
- (id)containedVariables;	// IMP=0x00000000000c71b1
- (unsigned long long)hash;	// IMP=0x00000000000c711d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c6ff5
- (_Bool)shouldSerializeAsPlainString;	// IMP=0x00000000000c6f77
- (id)serializedRepresentation;	// IMP=0x00000000000c6dff
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x00000000000c6b92
- (id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2;	// IMP=0x00000000000c6b79
- (id)initWithVariableString:(id)arg1 synonyms:(id)arg2;	// IMP=0x00000000000c6b5d
- (id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2 synonyms:(id)arg3;	// IMP=0x00000000000c6abc

@end

