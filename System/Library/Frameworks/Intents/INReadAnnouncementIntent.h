//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INReadAnnouncementIntentExport-Protocol.h>
#import <Intents/UNNotificationContentProviding-Protocol.h>

@class NSString;

@interface INReadAnnouncementIntent <UNNotificationContentProviding, INReadAnnouncementIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000475c22
- (id)parametersByName;	// IMP=0x0000000000475c10
- (void)setVerb:(id)arg1;	// IMP=0x0000000000475c0a
- (id)verb;	// IMP=0x0000000000475bfd
- (void)setDomain:(id)arg1;	// IMP=0x0000000000475bf7
- (id)domain;	// IMP=0x0000000000475bea
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000475b83
- (id)_dictionaryRepresentation;	// IMP=0x00000000004759f7
- (void)setUserNotificationType:(long long)arg1;	// IMP=0x0000000000475986
@property(readonly, nonatomic) long long userNotificationType;
- (void)setStartAnnouncementIdentifier:(id)arg1;	// IMP=0x000000000047586e
@property(readonly, copy, nonatomic) NSString *startAnnouncementIdentifier;
- (void)setReadType:(long long)arg1;	// IMP=0x000000000047578b
@property(readonly, nonatomic) long long readType;
- (id)initWithReadType:(long long)arg1 startAnnouncementIdentifier:(id)arg2 userNotificationType:(long long)arg3;	// IMP=0x0000000000475647
- (id)_categoryVerb;	// IMP=0x000000000047563a
- (long long)_intentCategory;	// IMP=0x000000000047562f
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004755bd
- (id)_metadata;	// IMP=0x000000000047556d
- (id)_typedBackingStore;	// IMP=0x0000000000475516

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

