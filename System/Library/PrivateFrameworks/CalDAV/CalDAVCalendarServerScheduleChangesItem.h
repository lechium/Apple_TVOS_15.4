//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerActionItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem
{
    CoreDAVLeafItem *_dtstamp;	// 56 = 0x38
    CalDAVCalendarServerActionItem *_action;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000b712
@property(retain, nonatomic) CalDAVCalendarServerActionItem *action; // @synthesize action=_action;
@property(retain, nonatomic) CoreDAVLeafItem *dtstamp; // @synthesize dtstamp=_dtstamp;
- (id)copyParseRules;	// IMP=0x000000000000b53f
- (id)init;	// IMP=0x000000000000b519

@end

