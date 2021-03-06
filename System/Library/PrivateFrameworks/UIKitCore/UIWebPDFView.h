//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIPDFAnnotationControllerDelegate-Protocol.h>
#import <UIKitCore/UIPDFPageViewDelegate-Protocol.h>
#import <UIKitCore/UIPopoverControllerDelegate-Protocol.h>
#import <UIKitCore/WebPDFViewPlaceholderDelegate-Protocol.h>

@class NSArray, NSData, NSMutableArray, NSObject, NSString, NSURL, UIColor, UIPDFDocument, UITapGestureRecognizer, WebPDFViewPlaceholder;
@protocol UIWebPDFViewDelegate;

@interface UIWebPDFView <UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_backingLayerImageViews;	// 112 = 0x70
    struct CGPDFDocument *_cgPDFDocument;	// 120 = 0x78
    UIPDFDocument *_document;	// 128 = 0x80
    _Bool _hasScheduledCacheUpdate;	// 136 = 0x88
    struct CGRect _documentBounds;	// 144 = 0x90
    NSObject<UIWebPDFViewDelegate> *_pdfDelegate;	// 176 = 0xb0
    _Bool _delegateRespondsToDidScroll;	// 184 = 0xb8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 192 = 0xc0
    NSURL *_documentURL;	// 200 = 0xc8
    _Bool _rotating;	// 208 = 0xd0
    _Bool _zooming;	// 209 = 0xd1
    double _initialZoomScale;	// 216 = 0xd8
    struct CGAffineTransform _documentTransform;	// 224 = 0xe0
    double _documentScale;	// 272 = 0x110
    long long _ignoreContentOffsetChanges;	// 280 = 0x118
    struct CGPoint _contentOffsetAtScrollStart;	// 288 = 0x120
    NSMutableArray *_pageViews;	// 304 = 0x130
    NSArray *_pageMinYs;	// 312 = 0x138
    _Bool hidePageViewsUntilReadyToRender;	// 320 = 0x140
    _Bool hideActivityIndicatorForUnRenderedContent;	// 321 = 0x141
    _Bool readyForSnapshot;	// 322 = 0x142
    WebPDFViewPlaceholder *pdfPlaceHolderView;	// 328 = 0x148
    UIColor *backgroundColorForUnRenderedContent;	// 336 = 0x150
    NSString *documentPassword;	// 344 = 0x158
    NSArray *pageRects;	// 352 = 0x160
}

+ (void)setAsPDFDocRepAndView;	// IMP=0x00000000010e7961
+ (void)initialize;	// IMP=0x00000000010e7829
@property(retain, nonatomic) NSArray *pageMinYs; // @synthesize pageMinYs=_pageMinYs;
@property(nonatomic) _Bool readyForSnapshot; // @synthesize readyForSnapshot;
@property(retain, nonatomic) NSArray *pageRects; // @synthesize pageRects;
@property(retain, nonatomic) NSString *documentPassword; // @synthesize documentPassword;
@property(nonatomic) _Bool hideActivityIndicatorForUnRenderedContent; // @synthesize hideActivityIndicatorForUnRenderedContent;
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // @synthesize backgroundColorForUnRenderedContent;
@property(nonatomic) _Bool hidePageViewsUntilReadyToRender; // @synthesize hidePageViewsUntilReadyToRender;
@property(nonatomic) long long ignoreContentOffsetChanges; // @synthesize ignoreContentOffsetChanges=_ignoreContentOffsetChanges;
@property WebPDFViewPlaceholder *pdfPlaceHolderView; // @synthesize pdfPlaceHolderView;
@property(readonly, nonatomic) double documentScale; // @synthesize documentScale=_documentScale;
@property(nonatomic) struct CGAffineTransform documentTransform; // @synthesize documentTransform=_documentTransform;
@property(nonatomic) double initialZoomScale; // @synthesize initialZoomScale=_initialZoomScale;
@property(readonly, nonatomic) struct CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
@property(nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate; // @synthesize pdfDelegate=_pdfDelegate;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (id)imageForContactRect:(struct CGRect)arg1 onPageInViewRect:(struct CGRect)arg2 destinationRect:(struct CGRect)arg3;	// IMP=0x00000000010eb44f
- (unsigned long long)_pageNumberForRect:(struct CGRect)arg1;	// IMP=0x00000000010eb305
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000010eb2dd
- (void)_tapGestureRecognized:(id)arg1;	// IMP=0x00000000010eb2bc
- (void)_share:(id)arg1;	// IMP=0x00000000010eb14e
- (void)_translate:(id)arg1;	// IMP=0x00000000010eafe0
- (void)_define:(id)arg1;	// IMP=0x00000000010eae72
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000010ead38
- (id)_selection;	// IMP=0x00000000010ead01
- (id)_pageWithSelection;	// IMP=0x00000000010eab6f
- (void)clearSelection;	// IMP=0x00000000010eab4b
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;	// IMP=0x00000000010eaa07
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;	// IMP=0x00000000010ea808
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4;	// IMP=0x00000000010ea6b2
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToURL:(id)arg4;	// IMP=0x00000000010ea56c
- (void)_didTouch:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4;	// IMP=0x00000000010ea496
- (void)_didTouch:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToURL:(id)arg4;	// IMP=0x00000000010ea3dc
- (void)resetZoom:(id)arg1;	// IMP=0x00000000010ea38c
- (void)zoom:(id)arg1 to:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 kind:(int)arg4;	// IMP=0x00000000010ea297
- (void)didCompleteLayout;	// IMP=0x00000000010ea085
- (void)_recreateUIPDFDocument;	// IMP=0x00000000010e9ec3
- (_Bool)_checkIfDocumentNeedsUnlock;	// IMP=0x00000000010e9daa
- (_Bool)_tryToUnlockDocumentWithPassword:(id)arg1;	// IMP=0x00000000010e9d04
- (void)viewWillClose;	// IMP=0x00000000010e9cf0
- (void)snapshotComplete;	// IMP=0x00000000010e9b94
- (void)prepareForSnapshot:(_Bool)arg1;	// IMP=0x00000000010e97cd
- (unsigned long long)firstVisiblePageNumber;	// IMP=0x00000000010e9449
- (void)didZoom:(id)arg1;	// IMP=0x00000000010e9427
- (void)willZoom:(id)arg1;	// IMP=0x00000000010e939a
- (void)didRotate:(id)arg1;	// IMP=0x00000000010e9333
- (void)willRotate:(id)arg1;	// IMP=0x00000000010e92a6
- (void)didReceiveMemoryWarning:(id)arg1;	// IMP=0x00000000010e9238
- (void)_didScroll;	// IMP=0x00000000010e91a6
- (void)willScroll:(id)arg1;	// IMP=0x00000000010e914f
- (void)ensureCorrectPagesAreInstalled:(_Bool)arg1;	// IMP=0x00000000010e90b1
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;	// IMP=0x00000000010e9045
- (void)_removePageViewsNotInCurrentViewCoordsRect;	// IMP=0x00000000010e8fec
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect)arg1;	// IMP=0x00000000010e8db2
- (id)_addPageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010e8d10
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect)arg1 force:(_Bool)arg2;	// IMP=0x00000000010e894a
- (id)_installViewAtIndex:(long long)arg1 inFrame:(struct CGRect)arg2;	// IMP=0x00000000010e84c8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000010e8222
- (struct CGRect)_viewCachingBoundsInUIViewCoords;	// IMP=0x00000000010e815a
- (struct CGRect)_viewportBoundsInUIViewCoords;	// IMP=0x00000000010e810d
- (struct CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1;	// IMP=0x00000000010e808b
- (id)viewportView;	// IMP=0x00000000010e804c
- (id)viewAtIndex:(long long)arg1;	// IMP=0x00000000010e7f14
- (void)dealloc;	// IMP=0x00000000010e7c37
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;	// IMP=0x00000000010e7bdb
- (id)initWithWebPDFViewPlaceholder:(id)arg1;	// IMP=0x00000000010e797a
@property(readonly, nonatomic) NSData *documentData;
@property(readonly, nonatomic) UIPDFDocument *document;
- (id)uiPDFDocument;	// IMP=0x00000000010e790b
@property(readonly, nonatomic) struct CGPDFDocument *cgPDFDocument;
- (_Bool)_hasPageRects;	// IMP=0x00000000010e78d6
@property(readonly, nonatomic) unsigned long long totalPages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

