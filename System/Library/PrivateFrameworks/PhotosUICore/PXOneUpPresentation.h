//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PXAssetActionManager, PXAssetReference, PXAssetsDataSourceManager, PXGestureProvider, PXPhotosDetailsContext, PXUIMediaProvider, UIContextMenuInteraction, UIScrollView, UIViewController;
@protocol PXAssetImportStatusManager, PXOneUpPresentationDelegate, PXOneUpPresentationImplementationDelegate;

@interface PXOneUpPresentation : NSObject
{
    struct {
        _Bool respondsToPhotosDetailsContext;
        _Bool respondsToInitialAssetReference;
        _Bool respondsToCanStartPreviewingForContextMenuInteraction;
        _Bool respondsToAllowsActionsForContextMenuInteraction;
        _Bool respondsToAllowsPreviewCommitingForContextMenuInteraction;
        _Bool respondsToCommitPreviewForContextMenuInteraction;
        _Bool respondsToWillStartPreviewingForContextMenuInteraction;
        _Bool respondsToWillEndPreviewingForContextMenuInteraction;
        _Bool respondsToAccessoriesForContextMenuInteraction;
        _Bool respondsToStyleForContextMenuInteraction;
        _Bool respondsToCurrentImageForAssetReference;
        _Bool respondsToRegionOfInterestForAssetReference;
        _Bool respondsToScrollAssetReferenceToVisible;
        _Bool respondsToSetHiddenAssetReferences;
        _Bool respondsToShouldAutoPlay;
        _Bool respondsToPreventShowInAllPhotos;
        _Bool respondsToActionManager;
        _Bool respondsToActionManagerForPreviewing;
        _Bool respondsToActionContext;
        _Bool respondsToGestureProvider;
        _Bool respondsToImportStatusManager;
        _Bool respondsToOrigin;
        _Bool respondsToScrollView;
        _Bool respondsToMatchedQueryStrings;
    } _delegateFlags;	// 8 = 0x8
    struct {
        _Bool respondsToPresentingViewControllerViewWillAppear;
        _Bool respondsToPresentingViewControllerViewDidAppear;
        _Bool respondsToPresentingViewControllerViewWillDisappear;
        _Bool respondsToPresentingViewControllerViewDidDisappear;
        _Bool respondsToCanStart;
        _Bool respondsToLastViewedAssetReference;
        _Bool respondsToCanStop;
        _Bool respondsToInvalidatePresentingGeometry;
        _Bool respondsToHandlePresentingPinchGestureRecognizer;
    } _implementationDelegateFlags;	// 32 = 0x20
    _Bool _isContextMenuInteractionActive;	// 41 = 0x29
    _Bool _enabled;	// 42 = 0x2a
    id <PXOneUpPresentationImplementationDelegate> __implementationDelegate;	// 48 = 0x30
    id <PXOneUpPresentationDelegate> _delegate;	// 56 = 0x38
    UIContextMenuInteraction *_contextMenuInteraction;	// 64 = 0x40
    UIViewController *_presentingViewController;	// 72 = 0x48
    UIViewController *_originalPresentingViewController;	// 80 = 0x50
    id <PXOneUpPresentationImplementationDelegate> _implementationDelegate;	// 88 = 0x58
}

+ (id)navigationControllerWithRootViewController:(id)arg1;	// IMP=0x0000000000615a92
- (void).cxx_destruct;	// IMP=0x0000000000615945
@property(nonatomic) __weak id <PXOneUpPresentationImplementationDelegate> implementationDelegate; // @synthesize implementationDelegate=_implementationDelegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) _Bool isContextMenuInteractionActive; // @synthesize isContextMenuInteractionActive=_isContextMenuInteractionActive;
@property(readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(nonatomic) __weak id <PXOneUpPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setImplementationDelegate:) __weak id <PXOneUpPresentationImplementationDelegate> _implementationDelegate; // @synthesize _implementationDelegate=__implementationDelegate;
- (void)_updateImplementationDelegate;	// IMP=0x0000000000615599
@property(readonly, nonatomic) NSArray *matchedQueryStrings;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)setHiddenAssetReferences:(id)arg1;	// IMP=0x00000000006153ca
- (void)scrollAssetReferenceToVisible:(id)arg1;	// IMP=0x0000000000615350
- (id)regionOfInterestForAssetReference:(id)arg1;	// IMP=0x00000000006152c9
- (id)currentImageForAssetReference:(id)arg1;	// IMP=0x00000000006151c8
@property(readonly, nonatomic) _Bool wantsShowInLibraryButton;
@property(readonly, nonatomic) _Bool preventShowInAllPhotosAction;
@property(readonly, nonatomic) _Bool shouldAutoPlay;
@property(readonly, nonatomic) id <PXAssetImportStatusManager> importStatusManager;
@property(readonly, nonatomic) long long actionContext;
@property(readonly, nonatomic) PXAssetActionManager *actionManagerForPreviewing;
@property(readonly, nonatomic) PXAssetActionManager *actionManager;
@property(readonly, nonatomic) PXAssetReference *initialAssetReference;
@property(readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext;
@property(readonly, nonatomic) long long origin;
@property(readonly, nonatomic) PXGestureProvider *gestureProvider;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property(readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;	// IMP=0x0000000000614b12
- (void)preventTargetedContextMenuDismissalAnimation;	// IMP=0x0000000000614b0c
- (void)invalidatePresentingGeometry;	// IMP=0x0000000000614a9b
- (void)stopAnimated:(_Bool)arg1;	// IMP=0x0000000000614a2c
@property(readonly, nonatomic) _Bool canStop;
- (void)commitPreviewViewController:(id)arg1;	// IMP=0x0000000000614944
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;	// IMP=0x00000000006148c9
- (id)previewViewControllerAllowingActions:(_Bool)arg1;	// IMP=0x0000000000614865
- (_Bool)startWithConfigurationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006147e2
- (void)waitUntilPresentationCanStartAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000614719
@property(readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
- (_Bool)canStartAnimated:(_Bool)arg1;	// IMP=0x0000000000614623
@property(readonly, nonatomic) _Bool canStart;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000614597
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000614522
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;	// IMP=0x00000000006144ad
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x0000000000614428
- (id)initWithPresentingViewController:(id)arg1;	// IMP=0x0000000000614175
- (id)init;	// IMP=0x00000000006140ee

@end

