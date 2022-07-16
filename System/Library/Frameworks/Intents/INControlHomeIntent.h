//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INControlHomeIntentExport-Protocol.h>

@class INDateComponentsRange, INHomeUserTask, NSArray, NSString;

@interface INControlHomeIntent <INControlHomeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000000e11dc
- (id)parametersByName;	// IMP=0x00000000000e11ca
- (void)setVerb:(id)arg1;	// IMP=0x00000000000e11c4
- (id)verb;	// IMP=0x00000000000e11b7
- (void)setDomain:(id)arg1;	// IMP=0x00000000000e11b1
- (id)domain;	// IMP=0x00000000000e11a4
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000000e10af
- (id)_dictionaryRepresentation;	// IMP=0x00000000000e0ef6
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000e0e1e
- (void)setContents:(id)arg1;	// IMP=0x00000000000e0c0f
@property(readonly, copy, nonatomic) NSArray *contents;
- (id)initWithContents:(id)arg1;	// IMP=0x00000000000e06f6
- (void)setTime:(id)arg1;	// IMP=0x00000000000e066b
@property(readonly, copy, nonatomic) INDateComponentsRange *time;
- (void)setFilters:(id)arg1;	// IMP=0x00000000000e056d
@property(readonly, copy, nonatomic) NSArray *filters;
- (void)setUserTask:(id)arg1;	// IMP=0x00000000000e046f
@property(readonly, copy, nonatomic) INHomeUserTask *userTask;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2;	// IMP=0x00000000000e03e7
- (id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3;	// IMP=0x00000000000e0320
- (id)_categoryVerb;	// IMP=0x00000000000e0313
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000000e02a1
- (id)_metadata;	// IMP=0x00000000000e0251
- (id)_typedBackingStore;	// IMP=0x00000000000e01fa
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;	// IMP=0x0000000000112ab4
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;	// IMP=0x00000000001128a3
- (_Bool)_hasTitle;	// IMP=0x0000000000112813

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

