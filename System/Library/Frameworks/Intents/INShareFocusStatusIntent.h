//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INShareFocusStatusIntentExport-Protocol.h>

@class INFocusStatus, NSString;

@interface INShareFocusStatusIntent <INShareFocusStatusIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004d73b9
- (id)parametersByName;	// IMP=0x00000000004d73a7
- (void)setVerb:(id)arg1;	// IMP=0x00000000004d73a1
- (id)verb;	// IMP=0x00000000004d7394
- (void)setDomain:(id)arg1;	// IMP=0x00000000004d738e
- (id)domain;	// IMP=0x00000000004d7381
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000004d731a
- (id)_dictionaryRepresentation;	// IMP=0x00000000004d7245
- (void)setFocusStatus:(id)arg1;	// IMP=0x00000000004d71ba
@property(readonly, copy, nonatomic) INFocusStatus *focusStatus;
- (id)initWithFocusStatus:(id)arg1;	// IMP=0x00000000004d70df
- (id)_categoryVerb;	// IMP=0x00000000004d70d2
- (long long)_intentCategory;	// IMP=0x00000000004d70c7
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004d7055
- (id)_metadata;	// IMP=0x00000000004d7005
- (id)_typedBackingStore;	// IMP=0x00000000004d6fae
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000008fda9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

