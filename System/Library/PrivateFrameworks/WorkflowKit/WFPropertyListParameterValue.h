//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/WFParameterState-Protocol.h>

@class NSString, NSUUID;
@protocol WFParameterState;

@interface WFPropertyListParameterValue : NSObject <NSCopying, WFParameterState>
{
    long long _valueType;	// 8 = 0x8
    id <WFParameterState> _state;	// 16 = 0x10
    NSUUID *_identity;	// 24 = 0x18
}

+ (Class)processedClassForValueType:(long long)arg1;	// IMP=0x00000000001cbc10
+ (Class)classForValueType:(long long)arg1;	// IMP=0x00000000001cbb88
+ (id)defaultStateForValueType:(long long)arg1;	// IMP=0x00000000001cba08
+ (id)localizedTitleForValueType:(long long)arg1;	// IMP=0x00000000001cb983
- (void).cxx_destruct;	// IMP=0x00000000001cb63b
@property(readonly, nonatomic) NSUUID *identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) id <WFParameterState> state; // @synthesize state=_state;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001cb4b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cb4ab
- (id)containedVariables;	// IMP=0x00000000001cb45b
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cb338
- (id)serializedRepresentation;	// IMP=0x00000000001cb15c
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 valueType:(long long)arg4 variableStringStateClass:(Class)arg5;	// IMP=0x00000000001cae40
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x00000000001cad64
- (id)initWithType:(long long)arg1 state:(id)arg2 identity:(id)arg3;	// IMP=0x00000000001cabfc
- (id)initWithType:(long long)arg1 state:(id)arg2;	// IMP=0x00000000001cab76
- (id)initWithObject:(id)arg1;	// IMP=0x00000000001cc2a6
- (id)initWithSynonymString:(id)arg1;	// IMP=0x00000000001cc18e
- (id)initWithBoolean:(id)arg1;	// IMP=0x00000000001cc110
- (id)initWithNumber:(id)arg1;	// IMP=0x00000000001cc042
- (id)initWithArray:(id)arg1;	// IMP=0x00000000001cbfba
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001cbecd
- (id)initWithChooseFromMenuString:(id)arg1;	// IMP=0x00000000001cbe23
- (id)initWithString:(id)arg1;	// IMP=0x00000000001cbd79
- (id)initWithChooseFromMenuItemState:(id)arg1;	// IMP=0x00000000001cbd5f
- (id)initWithBooleanState:(id)arg1;	// IMP=0x00000000001cbd45
- (id)initWithNumberState:(id)arg1;	// IMP=0x00000000001cbd2b
- (id)initWithArrayState:(id)arg1;	// IMP=0x00000000001cbd11
- (id)initWithDictionaryState:(id)arg1;	// IMP=0x00000000001cbcf7
- (id)initWithStringState:(id)arg1;	// IMP=0x00000000001cbce0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

