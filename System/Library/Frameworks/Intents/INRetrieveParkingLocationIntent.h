//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INRetrieveParkingLocationIntentExport-Protocol.h>

@class NSString;

@interface INRetrieveParkingLocationIntent <INRetrieveParkingLocationIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000042e98d
- (id)parametersByName;	// IMP=0x000000000042e97b
- (void)setVerb:(id)arg1;	// IMP=0x000000000042e975
- (id)verb;	// IMP=0x000000000042e968
- (void)setDomain:(id)arg1;	// IMP=0x000000000042e962
- (id)domain;	// IMP=0x000000000042e955
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000042e8ee
- (id)_dictionaryRepresentation;	// IMP=0x000000000042e8e1
- (id)init;	// IMP=0x000000000042e8b2
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000042e840
- (id)_metadata;	// IMP=0x000000000042e7f0
- (id)_typedBackingStore;	// IMP=0x000000000042e799

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
