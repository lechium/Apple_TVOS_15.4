//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetVisualCodeIntentExport-Protocol.h>

@class NSString;

@interface INGetVisualCodeIntent <INGetVisualCodeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000020a1c7
- (id)parametersByName;	// IMP=0x000000000020a1b5
- (void)setVerb:(id)arg1;	// IMP=0x000000000020a1af
- (id)verb;	// IMP=0x000000000020a1a2
- (void)setDomain:(id)arg1;	// IMP=0x000000000020a19c
- (id)domain;	// IMP=0x000000000020a18f
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000020a128
- (id)_dictionaryRepresentation;	// IMP=0x000000000020a021
- (void)setVisualCodeType:(long long)arg1;	// IMP=0x0000000000209fc4
@property(readonly, nonatomic) long long visualCodeType;
- (id)initWithVisualCodeType:(long long)arg1;	// IMP=0x0000000000209ed2
- (id)_categoryVerb;	// IMP=0x0000000000209ec5
- (long long)_intentCategory;	// IMP=0x0000000000209eba
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000209e48
- (id)_metadata;	// IMP=0x0000000000209df8
- (id)_typedBackingStore;	// IMP=0x0000000000209da1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
