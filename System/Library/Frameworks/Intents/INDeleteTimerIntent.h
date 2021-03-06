//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDeleteTimerIntentExport-Protocol.h>

@class INTimer, NSNumber, NSString;

@interface INDeleteTimerIntent <INDeleteTimerIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000037a553
- (id)parametersByName;	// IMP=0x000000000037a541
- (void)setVerb:(id)arg1;	// IMP=0x000000000037a53b
- (id)verb;	// IMP=0x000000000037a52e
- (void)setDomain:(id)arg1;	// IMP=0x000000000037a528
- (id)domain;	// IMP=0x000000000037a51b
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000037a4b4
- (id)_dictionaryRepresentation;	// IMP=0x000000000037a369
- (void)setDeleteMultiple:(id)arg1;	// IMP=0x000000000037a2e1
@property(readonly, copy, nonatomic) NSNumber *deleteMultiple;
- (void)setTargetTimer:(id)arg1;	// IMP=0x000000000037a19f
@property(readonly, copy, nonatomic) INTimer *targetTimer;
- (id)initWithTargetTimer:(id)arg1 deleteMultiple:(id)arg2;	// IMP=0x000000000037a08e
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000037a01c
- (id)_metadata;	// IMP=0x0000000000379fcc
- (id)_typedBackingStore;	// IMP=0x0000000000379f75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

