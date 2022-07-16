//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INAnswerCallIntentExport-Protocol.h>

@class NSString;

@interface INAnswerCallIntent <INAnswerCallIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000003addf4
- (id)parametersByName;	// IMP=0x00000000003adde2
- (void)setVerb:(id)arg1;	// IMP=0x00000000003adddc
- (id)verb;	// IMP=0x00000000003addcf
- (void)setDomain:(id)arg1;	// IMP=0x00000000003addc9
- (id)domain;	// IMP=0x00000000003addbc
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000003add55
- (id)_dictionaryRepresentation;	// IMP=0x00000000003adc10
- (void)setCallIdentifier:(id)arg1;	// IMP=0x00000000003adb9e
@property(readonly, copy, nonatomic) NSString *callIdentifier;
- (void)setAudioRoute:(long long)arg1;	// IMP=0x00000000003ada98
@property(readonly, nonatomic) long long audioRoute;
- (id)initWithAudioRoute:(long long)arg1 callIdentifier:(id)arg2;	// IMP=0x00000000003ad96e
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000003ad8fc
- (id)_metadata;	// IMP=0x00000000003ad8ac
- (id)_typedBackingStore;	// IMP=0x00000000003ad855
- (id)initWithAudioRoute:(long long)arg1;	// IMP=0x000000000045c09f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

