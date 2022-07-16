//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerActionItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_create;	// 56 = 0x38
    CalDAVCalendarServerUpdateItem *_update;	// 64 = 0x40
    CalDAVCalendarServerCancelItem *_cancel;	// 72 = 0x48
    CalDAVCalendarServerReplyItem *_reply;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000015b7d
@property(retain, nonatomic) CalDAVCalendarServerReplyItem *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) CalDAVCalendarServerCancelItem *cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) CalDAVCalendarServerUpdateItem *update; // @synthesize update=_update;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *create; // @synthesize create=_create;
- (id)copyParseRules;	// IMP=0x0000000000015847
- (id)init;	// IMP=0x0000000000015821

@end

