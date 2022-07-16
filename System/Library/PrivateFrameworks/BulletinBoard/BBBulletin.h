//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBAccessoryIcon, BBAction, BBAttachmentMetadata, BBCommunicationContext, BBContent, BBImage, BBSectionIcon, BBSound, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimeZone;

@interface BBBulletin : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasCriticalIcon;	// 8 = 0x8
    _Bool _hasSubordinateIcon;	// 9 = 0x9
    _Bool _hasEventDate;	// 10 = 0xa
    _Bool _dateIsAllDay;	// 11 = 0xb
    _Bool _clearable;	// 12 = 0xc
    _Bool _turnsOnDisplay;	// 13 = 0xd
    _Bool _wantsFullscreenPresentation;	// 14 = 0xe
    _Bool _ignoresQuietMode;	// 15 = 0xf
    _Bool _ignoresDowntime;	// 16 = 0x10
    _Bool _preemptsPresentedAlert;	// 17 = 0x11
    _Bool _displaysActionsInline;	// 18 = 0x12
    _Bool _expiresOnPublisherDeath;	// 19 = 0x13
    _Bool _usesExternalSync;	// 20 = 0x14
    _Bool _loading;	// 21 = 0x15
    _Bool _preventAutomaticRemovalFromLockScreen;	// 22 = 0x16
    float _relevanceScore;	// 24 = 0x18
    NSString *_sectionID;	// 32 = 0x20
    NSString *_sectionBundlePath;	// 40 = 0x28
    NSSet *_subsectionIDs;	// 48 = 0x30
    NSString *_publisherRecordID;	// 56 = 0x38
    NSString *_publisherBulletinID;	// 64 = 0x40
    NSString *_dismissalID;	// 72 = 0x48
    NSString *_categoryID;	// 80 = 0x50
    NSString *_threadID;	// 88 = 0x58
    NSArray *_peopleIDs;	// 96 = 0x60
    long long _sectionSubtype;	// 104 = 0x68
    NSArray *_intentIDs;	// 112 = 0x70
    unsigned long long _counter;	// 120 = 0x78
    unsigned long long _interruptionLevel;	// 128 = 0x80
    BBContent *_content;	// 136 = 0x88
    BBContent *_modalAlertContent;	// 144 = 0x90
    BBContent *_starkBannerContent;	// 152 = 0x98
    NSString *_summaryArgument;	// 160 = 0xa0
    unsigned long long _summaryArgumentCount;	// 168 = 0xa8
    BBSectionIcon *_icon;	// 176 = 0xb0
    NSDate *_date;	// 184 = 0xb8
    NSDate *_endDate;	// 192 = 0xc0
    NSDate *_recencyDate;	// 200 = 0xc8
    long long _dateFormatStyle;	// 208 = 0xd0
    NSTimeZone *_timeZone;	// 216 = 0xd8
    BBAccessoryIcon *_accessoryIconMask;	// 224 = 0xe0
    BBImage *_accessoryImage;	// 232 = 0xe8
    BBSound *_sound;	// 240 = 0xf0
    BBAttachmentMetadata *_primaryAttachment;	// 248 = 0xf8
    NSArray *_additionalAttachments;	// 256 = 0x100
    NSString *_unlockActionLabelOverride;	// 264 = 0x108
    NSMutableDictionary *_actions;	// 272 = 0x110
    NSMutableDictionary *_supplementaryActionsByLayout;	// 280 = 0x118
    NSArray *_buttons;	// 288 = 0x120
    NSDictionary *_context;	// 296 = 0x128
    NSDate *_expirationDate;	// 304 = 0x130
    unsigned long long _expirationEvents;	// 312 = 0x138
    NSSet *_alertSuppressionContexts;	// 320 = 0x140
    NSString *_bulletinID;	// 328 = 0x148
    NSDate *_lastInterruptDate;	// 336 = 0x150
    NSDate *_publicationDate;	// 344 = 0x158
    NSString *_bulletinVersionID;	// 352 = 0x160
    NSString *_parentSectionID;	// 360 = 0x168
    NSString *_universalSectionID;	// 368 = 0x170
    long long _contentPreviewSetting;	// 376 = 0x178
    long long _lockScreenPriority;	// 384 = 0x180
    long long _backgroundStyle;	// 392 = 0x188
    NSString *_header;	// 400 = 0x190
    NSString *_footer;	// 408 = 0x198
    NSString *_contentType;	// 416 = 0x1a0
    unsigned long long realertCount;	// 424 = 0x1a8
    NSSet *alertSuppressionAppIDs_deprecated;	// 432 = 0x1b0
    BBCommunicationContext *_communicationContext;	// 440 = 0x1b8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b27d
+ (id)bulletinReferenceDateFromDate:(id)arg1;	// IMP=0x0000000000006072
+ (id)bulletinWithBulletin:(id)arg1;	// IMP=0x0000000000006014
+ (id)validSortDescriptorsFromSortDescriptors:(id)arg1;	// IMP=0x0000000000005ddb
+ (void)vetSortDescriptor:(id)arg1;	// IMP=0x0000000000005bf8
+ (id)_observerAssociationSet;	// IMP=0x000000000003bb9c
+ (id)_lifeAssertionAssociationSet;	// IMP=0x000000000003b9d8
- (void).cxx_destruct;	// IMP=0x000000000000e06e
@property(retain, nonatomic) BBCommunicationContext *communicationContext; // @synthesize communicationContext=_communicationContext;
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated; // @synthesize alertSuppressionAppIDs_deprecated;
@property(nonatomic) unsigned long long realertCount; // @synthesize realertCount;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long lockScreenPriority; // @synthesize lockScreenPriority=_lockScreenPriority;
@property(nonatomic) _Bool preventAutomaticRemovalFromLockScreen; // @synthesize preventAutomaticRemovalFromLockScreen=_preventAutomaticRemovalFromLockScreen;
@property(nonatomic) long long contentPreviewSetting; // @synthesize contentPreviewSetting=_contentPreviewSetting;
@property(copy, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
@property(copy, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool usesExternalSync; // @synthesize usesExternalSync=_usesExternalSync;
@property(copy, nonatomic) NSString *bulletinVersionID; // @synthesize bulletinVersionID=_bulletinVersionID;
@property(retain, nonatomic) NSDate *publicationDate; // @synthesize publicationDate=_publicationDate;
@property(retain, nonatomic) NSDate *lastInterruptDate; // @synthesize lastInterruptDate=_lastInterruptDate;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) NSSet *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property(nonatomic) unsigned long long expirationEvents; // @synthesize expirationEvents=_expirationEvents;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) _Bool expiresOnPublisherDeath; // @synthesize expiresOnPublisherDeath=_expiresOnPublisherDeath;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableDictionary *supplementaryActionsByLayout; // @synthesize supplementaryActionsByLayout=_supplementaryActionsByLayout;
@property(retain, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
@property(nonatomic) _Bool displaysActionsInline; // @synthesize displaysActionsInline=_displaysActionsInline;
@property(nonatomic) _Bool preemptsPresentedAlert; // @synthesize preemptsPresentedAlert=_preemptsPresentedAlert;
@property(nonatomic) _Bool ignoresDowntime; // @synthesize ignoresDowntime=_ignoresDowntime;
@property(nonatomic) _Bool ignoresQuietMode; // @synthesize ignoresQuietMode=_ignoresQuietMode;
@property(nonatomic) _Bool wantsFullscreenPresentation; // @synthesize wantsFullscreenPresentation=_wantsFullscreenPresentation;
@property(copy, nonatomic) NSString *unlockActionLabelOverride; // @synthesize unlockActionLabelOverride=_unlockActionLabelOverride;
@property(copy, nonatomic) NSArray *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property(copy, nonatomic) BBAttachmentMetadata *primaryAttachment; // @synthesize primaryAttachment=_primaryAttachment;
@property(nonatomic) _Bool turnsOnDisplay; // @synthesize turnsOnDisplay=_turnsOnDisplay;
@property(retain, nonatomic) BBSound *sound; // @synthesize sound=_sound;
@property(nonatomic) _Bool clearable; // @synthesize clearable=_clearable;
@property(retain, nonatomic) BBImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(retain, nonatomic) BBAccessoryIcon *accessoryIconMask; // @synthesize accessoryIconMask=_accessoryIconMask;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) _Bool dateIsAllDay; // @synthesize dateIsAllDay=_dateIsAllDay;
@property(nonatomic) long long dateFormatStyle; // @synthesize dateFormatStyle=_dateFormatStyle;
@property(retain, nonatomic) NSDate *recencyDate; // @synthesize recencyDate=_recencyDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool hasEventDate; // @synthesize hasEventDate=_hasEventDate;
@property(nonatomic) _Bool hasSubordinateIcon; // @synthesize hasSubordinateIcon=_hasSubordinateIcon;
@property(nonatomic) _Bool hasCriticalIcon; // @synthesize hasCriticalIcon=_hasCriticalIcon;
@property(retain, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(retain, nonatomic) BBContent *starkBannerContent; // @synthesize starkBannerContent=_starkBannerContent;
@property(retain, nonatomic) BBContent *modalAlertContent; // @synthesize modalAlertContent=_modalAlertContent;
@property(retain, nonatomic) BBContent *content; // @synthesize content=_content;
@property(nonatomic) float relevanceScore; // @synthesize relevanceScore=_relevanceScore;
@property(nonatomic) unsigned long long interruptionLevel; // @synthesize interruptionLevel=_interruptionLevel;
@property(nonatomic) unsigned long long counter; // @synthesize counter=_counter;
@property(copy, nonatomic) NSArray *intentIDs; // @synthesize intentIDs=_intentIDs;
@property(nonatomic) long long sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(copy, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_publisherRecordID;
@property(copy, nonatomic) NSSet *subsectionIDs; // @synthesize subsectionIDs=_subsectionIDs;
@property(copy, nonatomic) NSString *sectionBundlePath; // @synthesize sectionBundlePath=_sectionBundlePath;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)shortDescription;	// IMP=0x000000000000d8ee
- (id)safeDescription;	// IMP=0x000000000000d8d7
- (id)description;	// IMP=0x000000000000d8ae
- (id)_safeDescription:(_Bool)arg1;	// IMP=0x000000000000d4bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c87f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b285
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b221
@property(nonatomic) _Bool hasPrivateContent; // @dynamic hasPrivateContent;
- (void)setShowsMessagePreview:(_Bool)arg1;	// IMP=0x000000000000b1d4
- (_Bool)showsMessagePreview;	// IMP=0x000000000000b1bf
@property(readonly, copy, nonatomic) NSString *publisherMatchID;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000000a4df
- (id)actionForResponse:(id)arg1;	// IMP=0x0000000000009fd0
- (CDUnknownBlockType)responseSendBlock;	// IMP=0x0000000000009ef0
- (id)responseForExpireAction;	// IMP=0x0000000000009de5
- (id)responseForRaiseAction;	// IMP=0x0000000000009d86
- (id)responseForSnoozeAction;	// IMP=0x0000000000009d27
- (id)responseForButtonActionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000009bd0
- (id)responseForAcknowledgeAction;	// IMP=0x0000000000009b71
- (id)responseForDefaultAction;	// IMP=0x0000000000009b12
- (id)responseForAction:(id)arg1;	// IMP=0x0000000000009a8a
- (id)_responseForAction:(id)arg1;	// IMP=0x00000000000098ec
- (id)_allActions;	// IMP=0x00000000000096f5
- (id)_allSupplementaryActions;	// IMP=0x000000000000969e
- (id)supplementaryActionsForLayout:(long long)arg1;	// IMP=0x0000000000009634
- (id)supplementaryActions;	// IMP=0x0000000000009620
- (id)_actionWithID:(id)arg1 fromActions:(id)arg2;	// IMP=0x00000000000093a5
- (id)actionWithIdentifier:(id)arg1;	// IMP=0x0000000000009328
- (void)setSilenceAction:(id)arg1;	// IMP=0x000000000000929e
- (id)silenceAction;	// IMP=0x000000000000927e
@property(copy, nonatomic) BBAction *raiseAction;
@property(copy, nonatomic) BBAction *snoozeAction;
@property(copy, nonatomic) BBAction *expireAction;
@property(copy, nonatomic) BBAction *acknowledgeAction;
@property(copy, nonatomic) BBAction *alternateAction;
- (void)setDismissAction:(id)arg1;	// IMP=0x0000000000008ea2
- (id)dismissAction;	// IMP=0x0000000000008e82
@property(copy, nonatomic) BBAction *defaultAction;
- (id)_actionKeyForType:(long long)arg1;	// IMP=0x0000000000008d3f
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;	// IMP=0x0000000000008bba
- (unsigned long long)numberOfAdditionalAttachments;	// IMP=0x0000000000008b76
- (long long)primaryAttachmentType;	// IMP=0x0000000000008b32
@property(readonly, nonatomic, getter=isCallNotification) _Bool callNotification;
@property(readonly, nonatomic, getter=isMessagingNotification) _Bool messagingNotification;
@property(copy, nonatomic) NSString *section;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006ce2
- (unsigned long long)hash;	// IMP=0x000000000000621b
- (void)dealloc;	// IMP=0x00000000000061be
- (id)init;	// IMP=0x0000000000006125
- (void)copyAssociationsForBulletin:(id)arg1;	// IMP=0x000000000003bd60
- (void)addObserver:(id)arg1;	// IMP=0x000000000003bcbe
- (id)firstValidObserver;	// IMP=0x000000000003bc01
- (void)addLifeAssertion:(id)arg1;	// IMP=0x000000000003bafa
- (id)lifeAssertions;	// IMP=0x000000000003ba3d
@property(readonly, nonatomic) _Bool hideDismissActionInCarPlay;
@property(readonly, nonatomic) _Bool suppressDelayForForwardedBulletins;
@property(readonly, nonatomic) _Bool playsMediaWhenRaised;
@property(readonly, nonatomic) _Bool shouldDismissBulletinWhenClosed;
@property(readonly, nonatomic) unsigned long long privacySettings;
@property(readonly, nonatomic) _Bool allowsSupplementaryActionsInCarPlay;
@property(readonly, nonatomic) _Bool allowsPersistentBannersInCarPlay;
@property(readonly, nonatomic) _Bool revealsAdditionalContentOnPresentation;
@property(readonly, nonatomic) _Bool prioritizeAtTopOfLockScreen;
@property(readonly, nonatomic) _Bool allowsAddingToLockScreenWhenUnlocked;
@property(readonly, nonatomic) _Bool allowsAutomaticRemovalFromLockScreen;
- (id)_sectionSubtypeParameters;	// IMP=0x000000000004f934
- (id)_sectionParameters;	// IMP=0x000000000004f8b4
@property(readonly, nonatomic) NSString *secondaryContentRemoteServiceBundleIdentifier;
@property(readonly, nonatomic) NSString *secondaryContentRemoteViewControllerClassName;
@property(readonly, nonatomic) NSString *bannerAccessoryRemoteServiceBundleIdentifier;
@property(readonly, nonatomic) NSString *bannerAccessoryRemoteViewControllerClassName;
@property(readonly, nonatomic) long long iPodOutAlertType;
@property(readonly, nonatomic) unsigned long long subtypePriority;
@property(readonly, nonatomic) _Bool playsSoundForModify;
@property(readonly, nonatomic) _Bool showsContactPhoto;
@property(readonly, nonatomic) _Bool showsUnreadIndicatorForNoticesFeed;
@property(readonly, nonatomic) _Bool suppressesTitle;
@property(readonly, nonatomic) _Bool preventLock;
@property(readonly, nonatomic) _Bool canBeSilencedByMenuButtonPress;
@property(readonly, nonatomic) _Bool visuallyIndicatesWhenDateIsInFuture;
@property(readonly, nonatomic) _Bool preservesUnlockActionCase;
@property(readonly, nonatomic) _Bool inertWhenLocked;
@property(readonly, nonatomic) _Bool suppressesMessageForPrivacy;
@property(readonly, nonatomic) _Bool coalescesWhenLocked;
@property(readonly, nonatomic) _Bool suppressesAlertsWhenAppIsActive;
@property(readonly, nonatomic) NSSet *alertSuppressionAppIDs;
@property(readonly, nonatomic) NSString *alternateActionLabel;
@property(readonly, nonatomic) NSString *fullAlternateActionLabel;
@property(readonly, nonatomic) NSString *unlockActionLabel;
@property(readonly, nonatomic) NSString *fullUnlockActionLabel;
@property(readonly, nonatomic) NSString *missedBannerDescriptionFormat;
@property(readonly, nonatomic) NSString *topic;
@property(readonly, nonatomic) NSString *subtypeSummaryFormat;
@property(readonly, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property(readonly, nonatomic) _Bool showsDateInFloatingLockScreenAlert;
@property(readonly, nonatomic) _Bool orderSectionUsingRecencyDate;
@property(readonly, nonatomic) _Bool usesVariableLayout;
@property(readonly, nonatomic) unsigned long long messageNumberOfLines;
@property(readonly, nonatomic) _Bool showsSubtitle;
@property(readonly, nonatomic) BBSectionIcon *sectionIcon;
@property(readonly, nonatomic) NSString *sectionDisplayName;
- (id)syncHash;	// IMP=0x000000000007435e

@end
