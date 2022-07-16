//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface HFCharacteristicTriggerBuilderInterface
{
}

- (id)triggerValueForCharacteristic:(id)arg1;	// IMP=0x000000000025043e
- (id)thresholdValueForCharacteristic:(id)arg1 thresholdValueRange:(id)arg2;	// IMP=0x000000000024ff29
- (_Bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x000000000024fc74
- (void)removeAllCharacteristics;	// IMP=0x000000000024fb18
- (void)removeCharacteristic:(id)arg1;	// IMP=0x000000000024f83b
- (void)setCharacteristic:(id)arg1 triggerValueRange:(id)arg2;	// IMP=0x000000000024f693
- (void)setCharacteristic:(id)arg1 triggerValue:(id)arg2;	// IMP=0x000000000024f43c
@property(readonly, nonatomic) NSSet *characteristics;

@end
