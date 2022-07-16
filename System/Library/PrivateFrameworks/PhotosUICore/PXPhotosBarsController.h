//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXAssetCollectionActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosGridActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGridOptionsControllerDelegate-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSArray, NSMapTable, NSString, PLDateRangeFormatter, PXActionPerformer, PXAssetSelectionTypeCounter, PXMoviePresenter, PXPhotosBarButtonItemsController, PXPhotosContentController, PXPhotosGridActionMenuController, PXPhotosViewModel;
@protocol PXPhotosBarsControllerDelegate;

@interface PXPhotosBarsController <PXChangeObserver, PXActionPerformerDelegate, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXSettingsKeyObserver>
{
    NSArray *_leftBarButtonItemIdentifiers;	// 8 = 0x8
    NSArray *_rightBarButtonItemIdentifiers;	// 16 = 0x10
    NSArray *_toolbarItemIdentifiers;	// 24 = 0x18
    PLDateRangeFormatter *_dateRangeFormatter;	// 32 = 0x20
    id <PXPhotosBarsControllerDelegate> _delegate;	// 40 = 0x28
    PXPhotosViewModel *_viewModel;	// 48 = 0x30
    PXPhotosContentController *_contentController;	// 56 = 0x38
    PXAssetSelectionTypeCounter *_assetTypeCounter;	// 64 = 0x40
    PXPhotosBarButtonItemsController *_barButtonItemsController;	// 72 = 0x48
    PXActionPerformer *_activeActionPerformer;	// 80 = 0x50
    PXActionPerformer *_lastActionPerformer;	// 88 = 0x58
    PXPhotosGridActionMenuController *_menuController;	// 96 = 0x60
    PXMoviePresenter *_moviePresenter;	// 104 = 0x68
    NSMapTable *_actionTypeByBarButtonItem;	// 112 = 0x70
    NSString *_contentSizeCategory;	// 120 = 0x78
    double _interButtonSpacing;	// 128 = 0x80
    double _endButtonSpacing;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000085a148
@property(nonatomic) double endButtonSpacing; // @synthesize endButtonSpacing=_endButtonSpacing;
@property(nonatomic) double interButtonSpacing; // @synthesize interButtonSpacing=_interButtonSpacing;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic) NSMapTable *actionTypeByBarButtonItem; // @synthesize actionTypeByBarButtonItem=_actionTypeByBarButtonItem;
@property(retain, nonatomic) PXMoviePresenter *moviePresenter; // @synthesize moviePresenter=_moviePresenter;
@property(retain, nonatomic) PXPhotosGridActionMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain, nonatomic) PXActionPerformer *lastActionPerformer; // @synthesize lastActionPerformer=_lastActionPerformer;
@property(retain, nonatomic) PXActionPerformer *activeActionPerformer; // @synthesize activeActionPerformer=_activeActionPerformer;
@property(readonly, nonatomic) PXPhotosBarButtonItemsController *barButtonItemsController; // @synthesize barButtonItemsController=_barButtonItemsController;
@property(readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter; // @synthesize assetTypeCounter=_assetTypeCounter;
@property(readonly, nonatomic) __weak PXPhotosContentController *contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <PXPhotosBarsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *toolbarItemIdentifiers; // @synthesize toolbarItemIdentifiers=_toolbarItemIdentifiers;
@property(retain, nonatomic) NSArray *rightBarButtonItemIdentifiers; // @synthesize rightBarButtonItemIdentifiers=_rightBarButtonItemIdentifiers;
@property(retain, nonatomic) NSArray *leftBarButtonItemIdentifiers; // @synthesize leftBarButtonItemIdentifiers=_leftBarButtonItemIdentifiers;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000000859e6c
- (void)didChangeSystemItemForOptionsController:(id)arg1;	// IMP=0x0000000000859e5a
- (void)didChangeActionPerformerTypeForOptionsController:(id)arg1;	// IMP=0x0000000000859e48
- (void)_reloadOptionsButton;	// IMP=0x0000000000859c05
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000085967e
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;	// IMP=0x0000000000859489
- (void)photosGridActionPerformer:(id)arg1 contentFilterStateChanged:(id)arg2;	// IMP=0x00000000008593ce
- (id)hostViewControllerForActionPerformer:(id)arg1;	// IMP=0x00000000008593bc
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000859321
- (_Bool)_actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000858b39
- (_Bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;	// IMP=0x00000000008589d7
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x000000000085881c
- (void)_handleActionTypeBarButtonItem:(id)arg1;	// IMP=0x0000000000858507
- (void)handleInfoButton:(id)arg1;	// IMP=0x0000000000858477
- (void)handleAddButtonItem:(id)arg1;	// IMP=0x00000000008583a7
- (void)handleDismissButton:(id)arg1;	// IMP=0x0000000000858332
- (void)handleActionMenuBarButtonItem:(id)arg1;	// IMP=0x0000000000857b80
- (id)createActionMenuController;	// IMP=0x0000000000857680
- (void)handleCancelBarButtonItem:(id)arg1;	// IMP=0x000000000085763c
- (void)handleDeselectAllBarButtonItem:(id)arg1;	// IMP=0x00000000008575cb
- (void)handleSelectAllBarButtonItem:(id)arg1;	// IMP=0x000000000085755a
- (void)handleSelectBarButtonItem:(id)arg1;	// IMP=0x0000000000857516
- (double)fixedSpaceForEndButtonSpacing;	// IMP=0x0000000000857504
- (double)fixedSpaceForInterButtonSpacing;	// IMP=0x00000000008574f2
- (id)_identifierForActionType:(id)arg1;	// IMP=0x00000000008572c7
- (id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;	// IMP=0x0000000000856360
@property(readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter; // @synthesize dateRangeFormatter=_dateRangeFormatter;
- (id)barAppearance;	// IMP=0x0000000000856157
- (void)updateBars;	// IMP=0x0000000000855a8b
- (id)existingBarItemForIdentifier:(id)arg1;	// IMP=0x0000000000855a79
- (id)createAssetActionManagerForAssetReference:(id)arg1;	// IMP=0x000000000085598f
- (void)viewControllerDidChange;	// IMP=0x0000000000855707
- (id)initWithPhotosContentController:(id)arg1;	// IMP=0x00000000008553ae
- (id)init;	// IMP=0x0000000000855334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

