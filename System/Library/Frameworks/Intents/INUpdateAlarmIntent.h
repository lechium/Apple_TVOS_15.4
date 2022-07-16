//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INUpdateAlarmIntentExport-Protocol.h>

@class INAlarm, INAlarmSearch, INDateComponentsRange, INSpeakableString, NSString;

@interface INUpdateAlarmIntent <INUpdateAlarmIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000490dd6
- (id)parametersByName;	// IMP=0x0000000000490dc4
- (void)setVerb:(id)arg1;	// IMP=0x0000000000490dbe
- (id)verb;	// IMP=0x0000000000490db1
- (void)setDomain:(id)arg1;	// IMP=0x0000000000490dab
- (id)domain;	// IMP=0x0000000000490d9e
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000490ca9
- (id)_dictionaryRepresentation;	// IMP=0x00000000004909fe
- (void)setProposedLabel:(id)arg1;	// IMP=0x0000000000490973
@property(readonly, copy, nonatomic) INSpeakableString *proposedLabel;
- (void)setProposedTime:(id)arg1;	// IMP=0x0000000000490875
@property(readonly, copy, nonatomic) INDateComponentsRange *proposedTime;
- (void)setOperation:(long long)arg1;	// IMP=0x0000000000490791
@property(readonly, nonatomic) long long operation;
- (void)setAlarm:(id)arg1;	// IMP=0x0000000000490660
@property(readonly, copy, nonatomic) INAlarm *alarm;
- (void)setAlarmSearch:(id)arg1;	// IMP=0x0000000000490562
@property(readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
- (id)initWithAlarmSearch:(id)arg1 alarm:(id)arg2 operation:(long long)arg3 proposedTime:(id)arg4 proposedLabel:(id)arg5;	// IMP=0x00000000004903ed
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000049037b
- (id)_metadata;	// IMP=0x000000000049032b
- (id)_typedBackingStore;	// IMP=0x00000000004902d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

