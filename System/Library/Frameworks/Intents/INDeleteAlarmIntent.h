//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDeleteAlarmIntentExport-Protocol.h>

@class INAlarmSearch, NSArray, NSString;

@interface INDeleteAlarmIntent <INDeleteAlarmIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000495a95
- (id)parametersByName;	// IMP=0x0000000000495a83
- (void)setVerb:(id)arg1;	// IMP=0x0000000000495a7d
- (id)verb;	// IMP=0x0000000000495a70
- (void)setDomain:(id)arg1;	// IMP=0x0000000000495a6a
- (id)domain;	// IMP=0x0000000000495a5d
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000004959f6
- (id)_dictionaryRepresentation;	// IMP=0x00000000004958ab
- (void)setAlarms:(id)arg1;	// IMP=0x0000000000495820
@property(readonly, copy, nonatomic) NSArray *alarms;
- (void)setAlarmSearch:(id)arg1;	// IMP=0x0000000000495722
@property(readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
- (id)initWithAlarmSearch:(id)arg1 alarms:(id)arg2;	// IMP=0x0000000000495611
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000049559f
- (id)_metadata;	// IMP=0x000000000049554f
- (id)_typedBackingStore;	// IMP=0x00000000004954f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

