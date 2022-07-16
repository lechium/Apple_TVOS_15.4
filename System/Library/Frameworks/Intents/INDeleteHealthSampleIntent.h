//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDeleteHealthSampleIntentExport-Protocol.h>

@class NSArray, NSString;

@interface INDeleteHealthSampleIntent <INDeleteHealthSampleIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000019e2c9
- (id)parametersByName;	// IMP=0x000000000019e2b7
- (void)setVerb:(id)arg1;	// IMP=0x000000000019e2b1
- (id)verb;	// IMP=0x000000000019e2a4
- (void)setDomain:(id)arg1;	// IMP=0x000000000019e29e
- (id)domain;	// IMP=0x000000000019e291
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000019e18a
- (id)_dictionaryRepresentation;	// IMP=0x000000000019e0b5
- (void)setSampleUuids:(id)arg1;	// IMP=0x000000000019e02a
@property(readonly, copy, nonatomic) NSArray *sampleUuids;
- (id)initWithSampleUuids:(id)arg1;	// IMP=0x000000000019df4f
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000019dedd
- (id)_metadata;	// IMP=0x000000000019de8d
- (id)_typedBackingStore;	// IMP=0x000000000019de36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
