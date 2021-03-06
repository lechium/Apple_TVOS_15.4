//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INAddMediaIntentExport-Protocol.h>

@class INMediaDestination, INMediaSearch, INPrivateAddMediaIntentData, NSArray, NSString;

@interface INAddMediaIntent <INAddMediaIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000399859
- (id)parametersByName;	// IMP=0x0000000000399847
- (void)setVerb:(id)arg1;	// IMP=0x0000000000399841
- (id)verb;	// IMP=0x0000000000399834
- (void)setDomain:(id)arg1;	// IMP=0x000000000039982e
- (id)domain;	// IMP=0x0000000000399821
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000003997ba
- (id)_dictionaryRepresentation;	// IMP=0x0000000000399601
@property(copy, nonatomic) INPrivateAddMediaIntentData *privateAddMediaIntentData;
- (void)setMediaDestination:(id)arg1;	// IMP=0x0000000000399478
@property(readonly, copy, nonatomic) INMediaDestination *mediaDestination;
- (void)setMediaSearch:(id)arg1;	// IMP=0x000000000039937a
@property(readonly, copy, nonatomic) INMediaSearch *mediaSearch;
- (void)setMediaItems:(id)arg1;	// IMP=0x000000000039927c
@property(readonly, copy, nonatomic) NSArray *mediaItems;
- (id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2 mediaDestination:(id)arg3;	// IMP=0x0000000000399142
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000003990d0
- (id)_metadata;	// IMP=0x0000000000399080
- (id)_typedBackingStore;	// IMP=0x0000000000399029
- (_Bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;	// IMP=0x0000000000377b18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

