//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INShareETAIntentExport-Protocol.h>

@class NSArray, NSString;

@interface INShareETAIntent <INShareETAIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000043bd9a
- (id)parametersByName;	// IMP=0x000000000043bd88
- (void)setVerb:(id)arg1;	// IMP=0x000000000043bd82
- (id)verb;	// IMP=0x000000000043bd75
- (void)setDomain:(id)arg1;	// IMP=0x000000000043bd6f
- (id)domain;	// IMP=0x000000000043bd62
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000043bc5b
- (id)_dictionaryRepresentation;	// IMP=0x000000000043bb86
- (void)setRecipients:(id)arg1;	// IMP=0x000000000043bafb
@property(readonly, copy, nonatomic) NSArray *recipients;
- (id)initWithRecipients:(id)arg1;	// IMP=0x000000000043ba20
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000043b9ae
- (id)_metadata;	// IMP=0x000000000043b95e
- (id)_typedBackingStore;	// IMP=0x000000000043b907

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
