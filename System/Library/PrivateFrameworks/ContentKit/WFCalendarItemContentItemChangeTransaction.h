//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarItem, EKEventStore;

__attribute__((visibility("hidden")))
@interface WFCalendarItemContentItemChangeTransaction
{
    EKCalendarItem *_mutableEvent;	// 8 = 0x8
    EKEventStore *_eventStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f9432
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) EKCalendarItem *mutableEvent; // @synthesize mutableEvent=_mutableEvent;
- (void)removeAllAttachments;	// IMP=0x00000000000f925d
- (void)addAttachments:(id)arg1;	// IMP=0x00000000000f8f7f
- (void)updateAttachments:(id)arg1;	// IMP=0x00000000000f8eaa
- (id)initWithContentItem:(id)arg1 eventStore:(id)arg2;	// IMP=0x00000000000f8cf2

@end
