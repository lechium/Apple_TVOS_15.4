//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol FlexSongProtocol;

@interface FMSong : NSObject
{
    NSObject<FlexSongProtocol> *_backend;	// 8 = 0x8
}

+ (_Bool)hasValidTagIDs:(id)arg1;	// IMP=0x0000000000013194
+ (id)loadSongsAndArtworkInFolderAtPath:(id)arg1;	// IMP=0x0000000000012eaf
+ (id)loadSongBundleAtPath:(id)arg1;	// IMP=0x0000000000012a04
+ (long long)versionFromArtworkFilename:(id)arg1;	// IMP=0x00000000000128ab
+ (id)localizedNameForTagWithID:(id)arg1;	// IMP=0x00000000000124d0
+ (id)availableTagIDs;	// IMP=0x0000000000012204
- (void).cxx_destruct;	// IMP=0x0000000000013520
@property(readonly) NSObject<FlexSongProtocol> *backend; // @synthesize backend=_backend;
- (id)songFormat;	// IMP=0x00000000000134bc
- (id)customOptions;	// IMP=0x000000000001346c
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;	// IMP=0x00000000000127fe
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2;	// IMP=0x00000000000126fb
- (id)idealDurations;	// IMP=0x000000000001269b
- (CDStruct_1b6d18a9)naturalDuration;	// IMP=0x0000000000012620
- (CDStruct_1b6d18a9)minimumDuration;	// IMP=0x00000000000125a5
- (id)description;	// IMP=0x0000000000012512
- (void)cancelDownloadOfAllAssetsWithIDs:(id)arg1;	// IMP=0x000000000001208e
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000011eed
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;	// IMP=0x0000000000011e8e
- (id)existingAssetWithID:(id)arg1;	// IMP=0x0000000000011df4
- (id)assetWithID:(id)arg1;	// IMP=0x0000000000011d71
- (void)updateAssets:(id)arg1;	// IMP=0x0000000000011cf2
- (long long)sampleRate;	// IMP=0x0000000000011cae
- (id)audioEncoderPresetName;	// IMP=0x0000000000011c5e
- (id)keywords;	// IMP=0x0000000000011c0e
- (id)tagIDs;	// IMP=0x0000000000011bbe
- (id)artistName;	// IMP=0x0000000000011b6e
- (id)songName;	// IMP=0x0000000000011b1e
- (id)uid;	// IMP=0x0000000000011ace
- (_Bool)recalled;	// IMP=0x0000000000011a8a
- (_Bool)hidden;	// IMP=0x0000000000011a46
- (_Bool)isLoaded;	// IMP=0x0000000000011a02
- (_Bool)canPlay;	// IMP=0x00000000000119be
- (long long)metadataVersion;	// IMP=0x000000000001197a
- (_Bool)_loadFlexSong;	// IMP=0x00000000000117c9
- (void)_loadIfNeeded;	// IMP=0x0000000000011700
- (id)_impl;	// IMP=0x00000000000116bd
- (void)updateAsset:(id)arg1 downloadProgress:(double)arg2;	// IMP=0x00000000000114cc
- (void)_notifySongAssetsChanged;	// IMP=0x000000000001140f
- (void)updateBackend:(id)arg1;	// IMP=0x0000000000011394
- (id)initWithBackend:(id)arg1;	// IMP=0x0000000000011305

@end
