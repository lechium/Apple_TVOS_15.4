//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INScanVisualCodeIntentExport-Protocol.h>

@class NSString;

@interface INScanVisualCodeIntent <INScanVisualCodeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000001d6ecd
- (id)parametersByName;	// IMP=0x00000000001d6ebb
- (void)setVerb:(id)arg1;	// IMP=0x00000000001d6eb5
- (id)verb;	// IMP=0x00000000001d6ea8
- (void)setDomain:(id)arg1;	// IMP=0x00000000001d6ea2
- (id)domain;	// IMP=0x00000000001d6e95
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000001d6e2e
- (id)_dictionaryRepresentation;	// IMP=0x00000000001d6e21
- (id)init;	// IMP=0x00000000001d6df2
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000001d6d80
- (id)_metadata;	// IMP=0x00000000001d6d30
- (id)_typedBackingStore;	// IMP=0x00000000001d6cd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
