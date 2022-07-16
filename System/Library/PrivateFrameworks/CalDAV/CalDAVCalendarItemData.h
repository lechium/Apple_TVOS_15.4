//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVLeafDataPayload.h>

#import <CalDAV/CalDAVCalendarItemProtocol-Protocol.h>

@class CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, NSString;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol>
{
    NSString *_scheduleTag;	// 32 = 0x20
    CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;	// 40 = 0x28
    CalDAVUpdateOwnerItem *_createdBy;	// 48 = 0x30
    CalDAVUpdateOwnerItem *_updatedBy;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000b4c6
@property(retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy; // @synthesize updatedBy=_updatedBy;
@property(retain, nonatomic) CalDAVUpdateOwnerItem *createdBy; // @synthesize createdBy=_createdBy;
@property(retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges; // @synthesize scheduleChanges=_scheduleChanges;
@property(retain, nonatomic) NSString *scheduleTag; // @synthesize scheduleTag=_scheduleTag;

@end
