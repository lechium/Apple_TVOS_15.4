//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKAutocompletePendingSearchProtocol-Protocol.h>

@class EKEvent, EKEventStore, NSString;
@protocol CalSpotlightQueryPendingSearchProtocol;

@interface EKAutocompletePendingSearch : NSObject <EKAutocompletePendingSearchProtocol>
{
    EKEventStore *_eventStore;	// 8 = 0x8
    unsigned long long _maximumResultCount;	// 16 = 0x10
    _Bool _ignoreScheduledEvents;	// 24 = 0x18
    EKEvent *_initialEvent;	// 32 = 0x20
    id <CalSpotlightQueryPendingSearchProtocol> _pendingSearch;	// 40 = 0x28
}

+ (void)_updateResult:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001e66f
+ (id)_eventKitQueue;	// IMP=0x000000000001d2fd
+ (id)_queue;	// IMP=0x000000000001d2a6
- (void).cxx_destruct;	// IMP=0x000000000001ee6c
- (void)cancel;	// IMP=0x000000000001edad
- (void)searchWithString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d5f9
- (_Bool)_shouldReturnResultForEvent:(id)arg1;	// IMP=0x000000000001d4ba
- (id)firstNaturalLanguageResultWithSearchString:(id)arg1;	// IMP=0x000000000001d354
- (id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 ignoreScheduledEvents:(_Bool)arg4 initialEvent:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000001d1ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
