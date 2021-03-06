//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetRadioStationIntentExport-Protocol.h>

@class NSNumber, NSString;

@interface INSetRadioStationIntent <INSetRadioStationIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000001b0bee
- (id)parametersByName;	// IMP=0x00000000001b0bdc
- (void)setVerb:(id)arg1;	// IMP=0x00000000001b0bd6
- (id)verb;	// IMP=0x00000000001b0bc9
- (void)setDomain:(id)arg1;	// IMP=0x00000000001b0bc3
- (id)domain;	// IMP=0x00000000001b0bb6
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000001b0988
- (id)_dictionaryRepresentation;	// IMP=0x00000000001b06a3
- (void)setPresetNumber:(id)arg1;	// IMP=0x00000000001b0618
@property(readonly, copy, nonatomic) NSNumber *presetNumber;
- (void)setChannel:(id)arg1;	// IMP=0x00000000001b051a
@property(readonly, copy, nonatomic) NSString *channel;
- (void)setStationName:(id)arg1;	// IMP=0x00000000001b041c
@property(readonly, copy, nonatomic) NSString *stationName;
- (void)setFrequency:(id)arg1;	// IMP=0x00000000001b031e
@property(readonly, copy, nonatomic) NSNumber *frequency;
- (void)setRadioType:(long long)arg1;	// IMP=0x00000000001b0249
@property(readonly, nonatomic) long long radioType;
- (id)initWithRadioType:(long long)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5;	// IMP=0x00000000001b00b1
- (id)_categoryVerb;	// IMP=0x00000000001b00a4
- (long long)_intentCategory;	// IMP=0x00000000001b0099
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000001b0027
- (id)_metadata;	// IMP=0x00000000001affd7
- (id)_typedBackingStore;	// IMP=0x00000000001aff80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

