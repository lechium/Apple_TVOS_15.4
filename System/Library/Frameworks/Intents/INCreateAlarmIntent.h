//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCreateAlarmIntentExport-Protocol.h>

@class INDateComponentsRange, INSpeakableString, NSNumber, NSString;

@interface INCreateAlarmIntent <INCreateAlarmIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004a053c
- (id)parametersByName;	// IMP=0x00000000004a052a
- (void)setVerb:(id)arg1;	// IMP=0x00000000004a0524
- (id)verb;	// IMP=0x00000000004a0517
- (void)setDomain:(id)arg1;	// IMP=0x00000000004a0511
- (id)domain;	// IMP=0x00000000004a0504
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x00000000004a040f
- (id)_dictionaryRepresentation;	// IMP=0x00000000004a01ce
- (void)setAlarmRepeatScheduleOptions:(unsigned long long)arg1;	// IMP=0x00000000004a0141
@property(readonly, nonatomic) unsigned long long alarmRepeatScheduleOptions;
- (void)setLabel:(id)arg1;	// IMP=0x000000000049ffe4
@property(readonly, copy, nonatomic) INSpeakableString *label;
- (void)setTime:(id)arg1;	// IMP=0x000000000049fee6
@property(readonly, copy, nonatomic) INDateComponentsRange *time;
- (void)setRelativeOffsetInMinutes:(id)arg1;	// IMP=0x000000000049fde7
@property(readonly, copy, nonatomic) NSNumber *relativeOffsetInMinutes;
- (id)initWithRelativeOffsetInMinutes:(id)arg1 time:(id)arg2 label:(id)arg3 alarmRepeatScheduleOptions:(unsigned long long)arg4;	// IMP=0x000000000049fc55
- (id)_categoryVerb;	// IMP=0x000000000049fc48
- (long long)_intentCategory;	// IMP=0x000000000049fc3d
- (void)_setMetadata:(id)arg1;	// IMP=0x000000000049fbcb
- (id)_metadata;	// IMP=0x000000000049fb7b
- (id)_typedBackingStore;	// IMP=0x000000000049fb24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

