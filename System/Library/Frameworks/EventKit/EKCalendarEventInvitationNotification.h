//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/NSCopying-Protocol.h>

@class EKCalendarEventInvitationNotificationAttendee, EKRecurrenceRule, NSArray, NSDate, NSString, NSTimeZone;

@interface EKCalendarEventInvitationNotification <NSCopying>
{
    _Bool _allDay;	// 74 = 0x4a
    _Bool _timeChanged;	// 75 = 0x4b
    _Bool _dateChanged;	// 76 = 0x4c
    _Bool _titleChanged;	// 77 = 0x4d
    _Bool _locationChanged;	// 78 = 0x4e
    _Bool _videoConferenceChanged;	// 79 = 0x4f
    _Bool _attendeeReplyChanged;	// 80 = 0x50
    _Bool _isLocationDecline;	// 81 = 0x51
    _Bool _expanded;	// 82 = 0x52
    _Bool _isForReReply;	// 83 = 0x53
    NSString *_location;	// 88 = 0x58
    NSDate *_startDate;	// 96 = 0x60
    NSDate *_startDateForNextOccurrence;	// 104 = 0x68
    NSDate *_endDate;	// 112 = 0x70
    NSDate *_participationStatusModifiedDate;	// 120 = 0x78
    NSTimeZone *_timeZone;	// 128 = 0x80
    long long _participationStatus;	// 136 = 0x88
    long long _status;	// 144 = 0x90
    EKRecurrenceRule *_recurrenceRule;	// 152 = 0x98
    NSArray *_attendees;	// 160 = 0xa0
    EKCalendarEventInvitationNotificationAttendee *_owner;	// 168 = 0xa8
    NSString *_invitedBy;	// 176 = 0xb0
    EKCalendarEventInvitationNotificationAttendee *_expandedProposedTimeAttendee;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000471fa
@property(nonatomic) _Bool isForReReply; // @synthesize isForReReply=_isForReReply;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *expandedProposedTimeAttendee; // @synthesize expandedProposedTimeAttendee=_expandedProposedTimeAttendee;
@property(nonatomic) _Bool isLocationDecline; // @synthesize isLocationDecline=_isLocationDecline;
@property(readonly, nonatomic) NSString *invitedBy; // @synthesize invitedBy=_invitedBy;
@property(retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(nonatomic) _Bool attendeeReplyChanged; // @synthesize attendeeReplyChanged=_attendeeReplyChanged;
@property(nonatomic) _Bool videoConferenceChanged; // @synthesize videoConferenceChanged=_videoConferenceChanged;
@property(nonatomic) _Bool locationChanged; // @synthesize locationChanged=_locationChanged;
@property(nonatomic) _Bool titleChanged; // @synthesize titleChanged=_titleChanged;
@property(nonatomic) _Bool dateChanged; // @synthesize dateChanged=_dateChanged;
@property(nonatomic) _Bool timeChanged; // @synthesize timeChanged=_timeChanged;
@property(retain, nonatomic) EKRecurrenceRule *recurrenceRule; // @synthesize recurrenceRule=_recurrenceRule;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long participationStatus; // @synthesize participationStatus=_participationStatus;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDate *participationStatusModifiedDate; // @synthesize participationStatusModifiedDate=_participationStatusModifiedDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDateForNextOccurrence; // @synthesize startDateForNextOccurrence=_startDateForNextOccurrence;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
- (_Bool)acknowledgeWithEventStore:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046d64
- (_Bool)proposedStartDateIsInFutureForAttendee:(id)arg1;	// IMP=0x0000000000046cca
- (id)nearestProposedTime;	// IMP=0x0000000000046978
- (_Bool)isProposedNewTime;	// IMP=0x0000000000046749
- (_Bool)needsReply;	// IMP=0x00000000000466c2
- (_Bool)isInvitation;	// IMP=0x00000000000466ba
- (_Bool)hasRecurrenceRules;	// IMP=0x0000000000046687
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046622
- (id)eventFromEventStore:(id)arg1;	// IMP=0x00000000000465fc
- (id)initWithEvent:(id)arg1;	// IMP=0x0000000000045904

// Remaining properties
@property(nonatomic) _Bool couldBeJunk; // @dynamic couldBeJunk;

@end

