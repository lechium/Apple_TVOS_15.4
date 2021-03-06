//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetLabeledSettingIntentExport-Protocol.h>

@class INSettingMetadata, INTemporalEventTrigger, NSString;

@interface INSetLabeledSettingIntent <INSetLabeledSettingIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000046eb30
- (id)parametersByName;	// IMP=0x000000000046eb1e
- (void)setVerb:(id)arg1;	// IMP=0x000000000046eb18
- (id)verb;	// IMP=0x000000000046eb0b
- (void)setDomain:(id)arg1;	// IMP=0x000000000046eb05
- (id)domain;	// IMP=0x000000000046eaf8
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000046ea91
- (id)_dictionaryRepresentation;	// IMP=0x000000000046e8d8
- (void)setTemporalEventTrigger:(id)arg1;	// IMP=0x000000000046e84d
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
- (void)setLabeledValue:(id)arg1;	// IMP=0x000000000046e768
@property(readonly, copy, nonatomic) NSString *labeledValue;
- (void)setSettingMetadata:(id)arg1;	// IMP=0x000000000046e66b
@property(readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
- (id)initWithSettingMetadata:(id)arg1 labeledValue:(id)arg2 temporalEventTrigger:(id)arg3;	// IMP=0x000000000046e531
- (id)_categoryVerb;	// IMP=0x000000000046e524
- (long long)_intentCategory;	// IMP=0x000000000046e519
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000046e4a7
- (id)_metadata;	// IMP=0x000000000046e457
- (id)_typedBackingStore;	// IMP=0x000000000046e400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

