//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchAlarmIntentExport-Protocol.h>

@class INAlarmSearch, NSArray, NSString;

@interface INSearchAlarmIntent <INSearchAlarmIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004a807f
- (id)parametersByName;	// IMP=0x00000000004a806d
- (void)setVerb:(id)arg1;	// IMP=0x00000000004a8067
- (id)verb;	// IMP=0x00000000004a805a
- (void)setDomain:(id)arg1;	// IMP=0x00000000004a8054
- (id)domain;	// IMP=0x00000000004a8047
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000004a7fe0
- (id)_dictionaryRepresentation;	// IMP=0x00000000004a7dfc
- (void)setAlarms:(id)arg1;	// IMP=0x00000000004a7d71
@property(readonly, copy, nonatomic) NSArray *alarms;
- (void)setAlarmSearchType:(long long)arg1;	// IMP=0x00000000004a7c9e
@property(readonly, nonatomic) long long alarmSearchType;
- (void)setAlarmSearch:(id)arg1;	// IMP=0x00000000004a7b78
@property(readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
- (id)initWithAlarmSearch:(id)arg1 alarmSearchType:(long long)arg2 alarms:(id)arg3;	// IMP=0x00000000004a7a50
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004a79de
- (id)_metadata;	// IMP=0x00000000004a798e
- (id)_typedBackingStore;	// IMP=0x00000000004a7937

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

