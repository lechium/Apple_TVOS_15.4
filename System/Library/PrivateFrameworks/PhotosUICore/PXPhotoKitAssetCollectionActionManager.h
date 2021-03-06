//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivityActionDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformerInput-Protocol.h>

@class NSDictionary, NSMapTable, NSString, PHFetchResult, PXAssetCollectionActionPerformer, PXAssetReference, PXAssetsDataSource;

@interface PXPhotoKitAssetCollectionActionManager <PXActivityActionDelegate, PXPhotoKitAssetCollectionActionPerformerInput>
{
    NSMapTable *__actionTypeByBarButtonItem;	// 8 = 0x8
    NSDictionary *__performerClassesByType;	// 16 = 0x10
    PXAssetCollectionActionPerformer *__activePerformer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017dbd0
@property(retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(readonly, nonatomic) NSDictionary *_performerClassesByType; // @synthesize _performerClassesByType=__performerClassesByType;
@property(readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // @synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem;
- (void)performActivity:(id)arg1;	// IMP=0x000000000017db3a
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;	// IMP=0x000000000017d9f9
- (void)_handleActionPerformerComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000017d8b6
- (void)_executeActionTypeIfPossible:(id)arg1;	// IMP=0x000000000017d6b2
- (void)_handleBarButtonItem:(id)arg1;	// IMP=0x000000000017d612
- (id)activityForActionType:(id)arg1;	// IMP=0x000000000017d462
- (id)alertActionForActionType:(id)arg1;	// IMP=0x000000000017d1ee
- (id)standardActionForActionType:(id)arg1;	// IMP=0x000000000017d1e6
- (id)barButtonItemForActionType:(id)arg1;	// IMP=0x000000000017d06d
- (Class)_firstPossiblePerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2 requireThatPerformerCanPerformAction:(_Bool)arg3;	// IMP=0x000000000017ce44
- (Class)_firstPossiblePerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2;	// IMP=0x000000000017ce2c
- (id)systemImageNameForActionType:(id)arg1 assetCollectionReference:(id)arg2;	// IMP=0x000000000017cdb2
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 assetCollectionReference:(id)arg3;	// IMP=0x000000000017cd35
- (id)actionPerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2;	// IMP=0x000000000017cb3b
- (_Bool)supportsActionType:(id)arg1;	// IMP=0x000000000017ca9b
- (_Bool)canPerformActionType:(id)arg1 assetCollectionReference:(id)arg2;	// IMP=0x000000000017ca1b
@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
- (id)initWithAssetCollectionReference:(id)arg1 displayTitleInfo:(id)arg2;	// IMP=0x000000000017c0c1

// Remaining properties
@property(readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PHFetchResult *people;
@property(readonly) Class superclass;

@end

