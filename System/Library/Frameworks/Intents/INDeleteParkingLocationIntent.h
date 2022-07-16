//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDeleteParkingLocationIntentExport-Protocol.h>

@class NSString;

@interface INDeleteParkingLocationIntent <INDeleteParkingLocationIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000475510
- (id)parametersByName;	// IMP=0x00000000004754fe
- (void)setVerb:(id)arg1;	// IMP=0x00000000004754f8
- (id)verb;	// IMP=0x00000000004754eb
- (void)setDomain:(id)arg1;	// IMP=0x00000000004754e5
- (id)domain;	// IMP=0x00000000004754d8
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000475471
- (id)_dictionaryRepresentation;	// IMP=0x0000000000475464
- (id)init;	// IMP=0x0000000000475435
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004753c3
- (id)_metadata;	// IMP=0x0000000000475373
- (id)_typedBackingStore;	// IMP=0x000000000047531c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

