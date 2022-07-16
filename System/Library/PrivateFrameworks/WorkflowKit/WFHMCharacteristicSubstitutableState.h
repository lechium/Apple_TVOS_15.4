//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCharacteristic, NSDictionary, NSString;

@interface WFHMCharacteristicSubstitutableState
{
    HMCharacteristic *_characteristic;	// 8 = 0x8
    NSString *_homeIdentifier;	// 16 = 0x10
    NSDictionary *_serializedCharacteristic;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001d78d0
@property(retain, nonatomic) NSDictionary *serializedCharacteristic; // @synthesize serializedCharacteristic=_serializedCharacteristic;
@property(readonly, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d7888
- (id)containedVariables;	// IMP=0x00000000001d787b
- (unsigned long long)hash;	// IMP=0x00000000001d77b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d7637
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d762c
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)serializedRepresentation;	// IMP=0x00000000001d7439
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x00000000001d7307
- (id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2;	// IMP=0x00000000001d71ad

@end

