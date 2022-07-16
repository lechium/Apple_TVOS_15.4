//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSkipAnnouncementIntentExport-Protocol.h>

@class NSString;

@interface INSkipAnnouncementIntent <INSkipAnnouncementIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004ade5c
- (id)parametersByName;	// IMP=0x00000000004ade4a
- (void)setVerb:(id)arg1;	// IMP=0x00000000004ade44
- (id)verb;	// IMP=0x00000000004ade37
- (void)setDomain:(id)arg1;	// IMP=0x00000000004ade31
- (id)domain;	// IMP=0x00000000004ade24
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000004addbd
- (id)_dictionaryRepresentation;	// IMP=0x00000000004addb0
- (id)init;	// IMP=0x00000000004add81
- (id)_categoryVerb;	// IMP=0x00000000004add74
- (long long)_intentCategory;	// IMP=0x00000000004add69
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004adcf7
- (id)_metadata;	// IMP=0x00000000004adca7
- (id)_typedBackingStore;	// IMP=0x00000000004adc50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

