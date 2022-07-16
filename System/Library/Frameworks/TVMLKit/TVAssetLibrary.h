//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TVAssetLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *assetWriteQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *assetAccessQueue;	// 16 = 0x10
    NSString *_cachePath;	// 24 = 0x18
    NSMutableArray *_registeredGroups;	// 32 = 0x20
}

+ (void)_initializeAssetLibraryWithCachePath:(id)arg1 screensaverCache:(_Bool)arg2 purgeCacheOnLoad:(_Bool)arg3;	// IMP=0x0000000000188326
+ (void)intializeScreensaverSharedAssetLibrary;	// IMP=0x00000000001882bc
+ (void)initializeAssetLibraryWithCachePath:(id)arg1 purgeCacheOnLoad:(_Bool)arg2;	// IMP=0x000000000018826d
+ (void)initializeAssetLibraryWithCachePath:(id)arg1;	// IMP=0x000000000018822d
+ (id)sharedInstance;	// IMP=0x000000000018821c
- (void).cxx_destruct;	// IMP=0x000000000018a5ea
@property(retain, nonatomic) NSMutableArray *registeredGroups; // @synthesize registeredGroups=_registeredGroups;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)_setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(_Bool)arg5 tags:(id)arg6;	// IMP=0x0000000000189b59
- (id)groupWithGroupType:(long long)arg1;	// IMP=0x0000000000189a04
- (void)unRegisterGroup:(long long)arg1;	// IMP=0x00000000001899b7
- (void)registerGroup:(id)arg1;	// IMP=0x00000000001899a1
- (id)cachePathForGroupOfType:(long long)arg1;	// IMP=0x0000000000189951
- (id)assetPathsForGroupOfType:(long long)arg1;	// IMP=0x0000000000189883
- (void)updateAssetsInGroupOfType:(long long)arg1;	// IMP=0x0000000000189846
- (void)purgeAssetsInGroupOfType:(long long)arg1;	// IMP=0x00000000001897f9
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5;	// IMP=0x000000000018901b
- (void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;	// IMP=0x0000000000188ff8
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5;	// IMP=0x0000000000188fdc
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(_Bool)arg5;	// IMP=0x0000000000188fbe
- (void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4;	// IMP=0x0000000000188f9c
- (void)removeAssetForKey:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x0000000000188f21
- (id)keyForAssetWithTags:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x0000000000188cb0
- (id)assetExpiryDateForKey:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x0000000000188bfb
- (id)assetPathForKey:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x0000000000188b46
- (id)assetForKey:(id)arg1 inGroupOfType:(long long)arg2;	// IMP=0x00000000001889b5
- (id)initWithCachePath:(id)arg1 screensaverCache:(_Bool)arg2 purgeCacheOnLoad:(_Bool)arg3;	// IMP=0x0000000000188424

@end

