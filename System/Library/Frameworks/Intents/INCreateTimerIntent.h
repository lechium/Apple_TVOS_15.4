//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCreateTimerIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INCreateTimerIntent <INCreateTimerIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000376f12
- (id)parametersByName;	// IMP=0x0000000000376f00
- (void)setVerb:(id)arg1;	// IMP=0x0000000000376efa
- (id)verb;	// IMP=0x0000000000376eed
- (void)setDomain:(id)arg1;	// IMP=0x0000000000376ee7
- (id)domain;	// IMP=0x0000000000376eda
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000376e73
- (id)_dictionaryRepresentation;	// IMP=0x0000000000376cb8
- (void)setType:(long long)arg1;	// IMP=0x0000000000376c5b
@property(readonly, nonatomic) long long type;
- (void)setDuration:(double)arg1;	// IMP=0x0000000000376b4d
@property(readonly, nonatomic) double duration;
- (void)setLabel:(id)arg1;	// IMP=0x0000000000376a2e
@property(readonly, copy, nonatomic) INSpeakableString *label;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 type:(long long)arg3;	// IMP=0x000000000037691d
- (id)_categoryVerb;	// IMP=0x0000000000376910
- (long long)_intentCategory;	// IMP=0x0000000000376905
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000376893
- (id)_metadata;	// IMP=0x0000000000376843
- (id)_typedBackingStore;	// IMP=0x00000000003767ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
