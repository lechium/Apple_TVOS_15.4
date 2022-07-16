//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMCore/SKStatusSubscriptionServiceDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, SKStatusSubscriptionService;
@protocol OS_dispatch_queue;

@interface IMHandleAvailabilityManager : NSObject <SKStatusSubscriptionServiceDelegate>
{
    NSMutableDictionary *_currentSubscriptionCache;	// 8 = 0x8
    NSMutableDictionary *_lastKnownSubscriptionCache;	// 16 = 0x10
    long long _currentCacheGeneration;	// 24 = 0x18
    NSMutableSet *_pendingFetchesForCacheKeys;	// 32 = 0x20
    SKStatusSubscriptionService *_subscriptionService;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_privateWorkQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000135ff3
- (void).cxx_destruct;	// IMP=0x00000000001382ee
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // @synthesize privateWorkQueue=_privateWorkQueue;
@property(retain, nonatomic) SKStatusSubscriptionService *subscriptionService; // @synthesize subscriptionService=_subscriptionService;
@property(retain, nonatomic) NSMutableSet *pendingFetchesForCacheKeys; // @synthesize pendingFetchesForCacheKeys=_pendingFetchesForCacheKeys;
@property(nonatomic) long long currentCacheGeneration; // @synthesize currentCacheGeneration=_currentCacheGeneration;
@property(retain, nonatomic) NSMutableDictionary *lastKnownSubscriptionCache; // @synthesize lastKnownSubscriptionCache=_lastKnownSubscriptionCache;
@property(retain, nonatomic) NSMutableDictionary *currentSubscriptionCache; // @synthesize currentSubscriptionCache=_currentSubscriptionCache;
- (void)subscriptionServiceDaemonDisconnected:(id)arg1;	// IMP=0x00000000001381d9
- (void)subscriptionStateChanged:(id)arg1;	// IMP=0x0000000000138131
- (void)subscriptionReceivedStatusUpdate:(id)arg1;	// IMP=0x0000000000138089
- (void)subscriptionInvitationReceived:(id)arg1;	// IMP=0x0000000000137fe1
- (void)_clearCurrentSubscriptionCache;	// IMP=0x0000000000137f3b
- (_Bool)availabilityEnabled;	// IMP=0x0000000000137ef0
- (id)_skHandleForString:(id)arg1;	// IMP=0x0000000000137e97
- (id)_skHandleForIMHandle:(id)arg1;	// IMP=0x0000000000137e35
- (id)_cachedStatusSubscriptionForIMHandle:(id)arg1 fromCache:(id)arg2 cacheDescription:(id)arg3 cacheMiss:(_Bool *)arg4;	// IMP=0x0000000000137b3e
- (id)_subscriptionCacheKeyForHandle:(id)arg1;	// IMP=0x00000000001379aa
- (void)endObservingAvailabilityForHandle:(id)arg1;	// IMP=0x00000000001376ba
- (void)beginObservingAvailabilityForHandle:(id)arg1;	// IMP=0x00000000001373dc
- (void)fetchPersonalAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000137258
- (long long)_availablityFromStatusSubscription:(id)arg1 handleID:(id)arg2;	// IMP=0x0000000000136fc3
- (void)_postNotificationForUpdatedStatusWithSubscription:(id)arg1;	// IMP=0x0000000000136ed6
- (void)_fetchUpdatedStatusForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000136a51
- (void)fetchUpdatedStatusAndUpdateCachesForHandle:(id)arg1 lastKnownStatus:(id)arg2;	// IMP=0x00000000001363ea
- (id)statusSubscriptionForHandle:(id)arg1;	// IMP=0x00000000001362d9
- (long long)availabilityForHandle:(id)arg1;	// IMP=0x000000000013623b
- (id)availabilityStatusPublishedDateForHandle:(id)arg1;	// IMP=0x000000000013611d
- (id)init;	// IMP=0x0000000000136048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

