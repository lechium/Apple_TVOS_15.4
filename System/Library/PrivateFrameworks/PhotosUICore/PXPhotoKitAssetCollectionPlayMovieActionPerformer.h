//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXPhotoKitAssetCollectionPlayMovieActionPerformer
{
}

+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;	// IMP=0x000000000018034e
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x0000000000180335
+ (id)_systemImageName;	// IMP=0x0000000000180328
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;	// IMP=0x0000000000180126
+ (_Bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x000000000017fbfe
- (void)performUserInteractionTask;	// IMP=0x000000000017f039
- (id)localizedTitleForUseCase:(unsigned long long)arg1;	// IMP=0x000000000017efc7
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;	// IMP=0x000000000017eef3
- (id)activityType;	// IMP=0x000000000017eed4
- (id)activitySystemImageName;	// IMP=0x000000000017eebb

@end

