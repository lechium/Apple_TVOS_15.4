//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDetailsLocationSearchDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapLocationEditDelegate-Protocol.h>
#import <PhotosUICore/PXUIWidget-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PXAssetActionManager, PXImageUIView, PXOneUpPresentation, PXPhotosDetailsContext, PXPlacesMapFetchResultViewController, PXPlacesMapViewPort, PXPlacesSnapshotFactory, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIButton, UIFont, UIImageView, UIView, UIVisualEffectView;
@protocol OS_os_log, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

@interface PXUIMapWidget : NSObject <PXPhotosDataSourceChangeObserver, PXPlacesMapLocationEditDelegate, PXPhotosDetailsLocationSearchDelegate, PXUIWidget>
{
    struct CGSize _contentSize;	// 8 = 0x8
    PXPlacesMapViewPort *_viewPort;	// 24 = 0x18
    _Bool _didDisplayContentView;	// 32 = 0x20
    _Bool _isLoaded;	// 33 = 0x21
    NSMutableDictionary *_fetchedImages;	// 40 = 0x28
    long long _lastFetchedBoundingRectAssetCount;	// 48 = 0x30
    NSObject<OS_os_log> *_logger;	// 56 = 0x38
    _Bool _showAddressLink;	// 64 = 0x40
    _Bool _hasLoadedContentData;	// 65 = 0x41
    UIFont *_footerFont;	// 72 = 0x48
    id <PXWidgetDelegate> _widgetDelegate;	// 80 = 0x50
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;	// 88 = 0x58
    PXPhotosDetailsContext *_context;	// 96 = 0x60
    PXWidgetSpec *_spec;	// 104 = 0x68
    UIView *__containerView;	// 112 = 0x70
    UIView *__contentView;	// 120 = 0x78
    PXImageUIView *__imageView;	// 128 = 0x80
    UIVisualEffectView *_footerView;	// 136 = 0x88
    UIButton *_footerButton;	// 144 = 0x90
    UIButton *_adjustButton;	// 152 = 0x98
    UIImageView *_chevronImageView;	// 160 = 0xa0
    NSMutableArray *__nearbyCountCompletionBlocks;	// 168 = 0xa8
    PXPlacesMapFetchResultViewController *__mapViewController;	// 176 = 0xb0
    PXPlacesMapFetchResultViewController *__presentedMapViewController;	// 184 = 0xb8
    PXPlacesSnapshotFactory *__factory;	// 192 = 0xc0
    NSString *__cachedLocalizedTitle;	// 200 = 0xc8
    NSString *__cachedDisclosureTitle;	// 208 = 0xd0
    NSString *_cachedFooterTitle;	// 216 = 0xd8
    double _height;	// 224 = 0xe0
    double _footerHeight;	// 232 = 0xe8
}

+ (id)sharedSnapshotRequestConcurrentQueue;	// IMP=0x000000000054898d
- (void).cxx_destruct;	// IMP=0x0000000000547d5d
@property(nonatomic, setter=_setHasLoadedContentData:) _Bool hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *cachedFooterTitle; // @synthesize cachedFooterTitle=_cachedFooterTitle;
@property(retain, nonatomic) NSString *_cachedDisclosureTitle; // @synthesize _cachedDisclosureTitle=__cachedDisclosureTitle;
@property(retain, nonatomic) NSString *_cachedLocalizedTitle; // @synthesize _cachedLocalizedTitle=__cachedLocalizedTitle;
@property(retain, nonatomic) PXPlacesSnapshotFactory *_factory; // @synthesize _factory=__factory;
@property(nonatomic) __weak PXPlacesMapFetchResultViewController *_presentedMapViewController; // @synthesize _presentedMapViewController=__presentedMapViewController;
@property(readonly, nonatomic) PXPlacesMapFetchResultViewController *_mapViewController; // @synthesize _mapViewController=__mapViewController;
@property(retain, nonatomic) NSMutableArray *_nearbyCountCompletionBlocks; // @synthesize _nearbyCountCompletionBlocks=__nearbyCountCompletionBlocks;
@property(readonly, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(readonly, nonatomic) UIButton *adjustButton; // @synthesize adjustButton=_adjustButton;
@property(readonly, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(readonly, nonatomic) UIVisualEffectView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) PXImageUIView *_imageView; // @synthesize _imageView=__imageView;
@property(readonly, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic) _Bool showAddressLink; // @synthesize showAddressLink=_showAddressLink;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate; // @synthesize widgetUnlockDelegate=_widgetUnlockDelegate;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (_Bool)_hasCachedSnapshotImageForKey:(id)arg1;	// IMP=0x0000000000547b6f
- (void)_setImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005479bd
- (void)_handleSnapshotResponse:(id)arg1 viewPort:(id)arg2 snapshotMapType:(unsigned long long)arg3 shouldFetchNearbyAssetCount:(_Bool)arg4 fetchedImageKey:(id)arg5 error:(id)arg6 userInterfaceStyle:(long long)arg7;	// IMP=0x000000000054770a
- (id)_createSnapshotOptions;	// IMP=0x00000000005476b2
- (id)_snapshotOptionsForExtendedTraitCollection:(id)arg1 queue:(id)arg2 viewSize:(struct CGSize)arg3 snapshotMapType:(unsigned long long)arg4;	// IMP=0x00000000005474c9
- (void)_generateSnapshotsForExtendedTraitCollection:(id)arg1 placesUtils:(id)arg2 queue:(id)arg3 size:(struct CGSize)arg4 snapshotMapType:(unsigned long long)arg5 fetchResults:(id)arg6 shouldFetchNearbyAssetCount:(_Bool)arg7;	// IMP=0x0000000000546f71
- (void)_fetchPlacesSnapshotUsingMapType:(unsigned long long)arg1 fetchResults:(id)arg2 imageSize:(struct CGSize)arg3 shouldFetchNearbyAssetCount:(_Bool)arg4;	// IMP=0x0000000000546b41
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000054685a
- (void)_loadMapDataWithFetchResultsController:(id)arg1;	// IMP=0x000000000054669e
- (void)_hasLocationDidChange;	// IMP=0x0000000000546656
- (void)_presentLocationSearchPicker;	// IMP=0x0000000000546405
- (void)mapFetchResultsViewControllerDidSelectEditLocation:(id)arg1;	// IMP=0x00000000005463f3
- (id)_mapViewControllerWithContentMode:(unsigned long long)arg1;	// IMP=0x0000000000545ef6
- (void)_showPlacesWithContentMode:(unsigned long long)arg1;	// IMP=0x0000000000545e47
- (void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000545d07
- (void)_handleTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000545902
- (void)userDidSelectDisclosureControl;	// IMP=0x0000000000545831
- (void)userDidSelectFooter:(id)arg1;	// IMP=0x00000000005455ed
- (void)_updateHeight;	// IMP=0x00000000005454ca
- (_Bool)_requiresDetailedAddressFooterString;	// IMP=0x0000000000545450
- (id)_localizedGeoDescriptionForAsset:(id)arg1;	// IMP=0x0000000000545354
@property(readonly, nonatomic) UIFont *footerFont; // @synthesize footerFont=_footerFont;
- (void)_updateFooterButton;	// IMP=0x0000000000544ec3
- (void)_updateFooterWithTitle:(id)arg1;	// IMP=0x0000000000544e88
- (_Bool)_forceRevGeoUpdateIfNeeded;	// IMP=0x0000000000544c0e
- (void)_reloadFooterTitle;	// IMP=0x0000000000544ab9
- (void)_updateFooterHeight;	// IMP=0x00000000005448fe
- (id)_firstAsset;	// IMP=0x00000000005447de
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (double)preferredContentHeightForWidth:(double)arg1;	// IMP=0x00000000005445cd
@property(readonly, nonatomic) _Bool _hasLocation;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)_showPlaceholder;	// IMP=0x00000000005443d5
- (void)_layoutSubviews;	// IMP=0x0000000000542f50
- (void)_updateContentViewFrame;	// IMP=0x0000000000542e4d
- (long long)_fetchCountOfAssetsWithLocation;	// IMP=0x0000000000542c09
- (id)_fetchResultsForSections;	// IMP=0x0000000000542ae3
- (void)_handleContentSizeCategoryDidChange:(id)arg1;	// IMP=0x0000000000542aa0
- (void)unloadContentData;	// IMP=0x00000000005429ed
- (struct CGSize)_estimatedMapViewImageSize;	// IMP=0x0000000000542963
- (void)loadContentData;	// IMP=0x0000000000542882
- (void)_didTapAdjustLocation;	// IMP=0x000000000054272f
- (void)_loadContainerView;	// IMP=0x0000000000541cd6
@property(readonly, nonatomic) NSString *snappableWidgetIdentifier;
- (_Bool)infoPanelLayoutEnabled;	// IMP=0x0000000000541bfc
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x0000000000541af9
- (id)standaloneMapViewController;	// IMP=0x00000000005419f3
- (void)dealloc;	// IMP=0x00000000005419b5
- (id)init;	// IMP=0x00000000005418c5

// Remaining properties
@property(readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, nonatomic) _Bool cursorInteractionEnabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInEditMode;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property(retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(readonly, nonatomic) _Bool wantsFocus;
@property(nonatomic) __weak id <PXWidgetEditingDelegate> widgetEditingDelegate;
@property(nonatomic) __weak id <PXWidgetInteractionDelegate> widgetInteractionDelegate;

@end

