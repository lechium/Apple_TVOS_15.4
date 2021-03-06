//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKIdentityProtocol-Protocol.h>
#import <EventKit/EKParticipantSemanticIdentifierGeneratorDelegate-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class EKCalendarItem, NSPredicate, NSString, NSURL;

@interface EKParticipant <EKParticipantSemanticIdentifierGeneratorDelegate, EKIdentityProtocol, NSCopying>
{
    EKCalendarItem *_owner;	// 8 = 0x8
}

+ (_Bool)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5;	// IMP=0x000000000003fa27
+ (_Bool)doesParticipantURLString:(id)arg1 email:(id)arg2 andPhoneNumber:(id)arg3 matchParticipantURLString:(id)arg4 email:(id)arg5 andPhoneNumber:(id)arg6;	// IMP=0x000000000003fa03
+ (_Bool)needsResponseForParticipantStatus:(long long)arg1;	// IMP=0x000000000003f685
+ (id)knownSingleValueKeysForComparison;	// IMP=0x000000000003f1cc
+ (id)knownIdentityKeysForComparison;	// IMP=0x000000000003f125
+ (id)participantWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;	// IMP=0x000000000003ed84
+ (id)participantWithName:(id)arg1 url:(id)arg2;	// IMP=0x000000000003ed6a
- (void).cxx_destruct;	// IMP=0x0000000000040536
@property(readonly, nonatomic) EKCalendarItem *owner; // @synthesize owner=_owner;
@property(readonly, copy) NSString *description;
- (id)semanticIdentifier;	// IMP=0x0000000000040439
@property(readonly, nonatomic) int scheduleStatus;
- (id)existingContact;	// IMP=0x0000000000040313
- (id)setInviterNameString;	// IMP=0x0000000000040296
@property(copy, nonatomic) NSString *inviterNameString; // @dynamic inviterNameString;
- (id)invitedBy;	// IMP=0x0000000000040268
@property(nonatomic) int proposedStartDateStatus;
- (_Bool)hasProposedStartDate;	// IMP=0x000000000004018a
- (void)setProposedStartDate:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000000400e9
- (id)proposedStartDateForEvent:(id)arg1;	// IMP=0x000000000004002c
- (void)setProposedStartDate:(id)arg1;	// IMP=0x0000000000040010
- (id)proposedStartDate;	// IMP=0x000000000003ff9a
- (_Bool)isLocationRoom;	// IMP=0x000000000003ff44
- (const void *)ABRecordWithAddressBook:(void *)arg1;	// IMP=0x000000000003fce8
- (id)nameComponents;	// IMP=0x000000000003fc73
- (_Bool)isEqualToParticipant:(id)arg1;	// IMP=0x000000000003f8cc
- (void)setURL:(id)arg1;	// IMP=0x000000000003f87d
@property(readonly, nonatomic) NSURL *URL;
- (void)setURLString:(id)arg1;	// IMP=0x000000000003f6f6
- (id)URLString;	// IMP=0x000000000003f6da
@property(readonly, nonatomic, getter=isCurrentUser) _Bool currentUser;
@property(copy, nonatomic) NSString *comment;
@property(readonly, nonatomic) long long participantRole;
@property(readonly, nonatomic) _Bool needsResponse;
@property(readonly, nonatomic) long long participantStatus;
@property(readonly, nonatomic) long long participantType;
- (id)url;	// IMP=0x000000000003f61e
- (id)displayName;	// IMP=0x000000000003f60c
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSString *emailAddress;
- (void)setDisplayName:(id)arg1;	// IMP=0x000000000003f51a
- (void)setDisplayNameRaw:(id)arg1;	// IMP=0x000000000003f4fe
- (id)displayNameRaw;	// IMP=0x000000000003f4e2
- (id)nameUsingAddressAsBackup;	// IMP=0x000000000003f3d0
@property(readonly, nonatomic) NSString *name;
- (void)setUUID:(id)arg1;	// IMP=0x000000000003f31b
@property(readonly, nonatomic) NSString *UUID;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;	// IMP=0x000000000003ee2e
@property(readonly, nonatomic) NSPredicate *contactPredicate; // @dynamic contactPredicate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

