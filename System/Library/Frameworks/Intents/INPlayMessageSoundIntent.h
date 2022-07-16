//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPlayMessageSoundIntentExport-Protocol.h>

@class NSString;

@interface INPlayMessageSoundIntent <INPlayMessageSoundIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000416f35
- (id)parametersByName;	// IMP=0x0000000000416f23
- (void)setVerb:(id)arg1;	// IMP=0x0000000000416f1d
- (id)verb;	// IMP=0x0000000000416f10
- (void)setDomain:(id)arg1;	// IMP=0x0000000000416f0a
- (id)domain;	// IMP=0x0000000000416efd
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000416e96
- (id)_dictionaryRepresentation;	// IMP=0x0000000000416d70
- (void)setMessageIdentifier:(id)arg1;	// IMP=0x0000000000416cfe
@property(readonly, copy, nonatomic) NSString *messageIdentifier;
- (void)setSoundType:(long long)arg1;	// IMP=0x0000000000416c34
@property(readonly, nonatomic) long long soundType;
- (id)initWithSoundType:(long long)arg1 messageIdentifier:(id)arg2;	// IMP=0x0000000000416b1a
- (id)_categoryVerb;	// IMP=0x0000000000416b0d
- (long long)_intentCategory;	// IMP=0x0000000000416b02
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000416a90
- (id)_metadata;	// IMP=0x0000000000416a40
- (id)_typedBackingStore;	// IMP=0x00000000004169e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
