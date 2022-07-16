//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_assetsMigrationQueue;	// 16 = 0x10
    NSDictionary *_csAssetsDictionary;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
}

+ (id)getAssetTypeStringForType:(unsigned long long)arg1;	// IMP=0x001000000005eae9
+ (id)sharedController;	// IMP=0x001000000005ea94
+ (unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;	// IMP=0x00100000000637d3
+ (id)getSpeakerRecognitionAssetTypeString;	// IMP=0x00100000000637c6
+ (unsigned long long)getAdBlockerCurrentCompatibilityVersion;	// IMP=0x00100000000637bb
+ (id)getAdBlockerAssetTypeString;	// IMP=0x00100000000637ae
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;	// IMP=0x00100000000637a3
+ (id)getLanguageDetectorAssetTypeString;	// IMP=0x0010000000063796
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;	// IMP=0x0010000000063768
+ (id)getEndpointAssetTypeString;	// IMP=0x0010000000063735
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;	// IMP=0x00100000000636e1
+ (id)getVoiceTriggerAssetTypeString;	// IMP=0x0010000000063678
+ (void);	// IMP=0x00100000000634e0
+ (id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3;	// IMP=0x001000000006316d
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x001000000006314a
- (void).cxx_destruct;	// IMP=0x002000000006310c
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *csAssetsDictionary; // @synthesize csAssetsDictionary=_csAssetsDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue; // @synthesize assetsMigrationQueue=_assetsMigrationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;	// IMP=0x001000000006309a
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x0010000000062ed3
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x0010000000062c99
- (void)_startDownloadingAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000627fd
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;	// IMP=0x00100000000624fd
- (id)_defaultDownloadOptions;	// IMP=0x00100000000624a7
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061ab1
- (_Bool)_isRetryRecommendedWithResult:(long long)arg1;	// IMP=0x0010000000061a84
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000061824
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 query:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006147b
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006135b
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1 allowRetry:(_Bool)arg2;	// IMP=0x0010000000061089
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1;	// IMP=0x0010000000061072
- (_Bool)_isReadyToUse;	// IMP=0x0010000000061027
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060ce9
- (id)_assetQueryForAssetType:(unsigned long long)arg1;	// IMP=0x0010000000060b8d
- (id)_findLatestInstalledAsset:(id)arg1;	// IMP=0x00100000000608c9
- (void)_installedAssetOfType:(unsigned long long)arg1 query:(id)arg2 withLanguage:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000060532
- (void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006049e
- (id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;	// IMP=0x00100000000601f1
- (void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005ffb3
- (id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;	// IMP=0x001000000005fdf1
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005fcce
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x001000000005fc34
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 compatibilityVersion:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005f7bb
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f60f
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x001000000005f169
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x001000000005f034
- (void)_cleanUpMobileAssetV1Directory;	// IMP=0x001000000005eef7
- (id)init;	// IMP=0x001000000005eb90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
