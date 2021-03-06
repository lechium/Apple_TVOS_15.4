//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICSDate, ICSUserAddress, NSArray, NSString, NSURL;

@interface ICSJournal
{
}

+ (id)name;	// IMP=0x00000000000183d7
- (_Bool)validate:(id *)arg1;	// IMP=0x00000000000183e4

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property int classification; // @dynamic classification;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) NSString *description; // @dynamic description;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) NSArray *exdate; // @dynamic exdate;
@property(retain) NSArray *exrule; // @dynamic exrule;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property(retain) NSArray *rdate; // @dynamic rdate;
@property(retain) ICSDate *recurrence_id; // @dynamic recurrence_id;
@property(retain) NSArray *rrule; // @dynamic rrule;
@property unsigned long long sequence; // @dynamic sequence;
@property int status; // @dynamic status;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;

@end

