//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/_TVAppDocumentRequestControllerDelegate-Protocol.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider-Protocol.h>
#import <TVMLKit/_TVFullScreenBrowserViewDataSource-Protocol.h>
#import <TVMLKit/_TVFullScreenBrowserViewDelegate-Protocol.h>

@class IKAppContext, IKCollectionElement, NSIndexPath, NSMutableArray, NSString, TVViewElement, UIView, _TVAppDocumentRequestController, _TVFullScreenBrowserView;
@protocol TVBrowserProviding, TVBrowserViewControllerDataSource, TVBrowserViewControllerDelegate;

@interface TVBrowserViewController : UIViewController <_TVFullScreenBrowserViewDelegate, _TVFullScreenBrowserViewDataSource, _TVAppDocumentRequestControllerDelegate, _TVApplicationInspectorDocumentProvider>
{
    struct {
        _Bool respondsToWillCenterOnElement;
        _Bool respondsToDidCenterOnElement;
        _Bool respondsToShouldShowElement;
    } _delegateFlags;	// 8 = 0x8
    struct {
        _Bool hasTransitioned;
    } _flags;	// 11 = 0xb
    TVViewElement *_viewElement;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
    double _interitemSpacing;	// 32 = 0x20
    id <TVBrowserViewControllerDelegate> _delegate;	// 40 = 0x28
    id <TVBrowserViewControllerDataSource> _dataSource;	// 48 = 0x30
    _TVFullScreenBrowserView *_paradeView;	// 56 = 0x38
    UIView *_wallpaperView;	// 64 = 0x40
    NSMutableArray *_cellDataSet;	// 72 = 0x48
    IKCollectionElement *_collectionElement;	// 80 = 0x50
    NSIndexPath *_preferredIndexPath;	// 88 = 0x58
    _TVAppDocumentRequestController *_centeredDocumentController;	// 96 = 0x60
    UIViewController<TVBrowserProviding> *_provider;	// 104 = 0x68
    struct UIEdgeInsets _maskInset;	// 112 = 0x70
}

+ (Class)browserCellClass;	// IMP=0x00000000000d01d4
+ (id)viewControllerForElement:(id)arg1;	// IMP=0x00000000000cda58
+ (id)viewControllerForResponder:(id)arg1;	// IMP=0x00000000000cd94b
- (void).cxx_destruct;	// IMP=0x00000000000d1391
@property(nonatomic) __weak UIViewController<TVBrowserProviding> *provider; // @synthesize provider=_provider;
@property(nonatomic) __weak _TVAppDocumentRequestController *centeredDocumentController; // @synthesize centeredDocumentController=_centeredDocumentController;
@property(retain, nonatomic) NSIndexPath *preferredIndexPath; // @synthesize preferredIndexPath=_preferredIndexPath;
@property(retain, nonatomic) IKCollectionElement *collectionElement; // @synthesize collectionElement=_collectionElement;
@property(readonly, nonatomic) NSMutableArray *cellDataSet; // @synthesize cellDataSet=_cellDataSet;
@property(readonly, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(readonly, nonatomic) _TVFullScreenBrowserView *paradeView; // @synthesize paradeView=_paradeView;
@property(nonatomic) __weak id <TVBrowserViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TVBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets maskInset; // @synthesize maskInset=_maskInset;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) TVViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (id)activeDocument;	// IMP=0x00000000000d11cf
- (id)_cellDataForCell:(id)arg1 remove:(_Bool)arg2;	// IMP=0x00000000000d103c
- (void)_loadDataForCell:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000d0ddb
- (void)transitionForOperation:(long long)arg1 animator:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d054c
- (id)documentControllerForElement:(id)arg1;	// IMP=0x00000000000d049e
- (id)mediaInfoForElement:(id)arg1;	// IMP=0x00000000000d01e5
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x00000000000d00eb
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;	// IMP=0x00000000000d0002
- (void)appDocumentController:(id)arg1 didHostTemplateViewController:(id)arg2 usedTransitions:(_Bool)arg3;	// IMP=0x00000000000cfd0f
- (void)showcaseFactorDidChangeForAppDocumentController:(id)arg1;	// IMP=0x00000000000cfbf0
- (_Bool)paradeView:(id)arg1 shouldShowItemAtIndexPath:(id)arg2;	// IMP=0x00000000000cfa96
- (void)paradeView:(id)arg1 didEndDisplayingCell:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000cf92f
- (void)_enumerateAvailableCellDataForCells:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cf64e
- (void)paradeView:(id)arg1 didCenterCell:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000cf39f
- (void)paradeView:(id)arg1 willCenterCell:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000cef75
- (void)paradeView:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000ced98
- (id)indexPathForPreferredCenteredCellInParadeView:(id)arg1;	// IMP=0x00000000000ced86
- (id)paradeView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ceb71
- (long long)paradeView:(id)arg1 numberOfItemsForSection:(long long)arg2;	// IMP=0x00000000000cead6
- (long long)numberOfSectionsInParadeView:(id)arg1;	// IMP=0x00000000000cea68
@property(retain, nonatomic) TVViewElement *centeredViewElement;
- (id)preferredFocusEnvironments;	// IMP=0x00000000000ce3b1
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000ce278
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000ce1d4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ce152
- (void)viewDidLoad;	// IMP=0x00000000000cdf23
@property(readonly, nonatomic) __weak IKAppContext *appContext;
- (void)updateWithViewElement:(id)arg1 preferredIndexPath:(id)arg2;	// IMP=0x00000000000cdc70
- (void)dealloc;	// IMP=0x00000000000cdc00
- (id)initPrivate;	// IMP=0x00000000000cdb48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

