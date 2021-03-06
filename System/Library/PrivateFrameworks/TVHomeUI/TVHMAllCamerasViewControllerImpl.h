//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSUUID, TVHMAllCamerasCollectionViewLayout, TVHMCameraViewController, TVHMCameraViewStyle, UICollectionView, UICollectionViewDiffableDataSource, UIView, _TVSMPlatterView, _UIFloatingContentView;

@interface TVHMAllCamerasViewControllerImpl : NSObject <UICollectionViewDelegate>
{
    NSArray *_cameraItems;	// 8 = 0x8
    NSMutableDictionary *_cameraItemsByID;	// 16 = 0x10
    UICollectionView *_camerasCollectionView;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 32 = 0x20
    NSMutableDictionary *_contentViewControllersByID;	// 40 = 0x28
    _TVSMPlatterView *_fullScreenEffectView;	// 48 = 0x30
    _UIFloatingContentView *_previewContentView;	// 56 = 0x38
    UIView *_previewBackgroundColorView;	// 64 = 0x40
    TVHMAllCamerasCollectionViewLayout *_layout;	// 72 = 0x48
    NSUUID *_fullScreenCameraIdentifier;	// 80 = 0x50
    TVHMCameraViewStyle *_initialCameraViewStyle;	// 88 = 0x58
    TVHMCameraViewController *_selectedCameraViewController;	// 96 = 0x60
    TVHMCameraViewController *_dismissedCameraViewController;	// 104 = 0x68
    _Bool _presented;	// 112 = 0x70
    _Bool _isPreview;	// 113 = 0x71
    CDUnknownBlockType _didSelectCameraView;	// 120 = 0x78
    UIView *_collectionContainerView;	// 128 = 0x80
    NSUUID *_preferredFocusedIdentifier;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000169f0
@property(copy, nonatomic) CDUnknownBlockType didSelectCameraView; // @synthesize didSelectCameraView=_didSelectCameraView;
@property(retain, nonatomic) TVHMCameraViewController *dismissedCameraViewController; // @synthesize dismissedCameraViewController=_dismissedCameraViewController;
@property(retain, nonatomic) TVHMCameraViewController *selectedCameraViewController; // @synthesize selectedCameraViewController=_selectedCameraViewController;
@property(copy, nonatomic) NSUUID *preferredFocusedIdentifier; // @synthesize preferredFocusedIdentifier=_preferredFocusedIdentifier;
@property(retain, nonatomic) TVHMCameraViewStyle *initialCameraViewStyle; // @synthesize initialCameraViewStyle=_initialCameraViewStyle;
@property(retain, nonatomic) NSMutableDictionary *contentViewControllersByID; // @synthesize contentViewControllersByID=_contentViewControllersByID;
@property(readonly, copy, nonatomic) NSDictionary *cameraItemsByID; // @synthesize cameraItemsByID=_cameraItemsByID;
@property(copy, nonatomic) NSArray *cameraItems; // @synthesize cameraItems=_cameraItems;
@property(readonly, nonatomic) _UIFloatingContentView *previewContentView; // @synthesize previewContentView=_previewContentView;
@property(readonly, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) UICollectionView *camerasCollectionView; // @synthesize camerasCollectionView=_camerasCollectionView;
@property(readonly, nonatomic) UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(nonatomic, getter=isPreview) _Bool preview; // @synthesize preview=_isPreview;
@property(copy, nonatomic) NSUUID *fullScreenCameraIdentifier;
- (void)applyTraitCollection:(id)arg1 previousTraitCollection:(id)arg2;	// IMP=0x0000000000016160
- (void)stopStreamingAllViews;	// IMP=0x0000000000015f60
- (void)startStreamingAllVisibleViews;	// IMP=0x0000000000015d40
- (void)endDisableNearbyAccessoryUpdatesForVisibleViews;	// IMP=0x0000000000015b20
- (void)scrollToIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000015a70
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000000000159f0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000015900
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000015520
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000015500
- (void)updateCameraItemsAnimated:(_Bool)arg1;	// IMP=0x0000000000014f80
- (void)setupSubviewsForContentView:(id)arg1;	// IMP=0x0000000000013ca0
- (id)init;	// IMP=0x0000000000013be0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

