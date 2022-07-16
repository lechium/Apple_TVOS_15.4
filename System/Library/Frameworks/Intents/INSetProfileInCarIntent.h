//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetProfileInCarIntentExport-Protocol.h>

@class INSpeakableString, NSNumber, NSString;

@interface INSetProfileInCarIntent <INSetProfileInCarIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000008d0e
- (id)parametersByName;	// IMP=0x0000000000008cfc
- (void)setVerb:(id)arg1;	// IMP=0x0000000000008cf6
- (id)verb;	// IMP=0x0000000000008ce9
- (void)setDomain:(id)arg1;	// IMP=0x0000000000008ce3
- (id)domain;	// IMP=0x0000000000008cd6
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000008b74
- (id)_dictionaryRepresentation;	// IMP=0x000000000000893b
- (void)setCarName:(id)arg1;	// IMP=0x00000000000088b0
@property(readonly, copy, nonatomic) INSpeakableString *carName;
- (void)setDefaultProfile:(id)arg1;	// IMP=0x00000000000087b5
@property(readonly, copy, nonatomic) NSNumber *defaultProfile;
- (void)setProfileName:(id)arg1;	// IMP=0x0000000000008673
@property(readonly, copy, nonatomic) NSString *profileName;
- (void)setProfileNumber:(id)arg1;	// IMP=0x0000000000008575
@property(readonly, copy, nonatomic) NSNumber *profileNumber;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 defaultProfile:(id)arg3 carName:(id)arg4;	// IMP=0x0000000000008411
- (id)_categoryVerb;	// IMP=0x0000000000008404
- (long long)_intentCategory;	// IMP=0x00000000000083f9
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000008387
- (id)_metadata;	// IMP=0x0000000000008337
- (id)_typedBackingStore;	// IMP=0x00000000000082e0
@property(readonly, copy, nonatomic) NSString *profileLabel;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 defaultProfile:(id)arg3;	// IMP=0x0000000000088afd
- (id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2 defaultProfile:(id)arg3;	// IMP=0x0000000000088aeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

