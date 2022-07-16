//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface EKAttendee
{
}

+ (int)_calAttendeeStatusFromEKParticipantStatus:(long long)arg1;	// IMP=0x000000000009aff2
+ (long long)_ekParticipantStatusFromCalAttendeeStatus:(int)arg1;	// IMP=0x000000000009af94
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;	// IMP=0x000000000009aac2
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;	// IMP=0x000000000009aaaa
+ (id)attendeeWithName:(id)arg1 phoneNumber:(id)arg2;	// IMP=0x000000000009aa90
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2;	// IMP=0x000000000009aa78
+ (id)attendeeWithName:(id)arg1 url:(id)arg2;	// IMP=0x000000000009aa5e
+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;	// IMP=0x000000000009aa3d
+ (id)knownSingleValueKeysForComparison;	// IMP=0x000000000009a8a8
+ (Class)frozenClass;	// IMP=0x000000000009a897
@property(readonly, nonatomic) _Bool rsvpRequested;
- (void)markAsForward;	// IMP=0x000000000009b6e2
@property(nonatomic) _Bool proposedStartDateChanged;
@property(nonatomic) _Bool statusChanged;
@property(nonatomic) _Bool commentChanged;
- (_Bool)_valueForFlag:(unsigned int)arg1;	// IMP=0x000000000009b631
- (void)_setFlag:(unsigned int)arg1 value:(_Bool)arg2;	// IMP=0x000000000009b5e6
- (void)setFlags:(unsigned int)arg1;	// IMP=0x000000000009b589
- (unsigned int)flags;	// IMP=0x000000000009b53b
- (_Bool)isCurrentUser;	// IMP=0x000000000009b4c7
@property(readonly, nonatomic) NSDate *lastModifiedParticipationStatus;
@property(nonatomic) long long participantType;
@property(nonatomic) long long pendingStatus;
- (void)setPendingStatusRaw:(int)arg1;	// IMP=0x000000000009b317
- (int)pendingStatusRaw;	// IMP=0x000000000009b2c9
@property(nonatomic) long long participantRole;
- (_Bool)_isParticipantStatusDirty;	// IMP=0x000000000009b202
@property(nonatomic) long long participantStatus;
- (void)setStatusRaw:(int)arg1;	// IMP=0x000000000009b106
- (int)statusRaw;	// IMP=0x000000000009b0b8
- (id)owner;	// IMP=0x000000000009af7b
- (id)description;	// IMP=0x000000000009ae3e
- (id)displayString;	// IMP=0x000000000009ac86
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009aad4

@end
