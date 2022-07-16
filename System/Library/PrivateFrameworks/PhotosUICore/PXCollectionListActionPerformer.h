//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHAssetCollection, PHCollectionList;

@interface PXCollectionListActionPerformer
{
    PHCollectionList *_collectionList;	// 8 = 0x8
    PHAssetCollection *_createdAssetCollection;	// 16 = 0x10
}

+ (_Bool)canPerformActionForCollectionList:(id)arg1;	// IMP=0x0000000000246081
+ (id)localizedTitleForActionType:(id)arg1;	// IMP=0x0000000000246015
- (void).cxx_destruct;	// IMP=0x0000000000245a3d
@property(retain, nonatomic) PHAssetCollection *createdAssetCollection; // @synthesize createdAssetCollection=_createdAssetCollection;
@property(readonly, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
- (long long)_albumInsertionIndex;	// IMP=0x00000000002459ff
- (void)createAlbumWithAssets:(id)arg1 albumTitle:(id)arg2;	// IMP=0x0000000000245814
- (void)handleCreateSharedAlbum;	// IMP=0x000000000024576d
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002456bd
- (void)performUserInteractionTask;	// IMP=0x0000000000245606
- (id)initWithActionType:(id)arg1 collectionList:(id)arg2;	// IMP=0x000000000024558e

@end
