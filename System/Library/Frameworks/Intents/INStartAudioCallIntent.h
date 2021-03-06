//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INStartAudioCallIntentExport-Protocol.h>

@class NSArray, NSString;

@interface INStartAudioCallIntent <INStartAudioCallIntentExport>
{
}

+ (id)_ignoredParameters;	// IMP=0x0000000000112c58
- (id)_spotlightContentType;	// IMP=0x00000000001b9d7d
- (void)setParametersByName:(id)arg1;	// IMP=0x00000000001b9d77
- (id)parametersByName;	// IMP=0x00000000001b9d65
- (void)setVerb:(id)arg1;	// IMP=0x00000000001b9d5f
- (id)verb;	// IMP=0x00000000001b9d52
- (void)setDomain:(id)arg1;	// IMP=0x00000000001b9d4c
- (id)domain;	// IMP=0x00000000001b9d3f
- (id)_currentParameterCombination;	// IMP=0x00000000001b9b87
- (id)_validParameterCombinationsWithSchema:(id)arg1;	// IMP=0x00000000001b9877
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000001b9770
- (id)_dictionaryRepresentation;	// IMP=0x00000000001b9601
@property(nonatomic, setter=setTTYType:) long long ttyType;
@property(nonatomic) long long recordTypeForRedialing;
- (void)setContacts:(id)arg1;	// IMP=0x00000000001b9366
@property(readonly, copy, nonatomic) NSArray *contacts;
@property(nonatomic) long long preferredCallProvider;
- (void)setDestinationType:(long long)arg1;	// IMP=0x00000000001b9191
@property(readonly, nonatomic) long long destinationType;
@property(nonatomic) long long audioRoute;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2;	// IMP=0x00000000001b8f37
- (id)_categoryVerb;	// IMP=0x00000000001b8f2a
- (long long)_intentCategory;	// IMP=0x00000000001b8f1f
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000001b8ead
- (id)_metadata;	// IMP=0x00000000001b8e5d
- (id)_typedBackingStore;	// IMP=0x00000000001b8e06
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;	// IMP=0x0000000000110dc4
- (id)initWithContacts:(id)arg1;	// IMP=0x00000000002a02e4
- (void)setUseSpeaker:(_Bool)arg1;	// IMP=0x00000000002b76c7
@property(readonly, nonatomic) _Bool useSpeaker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

