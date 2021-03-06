//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UNSNotificationCategoryRecord : NSObject
{
    _Bool _hasCustomDismissAction;	// 8 = 0x8
    _Bool _hasCustomSilenceAction;	// 9 = 0x9
    _Bool _shouldAllowInCarPlay;	// 10 = 0xa
    _Bool _privacyOptionShowTitle;	// 11 = 0xb
    _Bool _privacyOptionShowSubtitle;	// 12 = 0xc
    _Bool _preventAutomaticRemovalFromRecent;	// 13 = 0xd
    _Bool _revealAdditionalContentWhenPresented;	// 14 = 0xe
    _Bool _preventAutomaticLock;	// 15 = 0xf
    _Bool _preventDismissWhenClosed;	// 16 = 0x10
    _Bool _presentFullScreenAlertOverList;	// 17 = 0x11
    _Bool _shouldAllowActionsInCarPlay;	// 18 = 0x12
    _Bool _shouldAllowPersistentBannersInCarPlay;	// 19 = 0x13
    _Bool _playMediaWhenRaised;	// 20 = 0x14
    _Bool _preventClearFromList;	// 21 = 0x15
    _Bool _alwaysDisplayNotificationsIndicator;	// 22 = 0x16
    _Bool _suppressDelayForForwardedNotifications;	// 23 = 0x17
    _Bool _suppressDismissActionInCarPlay;	// 24 = 0x18
    NSArray *_actions;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSArray *_intentIdentifiers;	// 48 = 0x30
    NSArray *_minimalActions;	// 56 = 0x38
    NSString *_privateBody;	// 64 = 0x40
    NSString *_summaryFormat;	// 72 = 0x48
    NSString *_backgroundStyle;	// 80 = 0x50
    NSString *_listPriority;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000006afa1
@property(copy, nonatomic) NSString *listPriority; // @synthesize listPriority=_listPriority;
@property(copy, nonatomic) NSString *backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy, nonatomic) NSString *summaryFormat; // @synthesize summaryFormat=_summaryFormat;
@property(copy, nonatomic) NSString *privateBody; // @synthesize privateBody=_privateBody;
@property(nonatomic) _Bool suppressDismissActionInCarPlay; // @synthesize suppressDismissActionInCarPlay=_suppressDismissActionInCarPlay;
@property(nonatomic) _Bool suppressDelayForForwardedNotifications; // @synthesize suppressDelayForForwardedNotifications=_suppressDelayForForwardedNotifications;
@property(nonatomic) _Bool alwaysDisplayNotificationsIndicator; // @synthesize alwaysDisplayNotificationsIndicator=_alwaysDisplayNotificationsIndicator;
@property(nonatomic) _Bool preventClearFromList; // @synthesize preventClearFromList=_preventClearFromList;
@property(nonatomic) _Bool playMediaWhenRaised; // @synthesize playMediaWhenRaised=_playMediaWhenRaised;
@property(nonatomic) _Bool shouldAllowPersistentBannersInCarPlay; // @synthesize shouldAllowPersistentBannersInCarPlay=_shouldAllowPersistentBannersInCarPlay;
@property(nonatomic) _Bool shouldAllowActionsInCarPlay; // @synthesize shouldAllowActionsInCarPlay=_shouldAllowActionsInCarPlay;
@property(nonatomic) _Bool presentFullScreenAlertOverList; // @synthesize presentFullScreenAlertOverList=_presentFullScreenAlertOverList;
@property(nonatomic) _Bool preventDismissWhenClosed; // @synthesize preventDismissWhenClosed=_preventDismissWhenClosed;
@property(nonatomic) _Bool preventAutomaticLock; // @synthesize preventAutomaticLock=_preventAutomaticLock;
@property(nonatomic) _Bool revealAdditionalContentWhenPresented; // @synthesize revealAdditionalContentWhenPresented=_revealAdditionalContentWhenPresented;
@property(nonatomic) _Bool preventAutomaticRemovalFromRecent; // @synthesize preventAutomaticRemovalFromRecent=_preventAutomaticRemovalFromRecent;
@property(nonatomic) _Bool privacyOptionShowSubtitle; // @synthesize privacyOptionShowSubtitle=_privacyOptionShowSubtitle;
@property(nonatomic) _Bool privacyOptionShowTitle; // @synthesize privacyOptionShowTitle=_privacyOptionShowTitle;
@property(nonatomic) _Bool shouldAllowInCarPlay; // @synthesize shouldAllowInCarPlay=_shouldAllowInCarPlay;
@property(copy, nonatomic) NSArray *minimalActions; // @synthesize minimalActions=_minimalActions;
@property(copy, nonatomic) NSArray *intentIdentifiers; // @synthesize intentIdentifiers=_intentIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool hasCustomSilenceAction; // @synthesize hasCustomSilenceAction=_hasCustomSilenceAction;
@property(nonatomic) _Bool hasCustomDismissAction; // @synthesize hasCustomDismissAction=_hasCustomDismissAction;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (unsigned long long)hash;	// IMP=0x000000000006a951
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006a3a9
- (id)description;	// IMP=0x0000000000069e8a
- (id)dictionaryRepresentation;	// IMP=0x00000000000696b4
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000068f04

@end

