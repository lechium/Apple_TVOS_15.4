//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CESRTrialAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_trialClientDict;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_cleanupTimer;	// 24 = 0x18
    unsigned long long _cleanupDuration;	// 32 = 0x20
}

+ (_Bool)factorName:(id)arg1 belongsToAssetType:(unsigned long long)arg2;	// IMP=0x0000000000003350
+ (id)jsonFilenameForAssetType:(unsigned long long)arg1;	// IMP=0x00000000000031a0
+ (id)factorNameForAssetType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000000003110
+ (id)factorNameForAssetType:(unsigned long long)arg1 language:(id)arg2 regionId:(id)arg3;	// IMP=0x0000000000002ba0
+ (id)factorPrefixForAssetType:(unsigned long long)arg1;	// IMP=0x00000000000029f0
+ (unsigned long long)getAssetTypeForNamespace:(id)arg1;	// IMP=0x0000000000002570
+ (id)sharedInstance;	// IMP=0x0000000000002250
+ (void)initialize;	// IMP=0x00000000000021e0
- (void).cxx_destruct;	// IMP=0x000000000000d4a0
- (_Bool)removeAssetsForFactors:(id)arg1 withNamespace:(id)arg2 withClient:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000cdd0
- (_Bool)dictationIsEnabled;	// IMP=0x000000000000cd70
- (_Bool)isBelowLocaleLimit;	// IMP=0x000000000000cd50
- (void)wait;	// IMP=0x000000000000cd10
- (id)overrideAssetPath:(unsigned long long)arg1;	// IMP=0x000000000000cc60
- (void)startDownloadLevelsForAsset:(unsigned long long)arg1 withFactor:(id)arg2 withClient:(id)arg3 withNamespace:(id)arg4 urgent:(_Bool)arg5 progress:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000000c2f0
- (id)modelTypeStatusStringAndVersionWithAsset:(id)arg1;	// IMP=0x000000000000c170
- (id)modelAttributesStatusStringWithAsset:(id)arg1;	// IMP=0x000000000000c010
- (id)modelQualityTypeStatusStringWithConfig:(id)arg1;	// IMP=0x000000000000bba0
- (id)_trialClientForProject:(int)arg1;	// IMP=0x000000000000ba40
- (id)_languageFromFactorName:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x000000000000b910
- (void)_cleanupTimerFired;	// IMP=0x000000000000b770
- (void)_cancelCleanupTimer;	// IMP=0x000000000000b670
- (void)_scheduleCleanupTimer;	// IMP=0x000000000000b3e0
- (id)supportedLanguagesWithAssetType:(unsigned long long)arg1;	// IMP=0x000000000000af90
- (void)releaseClientsForAssetType:(unsigned long long)arg1;	// IMP=0x000000000000ae20
- (void)releaseClients;	// IMP=0x000000000000ad30
- (void)registerAssetDelegate:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x000000000000a300
- (_Bool)setAssetsPurgeabilityExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x0000000000009800
- (_Bool)purgeInstalledAssetForAssetType:(unsigned long long)arg1 language:(id)arg2 regionId:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000092f0
- (_Bool)purgeInstalledAssetsExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000091f0
- (_Bool)_purgeInstalledAssetsExceptLanguages:(id)arg1 assetType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000008880
- (void)downloadStatusWithConfig:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007990
- (void)downloadAssetOfType:(unsigned long long)arg1 language:(id)arg2 urgent:(_Bool)arg3 forceUpgrade:(_Bool)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000006500
- (void)downloadAssetOfType:(unsigned long long)arg1 language:(id)arg2 urgent:(_Bool)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006420
- (void)downloadAssetOfType:(unsigned long long)arg1 language:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006360
- (void)switchToNewAssetsForAssetType:(unsigned long long)arg1;	// IMP=0x00000000000061f0
- (void)promoteAssetsForAssetType:(unsigned long long)arg1;	// IMP=0x0000000000005fa0
- (void)setAssetsProvisionalForAssetType:(unsigned long long)arg1;	// IMP=0x0000000000005d50
- (id)installedFileAssetOfAssetType:(unsigned long long)arg1 factorName:(id)arg2;	// IMP=0x0000000000005980
- (id)_installedAssetWithConfig:(id)arg1 regionId:(id)arg2 triggerDownload:(_Bool)arg3;	// IMP=0x0000000000004850
- (id)installedAssetWithConfig:(id)arg1 regionId:(id)arg2 triggerDownload:(_Bool)arg3;	// IMP=0x00000000000046f0
- (id)installedAssetWithConfig:(id)arg1 regionId:(id)arg2;	// IMP=0x0000000000004640
- (id)installedAssetWithConfig:(id)arg1;	// IMP=0x00000000000045c0
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000000004500
- (id)installationStatusForLanguagesForAssetType:(unsigned long long)arg1 includeDetailedStatus:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000034a0
- (id)installationStatusForLanguagesForAssetType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000003460
- (id)trialIdsForAssetType:(unsigned long long)arg1;	// IMP=0x0000000000002720
- (id)triClients;	// IMP=0x0000000000002550
- (void)dealloc;	// IMP=0x0000000000002500
- (id)initWithClients:(id)arg1 cleanupDuration:(unsigned long long)arg2;	// IMP=0x0000000000002370
- (id)init;	// IMP=0x0000000000002310

@end
