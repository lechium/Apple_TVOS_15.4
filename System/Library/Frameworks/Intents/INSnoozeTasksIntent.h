//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSnoozeTasksIntentExport-Protocol.h>

@class INDateComponentsRange, NSArray, NSNumber, NSString;

@interface INSnoozeTasksIntent <INSnoozeTasksIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000003e87b7
- (id)parametersByName;	// IMP=0x00000000003e87a5
- (void)setVerb:(id)arg1;	// IMP=0x00000000003e879f
- (id)verb;	// IMP=0x00000000003e8792
- (void)setDomain:(id)arg1;	// IMP=0x00000000003e878c
- (id)domain;	// IMP=0x00000000003e877f
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000003e868a
- (id)_dictionaryRepresentation;	// IMP=0x00000000003e84d1
- (void)setAll:(id)arg1;	// IMP=0x00000000003e8449
@property(readonly, copy, nonatomic) NSNumber *all;
- (void)setNextTriggerTime:(id)arg1;	// IMP=0x00000000003e8307
@property(readonly, copy, nonatomic) INDateComponentsRange *nextTriggerTime;
- (void)setTasks:(id)arg1;	// IMP=0x00000000003e8209
@property(readonly, copy, nonatomic) NSArray *tasks;
- (id)initWithTasks:(id)arg1 nextTriggerTime:(id)arg2 all:(id)arg3;	// IMP=0x00000000003e80cf
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000003e805d
- (id)_metadata;	// IMP=0x00000000003e800d
- (id)_typedBackingStore;	// IMP=0x00000000003e7fb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

