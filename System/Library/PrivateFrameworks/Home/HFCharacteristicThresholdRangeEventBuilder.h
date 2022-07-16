//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFCharacteristicLikeEvent-Protocol.h>

@class HMCharacteristic, HMNumberRange, NSString;

@interface HFCharacteristicThresholdRangeEventBuilder <HFCharacteristicLikeEvent>
{
    HMNumberRange *_thresholdRange;	// 16 = 0x10
}

+ (_Bool)_wouldFireForValue:(id)arg1 thresholdRange:(id)arg2 characteristic:(id)arg3;	// IMP=0x0000000000020cc5
- (void).cxx_destruct;	// IMP=0x0000000000020f08
@property(retain, nonatomic) HMNumberRange *thresholdRange; // @synthesize thresholdRange=_thresholdRange;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020977
@property(readonly, nonatomic) id hf_representativeTriggerValue;
- (id)naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x0000000000020885
- (id)buildNewEventsFromCurrentState;	// IMP=0x00000000000207ca
- (void)copyValuesFromCharacteristicEventBuilder:(id)arg1;	// IMP=0x00000000000206f7
- (id)comparisonKey;	// IMP=0x00000000000205fb
- (_Bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x0000000000020545
- (id)triggeringValues;	// IMP=0x000000000002026c
- (_Bool)hf_wouldFireForValue:(id)arg1;	// IMP=0x00000000000201c9
- (id)initWithCharacteristic:(id)arg1 thresholdRange:(id)arg2;	// IMP=0x0000000000020151
- (id)initWithEvent:(id)arg1;	// IMP=0x0000000000020021
- (id)compareToObject:(id)arg1;	// IMP=0x000000000009053d

// Remaining properties
@property(readonly, nonatomic) HMCharacteristic *characteristic;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

