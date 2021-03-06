//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@interface PLPublishCloudSharedAssetsJob
{
    _Bool _isNewAlbum;	// 8 = 0x8
    NSString *_publishAlbumCloudGUID;	// 16 = 0x10
    NSArray *_originalAssetUUIDs;	// 24 = 0x18
    NSArray *_stillImageOnlyAssetUUIDs;	// 32 = 0x20
    NSDictionary *_customExportsInfo;	// 40 = 0x28
    NSDictionary *_trimmedVideoPathInfo;	// 48 = 0x30
    NSString *_batchCommentText;	// 56 = 0x38
}

+ (id)videoComplementURLForSharingFromAsset:(id)arg1;	// IMP=0x00000000003e3ea3
+ (void)publishBatchOfOriginalAssetUUIDs:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 trimmedVideoPathInfo:(id)arg5 isNewAlbum:(_Bool)arg6 batchCommentText:(id)arg7;	// IMP=0x00000000003e3c78
- (void).cxx_destruct;	// IMP=0x00000000003e12ac
@property(retain, nonatomic) NSString *batchCommentText; // @synthesize batchCommentText=_batchCommentText;
@property(nonatomic) _Bool isNewAlbum; // @synthesize isNewAlbum=_isNewAlbum;
@property(retain, nonatomic) NSDictionary *trimmedVideoPathInfo; // @synthesize trimmedVideoPathInfo=_trimmedVideoPathInfo;
@property(retain, nonatomic) NSDictionary *customExportsInfo; // @synthesize customExportsInfo=_customExportsInfo;
@property(retain, nonatomic) NSArray *stillImageOnlyAssetUUIDs; // @synthesize stillImageOnlyAssetUUIDs=_stillImageOnlyAssetUUIDs;
@property(retain, nonatomic) NSArray *originalAssetUUIDs; // @synthesize originalAssetUUIDs=_originalAssetUUIDs;
@property(retain, nonatomic) NSString *publishAlbumCloudGUID; // @synthesize publishAlbumCloudGUID=_publishAlbumCloudGUID;
- (_Bool)retrieveURLsFromAssetWithUUID:(id)arg1 withExportedFileURL:(id)arg2 primaryURL:(id *)arg3 videoComplementURL:(id *)arg4;	// IMP=0x00000000003e0cf8
- (void)executeDaemonOperation;	// IMP=0x00000000003e0a4d
- (void)runDaemonSide;	// IMP=0x00000000003e08d0
- (_Bool)shouldArchiveXPCToDisk;	// IMP=0x00000000003e08c8
- (void)run;	// IMP=0x00000000003e08b6
- (long long)daemonOperation;	// IMP=0x00000000003e08ab
- (id)description;	// IMP=0x00000000003e07b1
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;	// IMP=0x00000000003e05f6
- (void)encodeToXPCObject:(id)arg1;	// IMP=0x00000000003e03cb

@end

