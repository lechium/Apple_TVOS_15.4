//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXPhotoKitAddToLibraryAssetActionPerformer
{
}

+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;	// IMP=0x00000000004be477
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004be458
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x00000000004be3ab
+ (_Bool)canPerformOnSubsetOfSelection;	// IMP=0x00000000004be3a3
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x00000000004be150
- (void)importAssets:(id)arg1;	// IMP=0x00000000004bec96
- (void)_simulateImportForAssetReference:(id)arg1 assetImportStatusManager:(id)arg2;	// IMP=0x00000000004bea74
- (void)performUserInteractionTask;	// IMP=0x00000000004be514

@end

