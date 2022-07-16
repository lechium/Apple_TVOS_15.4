//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, SSAppPurchaseHistoryCache;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CacheDeleteCoordinator : NSObject
{
    NSDictionary *_combinedSpaceByUrgency;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    double _lastUpdate;	// 24 = 0x18
    SSAppPurchaseHistoryCache *__purchaseHistoryCache;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_scheduledTimer;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x004000000004bd9c
- (void).cxx_destruct;	// IMP=0x002000000004d776
@property(retain) NSObject<OS_dispatch_source> *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
- (void)_refreshPurgeableStorage;	// IMP=0x001000000004d4d2
- (void)_pushUpdatedAvailableStorage;	// IMP=0x001000000004d24b
- (id)_purgeable:(id)arg1 urgency:(int)arg2;	// IMP=0x001000000004ce25
- (id)_purge:(id)arg1 urgency:(int)arg2;	// IMP=0x001000000004ca81
- (id)_purchaseHistoryCache;	// IMP=0x001000000004ca46
- (id)_periodic:(id)arg1 urgency:(int)arg2;	// IMP=0x001000000004c7c4
- (_Bool)_isStale;	// IMP=0x001000000004c789
- (unsigned long long)_currentPurgeable;	// IMP=0x001000000004c70f
- (void)_cancelPurge;	// IMP=0x001000000004c5a1
- (void)updatePurgeableStorage;	// IMP=0x001000000004c44c
- (void)registerCacheDeleteInfoCallbacks;	// IMP=0x001000000004bf3f
- (void)dealloc;	// IMP=0x001000000004beb5
- (id)init;	// IMP=0x001000000004be21

@end

