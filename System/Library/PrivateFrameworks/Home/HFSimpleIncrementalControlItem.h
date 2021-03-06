//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface HFSimpleIncrementalControlItem
{
    NSString *_incrementalCharacteristicType;	// 8 = 0x8
}

+ (Class)valueClass;	// IMP=0x0000000000037fc8
- (void).cxx_destruct;	// IMP=0x00000000000385bf
@property(readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // @synthesize incrementalCharacteristicType=_incrementalCharacteristicType;
@property(readonly, nonatomic) NSNumber *stepValue;
@property(readonly, nonatomic) NSNumber *maxValue;
@property(readonly, nonatomic) NSNumber *minValue;
- (id)_metadata;	// IMP=0x000000000003843e
- (id)characteristicValuesForValue:(id)arg1;	// IMP=0x000000000003835f
- (id)valueForCharacteristicValues:(id)arg1;	// IMP=0x00000000000382dc
- (id)writeValue:(id)arg1;	// IMP=0x000000000003829e
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000000381bd
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;	// IMP=0x0000000000038108
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;	// IMP=0x0000000000037fd9

@end

