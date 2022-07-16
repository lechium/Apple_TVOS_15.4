//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSendAnnouncementIntentExport-Protocol.h>

@class INAnnouncement, NSArray, NSNumber, NSString;

@interface INSendAnnouncementIntent <INSendAnnouncementIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004548f3
- (id)parametersByName;	// IMP=0x00000000004548e1
- (void)setVerb:(id)arg1;	// IMP=0x00000000004548db
- (id)verb;	// IMP=0x00000000004548ce
- (void)setDomain:(id)arg1;	// IMP=0x00000000004548c8
- (id)domain;	// IMP=0x00000000004548bb
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000454854
- (id)_dictionaryRepresentation;	// IMP=0x000000000045469b
- (void)setIsReply:(id)arg1;	// IMP=0x0000000000454613
@property(readonly, copy, nonatomic) NSNumber *isReply;
- (void)setRecipients:(id)arg1;	// IMP=0x00000000004544d1
@property(readonly, copy, nonatomic) NSArray *recipients;
- (void)setAnnouncement:(id)arg1;	// IMP=0x00000000004543d3
@property(readonly, copy, nonatomic) INAnnouncement *announcement;
- (id)initWithAnnouncement:(id)arg1 recipients:(id)arg2 isReply:(id)arg3;	// IMP=0x0000000000454299
- (long long)_preferredInteractionDirection;	// IMP=0x000000000045428e
- (id)_categoryVerb;	// IMP=0x0000000000454281
- (long long)_intentCategory;	// IMP=0x0000000000454276
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000454204
- (id)_metadata;	// IMP=0x00000000004541b4
- (id)_typedBackingStore;	// IMP=0x000000000045415d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
