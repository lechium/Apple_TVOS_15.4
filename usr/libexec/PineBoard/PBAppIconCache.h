//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, PBAppInfoController;
@protocol OS_dispatch_queue;

@interface PBAppIconCache : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_cachePath;	// 16 = 0x10
    NSArray *_iconScales;	// 24 = 0x18
    PBAppInfoController *_appInfoController;	// 32 = 0x20
    NSMutableDictionary *_queue_cacheEntryByBundleIdentifier;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_accessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    struct CGSize _iconSize;	// 64 = 0x40
}

+ (id)_appIconNameForAppInfo:(id)arg1;	// IMP=0x00100000000d6e90
+ (id)_placeholderIconImageForScale:(double)arg1;	// IMP=0x00100000000d6e50
+ (id)_pathForCacheKey:(id)arg1 cacheDirectory:(id)arg2;	// IMP=0x00100000000d6dc0
+ (id)_cacheKeyForBundleIdentifier:(id)arg1 scale:(double)arg2 lastModifiedDate:(double)arg3;	// IMP=0x00100000000d6d20
+ (id)sharedAppSwitcherIconCache;	// IMP=0x00100000000d3d90
- (void).cxx_destruct;	// IMP=0x00200000000d7080
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) NSMutableDictionary *queue_cacheEntryByBundleIdentifier; // @synthesize queue_cacheEntryByBundleIdentifier=_queue_cacheEntryByBundleIdentifier;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) NSArray *iconScales; // @synthesize iconScales=_iconScales;
@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_buildAndPruneCache;	// IMP=0x00100000000d6320
- (void)_workQueue_removeApplicationIconsForCacheEntry:(id)arg1;	// IMP=0x00100000000d6010
- (void)_workQueue_removeApplicationIconsForAppInfo:(id)arg1;	// IMP=0x00100000000d5d70
- (void)_workQueue_createApplicationIcon:(id)arg1 preferExisting:(_Bool)arg2;	// IMP=0x00100000000d5290
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000000d4900
- (id)iconImageForAppWithBundleIdentifier:(id)arg1 scale:(double)arg2;	// IMP=0x00100000000d4420
- (id)initWithName:(id)arg1 iconSize:(struct CGSize)arg2;	// IMP=0x00100000000d3ef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

