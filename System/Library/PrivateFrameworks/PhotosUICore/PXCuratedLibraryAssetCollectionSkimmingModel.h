//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXAssetCollectionReference, PXCuratedLibraryViewModel, PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject
{
    PXCuratedLibraryViewModel *_viewModel;	// 8 = 0x8
    long long _zoomLevel;	// 16 = 0x10
    long long _skimmingZoomLevel;	// 24 = 0x18
    id _dataSourcePauseToken;	// 32 = 0x20
    _Bool _isPlayingSlideshow;	// 40 = 0x28
    _Bool _isInteractionInProgress;	// 41 = 0x29
    PXAssetCollectionReference *_containingAssetCollectionReference;	// 48 = 0x30
    PXIndexPathSet *_indexPathSetForSkimming;	// 56 = 0x38
    struct PXSimpleIndexPath _initialIndexPath;	// 64 = 0x40
    struct PXSimpleIndexPath _skimmedIndexPath;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000660348
@property(nonatomic) struct PXSimpleIndexPath skimmedIndexPath; // @synthesize skimmedIndexPath=_skimmedIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath initialIndexPath; // @synthesize initialIndexPath=_initialIndexPath;
@property(readonly, copy, nonatomic) PXIndexPathSet *indexPathSetForSkimming; // @synthesize indexPathSetForSkimming=_indexPathSetForSkimming;
@property(readonly, nonatomic) _Bool isInteractionInProgress; // @synthesize isInteractionInProgress=_isInteractionInProgress;
@property(readonly, nonatomic) _Bool isPlayingSlideshow; // @synthesize isPlayingSlideshow=_isPlayingSlideshow;
@property(readonly, nonatomic) PXAssetCollectionReference *containingAssetCollectionReference; // @synthesize containingAssetCollectionReference=_containingAssetCollectionReference;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)persistSkimmingState;	// IMP=0x0000000000660192
- (void)_updateViewModel;	// IMP=0x000000000066013f
@property(readonly, nonatomic) _Bool canStartSkimming;
- (void)tearDownAfterSkimmingShowHints:(_Bool)arg1 persistState:(_Bool)arg2;	// IMP=0x000000000065ffc3
- (void)_prepareIndexesForAssetCollectionReference:(id)arg1 willStartSkimming:(_Bool)arg2 willStartSlideshow:(_Bool)arg3;	// IMP=0x000000000065f60d
- (void)transitionToSkimming;	// IMP=0x000000000065f5ed
- (void)transitionToSlideshow;	// IMP=0x000000000065f5cd
- (void)prepareForSkimmingInAssetCollectionReference:(id)arg1;	// IMP=0x000000000065f5b3
- (void)prepareForShowingHintsForAssetCollectionReference:(id)arg1;	// IMP=0x000000000065f59c
- (void)prepareForSlideshowForAssetCollectionReference:(id)arg1;	// IMP=0x000000000065f585
- (id)validatedAssetCollectionReference:(id)arg1;	// IMP=0x000000000065f462
- (id)initWithViewModel:(id)arg1;	// IMP=0x000000000065f3d1

@end
