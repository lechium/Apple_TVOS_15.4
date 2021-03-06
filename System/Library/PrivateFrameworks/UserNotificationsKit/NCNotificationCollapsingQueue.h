//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface NCNotificationCollapsingQueue : NSObject
{
    unsigned long long _collapsingThreshold;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000321a
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(nonatomic) unsigned long long collapsingThreshold; // @synthesize collapsingThreshold=_collapsingThreshold;
- (id)_collapsedNotificationRequestForNotificationRequest:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000000308f
- (id)_collapsedNotificationRequestFromCollapsibleRequests:(id)arg1;	// IMP=0x0000000000002b0b
- (unsigned long long)_collapsedCountForCollapsibleRequests:(id)arg1;	// IMP=0x000000000000299d
- (id)_requestsCollapsibleWithNotificationRequest:(id)arg1;	// IMP=0x00000000000027f0
- (unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)arg1;	// IMP=0x0000000000002682
- (void)_insertPreemptingNotificationRequest:(id)arg1;	// IMP=0x0000000000002568
- (id)notificationRequestsCoalescebleWithCoalescedRequest:(id)arg1;	// IMP=0x00000000000023bb
- (id)peekNextNotificationRequestPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002221
- (id)peekNextNotificationRequest;	// IMP=0x000000000000220d
- (_Bool)containsNotificationRequestMatchingRequest:(id)arg1;	// IMP=0x00000000000021ea
- (_Bool)containsNotificationRequest:(id)arg1;	// IMP=0x0000000000002173
- (void)removeNotificationRequest:(id)arg1;	// IMP=0x00000000000020fa
- (void)replaceNotificationRequest:(id)arg1;	// IMP=0x000000000000206f
- (void)addNotificationRequest:(id)arg1;	// IMP=0x0000000000001f5c
@property(readonly, nonatomic) NSArray *enqueuedRequestIdentifiers;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x0000000000001ce5

@end

