//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXPhotoKitAssetCollectionDeleteMemoryActionPerformer
{
}

+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;	// IMP=0x000000000018521f
+ (id)createAlertActionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001851fe
+ (id)createStandardActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001851f6
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x00000000001851e9
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;	// IMP=0x0000000000185163
+ (_Bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x0000000000185115
- (void)performBackgroundTask;	// IMP=0x0000000000184652
- (void)performUserInteractionTask;	// IMP=0x0000000000184606
- (void)_promptDeleteMemoryConfirmatonWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001845f3

@end
