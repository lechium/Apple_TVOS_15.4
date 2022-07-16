//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerScrollDelegate-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>

@class NSMutableArray, NSString, PXAssetBadgeManager, PXAssetsDataSource, PXAssetsDataSourceManager, PXAssetsTilingLayout, PXMediaProvider, PXReusableObjectPool, PXScrollViewSpeedometer, PXSectionedSelectionManager, PXTilingController;
@protocol PXAssetsSceneDelegate;

@interface PXAssetsScene : NSObject <PXReusableObjectPoolDelegate, PXAssetsDataSourceManagerObserver, PXChangeObserver, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate>
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    _Bool _hasScheduledUpdate;	// 10 = 0xa
    struct {
        _Bool layout;
    } _needsUpdateFlags;	// 11 = 0xb
    struct {
        _Bool respondsToTileIdentifierConverterForChange;
        _Bool respondsToWillTransitionToDataSource;
        _Bool respondsToDidTransitionToDataSource;
        _Bool respondsToTransitionAnimationCoordinatorForChange;
    } _delegateFlags;	// 12 = 0xc
    _Bool _isAskingForTileIdentifierConverter;	// 16 = 0x10
    _Bool _isAskingForTransitionAnimationCoordinator;	// 17 = 0x11
    _Bool _animatesContent;	// 18 = 0x12
    _Bool _autoplayTilesWaitForInput;	// 19 = 0x13
    id <PXAssetsSceneDelegate> _delegate;	// 24 = 0x18
    PXTilingController *_tilingController;	// 32 = 0x20
    PXMediaProvider *_mediaProvider;	// 40 = 0x28
    PXAssetsDataSourceManager *_dataSourceManager;	// 48 = 0x30
    PXSectionedSelectionManager *_selectionManager;	// 56 = 0x38
    PXAssetBadgeManager *_badgeManager;	// 64 = 0x40
    PXScrollViewSpeedometer *_scrollSpeedometer;	// 72 = 0x48
    PXReusableObjectPool *_viewTileReusePool;	// 80 = 0x50
    PXAssetsDataSource *__dataSource;	// 88 = 0x58
    NSMutableArray *__anchors;	// 96 = 0x60
    unsigned long long _autoplayBehavior;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006f38cb
@property(nonatomic) _Bool autoplayTilesWaitForInput; // @synthesize autoplayTilesWaitForInput=_autoplayTilesWaitForInput;
@property(nonatomic) unsigned long long autoplayBehavior; // @synthesize autoplayBehavior=_autoplayBehavior;
@property(readonly, nonatomic) NSMutableArray *_anchors; // @synthesize _anchors=__anchors;
@property(retain, nonatomic, setter=_setDataSource:) PXAssetsDataSource *_dataSource; // @synthesize _dataSource=__dataSource;
@property(nonatomic) _Bool animatesContent; // @synthesize animatesContent=_animatesContent;
@property(readonly, nonatomic) PXReusableObjectPool *viewTileReusePool; // @synthesize viewTileReusePool=_viewTileReusePool;
@property(readonly, nonatomic) PXScrollViewSpeedometer *scrollSpeedometer; // @synthesize scrollSpeedometer=_scrollSpeedometer;
@property(readonly, nonatomic) PXAssetBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
@property(nonatomic) __weak id <PXAssetsSceneDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x00000000006f379a
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;	// IMP=0x00000000006f36ff
- (struct CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;	// IMP=0x00000000006f36f9
- (struct CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;	// IMP=0x00000000006f3138
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;	// IMP=0x00000000006f3031
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;	// IMP=0x00000000006f2dce
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;	// IMP=0x00000000006f2dc6
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000006f2d1a
- (void)_saveAnchorAsset;	// IMP=0x00000000006f2a8d
- (void)_configureLayout:(id)arg1;	// IMP=0x00000000006f2926
- (void)_updateDataSourceIfNeeded;	// IMP=0x00000000006f2788
- (void)_updateLayoutIfNeeded;	// IMP=0x00000000006f25f9
- (void)_invalidateLayout;	// IMP=0x00000000006f25e3
- (void)updateIfNeeded;	// IMP=0x00000000006f25ac
- (_Bool)needsUpdate;	// IMP=0x00000000006f25a3
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000006f2569
- (void)setNeedsUpdate;	// IMP=0x00000000006f24de
- (void)didTransitionToDataSource:(id)arg1;	// IMP=0x00000000006f2405
- (void)willTransitionToDataSource:(id)arg1;	// IMP=0x00000000006f238b
- (_Bool)providesTileForIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x00000000006f22e1
@property(readonly, nonatomic) PXAssetsTilingLayout *currentLayout;
@property(readonly, nonatomic) PXAssetsTilingLayout *targetLayout;
- (void)transitionToLayout:(id)arg1;	// IMP=0x00000000006f20fe
- (void)dealloc;	// IMP=0x00000000006f208f
- (id)init;	// IMP=0x00000000006f2015
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;	// IMP=0x00000000006f1ca0
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000006f1c7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

