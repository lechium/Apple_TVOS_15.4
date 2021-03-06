//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppPurgeCoordinator, MISSING_TYPE, NSDictionary, PartialDownloadPurgeCoordinator;
@protocol CacheDeletePurgeableProvider, OS_dispatch_source;

@interface CacheDeleteCoordinator : NSObject
{
    NSDictionary *_combinedSpaceByUrgency;	// 8 = 0x8
    MISSING_TYPE *_runQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_scheduledTimer;	// 24 = 0x18
    double _lastUpdate;	// 32 = 0x20
    PartialDownloadPurgeCoordinator *_partialDownloadPurgeCoordinator;	// 40 = 0x28
    AppPurgeCoordinator *_appPurgeCoordinator;	// 48 = 0x30
    id <CacheDeletePurgeableProvider> _odrPurgeCoordinator;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00200000000e20ac
- (void).cxx_destruct;	// IMP=0x00200000000e428d
@property(nonatomic) __weak id <CacheDeletePurgeableProvider> odrPurgeCoordinator; // @synthesize odrPurgeCoordinator=_odrPurgeCoordinator;
@property(readonly, nonatomic) AppPurgeCoordinator *appPurgeCoordinator; // @synthesize appPurgeCoordinator=_appPurgeCoordinator;
- (void)_updatePurgeableStorageWithCoalesceInterval:(float)arg1 refresh:(_Bool)arg2 inheritQoSClass:(_Bool)arg3;	// IMP=0x00100000000e411c
- (void)_refreshPurgeableStorage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000e3a4e
- (void)_pushUpdatedAvailableStorage:(_Bool)arg1;	// IMP=0x00100000000e380f
- (id)_purgeable:(id)arg1 urgency:(int)arg2;	// IMP=0x00100000000e3492
- (id)_purge:(id)arg1 urgency:(int)arg2;	// IMP=0x00100000000e2bd2
- (id)_periodic:(id)arg1 urgency:(int)arg2;	// IMP=0x00100000000e2a08
- (_Bool)_isStale;	// IMP=0x00100000000e29cd
- (void)_cancelPurge;	// IMP=0x00100000000e27ff
- (void)updatePurgeableStorageRightAway;	// IMP=0x00100000000e278f
- (void)updatePurgeableStorage;	// IMP=0x00100000000e276e
- (void)updatePurgeableStorageFollowingAppDeletions:(id)arg1;	// IMP=0x00100000000e26fb
- (void)invalidateCaches;	// IMP=0x00100000000e2607
- (void)registerCacheDeleteInfoCallbacks;	// IMP=0x00100000000e221b
- (void)dealloc;	// IMP=0x00100000000e21dc
- (id)init;	// IMP=0x00100000000e2131

@end

