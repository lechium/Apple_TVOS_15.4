//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXStoryErrorRepository, PXStoryViewControllerTransition;
@protocol NSObject, PXAudioAsset, PXAudioAssetFetchResult, PXDisplayAsset;

@protocol PXStoryViewActionPerformer
- (void)performActionForChromeActionMenuItem:(long long)arg1 withValue:(long long)arg2 sender:(id)arg3;
- (id <NSObject>)musicFeedbackContextMenuDelegateWithAudioAssetProvidingBlock:(id <PXAudioAsset> (^)(void))arg1;
- (void)removeAssetFromCuration:(id <PXDisplayAsset>)arg1;
- (void)makeAssetKeyPhoto:(id <PXDisplayAsset>)arg1;
- (void)presentTitleEditor;
- (void)featureLess;
- (void)deleteMemory;
- (void)toggleFavoriteState;
- (void)showVisualDiagnostics;
- (void)fileRadarForErrorRepository:(PXStoryErrorRepository *)arg1;
- (void)fileRadar;
- (void)presentSharingViewWithSender:(id)arg1;
- (PXStoryViewControllerTransition *)dismissStoryViewControllerInteractively;
- (void)dismissStoryViewController;
- (void)presentColorGradeEditor;
- (void)presentMusicEditor;
- (void)dismissAppleMusicPreview;
- (void)presentAppleMusicPreviewForSelectedSong:(id <PXAudioAsset>)arg1 curatedSongs:(id <PXAudioAssetFetchResult>)arg2;

@optional
@property(nonatomic, readonly) _Bool needs79067616Workaround;
@end

