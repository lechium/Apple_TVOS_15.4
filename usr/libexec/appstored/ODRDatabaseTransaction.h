//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, ODRDatabaseChangeset, SQLiteConnection;

@interface ODRDatabaseTransaction
{
    ODRDatabaseChangeset *_changeset;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000056c18
- (id)_manifestEntityForManifest:(id)arg1;	// IMP=0x00100000000569ad
- (id)_existingStorageIDForBundleID:(id)arg1;	// IMP=0x00100000000568d7
- (_Bool)_deleteTagsMatchingPredicate:(id)arg1;	// IMP=0x0010000000056783
- (_Bool)_deleteAssetPacksMatchingPredicate:(id)arg1;	// IMP=0x001000000005656a
- (id)_assetPackEntityForBundleID:(id)arg1 bundleKey:(id)arg2;	// IMP=0x001000000005634b
- (id)_assetPackEntityForAssetPack:(id)arg1;	// IMP=0x0010000000056231
- (_Bool)updateManifest:(id)arg1 forApplication:(id)arg2 verifyContentHashes:(_Bool)arg3;	// IMP=0x0010000000055900
- (_Bool)updateManifest:(id)arg1 bundleTagManifest:(id)arg2 forApplication:(id)arg3 verifyContentHashes:(_Bool)arg4;	// IMP=0x00100000000555e9
- (_Bool)updateEntity:(id)arg1;	// IMP=0x00100000000554e6
- (_Bool)updateBundleTagManifest:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000054e9b
- (_Bool)updateAssetDownloadSizeForDownload:(id)arg1;	// IMP=0x0010000000054d95
- (_Bool)updateAsset:(id)arg1;	// IMP=0x0010000000054ccd
- (_Bool)resetStateForApplication:(id)arg1;	// IMP=0x0010000000054ab4
- (_Bool)purgeAllTagsForApplication:(id)arg1;	// IMP=0x001000000005489b
- (_Bool)purgeAllAssetPacksForApplication:(id)arg1 withReason:(long long)arg2;	// IMP=0x0010000000054553
- (_Bool)markAssetDownloadAsPaused:(_Bool)arg1 download:(id)arg2;	// IMP=0x00100000000544b8
- (_Bool)mapBundleID:(id)arg1 toBundlePath:(id)arg2;	// IMP=0x001000000005418e
- (_Bool)importAssetDownload:(id)arg1;	// IMP=0x0010000000053f10
- (_Bool)importAppReviewManifest:(id)arg1 bundleID:(id)arg2 logKey:(id)arg3;	// IMP=0x0010000000053cec
- (_Bool)deleteMappingForBundleID:(id)arg1;	// IMP=0x0010000000053ce4
- (_Bool)deleteManifestForApplication:(id)arg1;	// IMP=0x0010000000053a5f
- (_Bool)deleteAssetDownload:(id)arg1;	// IMP=0x001000000005390f

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
