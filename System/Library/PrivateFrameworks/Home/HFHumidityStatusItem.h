//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFHumidityStatusItem
{
}

+ (unsigned long long)abstractCurrentModeInResponse:(id)arg1;	// IMP=0x00000000001c9ad2
+ (unsigned long long)abstractTargetModeInResponse:(id)arg1;	// IMP=0x00000000001c99a0
+ (id)titleStringForState:(long long)arg1;	// IMP=0x00000000001c9921
+ (_Bool)shouldShowAverageForRange:(id)arg1;	// IMP=0x00000000001c98b6
+ (_Bool)isPercentRange;	// IMP=0x00000000001c98ae
+ (CDUnknownBlockType)displayValueComparator;	// IMP=0x00000000001c9722
+ (id)unknownValueDescriptionString;	// IMP=0x00000000001c9709
+ (id)targetModeCharacteristicTypes;	// IMP=0x00000000001c96e2
+ (id)currentModeCharacteristicTypes;	// IMP=0x00000000001c96bb
+ (id)maximumTargetValueCharacteristicType;	// IMP=0x00000000001c96a7
+ (id)minimumTargetValueCharacteristicType;	// IMP=0x00000000001c9693
+ (id)targetValueCharacteristicType;	// IMP=0x00000000001c967f
+ (id)currentValueCharacteristicType;	// IMP=0x00000000001c966b
+ (id)sensorServiceTypes;	// IMP=0x00000000001c9644
+ (id)controllableServiceTypes;	// IMP=0x00000000001c961d
- (id)title;	// IMP=0x00000000001c9604

@end

