//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKUpdatedReminderBackingObjectProvider-Protocol.h>

@class EKEventStore, NSArray, NSString, REMStore;

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider>
{
    REMStore *_remStore;	// 8 = 0x8
    EKEventStore *_eventStore;	// 16 = 0x10
    NSArray *_sources;	// 24 = 0x18
    NSArray *_calendars;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000018e07
@property(readonly) NSArray *calendars; // @synthesize calendars=_calendars;
@property(readonly) NSArray *sources; // @synthesize sources=_sources;
@property(readonly) __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) REMStore *remStore; // @synthesize remStore=_remStore;
- (id)initWithEventStore:(id)arg1 token:(id)arg2;	// IMP=0x0000000000018db1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

