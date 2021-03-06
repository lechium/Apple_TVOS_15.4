//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXPhotosGridFooterPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGridFooterStatusControllerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosSectionHeaderLayoutViewProvider-Protocol.h>
#import <PhotosUICore/PXPhotosViewInteractionDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDirectionSelectionScrollableDelegate-Protocol.h>

@class NSString, PXAssetReference, PXAssetsDataSourceCountsController, PXExtendedTraitCollection, PXGView, PXMediaProvider, PXPhotosBarsController, PXPhotosGridFooterPresentation, PXPhotosGridFooterStatusController, PXPhotosLayout, PXPhotosViewInteraction, PXPhotosViewModel, PXUpdater, UIView;
@protocol PXGAXResponder, PXPhotosContentControllerDelegate, PXPhotosViewEventTracker;

@interface PXPhotosContentController : NSObject <PXPhotosSectionHeaderLayoutViewProvider, PXScrollViewControllerObserver, PXPhotosGridFooterStatusControllerDelegate, PXPhotosGridFooterPresentationDelegate, PXPhotosLayoutDelegate, PXPhotosViewInteractionDelegate, PXChangeObserver, PXGAXResponder, PXSectionedDirectionSelectionScrollableDelegate>
{
    _Bool _needsCountsInitially;	// 8 = 0x8
    _Bool _needsFooterStatusController;	// 9 = 0x9
    PXPhotosGridFooterStatusController *_footerStatusController;	// 16 = 0x10
    PXPhotosGridFooterPresentation *_footerPresentation;	// 24 = 0x18
    id <PXGAXResponder> _axNextResponder;	// 32 = 0x20
    PXGView *_gridView;	// 40 = 0x28
    PXPhotosViewModel *_viewModel;	// 48 = 0x30
    PXMediaProvider *_mediaProvider;	// 56 = 0x38
    id <PXPhotosViewEventTracker> _eventTracker;	// 64 = 0x40
    PXPhotosLayout *_layout;	// 72 = 0x48
    PXAssetsDataSourceCountsController *_countsController;	// 80 = 0x50
    PXPhotosViewInteraction *_interaction;	// 88 = 0x58
    id <PXPhotosContentControllerDelegate> _delegate;	// 96 = 0x60
    UIView *_headerView;	// 104 = 0x68
    PXExtendedTraitCollection *_traitCollection;	// 112 = 0x70
    PXUpdater *_updater;	// 120 = 0x78
    id _dataSourceManagerPauseToken;	// 128 = 0x80
    PXPhotosBarsController *_barsController;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000002199d2
@property(readonly, nonatomic) PXPhotosBarsController *barsController; // @synthesize barsController=_barsController;
@property(readonly, nonatomic) _Bool needsFooterStatusController; // @synthesize needsFooterStatusController=_needsFooterStatusController;
@property(readonly, nonatomic) _Bool needsCountsInitially; // @synthesize needsCountsInitially=_needsCountsInitially;
@property(retain, nonatomic) id dataSourceManagerPauseToken; // @synthesize dataSourceManagerPauseToken=_dataSourceManagerPauseToken;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <PXPhotosContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXPhotosViewInteraction *interaction; // @synthesize interaction=_interaction;
@property(readonly, nonatomic) PXAssetsDataSourceCountsController *countsController; // @synthesize countsController=_countsController;
@property(readonly, nonatomic) PXPhotosLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) id <PXPhotosViewEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder=_axNextResponder;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000021983a
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;	// IMP=0x0000000000219828
- (void)dismissPresentedViewControllerForFooterPresentation:(id)arg1;	// IMP=0x00000000002197dc
- (void)footerPresentation:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000219767
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;	// IMP=0x00000000002196d4
- (void)_handleChangeToModifySelectionWithUserInfo:(id)arg1;	// IMP=0x0000000000219555
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;	// IMP=0x000000000021941b
- (id)axContainingScrollViewForAXGroup:(id)arg1;	// IMP=0x00000000002193a1
- (void)selectionManager:(id)arg1 revealObjectAtIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x00000000002192f2
- (struct PXSimpleIndexPath)selectionManager:(id)arg1 indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x0000000000219255
- (id)selectionManager:(id)arg1 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath)arg2 andIndexPath:(struct PXSimpleIndexPath)arg3 inDirection:(unsigned long long)arg4;	// IMP=0x000000000021907a
- (long long)selectionBasisForSelectionManager:(id)arg1;	// IMP=0x0000000000219072
- (id)sectionHeaderLayout:(id)arg1 viewForSpriteReference:(id)arg2;	// IMP=0x0000000000218fd1
- (id)presentingViewControllerForPhotosInteraction:(id)arg1;	// IMP=0x0000000000218f72
- (id)photosLayout:(id)arg1 animationForProposedAnimation:(id)arg2;	// IMP=0x0000000000218e52
- (void)_updateIsInCompactMode;	// IMP=0x0000000000218dd4
- (void)_updateHeaderView;	// IMP=0x0000000000218d64
- (void)_invalidateHeaderView;	// IMP=0x0000000000218d20
- (void)_updateHasScrollableContent;	// IMP=0x0000000000218b51
- (void)_invalidateHasScrollableContent;	// IMP=0x0000000000218b0d
- (void)updateIfNeeded;	// IMP=0x0000000000218ad0
- (void)_setNeedsUpdate;	// IMP=0x0000000000218a50
- (void)_updateInteractionWorkspaceController;	// IMP=0x0000000000218a4a
- (void)_updateBarsController;	// IMP=0x000000000021894e
@property(readonly, nonatomic) PXAssetReference *assetReferenceForCurrentScrollPosition;
- (void)stopForceIncludingAllAssetsInDataSource;	// IMP=0x00000000002185e2
- (void)resumeDataSourceChangesIfNeeded;	// IMP=0x00000000002184c0
- (void)suspendDataSourceChangesWithTimeout:(double)arg1 identifier:(id)arg2;	// IMP=0x000000000021835e
- (void)scrollToRevealAssetReference:(id)arg1 scrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002180c0
- (void)scrollToRevealAssetReference:(id)arg1 padding:(struct UIEdgeInsets)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002180a6
- (void)scrollToRevealAssetReference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000218077
- (void)scrollToRevealAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000217fc4
- (void)scrollToEdge:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000217e51
- (void)scrollToInitialPositionAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000217b48
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2;	// IMP=0x0000000000217a5b
- (id)regionOfInterestForAssetReference:(id)arg1;	// IMP=0x00000000002179ba
- (id)indexPathsFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 inDataSource:(id)arg3;	// IMP=0x000000000021719f
- (struct PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00000000002170fe
- (void)extendSelectionInDirection:(unsigned long long)arg1;	// IMP=0x0000000000216f75
- (void)moveSelectionInDirection:(unsigned long long)arg1;	// IMP=0x0000000000216e6a
- (_Bool)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;	// IMP=0x0000000000216dda
- (id)indexPathsForItemsInRect:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x0000000000216939
- (void)enumerateAssetHitTestResultsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000021682a
- (struct PXSimpleIndexPath)_selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x0000000000216754
- (struct PXSimpleIndexPath)_indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x000000000021639b
- (void)enumerateAssetHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000021627c
- (void)contentViewDidScrollToInitialPosition;	// IMP=0x000000000021623f
- (void)contentViewDidAppear:(_Bool)arg1;	// IMP=0x00000000002161be
@property(readonly, nonatomic) PXPhotosGridFooterPresentation *footerPresentation; // @synthesize footerPresentation=_footerPresentation;
@property(readonly, nonatomic) PXPhotosGridFooterStatusController *footerStatusController; // @synthesize footerStatusController=_footerStatusController;
- (void)contentViewWillAppear:(_Bool)arg1;	// IMP=0x0000000000215ec8
- (id)init;	// IMP=0x0000000000215e4e
- (id)initWithConfiguration:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000002158d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

