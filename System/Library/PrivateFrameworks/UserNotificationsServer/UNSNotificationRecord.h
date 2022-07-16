//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BSDescriptionProviding-Protocol.h>

@class CLRegion, NSArray, NSDate, NSDateComponents, NSDictionary, NSNumber, NSSet, NSString, NSTimeZone, NSURL, UNSContactRecord;

@interface UNSNotificationRecord : NSObject <BSDescriptionProviding>
{
    _Bool _communicationContextSystemImage;	// 8 = 0x8
    _Bool _communicationContextMentionsCurrentUser;	// 9 = 0x9
    _Bool _communicationContextNotifyRecipientAnyway;	// 10 = 0xa
    _Bool _communicationContextReplyToCurrentUser;	// 11 = 0xb
    _Bool _hasDefaultAction;	// 12 = 0xc
    _Bool _hasCriticalAlertSound;	// 13 = 0xd
    _Bool _shouldBadgeApplicationIcon;	// 14 = 0xe
    _Bool _shouldHideDate;	// 15 = 0xf
    _Bool _shouldHideTime;	// 16 = 0x10
    _Bool _shouldIgnoreAccessibilityDisabledVibrationSetting;	// 17 = 0x11
    _Bool _shouldIgnoreDoNotDisturb;	// 18 = 0x12
    _Bool _shouldIgnoreDowntime;	// 19 = 0x13
    _Bool _shouldIgnoreRingerSwitch;	// 20 = 0x14
    _Bool _shouldSuppressScreenLightUp;	// 21 = 0x15
    _Bool _shouldPlaySound;	// 22 = 0x16
    _Bool _shouldPresentAlert;	// 23 = 0x17
    _Bool _shouldAuthenticateDefaultAction;	// 24 = 0x18
    _Bool _shouldBackgroundDefaultAction;	// 25 = 0x19
    _Bool _shouldPreventNotificationDismissalAfterDefaultAction;	// 26 = 0x1a
    _Bool _shouldShowSubordinateIcon;	// 27 = 0x1b
    _Bool _shouldSoundRepeat;	// 28 = 0x1c
    _Bool _shouldSuppressSyncDismissalWhenRemoved;	// 29 = 0x1d
    _Bool _shouldUseRequestIdentifierForDismissalSync;	// 30 = 0x1e
    _Bool _shouldPreemptPresentedNotification;	// 31 = 0x1f
    _Bool _shouldDisplayActionsInline;	// 32 = 0x20
    _Bool _allowsDefaultDestinations;	// 33 = 0x21
    _Bool _allowsAlertDestination;	// 34 = 0x22
    _Bool _allowsLockScreenDestination;	// 35 = 0x23
    _Bool _allowsNotificationCenterDestination;	// 36 = 0x24
    _Bool _allowsCarPlayDestination;	// 37 = 0x25
    _Bool _triggerRepeats;	// 38 = 0x26
    NSString *_contentType;	// 40 = 0x28
    NSString *_communicationContextIdentifier;	// 48 = 0x30
    NSString *_communicationContextBundleIdentifier;	// 56 = 0x38
    NSString *_communicationContextAssociatedObjectUri;	// 64 = 0x40
    NSString *_communicationContextDisplayName;	// 72 = 0x48
    UNSContactRecord *_communicationContextSender;	// 80 = 0x50
    NSArray *_communicationContextRecipients;	// 88 = 0x58
    NSURL *_communicationContextContentURL;	// 96 = 0x60
    NSString *_communicationContextImageName;	// 104 = 0x68
    unsigned long long _communicationContextRecipientCount;	// 112 = 0x70
    NSString *_accessoryImageName;	// 120 = 0x78
    NSArray *_attachments;	// 128 = 0x80
    NSNumber *_badge;	// 136 = 0x88
    NSString *_body;	// 144 = 0x90
    NSDate *_contentDate;	// 152 = 0x98
    NSArray *_bodyLocalizationArguments;	// 160 = 0xa0
    NSString *_bodyLocalizationKey;	// 168 = 0xa8
    NSString *_categoryIdentifier;	// 176 = 0xb0
    NSString *_threadIdentifier;	// 184 = 0xb8
    NSNumber *_contentAvailable;	// 192 = 0xc0
    NSNumber *_mutableContent;	// 200 = 0xc8
    NSDate *_date;	// 208 = 0xd0
    unsigned long long _interruptionLevel;	// 216 = 0xd8
    NSString *_defaultActionTitle;	// 224 = 0xe0
    NSString *_defaultActionTitleLocalizationKey;	// 232 = 0xe8
    NSURL *_defaultActionURL;	// 240 = 0xf0
    NSDate *_expirationDate;	// 248 = 0xf8
    NSString *_header;	// 256 = 0x100
    NSArray *_headerLocalizationArguments;	// 264 = 0x108
    NSString *_headerLocalizationKey;	// 272 = 0x110
    NSString *_footer;	// 280 = 0x118
    NSArray *_footerLocalizationArguments;	// 288 = 0x120
    NSString *_footerLocalizationKey;	// 296 = 0x128
    NSString *_iconApplicationIdentifier;	// 304 = 0x130
    NSString *_iconName;	// 312 = 0x138
    NSString *_iconPath;	// 320 = 0x140
    NSString *_iconSystemImageName;	// 328 = 0x148
    NSString *_identifier;	// 336 = 0x150
    NSString *_launchImageName;	// 344 = 0x158
    NSDate *_requestDate;	// 352 = 0x160
    unsigned long long _presentationOptions;	// 360 = 0x168
    NSString *_audioCategory;	// 368 = 0x170
    NSNumber *_audioVolume;	// 376 = 0x178
    double _soundMaximumDuration;	// 384 = 0x180
    NSString *_subtitle;	// 392 = 0x188
    NSArray *_subtitleLocalizationArguments;	// 400 = 0x190
    NSString *_subtitleLocalizationKey;	// 408 = 0x198
    NSString *_title;	// 416 = 0x1a0
    NSArray *_titleLocalizationArguments;	// 424 = 0x1a8
    NSString *_titleLocalizationKey;	// 432 = 0x1b0
    unsigned long long _realertCount;	// 440 = 0x1b8
    NSString *_summaryArgument;	// 448 = 0x1c0
    unsigned long long _summaryArgumentCount;	// 456 = 0x1c8
    NSString *_targetContentIdentifier;	// 464 = 0x1d0
    NSString *_toneAlertTopic;	// 472 = 0x1d8
    long long _toneAlertType;	// 480 = 0x1e0
    NSString *_toneFileName;	// 488 = 0x1e8
    NSURL *_toneFileURL;	// 496 = 0x1f0
    NSString *_toneIdentifier;	// 504 = 0x1f8
    unsigned long long _toneMediaLibraryItemIdentifier;	// 512 = 0x200
    NSSet *_topicIdentifiers;	// 520 = 0x208
    NSDate *_triggerDate;	// 528 = 0x210
    NSDateComponents *_triggerDateComponents;	// 536 = 0x218
    NSString *_triggerRepeatCalendarIdentifier;	// 544 = 0x220
    unsigned long long _triggerRepeatInterval;	// 552 = 0x228
    CLRegion *_triggerRegion;	// 560 = 0x230
    double _triggerTimeInterval;	// 568 = 0x238
    NSTimeZone *_triggerTimeZone;	// 576 = 0x240
    NSString *_triggerType;	// 584 = 0x248
    NSDictionary *_userInfo;	// 592 = 0x250
    NSString *_vibrationIdentifier;	// 600 = 0x258
    NSURL *_vibrationPatternFileURL;	// 608 = 0x260
    double _relevanceScore;	// 616 = 0x268
}

- (void).cxx_destruct;	// IMP=0x000000000003cdf1
@property(nonatomic) double relevanceScore; // @synthesize relevanceScore=_relevanceScore;
@property(copy, nonatomic) NSURL *vibrationPatternFileURL; // @synthesize vibrationPatternFileURL=_vibrationPatternFileURL;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(copy, nonatomic) NSTimeZone *triggerTimeZone; // @synthesize triggerTimeZone=_triggerTimeZone;
@property(nonatomic) double triggerTimeInterval; // @synthesize triggerTimeInterval=_triggerTimeInterval;
@property(copy, nonatomic) CLRegion *triggerRegion; // @synthesize triggerRegion=_triggerRegion;
@property(nonatomic) _Bool triggerRepeats; // @synthesize triggerRepeats=_triggerRepeats;
@property(nonatomic) unsigned long long triggerRepeatInterval; // @synthesize triggerRepeatInterval=_triggerRepeatInterval;
@property(copy, nonatomic) NSString *triggerRepeatCalendarIdentifier; // @synthesize triggerRepeatCalendarIdentifier=_triggerRepeatCalendarIdentifier;
@property(copy, nonatomic) NSDateComponents *triggerDateComponents; // @synthesize triggerDateComponents=_triggerDateComponents;
@property(copy, nonatomic) NSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(nonatomic) _Bool allowsCarPlayDestination; // @synthesize allowsCarPlayDestination=_allowsCarPlayDestination;
@property(nonatomic) _Bool allowsNotificationCenterDestination; // @synthesize allowsNotificationCenterDestination=_allowsNotificationCenterDestination;
@property(nonatomic) _Bool allowsLockScreenDestination; // @synthesize allowsLockScreenDestination=_allowsLockScreenDestination;
@property(nonatomic) _Bool allowsAlertDestination; // @synthesize allowsAlertDestination=_allowsAlertDestination;
@property(nonatomic) _Bool allowsDefaultDestinations; // @synthesize allowsDefaultDestinations=_allowsDefaultDestinations;
@property(copy, nonatomic) NSSet *topicIdentifiers; // @synthesize topicIdentifiers=_topicIdentifiers;
@property(nonatomic) unsigned long long toneMediaLibraryItemIdentifier; // @synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSURL *toneFileURL; // @synthesize toneFileURL=_toneFileURL;
@property(copy, nonatomic) NSString *toneFileName; // @synthesize toneFileName=_toneFileName;
@property(nonatomic) long long toneAlertType; // @synthesize toneAlertType=_toneAlertType;
@property(copy, nonatomic) NSString *toneAlertTopic; // @synthesize toneAlertTopic=_toneAlertTopic;
@property(copy, nonatomic) NSString *targetContentIdentifier; // @synthesize targetContentIdentifier=_targetContentIdentifier;
@property(nonatomic) unsigned long long summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(nonatomic) unsigned long long realertCount; // @synthesize realertCount=_realertCount;
@property(copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;
@property(copy, nonatomic) NSArray *titleLocalizationArguments; // @synthesize titleLocalizationArguments=_titleLocalizationArguments;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subtitleLocalizationKey; // @synthesize subtitleLocalizationKey=_subtitleLocalizationKey;
@property(copy, nonatomic) NSArray *subtitleLocalizationArguments; // @synthesize subtitleLocalizationArguments=_subtitleLocalizationArguments;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) double soundMaximumDuration; // @synthesize soundMaximumDuration=_soundMaximumDuration;
@property(copy, nonatomic) NSNumber *audioVolume; // @synthesize audioVolume=_audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic) _Bool shouldDisplayActionsInline; // @synthesize shouldDisplayActionsInline=_shouldDisplayActionsInline;
@property(nonatomic) _Bool shouldPreemptPresentedNotification; // @synthesize shouldPreemptPresentedNotification=_shouldPreemptPresentedNotification;
@property(nonatomic) _Bool shouldUseRequestIdentifierForDismissalSync; // @synthesize shouldUseRequestIdentifierForDismissalSync=_shouldUseRequestIdentifierForDismissalSync;
@property(nonatomic) _Bool shouldSuppressSyncDismissalWhenRemoved; // @synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved;
@property(nonatomic) _Bool shouldSoundRepeat; // @synthesize shouldSoundRepeat=_shouldSoundRepeat;
@property(nonatomic) _Bool shouldShowSubordinateIcon; // @synthesize shouldShowSubordinateIcon=_shouldShowSubordinateIcon;
@property(nonatomic) _Bool shouldPreventNotificationDismissalAfterDefaultAction; // @synthesize shouldPreventNotificationDismissalAfterDefaultAction=_shouldPreventNotificationDismissalAfterDefaultAction;
@property(nonatomic) _Bool shouldBackgroundDefaultAction; // @synthesize shouldBackgroundDefaultAction=_shouldBackgroundDefaultAction;
@property(nonatomic) _Bool shouldAuthenticateDefaultAction; // @synthesize shouldAuthenticateDefaultAction=_shouldAuthenticateDefaultAction;
@property(nonatomic) unsigned long long presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property(nonatomic) _Bool shouldPresentAlert; // @synthesize shouldPresentAlert=_shouldPresentAlert;
@property(nonatomic) _Bool shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
@property(nonatomic) _Bool shouldSuppressScreenLightUp; // @synthesize shouldSuppressScreenLightUp=_shouldSuppressScreenLightUp;
@property(nonatomic) _Bool shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property(nonatomic) _Bool shouldIgnoreDowntime; // @synthesize shouldIgnoreDowntime=_shouldIgnoreDowntime;
@property(nonatomic) _Bool shouldIgnoreDoNotDisturb; // @synthesize shouldIgnoreDoNotDisturb=_shouldIgnoreDoNotDisturb;
@property(nonatomic) _Bool shouldIgnoreAccessibilityDisabledVibrationSetting; // @synthesize shouldIgnoreAccessibilityDisabledVibrationSetting=_shouldIgnoreAccessibilityDisabledVibrationSetting;
@property(nonatomic) _Bool shouldHideTime; // @synthesize shouldHideTime=_shouldHideTime;
@property(nonatomic) _Bool shouldHideDate; // @synthesize shouldHideDate=_shouldHideDate;
@property(nonatomic) _Bool shouldBadgeApplicationIcon; // @synthesize shouldBadgeApplicationIcon=_shouldBadgeApplicationIcon;
@property(copy, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(copy, nonatomic) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *iconSystemImageName; // @synthesize iconSystemImageName=_iconSystemImageName;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *iconApplicationIdentifier; // @synthesize iconApplicationIdentifier=_iconApplicationIdentifier;
@property(copy, nonatomic) NSString *footerLocalizationKey; // @synthesize footerLocalizationKey=_footerLocalizationKey;
@property(copy, nonatomic) NSArray *footerLocalizationArguments; // @synthesize footerLocalizationArguments=_footerLocalizationArguments;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *headerLocalizationKey; // @synthesize headerLocalizationKey=_headerLocalizationKey;
@property(copy, nonatomic) NSArray *headerLocalizationArguments; // @synthesize headerLocalizationArguments=_headerLocalizationArguments;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) _Bool hasCriticalAlertSound; // @synthesize hasCriticalAlertSound=_hasCriticalAlertSound;
@property(copy, nonatomic) NSURL *defaultActionURL; // @synthesize defaultActionURL=_defaultActionURL;
@property(copy, nonatomic) NSString *defaultActionTitleLocalizationKey; // @synthesize defaultActionTitleLocalizationKey=_defaultActionTitleLocalizationKey;
@property(copy, nonatomic) NSString *defaultActionTitle; // @synthesize defaultActionTitle=_defaultActionTitle;
@property(nonatomic) _Bool hasDefaultAction; // @synthesize hasDefaultAction=_hasDefaultAction;
@property(nonatomic) unsigned long long interruptionLevel; // @synthesize interruptionLevel=_interruptionLevel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSNumber *mutableContent; // @synthesize mutableContent=_mutableContent;
@property(copy, nonatomic) NSNumber *contentAvailable; // @synthesize contentAvailable=_contentAvailable;
@property(copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(copy, nonatomic) NSString *bodyLocalizationKey; // @synthesize bodyLocalizationKey=_bodyLocalizationKey;
@property(copy, nonatomic) NSArray *bodyLocalizationArguments; // @synthesize bodyLocalizationArguments=_bodyLocalizationArguments;
@property(copy, nonatomic) NSDate *contentDate; // @synthesize contentDate=_contentDate;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSString *accessoryImageName; // @synthesize accessoryImageName=_accessoryImageName;
@property(nonatomic) unsigned long long communicationContextRecipientCount; // @synthesize communicationContextRecipientCount=_communicationContextRecipientCount;
@property(nonatomic) _Bool communicationContextReplyToCurrentUser; // @synthesize communicationContextReplyToCurrentUser=_communicationContextReplyToCurrentUser;
@property(nonatomic) _Bool communicationContextNotifyRecipientAnyway; // @synthesize communicationContextNotifyRecipientAnyway=_communicationContextNotifyRecipientAnyway;
@property(nonatomic) _Bool communicationContextMentionsCurrentUser; // @synthesize communicationContextMentionsCurrentUser=_communicationContextMentionsCurrentUser;
@property(nonatomic) _Bool communicationContextSystemImage; // @synthesize communicationContextSystemImage=_communicationContextSystemImage;
@property(copy, nonatomic) NSString *communicationContextImageName; // @synthesize communicationContextImageName=_communicationContextImageName;
@property(copy, nonatomic) NSURL *communicationContextContentURL; // @synthesize communicationContextContentURL=_communicationContextContentURL;
@property(copy, nonatomic) NSArray *communicationContextRecipients; // @synthesize communicationContextRecipients=_communicationContextRecipients;
@property(copy, nonatomic) UNSContactRecord *communicationContextSender; // @synthesize communicationContextSender=_communicationContextSender;
@property(copy, nonatomic) NSString *communicationContextDisplayName; // @synthesize communicationContextDisplayName=_communicationContextDisplayName;
@property(copy, nonatomic) NSString *communicationContextAssociatedObjectUri; // @synthesize communicationContextAssociatedObjectUri=_communicationContextAssociatedObjectUri;
@property(copy, nonatomic) NSString *communicationContextBundleIdentifier; // @synthesize communicationContextBundleIdentifier=_communicationContextBundleIdentifier;
@property(copy, nonatomic) NSString *communicationContextIdentifier; // @synthesize communicationContextIdentifier=_communicationContextIdentifier;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003c232
- (id)succinctDescription;	// IMP=0x000000000003c1e2
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003a988
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003a938
@property(readonly, nonatomic) _Bool hasPendingTrigger;
@property(readonly, nonatomic) _Bool hasSound;
@property(readonly, nonatomic) _Bool hasBadge;
@property(readonly, nonatomic) _Bool hasAlertContent;
- (_Bool)hasCommunicationContext;	// IMP=0x000000000003a3f7
- (_Bool)willNotifyUser;	// IMP=0x000000000003a3be
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000038a8f
- (_Bool)isSimilar:(id)arg1;	// IMP=0x0000000000037170
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentationWithTruncation:(_Bool)arg1;	// IMP=0x000000000003550b
- (id)dictionaryRepresentation;	// IMP=0x00000000000354f7
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000033964
- (id)init;	// IMP=0x000000000003394b

// Remaining properties
@property(readonly) Class superclass;

@end

