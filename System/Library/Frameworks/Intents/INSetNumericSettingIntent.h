//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetNumericSettingIntentExport-Protocol.h>

@class INNumericSettingValue, INSettingMetadata, INTemporalEventTrigger, NSString;

@interface INSetNumericSettingIntent <INSetNumericSettingIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000046d117
- (id)parametersByName;	// IMP=0x000000000046d105
- (void)setVerb:(id)arg1;	// IMP=0x000000000046d0ff
- (id)verb;	// IMP=0x000000000046d0f2
- (void)setDomain:(id)arg1;	// IMP=0x000000000046d0ec
- (id)domain;	// IMP=0x000000000046d0df
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000046d078
- (id)_dictionaryRepresentation;	// IMP=0x000000000046cdc1
- (void)setTemporalEventTrigger:(id)arg1;	// IMP=0x000000000046cd36
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
- (void)setAction:(long long)arg1;	// IMP=0x000000000046cc61
@property(readonly, nonatomic) long long action;
- (void)setBoundedValue:(long long)arg1;	// IMP=0x000000000046cb63
@property(readonly, nonatomic) long long boundedValue;
- (void)setNumericValue:(id)arg1;	// IMP=0x000000000046ca3c
@property(readonly, copy, nonatomic) INNumericSettingValue *numericValue;
- (void)setSettingMetadata:(id)arg1;	// IMP=0x000000000046c93e
@property(readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
- (id)initWithSettingMetadata:(id)arg1 numericValue:(id)arg2 boundedValue:(long long)arg3 action:(long long)arg4 temporalEventTrigger:(id)arg5;	// IMP=0x000000000046c7e7
- (id)_categoryVerb;	// IMP=0x000000000046c7da
- (long long)_intentCategory;	// IMP=0x000000000046c7cf
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000046c75d
- (id)_metadata;	// IMP=0x000000000046c70d
- (id)_typedBackingStore;	// IMP=0x000000000046c6b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

