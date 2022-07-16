//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetCarPowerLevelStatusIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INGetCarPowerLevelStatusIntent <INGetCarPowerLevelStatusIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000257d06
- (id)parametersByName;	// IMP=0x0000000000257cf4
- (void)setVerb:(id)arg1;	// IMP=0x0000000000257cee
- (id)verb;	// IMP=0x0000000000257ce1
- (void)setDomain:(id)arg1;	// IMP=0x0000000000257cdb
- (id)domain;	// IMP=0x0000000000257cce
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000257c67
- (id)_dictionaryRepresentation;	// IMP=0x0000000000257b92
- (void)setCarName:(id)arg1;	// IMP=0x0000000000257b07
@property(readonly, copy, nonatomic) INSpeakableString *carName;
- (id)initWithCarName:(id)arg1;	// IMP=0x0000000000257a2c
- (id)_categoryVerb;	// IMP=0x0000000000257a1f
- (long long)_intentCategory;	// IMP=0x0000000000257a14
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000002579a2
- (id)_metadata;	// IMP=0x0000000000257952
- (id)_typedBackingStore;	// IMP=0x00000000002578fb
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000008ff39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

