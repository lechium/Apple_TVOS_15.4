//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMEventTrigger.h>

#import <Home/HFTriggerProtocol-Protocol.h>

@class HMDurationEvent, NSString;

@interface HMEventTrigger (HFDebugging) <HFTriggerProtocol>
+ (id)_hf_naturalLanguageDetailsSentenceElementsWithRecurrences:(id)arg1 conditions:(id)arg2 endEvents:(id)arg3 withOptions:(id)arg4;	// IMP=0x00000000000aa0b5
+ (id)hf_naturalLanguageDetailsWithRecurrences:(id)arg1 conditions:(id)arg2 endEvents:(id)arg3 withOptions:(id)arg4;	// IMP=0x00000000000a9f78
+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)arg1;	// IMP=0x00000000000a9d05
+ (unsigned long long)hf_triggerRangeTypeWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00000000000a98bb
+ (id)_hf_triggerRangeKeyComponentForRangeType:(unsigned long long)arg1;	// IMP=0x00000000000a9881
+ (id)hf_naturalLanguageTurnOffAfterDuration:(id)arg1 style:(unsigned long long)arg2;	// IMP=0x00000000000a96b7
+ (id)hf_localizedStringForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00000000000a965a
+ (id)hf_localizationKeyForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00000000000a95c1
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00000000000a9351
+ (id)hf_triggerRangeValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;	// IMP=0x00000000000a90eb
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValue:(id)arg2;	// IMP=0x00000000000a8a6c
+ (id)hf_triggerValueNaturalLanguageDescriptionFormatterWithCharacteristics:(id)arg1;	// IMP=0x00000000000a8807
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 nonSensorCharacteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00000000000a81be
+ (id)_hf_alarmNaturalLanguageNameWithNameStringKey:(id)arg1 nameType:(unsigned long long)arg2 thresholdKey:(id)arg3 thresholdValueDescription:(id)arg4 roomName:(id)arg5 actionsDescription:(id)arg6;	// IMP=0x00000000000a7f17
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 sensorCharacteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00000000000a7516
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 characteristics:(id)arg2 triggerValue:(id)arg3;	// IMP=0x00000000000a72e2
+ (id)hf_naturalLanguageDescriptionForCharacteristic:(id)arg1;	// IMP=0x00000000000a71dc
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 presenceEvent:(id)arg2;	// IMP=0x00000000000a6fd8
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 region:(id)arg2 forUser:(id)arg3;	// IMP=0x00000000000a68ab
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 recurrences:(id)arg3 forUser:(id)arg4;	// IMP=0x00000000000a6259
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 recurrences:(id)arg3;	// IMP=0x00000000000a6244
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 forUser:(id)arg3;	// IMP=0x00000000000a6228
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2;	// IMP=0x00000000000a620c
+ (id)hf_representativeTriggerValueForCharacteristic:(id)arg1 similarToValue:(id)arg2;	// IMP=0x00000000001b5efd
+ (_Bool)_hf_valueIsValidForCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00000000001b5d3a
+ (id)hf_allTriggerValuesForCharacteristic:(id)arg1 similarToValue:(id)arg2;	// IMP=0x00000000001b590b
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000075f31
- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;	// IMP=0x00000000000a9d92
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x00000000000a6112
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000000a6082
- (_Bool)hf_affectsCharacteristics:(id)arg1;	// IMP=0x00000000001b469e
- (_Bool)hf_requiresConfirmationToRun;	// IMP=0x00000000001b45a5
- (id)hf_characteristicsInEvents;	// IMP=0x00000000001b57e5
- (id)hf_designateTrigger:(_Bool)arg1;	// IMP=0x00000000001b5260
- (id)hf_unmarkTriggerAsHomeAppCreated;	// IMP=0x00000000001b524c
- (id)hf_markTriggerAsHomeAppCreated;	// IMP=0x00000000001b5235
- (_Bool)hf_isHomeAppCreatedTrigger;	// IMP=0x00000000001b4dca
- (unsigned long long)hf_triggerType;	// IMP=0x00000000001b49eb
@property(readonly, nonatomic) HMDurationEvent *hf_durationEndEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

