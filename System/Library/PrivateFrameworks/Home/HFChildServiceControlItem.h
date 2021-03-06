//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFChildServiceFilter, HMService;

@interface HFChildServiceControlItem
{
    HMService *_parentService;	// 8 = 0x8
    HFChildServiceFilter *_childServiceFilter;	// 16 = 0x10
}

+ (Class)valueClass;	// IMP=0x00000000000daacb
- (void).cxx_destruct;	// IMP=0x00000000000db2c3
@property(readonly, nonatomic) HFChildServiceFilter *childServiceFilter; // @synthesize childServiceFilter=_childServiceFilter;
@property(readonly, nonatomic) HMService *parentService; // @synthesize parentService=_parentService;
- (_Bool)supportsItemRepresentingServices:(id)arg1;	// IMP=0x00000000000db22a
- (id)normalizedValueForValue:(id)arg1;	// IMP=0x00000000000db214
- (id)characteristicValuesForValue:(id)arg1;	// IMP=0x00000000000db207
- (id)valueForCharacteristicValues:(id)arg1;	// IMP=0x00000000000db1ee
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000000dae4e
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000000dad3c
- (id)initWithBaseValueSource:(id)arg1 parentService:(id)arg2 childServiceFilter:(id)arg3 displayResults:(id)arg4;	// IMP=0x00000000000dab91
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;	// IMP=0x00000000000daadc

@end

