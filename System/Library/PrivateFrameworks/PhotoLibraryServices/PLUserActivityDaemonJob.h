//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PLUserActivityDaemonJob
{
    long long _actionType;	// 8 = 0x8
    NSString *_albumUUID;	// 16 = 0x10
    NSArray *_assetUUIDs;	// 24 = 0x18
    long long _cloudFeedContent;	// 32 = 0x20
    NSString *_suggestedCMMUUID;	// 40 = 0x28
    NSString *_momentShareUUID;	// 48 = 0x30
}

+ (void)userDidChangeStatusForMomentShare:(id)arg1;	// IMP=0x000000000045b0f1
+ (void)userDidChangeStatusForSuggestedCMM:(id)arg1;	// IMP=0x000000000045b068
+ (void)userDidLeavePhotosApplication;	// IMP=0x000000000045b021
+ (void)userDidDeleteSharedAssets:(id)arg1;	// IMP=0x000000000045adfc
+ (void)userDidDeleteSharedAlbum:(id)arg1;	// IMP=0x000000000045ad55
+ (void)userDidReadCommentOnSharedAsset:(id)arg1;	// IMP=0x000000000045ac95
+ (void)userDidNavigateAwayFromAllSharedAlbums;	// IMP=0x000000000045ac4e
+ (void)userDidNavigateAwayFromSharedAlbum:(id)arg1;	// IMP=0x000000000045aba7
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1;	// IMP=0x000000000045ab00
+ (void)userDidNavigateIntoSharedAlbum:(id)arg1;	// IMP=0x000000000045aa59
+ (void)userDidViewCloudFeedContent:(long long)arg1;	// IMP=0x000000000045a9f6
+ (id)newUserActivityDaemonJob;	// IMP=0x000000000045a95c
- (void).cxx_destruct;	// IMP=0x000000000045a34a
@property(copy, nonatomic) NSString *momentShareUUID; // @synthesize momentShareUUID=_momentShareUUID;
@property(copy, nonatomic) NSString *suggestedCMMUUID; // @synthesize suggestedCMMUUID=_suggestedCMMUUID;
@property(nonatomic) long long cloudFeedContent; // @synthesize cloudFeedContent=_cloudFeedContent;
@property(retain, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(copy, nonatomic) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property long long actionType; // @synthesize actionType=_actionType;
- (void)runDaemonSide;	// IMP=0x000000000045a154
- (void)run;	// IMP=0x000000000045a142
- (long long)daemonOperation;	// IMP=0x000000000045a137
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;	// IMP=0x0000000000459fbd
- (void)encodeToXPCObject:(id)arg1;	// IMP=0x0000000000459dbc
- (id)initWithAssetsdClient:(id)arg1;	// IMP=0x0000000000459d8d

@end

