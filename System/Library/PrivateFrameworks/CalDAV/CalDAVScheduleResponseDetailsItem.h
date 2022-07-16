//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem
{
    CoreDAVItemWithHrefChildItem *_recipientHREF;	// 56 = 0x38
    CoreDAVLeafItem *_requestStatus;	// 64 = 0x40
    ICSDocument *_calendarData;	// 72 = 0x48
    CoreDAVErrorItem *_topLevelErrorItem;	// 80 = 0x50
    NSString *_responseDescription;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000dd7e
@property(retain, nonatomic) NSString *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) CoreDAVErrorItem *topLevelErrorItem; // @synthesize topLevelErrorItem=_topLevelErrorItem;
@property(retain, nonatomic) ICSDocument *calendarData; // @synthesize calendarData=_calendarData;
@property(retain, nonatomic) CoreDAVLeafItem *requestStatus; // @synthesize requestStatus=_requestStatus;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *recipientHREF; // @synthesize recipientHREF=_recipientHREF;
- (id)description;	// IMP=0x000000000000dbe4
@property(readonly, nonatomic) NSString *recipientString;
- (id)copyParseRules;	// IMP=0x000000000000d832
- (void)_setCalendarDataWithLeafItem:(id)arg1;	// IMP=0x000000000000d791

@end

