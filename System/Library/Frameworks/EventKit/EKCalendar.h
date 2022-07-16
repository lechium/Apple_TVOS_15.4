//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKSource, NSString;

@interface EKCalendar
{
    unsigned long long _cachedJunkStatus;	// 8 = 0x8
}

+ (id)typeDescription:(long long)arg1;	// IMP=0x00000000000af1e5
+ (id)_eventKitBundle;	// IMP=0x00000000000ae2a3
+ (id)calendarForEntityTypes:(unsigned long long)arg1 eventStore:(id)arg2;	// IMP=0x00000000000adf88
+ (id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2;	// IMP=0x00000000000adea9
+ (id)calendarWithEventStore:(id)arg1;	// IMP=0x00000000000ade92
+ (id)knownSingleValueKeysForComparison;	// IMP=0x00000000000adc22
+ (id)knownIdentityKeysForComparison;	// IMP=0x00000000000adb7b
+ (id)knownRelationshipMultiValueKeys;	// IMP=0x00000000000adac6
+ (id)knownRelationshipSingleValueKeys;	// IMP=0x00000000000ada1f
+ (id)knownRelationshipWeakKeys;	// IMP=0x00000000000ad978
+ (_Bool)isWeakRelationship;	// IMP=0x00000000000ad970
+ (Class)frozenClass;	// IMP=0x00000000000ad95f
+ (id)rowIDsForCalendars:(id)arg1;	// IMP=0x00000000000ad70c
+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;	// IMP=0x000000000006931a
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;	// IMP=0x000000000006924b
@property(nonatomic) unsigned long long cachedJunkStatus; // @synthesize cachedJunkStatus=_cachedJunkStatus;
- (_Bool)couldBeJunk;	// IMP=0x00000000000b5250
- (void)setIsJunk:(_Bool)arg1;	// IMP=0x00000000000b5001
- (_Bool)supportsJunkReporting;	// IMP=0x00000000000b4fbd
- (id)sendersPhoneNumber;	// IMP=0x00000000000b4fab
- (id)sendersEmail;	// IMP=0x00000000000b4f99
- (id)exportDataWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000b4daa
- (id)exportData;	// IMP=0x00000000000b4d96
- (_Bool)isManaged;	// IMP=0x00000000000b4d22
- (_Bool)remove:(id *)arg1;	// IMP=0x00000000000b4bf6
- (_Bool)save:(id *)arg1;	// IMP=0x00000000000b4b94
- (_Bool)validate:(id *)arg1;	// IMP=0x00000000000b4356
- (_Bool)automaticEventLocationGeocodingAllowed;	// IMP=0x00000000000b4328
- (void)setDigest:(id)arg1;	// IMP=0x00000000000b430c
- (id)digest;	// IMP=0x00000000000b42f0
- (void)setPushKey:(id)arg1;	// IMP=0x00000000000b42d4
- (id)pushKey;	// IMP=0x00000000000b42b8
- (void)setNotes:(id)arg1;	// IMP=0x00000000000b429c
- (id)notes;	// IMP=0x00000000000b4280
- (void)setSubcalAccountID:(id)arg1;	// IMP=0x00000000000b4264
- (id)subcalAccountID;	// IMP=0x00000000000b4248
- (void)setPubcalAccountID:(id)arg1;	// IMP=0x00000000000b422c
- (id)pubcalAccountID;	// IMP=0x00000000000b4210
- (id)ownerIdentityOrganizer;	// IMP=0x00000000000b4061
- (void)setOwnerIdentityLastName:(id)arg1;	// IMP=0x00000000000b4045
- (id)ownerIdentityLastName;	// IMP=0x00000000000b4029
- (void)setOwnerIdentityFirstName:(id)arg1;	// IMP=0x00000000000b400d
- (id)ownerIdentityFirstName;	// IMP=0x00000000000b3ff1
- (void)setOwnerIdentityAddress:(id)arg1;	// IMP=0x00000000000b3f6d
- (id)ownerIdentityAddress;	// IMP=0x00000000000b3f09
- (void)setOwnerIdentityAddressString:(id)arg1;	// IMP=0x00000000000b3eed
- (id)ownerIdentityAddressString;	// IMP=0x00000000000b3ed1
- (void)setOwnerIdentityPhoneNumber:(id)arg1;	// IMP=0x00000000000b3eb5
- (id)ownerIdentityPhoneNumber;	// IMP=0x00000000000b3e99
- (void)setOwnerIdentityEmail:(id)arg1;	// IMP=0x00000000000b3e7d
- (id)ownerIdentityEmail;	// IMP=0x00000000000b3e61
- (void)setOwnerIdentityId:(int)arg1;	// IMP=0x00000000000b3e04
- (int)ownerIdentityId;	// IMP=0x00000000000b3db6
- (void)setOwnerIdentityDisplayName:(id)arg1;	// IMP=0x00000000000b3d55
- (id)ownerIdentityDisplayName;	// IMP=0x00000000000b3cb2
- (void)setSelfIdentityLastName:(id)arg1;	// IMP=0x00000000000b3c96
- (id)selfIdentityLastName;	// IMP=0x00000000000b3c7a
- (void)setSelfIdentityFirstName:(id)arg1;	// IMP=0x00000000000b3c5e
- (id)selfIdentityFirstName;	// IMP=0x00000000000b3c42
- (void)setSelfIdentityAddress:(id)arg1;	// IMP=0x00000000000b3bf3
- (id)selfIdentityAddress;	// IMP=0x00000000000b3b8f
- (void)setSelfIdentityAddressString:(id)arg1;	// IMP=0x00000000000b3b73
- (id)selfIdentityAddressString;	// IMP=0x00000000000b3b57
- (void)setSelfIdentityPhoneNumber:(id)arg1;	// IMP=0x00000000000b3b3b
- (id)selfIdentityPhoneNumber;	// IMP=0x00000000000b3b1f
- (void)setSelfIdentityEmail:(id)arg1;	// IMP=0x00000000000b3b03
- (id)selfIdentityEmail;	// IMP=0x00000000000b3ae7
- (void)setSelfIdentityDisplayName:(id)arg1;	// IMP=0x00000000000b3acb
- (id)selfIdentityDisplayName;	// IMP=0x00000000000b3a28
- (id)findOriginalAlarmStartingWith:(id)arg1;	// IMP=0x00000000000b3848
- (void)removeAllSnoozedAlarms;	// IMP=0x00000000000b3662
- (void)removeAcknowledgedSnoozedAlarms;	// IMP=0x00000000000b3429
- (_Bool)isAlarmAcknowledgedPropertyDirty;	// IMP=0x00000000000b32b1
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;	// IMP=0x00000000000b30f0
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;	// IMP=0x00000000000b2fa0
- (void)removeAlarms:(id)arg1;	// IMP=0x00000000000b2ef8
- (void)addAlarms:(id)arg1;	// IMP=0x00000000000b2e50
- (void)setAllAlarms:(id)arg1;	// IMP=0x00000000000b2e34
- (id)allAlarms;	// IMP=0x00000000000b2dcf
- (void)setAlarms:(id)arg1;	// IMP=0x00000000000b2a0a
- (id)alarms;	// IMP=0x00000000000b295d
- (id)shareesAndOwner;	// IMP=0x00000000000b2708
- (_Bool)hasSharees;	// IMP=0x00000000000b261d
- (void)removeSharee:(id)arg1;	// IMP=0x00000000000b25de
- (void)addSharee:(id)arg1;	// IMP=0x00000000000b2598
- (void)setSharees:(id)arg1;	// IMP=0x00000000000b24de
- (id)sharees;	// IMP=0x00000000000b2479
- (void)moveSubscribedCalendarToSource:(id)arg1;	// IMP=0x00000000000b2144
- (void)setStripAttachments:(_Bool)arg1;	// IMP=0x00000000000b212d
- (_Bool)stripAttachments;	// IMP=0x00000000000b2116
- (void)setStripAlarms:(_Bool)arg1;	// IMP=0x00000000000b20ff
- (_Bool)stripAlarms;	// IMP=0x00000000000b20e8
- (_Bool)isSyncing;	// IMP=0x00000000000b201f
- (id)lastSyncEndDate;	// IMP=0x00000000000b2003
- (void)setLastSyncEndDate:(id)arg1;	// IMP=0x00000000000b1fe7
- (id)lastSyncStartDate;	// IMP=0x00000000000b1fcb
- (void)setLastSyncStartDate:(id)arg1;	// IMP=0x00000000000b1faf
- (id)calendarError;	// IMP=0x00000000000b1e93
- (void)setLastSyncErrorData:(id)arg1;	// IMP=0x00000000000b1e77
- (id)lastSyncErrorData;	// IMP=0x00000000000b1e5b
- (void)setLastSyncError:(unsigned long long)arg1;	// IMP=0x00000000000b1dfe
- (unsigned long long)lastSyncError;	// IMP=0x00000000000b1db0
- (id)lastSyncErrorUserInfo;	// IMP=0x00000000000b1d4d
- (void)setLastSyncErrorUserInfo:(id)arg1;	// IMP=0x00000000000b1cfa
- (void)setLastSyncError:(unsigned long long)arg1 userInfo:(id)arg2;	// IMP=0x00000000000b1c7d
- (void)setSubcalURL:(id)arg1;	// IMP=0x00000000000b1c61
- (id)subcalURL;	// IMP=0x00000000000b1c45
- (void)setSubscriptionID:(id)arg1;	// IMP=0x00000000000b1c29
- (id)subscriptionID;	// IMP=0x00000000000b1c0d
- (void)setRefreshInterval:(int)arg1;	// IMP=0x00000000000b1bb0
- (int)refreshInterval;	// IMP=0x00000000000b1b62
- (void)setRefreshDate:(id)arg1;	// IMP=0x00000000000b1b46
- (id)refreshDate;	// IMP=0x00000000000b1b2a
@property(readonly, nonatomic) unsigned long long supportedEventAvailabilities;
- (void)setAllowReminders:(_Bool)arg1;	// IMP=0x00000000000b1a02
- (void)setAllowsEvents:(_Bool)arg1;	// IMP=0x00000000000b19d9
- (_Bool)allowReminders;	// IMP=0x00000000000b19c1
- (_Bool)allowEvents;	// IMP=0x00000000000b19ac
- (_Bool)hasTasks;	// IMP=0x00000000000b180c
- (_Bool)hasEvents;	// IMP=0x00000000000b166a
- (void)setAllowedEntityTypes:(unsigned long long)arg1;	// IMP=0x00000000000b1640
@property(readonly, nonatomic) unsigned long long allowedEntityTypes;
- (void)setAllowedEntities:(int)arg1;	// IMP=0x00000000000b15b8
- (int)allowedEntities;	// IMP=0x00000000000b156a
@property(retain, nonatomic) EKSource *source;
- (id)externalURI;	// IMP=0x00000000000b11b3
- (id)selectionSyncIdentifier;	// IMP=0x00000000000b0fb7
- (id)syncHash;	// IMP=0x00000000000b0ded
- (void)setExternalRepresentation:(id)arg1;	// IMP=0x00000000000b0dd1
- (id)externalRepresentation;	// IMP=0x00000000000b0db5
- (void)setSyncToken:(id)arg1;	// IMP=0x00000000000b0d99
- (id)syncToken;	// IMP=0x00000000000b0d7d
- (void)setExternalModificationTag:(id)arg1;	// IMP=0x00000000000b0d61
- (id)externalModificationTag;	// IMP=0x00000000000b0d45
- (void)setExternalIDTag:(id)arg1;	// IMP=0x00000000000b0d29
- (id)externalIDTag;	// IMP=0x00000000000b0d0d
- (void)setExternalID:(id)arg1;	// IMP=0x00000000000b0cf1
- (id)externalID;	// IMP=0x00000000000b0cd5
- (void)setIsAffectingAvailability:(_Bool)arg1;	// IMP=0x00000000000b0cbe
- (_Bool)isAffectingAvailability;	// IMP=0x00000000000b0ca7
- (void)setIsIgnoringSharedCalendarNotifications:(_Bool)arg1;	// IMP=0x00000000000b0c90
- (_Bool)isIgnoringSharedCalendarNotifications;	// IMP=0x00000000000b0c79
- (_Bool)allowsIgnoringSharedEventChangeNotifications;	// IMP=0x00000000000b0c0e
- (void)setIsIgnoringEventAlerts:(_Bool)arg1;	// IMP=0x00000000000b0bf7
- (_Bool)isIgnoringEventAlerts;	// IMP=0x00000000000b0be0
- (_Bool)isMutableNaturalLanguageSuggestionsCalendar;	// IMP=0x00000000000b0b81
- (_Bool)isMutableSuggestionsCalendar;	// IMP=0x00000000000b0b22
- (_Bool)isNaturalLanguageSuggestedEventCalendar;	// IMP=0x00000000000b0b0b
- (_Bool)isSuggestedEventCalendar;	// IMP=0x00000000000b0af4
- (_Bool)isSuggestionsCalendar;	// IMP=0x00000000000b0ae2
- (void)setMarkedImmutableSharees:(_Bool)arg1;	// IMP=0x00000000000b0acb
- (_Bool)isMarkedImmutableSharees;	// IMP=0x00000000000b0ab4
- (void)setMarkedUndeletable:(_Bool)arg1;	// IMP=0x00000000000b0a9d
- (_Bool)isMarkedUndeletable;	// IMP=0x00000000000b0a86
- (void)setFamilyCalendar:(_Bool)arg1;	// IMP=0x00000000000b0a6f
- (_Bool)isFamilyCalendar;	// IMP=0x00000000000b0a58
- (void)setSubscribedHolidayCalendar:(_Bool)arg1;	// IMP=0x00000000000b0a41
- (_Bool)isSubscribedHolidayCalendar;	// IMP=0x00000000000b0a2a
- (_Bool)isHolidaySubscribedCalendar;	// IMP=0x00000000000b0a18
- (void)setFacebookBirthdayCalendar:(_Bool)arg1;	// IMP=0x00000000000b0a01
- (_Bool)isFacebookBirthdayCalendar;	// IMP=0x00000000000b09ea
- (void)setCanBeShared:(_Bool)arg1;	// IMP=0x00000000000b09d3
- (_Bool)canBeShared;	// IMP=0x00000000000b09bc
- (void)setCanBePublished:(_Bool)arg1;	// IMP=0x00000000000b09a5
- (_Bool)canBePublished;	// IMP=0x00000000000b098e
- (_Bool)isPublished;	// IMP=0x00000000000b0940
- (void)setIsPublished:(_Bool)arg1;	// IMP=0x00000000000b08e3
- (void)setPublishURL:(id)arg1;	// IMP=0x00000000000b0894
- (id)publishURL;	// IMP=0x00000000000b0830
- (void)setPublishURLString:(id)arg1;	// IMP=0x00000000000b0814
- (id)publishURLString;	// IMP=0x00000000000b07f8
- (id)sharedOwnerPhoneNumber;	// IMP=0x00000000000b07a8
- (id)sharedOwnerEmail;	// IMP=0x00000000000b0758
- (id)sharedOwnerAddress;	// IMP=0x00000000000b0708
- (void)setSharedOwnerAddress:(id)arg1;	// IMP=0x00000000000b06b5
- (id)sharedOwnerURL;	// IMP=0x00000000000b0651
- (void)setSharedOwnerURL:(id)arg1;	// IMP=0x00000000000b0602
- (id)sharedOwnerURLString;	// IMP=0x00000000000b05e6
- (void)setSharedOwnerURLString:(id)arg1;	// IMP=0x00000000000b05ca
- (id)sharedOwnerName;	// IMP=0x00000000000b05ae
- (void)setSharedOwnerName:(id)arg1;	// IMP=0x00000000000b0592
- (unsigned long long)sharingInvitationResponse;	// IMP=0x00000000000b0544
- (void)setSharingInvitationResponse:(unsigned long long)arg1;	// IMP=0x00000000000b04e7
- (void)clearInvitationStatus;	// IMP=0x00000000000b04a0
- (void)setInvitationStatus:(unsigned long long)arg1;	// IMP=0x00000000000b0443
- (unsigned long long)invitationStatus;	// IMP=0x00000000000b03f5
- (void)setSharingStatus:(unsigned long long)arg1;	// IMP=0x00000000000b0398
- (unsigned long long)sharingStatus;	// IMP=0x00000000000b034a
- (void)setSharingInvitation:(_Bool)arg1;	// IMP=0x00000000000b0333
- (_Bool)isSharingInvitation;	// IMP=0x00000000000b031c
- (void)setProhibitsScheduling:(_Bool)arg1;	// IMP=0x00000000000b0305
- (_Bool)prohibitsScheduling;	// IMP=0x00000000000b02ee
- (void)setAllowsScheduling:(_Bool)arg1;	// IMP=0x00000000000b02d6
- (_Bool)allowsScheduling;	// IMP=0x00000000000b02c1
- (_Bool)_anyCalendarOfType:(unsigned long long)arg1 inSameSourceExistsPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b00e7
- (_Bool)_anotherCalendarForRemindersExists;	// IMP=0x00000000000b00b4
- (_Bool)_anotherCalendarForDefaultSchedulingExists;	// IMP=0x00000000000b0084
- (_Bool)eligibleForDefaultSchedulingCalendar;	// IMP=0x00000000000affc7
- (_Bool)canMergeWithCalendar:(id)arg1;	// IMP=0x00000000000afc23
- (long long)deletionWarningsMask;	// IMP=0x00000000000afb4c
- (_Bool)_validateDeletableHelper:(id *)arg1;	// IMP=0x00000000000af76f
- (_Bool)_validateAccessConsent:(id *)arg1;	// IMP=0x00000000000af6c6
- (_Bool)_validateDeletable:(id *)arg1;	// IMP=0x00000000000af68a
- (_Bool)isDeletable;	// IMP=0x00000000000af676
- (void)setIsSubscribedCalendarJunk:(_Bool)arg1;	// IMP=0x00000000000af65f
- (_Bool)isSubscribedCalendarJunk;	// IMP=0x00000000000af648
- (void)setImmutable:(_Bool)arg1;	// IMP=0x00000000000af631
- (_Bool)isImmutableRaw;	// IMP=0x00000000000af61a
@property(readonly, nonatomic, getter=isImmutable) _Bool immutable;
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000af4c7
- (_Bool)isHidden;	// IMP=0x00000000000af4b0
- (void)setSubscribed:(_Bool)arg1;	// IMP=0x00000000000af499
@property(readonly, nonatomic, getter=isSubscribed) _Bool subscribed;
- (void)setNotificationsCollection:(_Bool)arg1;	// IMP=0x00000000000af46b
- (_Bool)isNotificationsCollection;	// IMP=0x00000000000af454
- (void)setInbox:(_Bool)arg1;	// IMP=0x00000000000af43d
- (_Bool)isInbox;	// IMP=0x00000000000af426
- (void)setIsDefaultSchedulingCalendar:(_Bool)arg1;	// IMP=0x00000000000af40f
- (_Bool)isDefaultSchedulingCalendar;	// IMP=0x00000000000af3f8
- (_Bool)refresh;	// IMP=0x00000000000af3ab
- (id)description;	// IMP=0x00000000000af28c
- (void)setDisplayOrder:(int)arg1;	// IMP=0x00000000000af188
- (int)displayOrder;	// IMP=0x00000000000af13a
- (void)setReadOnly:(_Bool)arg1;	// IMP=0x00000000000af123
- (_Bool)readOnly;	// IMP=0x00000000000af10c
- (void)setAllowsContentModifications:(_Bool)arg1;	// IMP=0x00000000000af0f4
@property(readonly, nonatomic) _Bool allowsContentModifications;
- (void)_setFlagValue:(_Bool)arg1 withMask:(unsigned int)arg2;	// IMP=0x00000000000aefb4
- (_Bool)_flagValueWithMask:(unsigned int)arg1;	// IMP=0x00000000000aef93
- (void)setFlags:(unsigned int)arg1;	// IMP=0x00000000000aef36
- (unsigned int)flags;	// IMP=0x00000000000aeee8
- (void)setCalendarIdentifier:(id)arg1;	// IMP=0x00000000000aeed6
@property(readonly, nonatomic) NSString *calendarIdentifier;
- (void)setUUID:(id)arg1;	// IMP=0x00000000000aeea8
- (id)UUID;	// IMP=0x00000000000aee8c
@property(readonly, nonatomic) long long type;
@property(nonatomic) struct CGColor *CGColor;
- (void)_clearCGColorCache;	// IMP=0x00000000000aea40
- (_Bool)getColorRed:(int *)arg1 green:(int *)arg2 blue:(int *)arg3;	// IMP=0x00000000000ae9c1
- (void)setColorString:(id)arg1;	// IMP=0x00000000000ae939
- (id)colorString;	// IMP=0x00000000000ae8aa
- (void)setColorStringRaw:(id)arg1;	// IMP=0x00000000000ae88e
- (id)colorStringRaw;	// IMP=0x00000000000ae872
- (void)setColorDisplayOnly:(_Bool)arg1;	// IMP=0x00000000000ae815
- (_Bool)isColorDisplayOnly;	// IMP=0x00000000000ae7c7
- (void)setSymbolicColorName:(id)arg1;	// IMP=0x00000000000ae703
- (id)symbolicColorName;	// IMP=0x00000000000ae6e7
@property(copy, nonatomic) NSString *title;
- (void)setUnlocalizedTitle:(id)arg1;	// IMP=0x00000000000ae287
- (id)unlocalizedTitle;	// IMP=0x00000000000ae26b
- (_Bool)_reset;	// IMP=0x00000000000ae130
- (void)reset;	// IMP=0x00000000000ae0ef
- (void)rollback;	// IMP=0x00000000000ae0ae
- (int)entityType;	// IMP=0x00000000000ae0a3
- (id)init;	// IMP=0x00000000000ae05f

@end

