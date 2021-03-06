//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <UIKitCore/UIDocumentInteractionControllerDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIPrintPreviewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, NSURL, UIDocumentInteractionController, UIImageView, UIPrintPanelViewController, UIPrintPreviewInfo, UIView;

__attribute__((visibility("hidden")))
@interface UIPrintPreviewViewController <UIPrintPreviewDelegate, UIGestureRecognizerDelegate, UIDocumentInteractionControllerDelegate, UICollectionViewDelegateFlowLayout>
{
    struct CGPDFDocument *_pdfDocRef;	// 8 = 0x8
    struct CGSize _pageSize;	// 16 = 0x10
    double _minPageWith;	// 32 = 0x20
    NSOperationQueue *_pageRendererQueue;	// 40 = 0x28
    _Bool _presentingDocumentInteractionController;	// 48 = 0x30
    _Bool _visibleItemsUpdated;	// 49 = 0x31
    NSURL *_quickLookPDFURL;	// 56 = 0x38
    long long __numPages;	// 64 = 0x40
    NSMutableArray *__arrayOfPageImages;	// 72 = 0x48
    NSArray *__arrayOfCellSizes;	// 80 = 0x50
    UIPrintPreviewInfo *__previewInfo;	// 88 = 0x58
    UIImageView *_pinchGestureBeginningPageImageView;	// 96 = 0x60
    UIImageView *_pinchAnimationView;	// 104 = 0x68
    UIView *_pinchAnimationWhiteBackgroundView;	// 112 = 0x70
    double _pinchGestureLastScale;	// 120 = 0x78
    NSURL *_pdfURL;	// 128 = 0x80
    NSURL *_sharePDFFileURL;	// 136 = 0x88
    UIDocumentInteractionController *_documentInteractionController;	// 144 = 0x90
    NSArray *_updatedvisibleItems;	// 152 = 0x98
    UIPrintPanelViewController *_printPanelViewController;	// 160 = 0xa0
    struct CGPoint _pinchGestureLastPoint;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000af7d45
@property(retain) UIPrintPanelViewController *printPanelViewController; // @synthesize printPanelViewController=_printPanelViewController;
@property(retain) NSArray *updatedvisibleItems; // @synthesize updatedvisibleItems=_updatedvisibleItems;
@property _Bool visibleItemsUpdated; // @synthesize visibleItemsUpdated=_visibleItemsUpdated;
@property(retain) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
@property(retain) NSURL *sharePDFFileURL; // @synthesize sharePDFFileURL=_sharePDFFileURL;
@property(retain) NSURL *pdfURL; // @synthesize pdfURL=_pdfURL;
@property double pinchGestureLastScale; // @synthesize pinchGestureLastScale=_pinchGestureLastScale;
@property struct CGPoint pinchGestureLastPoint; // @synthesize pinchGestureLastPoint=_pinchGestureLastPoint;
@property(retain) UIView *pinchAnimationWhiteBackgroundView; // @synthesize pinchAnimationWhiteBackgroundView=_pinchAnimationWhiteBackgroundView;
@property(retain) UIImageView *pinchAnimationView; // @synthesize pinchAnimationView=_pinchAnimationView;
@property(retain) UIImageView *pinchGestureBeginningPageImageView; // @synthesize pinchGestureBeginningPageImageView=_pinchGestureBeginningPageImageView;
@property(retain) UIPrintPreviewInfo *_previewInfo; // @synthesize _previewInfo=__previewInfo;
@property(retain) NSArray *_arrayOfCellSizes; // @synthesize _arrayOfCellSizes=__arrayOfCellSizes;
@property(retain) NSMutableArray *_arrayOfPageImages; // @synthesize _arrayOfPageImages=__arrayOfPageImages;
@property long long _numPages; // @synthesize _numPages=__numPages;
@property(retain) NSURL *quickLookPDFURL; // @synthesize quickLookPDFURL=_quickLookPDFURL;
@property _Bool presentingDocumentInteractionController; // @synthesize presentingDocumentInteractionController=_presentingDocumentInteractionController;
- (void)handlePinch:(id)arg1;	// IMP=0x0000000000af6b18
- (void)animateCellAndPresentDocumentInteractionController;	// IMP=0x0000000000af66d9
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;	// IMP=0x0000000000af660f
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;	// IMP=0x0000000000af659a
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;	// IMP=0x0000000000af657d
- (void)documentInteractionControllerDidEndPreview:(id)arg1;	// IMP=0x0000000000af64b2
- (void)previewPDF;	// IMP=0x0000000000af64ac
- (id)getSharedPDFFileURL;	// IMP=0x0000000000af61c9
- (id)_newTempURLForPreviewing;	// IMP=0x0000000000af5fe1
- (_Bool)canShowMenuBar;	// IMP=0x0000000000af5ef4
- (id)previewCollectionView;	// IMP=0x0000000000af5ee2
- (void)pageRangeUpdated;	// IMP=0x0000000000af5e1b
- (void)_removeQuickLookPDFURL;	// IMP=0x0000000000af5cc7
- (void)updateQuicklookPDF;	// IMP=0x0000000000af5528
- (void)addAllPages:(id)arg1;	// IMP=0x0000000000af5309
- (_Bool)canAddAllPages:(id)arg1;	// IMP=0x0000000000af525d
- (void)removePage:(id)arg1 forPageIndex:(long long)arg2;	// IMP=0x0000000000af4cc1
- (_Bool)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;	// IMP=0x0000000000af4acc
- (void)addPage:(id)arg1 forPageIndex:(long long)arg2;	// IMP=0x0000000000af43c8
- (_Bool)canAddPage:(id)arg1 forPageIndex:(long long)arg2;	// IMP=0x0000000000af435b
- (void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;	// IMP=0x0000000000af3f81
- (_Bool)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;	// IMP=0x0000000000af3d3c
- (void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;	// IMP=0x0000000000af394e
- (_Bool)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;	// IMP=0x0000000000af3723
- (_Bool)pageIndexIsInRange:(long long)arg1;	// IMP=0x0000000000af35ab
- (void)pageBadgeTapped:(long long)arg1;	// IMP=0x0000000000af3542
- (_Bool)canModifyPageRange;	// IMP=0x0000000000af353a
- (struct _NSRange)previewVisibleItemsRange;	// IMP=0x0000000000af3491
- (id)sortedVisibleIndexPaths;	// IMP=0x0000000000af33fb
- (_Bool)visibleItemsUpdateNeeded;	// IMP=0x0000000000af338d
- (void)reloadVisibleItems:(_Bool)arg1;	// IMP=0x0000000000af3146
- (void)resetAllPageImages;	// IMP=0x0000000000af2fd1
- (void)_mainQueue_reloadItemAtIndex:(id)arg1;	// IMP=0x0000000000af2e2a
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000af2e13
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000af29f0
- (void)fetchPageInBackground:(unsigned long long)arg1 reloadWhenDone:(_Bool)arg2;	// IMP=0x0000000000af25d3
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000af201b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000af1f9d
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000af1f8b
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000af1f80
- (struct CGSize)itemViewSize;	// IMP=0x0000000000af1e5c
- (void)updatePageRange:(id)arg1;	// IMP=0x0000000000af1c39
- (void)updateHeaderFooterSizes;	// IMP=0x0000000000af1918
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000af18d5
- (void)resetPrintPreview;	// IMP=0x0000000000af17fb
- (void)updatePrintPreviewInfo:(id)arg1;	// IMP=0x0000000000af1755
- (void)setScrollDirection:(long long)arg1;	// IMP=0x0000000000af1636
- (void)updatePdfURL:(id)arg1 options:(id)arg2 completed:(_Bool)arg3;	// IMP=0x0000000000af1236
- (void)resetCellSizesArrayCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000af0e29
- (void)updateLayoutWithPdfUpdate:(_Bool)arg1;	// IMP=0x0000000000af0c4e
- (void)viewDidLoad;	// IMP=0x0000000000af0b14
- (void)dealloc;	// IMP=0x0000000000af08f4
- (id)initWithScrollDirection:(long long)arg1 printPanelViewController:(id)arg2;	// IMP=0x0000000000af077e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

