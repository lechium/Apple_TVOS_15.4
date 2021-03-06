//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFNumberValueConstraints, NSNumber, NSSet, NSString;

@interface HFRangeControlItem
{
    NSSet *_targetCharacteristicTypes;	// 8 = 0x8
    NSString *_minimumCharacteristicType;	// 16 = 0x10
    NSString *_maximumCharacteristicType;	// 24 = 0x18
}

+ (_Bool)_hasWritableCharacteristicsOfType:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000000f3c47
+ (id)readOnlyCharacteristicTypes;	// IMP=0x00000000000f3a61
+ (Class)valueClass;	// IMP=0x00000000000f2a3d
- (void).cxx_destruct;	// IMP=0x00000000000f3ebf
@property(readonly, copy, nonatomic) NSString *maximumCharacteristicType; // @synthesize maximumCharacteristicType=_maximumCharacteristicType;
@property(readonly, copy, nonatomic) NSString *minimumCharacteristicType; // @synthesize minimumCharacteristicType=_minimumCharacteristicType;
@property(readonly, copy, nonatomic) NSSet *targetCharacteristicTypes; // @synthesize targetCharacteristicTypes=_targetCharacteristicTypes;
- (id)_targetCharacteristicTypeMetadataWithCharacteristicValuesKeyedByType:(id)arg1;	// IMP=0x00000000000f3dff
- (id)_maximumCharacteristicTypeMetadata;	// IMP=0x00000000000f3d7f
- (id)_minimumCharacteristicTypeMetadata;	// IMP=0x00000000000f3cff
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)arg1;	// IMP=0x00000000000f3bad
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)arg1;	// IMP=0x00000000000f3b13
- (id)numberValueFormatter;	// IMP=0x00000000000f3b0b
- (id)minimumCharacteristicTypeStepValue;	// IMP=0x00000000000f3a11
- (id)maximumCharacteristicTypeStepValue;	// IMP=0x00000000000f39c1
@property(readonly, copy, nonatomic) NSNumber *stepValue;
@property(readonly, copy, nonatomic) NSNumber *maximumValue;
@property(readonly, copy, nonatomic) NSNumber *minimumValue;
@property(readonly, nonatomic) HFNumberValueConstraints *targetValueConstraints;
@property(readonly, nonatomic) HFNumberValueConstraints *maximumValueConstraints;
@property(readonly, nonatomic) HFNumberValueConstraints *minimumValueConstraints;
- (id)resultsForBatchReadResponse:(id)arg1;	// IMP=0x00000000000f3023
- (id)characteristicValuesForValue:(id)arg1;	// IMP=0x00000000000f2d52
- (id)valueForCharacteristicValues:(id)arg1;	// IMP=0x00000000000f2a4e
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000000f28f9
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;	// IMP=0x00000000000f2844
- (id)initWithValueSource:(id)arg1 targetCharacteristicTypes:(id)arg2 minimumCharacteristicType:(id)arg3 maximumCharacteristicType:(id)arg4 displayResults:(id)arg5;	// IMP=0x00000000000f25a4

@end

