//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchForContactIntentExport-Protocol.h>

@class NSArray, NSString;

@interface INSearchForContactIntent <INSearchForContactIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000042a985
- (id)parametersByName;	// IMP=0x000000000042a973
- (void)setVerb:(id)arg1;	// IMP=0x000000000042a96d
- (id)verb;	// IMP=0x000000000042a960
- (void)setDomain:(id)arg1;	// IMP=0x000000000042a95a
- (id)domain;	// IMP=0x000000000042a94d
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000042a846
- (id)_dictionaryRepresentation;	// IMP=0x000000000042a771
- (void)setContactIdentifiers:(id)arg1;	// IMP=0x000000000042a6e6
@property(readonly, copy, nonatomic) NSArray *contactIdentifiers;
- (id)initWithContactIdentifiers:(id)arg1;	// IMP=0x000000000042a60b
- (id)_categoryVerb;	// IMP=0x000000000042a5fe
- (long long)_intentCategory;	// IMP=0x000000000042a5f3
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000042a581
- (id)_metadata;	// IMP=0x000000000042a531
- (id)_typedBackingStore;	// IMP=0x000000000042a4da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

