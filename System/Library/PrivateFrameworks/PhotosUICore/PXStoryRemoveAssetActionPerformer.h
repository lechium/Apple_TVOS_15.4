//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXStoryRemoveAssetActionPerformer
{
}

+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x0000000000471df6
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000471dee
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x0000000000471de2
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x0000000000471cde
- (void)performUserInteractionTask;	// IMP=0x0000000000471e16
- (_Bool)shouldPreventTargetedDismissalAnimation;	// IMP=0x0000000000471e0e

@end
