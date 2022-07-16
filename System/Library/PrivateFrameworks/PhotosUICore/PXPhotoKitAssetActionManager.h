//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivityActionDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, PHPerson, PXAssetActionPerformer, PXPhotoKitAssetsDataSourceManager, PXPhotoKitImportStatusManager, PXPhotosDataSource;
@protocol PXRadarConfigurationProvider;

@interface PXPhotoKitAssetActionManager <PXActivityActionDelegate>
{
    PXPhotoKitAssetsDataSourceManager *_dataSourceManager;	// 8 = 0x8
    PXPhotoKitImportStatusManager *_importStatusManager;	// 16 = 0x10
    NSString *_importSessionID;	// 24 = 0x18
    PHPerson *_person;	// 32 = 0x20
    id <PXRadarConfigurationProvider> _radarConfigurationProvider;	// 40 = 0x28
    NSMutableDictionary *__performerClassByType;	// 48 = 0x30
    NSMapTable *__actionTypeByBarButtonItem;	// 56 = 0x38
    PXAssetActionPerformer *__activePerformer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000054e623
@property(retain, nonatomic, setter=_setActivePerformer:) PXAssetActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // @synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem;
@property(readonly, nonatomic) NSMutableDictionary *_performerClassByType; // @synthesize _performerClassByType=__performerClassByType;
@property(retain, nonatomic) id <PXRadarConfigurationProvider> radarConfigurationProvider; // @synthesize radarConfigurationProvider=_radarConfigurationProvider;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(copy, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property(retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager; // @synthesize importStatusManager=_importStatusManager;
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)_handleActionPerformerComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000000054e3e3
- (void)executeActionForActionType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000054e1e7
- (void)_handleBarButtonItem:(id)arg1;	// IMP=0x000000000054e145
- (void)_handlePreviewAction:(id)arg1 actionType:(id)arg2;	// IMP=0x000000000054e12e
- (id)systemImageNameForActionType:(id)arg1;	// IMP=0x000000000054e0a3
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;	// IMP=0x000000000054e010
- (void)performActivity:(id)arg1;	// IMP=0x000000000054dfbf
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;	// IMP=0x000000000054df69
- (id)activityForActionType:(id)arg1;	// IMP=0x000000000054deaf
- (id)alertActionForActionType:(id)arg1;	// IMP=0x000000000054dd49
- (id)standardActionForActionType:(id)arg1;	// IMP=0x000000000054dd41
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;	// IMP=0x000000000054dd39
- (id)barButtonItemForActionType:(id)arg1;	// IMP=0x000000000054dc58
- (id)actionPerformerForActionType:(id)arg1;	// IMP=0x000000000054d9c2
- (_Bool)canPerformAssetVariationActions;	// IMP=0x000000000054d983
- (_Bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;	// IMP=0x000000000054d897
- (_Bool)supportsActionType:(id)arg1;	// IMP=0x000000000054d81e
- (_Bool)canPerformActionType:(id)arg1;	// IMP=0x000000000054d66f
- (void)registerPerformerClass:(Class)arg1 forType:(id)arg2;	// IMP=0x000000000054d5f7
- (id)_selectionSnapshotForPerformerClass:(Class)arg1 applySubsetIfNeeded:(_Bool)arg2;	// IMP=0x000000000054cf91
@property(readonly, nonatomic) PXPhotosDataSource *_dataSourceSnapshot;
@property(readonly, nonatomic) unsigned long long presentationSource;
- (void)setAdditionalPropertiesFromActionManager:(id)arg1;	// IMP=0x000000000054cda0
- (id)initWithSelectedObjectReference:(id)arg1 dataSourceManager:(id)arg2;	// IMP=0x000000000054cc83
- (id)initWithSelectionManager:(id)arg1;	// IMP=0x000000000054c953

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
