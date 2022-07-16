//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/NSCopying-Protocol.h>

@class EKCalendar, EKCalendarItem, EKObject, EKStructuredLocation, NSArray, NSDate, NSString, NSURL;

@interface EKAlarm <NSCopying>
{
    NSString *_soundName;	// 8 = 0x8
}

+ (double)defaultGeofencedReminderRadius;	// IMP=0x00000000000b8f24
+ (_Bool)areLocationsCurrentlyEnabled;	// IMP=0x00000000000b8ee9
+ (_Bool)areLocationsAllowedWithAuthorizationStatus:(int)arg1;	// IMP=0x00000000000b8ec5
+ (_Bool)areLocationsAllowed;	// IMP=0x00000000000b8e95
+ (int)_currentAuthorizationStatus;	// IMP=0x00000000000b8e30
+ (_Bool)areLocationsAvailable;	// IMP=0x00000000000b8e1f
+ (long long)maxPublicProximity;	// IMP=0x00000000000b769f
+ (id)alarmWithRelativeOffset:(double)arg1;	// IMP=0x00000000000b766b
+ (id)alarmWithAbsoluteDate:(id)arg1;	// IMP=0x00000000000b7622
+ (id)knownRelationshipWeakKeys;	// IMP=0x00000000000b756d
+ (id)knownSingleValueKeysForComparison;	// IMP=0x00000000000b7464
+ (id)knownIdentityKeysForComparison;	// IMP=0x00000000000b73bd
+ (id)knownRelationshipMultiValueKeys;	// IMP=0x00000000000b7316
+ (id)knownRelationshipSingleValueKeys;	// IMP=0x00000000000b726f
+ (Class)frozenClass;	// IMP=0x00000000000b725e
- (void).cxx_destruct;	// IMP=0x00000000000b8f54
@property(copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
- (_Bool)_reset;	// IMP=0x00000000000b8cf0
- (_Bool)isTopographicallyEqualToAlarm:(id)arg1;	// IMP=0x00000000000b8b7a
- (long long)compare:(id)arg1;	// IMP=0x00000000000b88b4
- (_Bool)validateWithOwner:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b86e2
- (id)description;	// IMP=0x00000000000b8605
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b8480
@property(copy, nonatomic) NSURL *url;
- (id)bookmarkURL;	// IMP=0x00000000000b8362
- (void)setBookmarkURL:(id)arg1;	// IMP=0x00000000000b82e7
- (void)setUrlWrapper:(id)arg1;	// IMP=0x00000000000b827e
- (void)_setUrlWrapper:(id)arg1;	// IMP=0x00000000000b8262
- (id)urlWrapper;	// IMP=0x00000000000b8246
@property(copy, nonatomic) NSString *emailAddress;
- (void)_setEmailAddress:(id)arg1;	// IMP=0x00000000000b81b2
@property(nonatomic) _Bool isSnoozed;
- (void)removeSnoozedAlarm:(id)arg1;	// IMP=0x00000000000b815d
- (void)addSnoozedAlarm:(id)arg1;	// IMP=0x00000000000b8141
@property(copy, nonatomic) NSArray *snoozedAlarms;
- (void)setSnoozedAlarmsSet:(id)arg1;	// IMP=0x00000000000b8082
- (id)snoozedAlarmsSet;	// IMP=0x00000000000b8066
@property(retain, nonatomic) EKAlarm *originalAlarm;
@property(nonatomic, getter=isDefaultAlarm) _Bool defaultAlarm;
- (_Bool)defaultAlarm;	// IMP=0x00000000000b7f1e
- (id)ownerUUID;	// IMP=0x00000000000b7ece
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
@property(nonatomic) long long proximity;
@property(readonly, nonatomic) _Bool isAbsolute;
@property(retain, nonatomic) NSString *externalID;
- (void)setAcknowledgedDate:(id)arg1;	// IMP=0x00000000000b7d11
- (id)acknowledgedDate;	// IMP=0x00000000000b7cf5
@property(copy, nonatomic) NSDate *absoluteDate;
@property(nonatomic) double relativeOffset;
- (void)setRelativeOffsetRaw:(id)arg1;	// IMP=0x00000000000b7ae5
- (id)relativeOffsetRaw;	// IMP=0x00000000000b7ac9
@property(nonatomic) long long type;
- (void)_setType:(long long)arg1;	// IMP=0x00000000000b7a18
- (void)rebaseForDetachment;	// IMP=0x00000000000b794a
- (void)setUUID:(id)arg1;	// IMP=0x00000000000b792e
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) EKCalendar *calendarOwner;
@property(readonly, nonatomic) EKCalendarItem *calendarItemOwner;
@property(readonly, nonatomic) EKObject *owner;
- (id)initWithRelativeOffset:(double)arg1;	// IMP=0x00000000000b7852
- (id)initWithAbsoluteDate:(id)arg1;	// IMP=0x00000000000b777e
- (id)init;	// IMP=0x00000000000b76aa

@end
