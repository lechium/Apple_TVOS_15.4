//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchCallHistoryIntentExport-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INSearchCallHistoryIntent <INSearchCallHistoryIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000002a5965
- (id)parametersByName;	// IMP=0x00000000002a5953
- (void)setVerb:(id)arg1;	// IMP=0x00000000002a594d
- (id)verb;	// IMP=0x00000000002a5940
- (void)setDomain:(id)arg1;	// IMP=0x00000000002a593a
- (id)domain;	// IMP=0x00000000002a592d
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000002a57cb
- (id)_dictionaryRepresentation;	// IMP=0x00000000002a54f0
- (void)setUnseen:(id)arg1;	// IMP=0x00000000002a5468
@property(readonly, copy, nonatomic) NSNumber *unseen;
@property(nonatomic) long long preferredCallProvider;
- (void)setCallTypes:(unsigned long long)arg1;	// IMP=0x00000000002a5224
@property(readonly, nonatomic) unsigned long long callTypes;
- (void)setCallCapabilities:(unsigned long long)arg1;	// IMP=0x00000000002a50c5
@property(readonly, nonatomic) unsigned long long callCapabilities;
- (void)setRecipient:(id)arg1;	// IMP=0x00000000002a4f73
@property(readonly, copy, nonatomic) INPerson *recipient;
- (void)setDateCreated:(id)arg1;	// IMP=0x00000000002a4e75
@property(readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 unseen:(id)arg5;	// IMP=0x00000000002a4d1e
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000002a4cac
- (id)_metadata;	// IMP=0x00000000002a4c5c
- (id)_typedBackingStore;	// IMP=0x00000000002a4c05
@property(readonly, nonatomic) long long callType;
- (id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4;	// IMP=0x00000000001dab62
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4;	// IMP=0x00000000001dab3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

