//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCharacteristic, HMHome, HMService, NSDictionary, NSFormatter, WFHMCharacteristicSubstitutableState, WFHMServiceParameterState;

@interface WFHomeAccessoryConditionalSubjectState
{
    _Bool _negatesValue;	// 8 = 0x8
    NSDictionary *_serializedWFHMServiceParameter;	// 16 = 0x10
    NSDictionary *_serializedWFHMCharacteristicSubstitutableState;	// 24 = 0x18
    WFHMServiceParameterState *_serviceParameterState;	// 32 = 0x20
    WFHMCharacteristicSubstitutableState *_characteristicSubstitutableState;	// 40 = 0x28
    NSFormatter *_characteristicValueFormatter;	// 48 = 0x30
}

+ (id)subjectType;	// IMP=0x0000000000020ace
- (void).cxx_destruct;	// IMP=0x000000000001ff94
@property(retain, nonatomic) NSFormatter *characteristicValueFormatter; // @synthesize characteristicValueFormatter=_characteristicValueFormatter;
@property(retain, nonatomic) WFHMCharacteristicSubstitutableState *characteristicSubstitutableState; // @synthesize characteristicSubstitutableState=_characteristicSubstitutableState;
@property(retain, nonatomic) WFHMServiceParameterState *serviceParameterState; // @synthesize serviceParameterState=_serviceParameterState;
@property(retain, nonatomic) NSDictionary *serializedWFHMCharacteristicSubstitutableState; // @synthesize serializedWFHMCharacteristicSubstitutableState=_serializedWFHMCharacteristicSubstitutableState;
@property(retain, nonatomic) NSDictionary *serializedWFHMServiceParameter; // @synthesize serializedWFHMServiceParameter=_serializedWFHMServiceParameter;
@property(readonly, nonatomic) _Bool negatesValue; // @synthesize negatesValue=_negatesValue;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;	// IMP=0x000000000001fd90
- (void)getEnumerationPossibleStatesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fcd0
- (_Bool)isEnumeration;	// IMP=0x000000000001fc5d
- (id)unit;	// IMP=0x000000000001fa8d
- (id)stepValue;	// IMP=0x000000000001fa13
- (id)maximumValue;	// IMP=0x000000000001f999
- (id)minimumValue;	// IMP=0x000000000001f91f
- (id)maximumLength;	// IMP=0x000000000001f8a5
- (long long)contentType;	// IMP=0x000000000001f5f2
- (void)getContentWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f532
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f370
- (unsigned long long)hash;	// IMP=0x000000000001f2c2
@property(readonly, nonatomic) HMCharacteristic *characteristic;
@property(readonly, nonatomic) HMService *service;
@property(readonly, nonatomic) HMHome *home;
- (id)unitType;	// IMP=0x000000000001f109
- (id)serializedRepresentation;	// IMP=0x000000000001efcd
- (id)initWithService:(id)arg1 characteristic:(id)arg2 homeIdentifier:(id)arg3 negatesValue:(_Bool)arg4;	// IMP=0x000000000001ee19
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x000000000001ec44
- (id)initWithSerializedWFHMServiceParameter:(id)arg1 serializedWFHMCharacteristicSubstitutableState:(id)arg2 negatesValue:(_Bool)arg3;	// IMP=0x000000000001eb09

@end

