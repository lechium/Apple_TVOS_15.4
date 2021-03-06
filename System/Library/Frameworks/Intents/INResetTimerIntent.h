//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INResetTimerIntentExport-Protocol.h>

@class INTimer, NSNumber, NSString;

@interface INResetTimerIntent <INResetTimerIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x000000000037b416
- (id)parametersByName;	// IMP=0x000000000037b404
- (void)setVerb:(id)arg1;	// IMP=0x000000000037b3fe
- (id)verb;	// IMP=0x000000000037b3f1
- (void)setDomain:(id)arg1;	// IMP=0x000000000037b3eb
- (id)domain;	// IMP=0x000000000037b3de
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x000000000037b377
- (id)_dictionaryRepresentation;	// IMP=0x000000000037b22c
- (void)setResetMultiple:(id)arg1;	// IMP=0x000000000037b1a4
@property(readonly, copy, nonatomic) NSNumber *resetMultiple;
- (void)setTargetTimer:(id)arg1;	// IMP=0x000000000037b062
@property(readonly, copy, nonatomic) INTimer *targetTimer;
- (id)initWithTargetTimer:(id)arg1 resetMultiple:(id)arg2;	// IMP=0x000000000037af51
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000037aedf
- (id)_metadata;	// IMP=0x000000000037ae8f
- (id)_typedBackingStore;	// IMP=0x000000000037ae38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

