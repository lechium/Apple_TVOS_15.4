//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface VUIAssetLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *assetWriteQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *assetAccessQueue;	// 16 = 0x10
    NSString *_cachePath;	// 24 = 0x18
    NSMutableArray *_registeredGroups;	// 32 = 0x20
}

+ (void)_initializeAssetLibraryWithCachePath:(id)arg1 purgeCacheOnLoad:(_Bool)arg2;	// IMP=0x000000000002e150
+ (void)initializeAssetLibraryWithCachePath:(id)arg1 purgeCacheOnLoad:(_Bool)arg2;	// IMP=0x000000000002e103
+ (id)sharedInstance;	// IMP=0x000000000002e0f2
- (void).cxx_destruct;	// IMP=0x00000000000302c3
@property(retain, nonatomic) NSMutableArray *registeredGroups; // @synthesize registeredGroups=_registeredGroups;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)_setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(_Bool)arg5 tags:(id)arg6;	// IMP=0x000000000002f7e3
- (id)groupWithGroupType:(long long)arg1;	// IMP=0x000000000002f68e
- (void)unRegisterGroup:(long long)arg1;	// IMP=0x000000000002f641
- (void)registerGroup:(id)arg1;	// IMP=0x000000000002f62b
- (id)cachePathForGroupOfType:(long long)arg1;	// IMP=0x000000000002f5db
- (id)assetPathsForGroupOfType:(long long)arg1;	// IMP=0x000000000002f50d
- (void)updateAssetsInGroupOfType:(long long)arg1;	// IMP=0x000000000002f4d0
- (void)purgeAssetsInGroupOfType:(long long)arg1;	// IMP=0x000000000002f483
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5;	// IMP=0x000000000002ec96
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;	// IMP=0x000000000002ec73
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5;	// IMP=0x000000000002ec57
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(_Bool)arg5;	// IMP=0x000000000002ec39
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;	// IMP=0x000000000002ec17
- (void)removeAssetForKey:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x000000000002eb9c
- (id)keyForAssetWithTags:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x000000000002e92b
- (id)assetExpiryDateForKey:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x000000000002e876
- (id)assetPathForKey:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x000000000002e7c1
- (id)assetForKey:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x000000000002e630
- (id)initWithCachePath:(id)arg1 purgeCacheOnLoad:(_Bool)arg2;	// IMP=0x000000000002e23e

@end

