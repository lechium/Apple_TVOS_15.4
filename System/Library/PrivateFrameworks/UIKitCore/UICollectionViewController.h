//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UICollectionViewDelegate-Protocol.h>
#import <UIKitCore/UICollectionViewFocusDelegate_Legacy-Protocol.h>
#import <UIKitCore/_UIKeyboardAutoRespondingScrollViewController-Protocol.h>

@class NSString, UIAutoRespondingScrollViewControllerKeyboardSupport, UICollectionView, UICollectionViewLayout, UILongPressGestureRecognizer, UIScrollView;
@protocol _UIKeyboardAutoRespondingScrollView;

@interface UICollectionViewController <_UIKeyboardAutoRespondingScrollViewController, UICollectionViewFocusDelegate_Legacy, UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionViewLayout *_layout;	// 400 = 0x190
    UICollectionView *_collectionView;	// 408 = 0x198
    UILongPressGestureRecognizer *_reorderingGesture;	// 416 = 0x1a0
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;	// 424 = 0x1a8
    struct {
        unsigned int clearsSelectionOnViewWillAppear:1;
        unsigned int useLayoutToLayoutNavigationTransitions:1;
        unsigned int installsStandardReorderingGesture:1;
    } _collectionViewControllerFlags;	// 432 = 0x1b0
}

- (void).cxx_destruct;	// IMP=0x00000000003c9cc6
@property(readonly, retain, nonatomic, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
- (void)_handleReorderingGesture:(id)arg1;	// IMP=0x00000000003c9b86
- (void)_installReorderingGestureIfNecessary;	// IMP=0x00000000003c9aa7
@property(nonatomic) _Bool installsStandardGestureForInteractiveMovement;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003c98ab
- (id)preferredFocusedView;	// IMP=0x00000000003c9896
@property(nonatomic) _Bool useLayoutToLayoutNavigationTransitions;
- (void)_setUseLayoutToLayoutNavigationTransitions:(_Bool)arg1 withCheck:(_Bool)arg2;	// IMP=0x00000000003c975b
- (_Bool)shouldCrossFadeBottomBars;	// IMP=0x00000000003c973f
- (_Bool)shouldCrossFadeNavigationBar;	// IMP=0x00000000003c9737
- (id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x00000000003c9664
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x00000000003c9602
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000003c95fa
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000003c95f2
- (id)dataSource;	// IMP=0x00000000003c9535
- (id)delegate;	// IMP=0x00000000003c952c
@property(retain, nonatomic) UICollectionView *collectionView;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x00000000003c92a7
- (id)_shim_contentScrollView;	// IMP=0x00000000003c91ce
- (id)_uiCollectionView;	// IMP=0x00000000003c91bc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000003c90da
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003c8e8e
- (void)__viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003c8e4d
- (void)__viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003c8d1a
- (void)_updateCollectionViewLayoutAndDelegate:(id)arg1;	// IMP=0x00000000003c8b24
- (void)viewWillUnload;	// IMP=0x00000000003c8a78
- (void)_clearSharedView;	// IMP=0x00000000003c8a19
- (void)_setSharedCollectionView:(id)arg1;	// IMP=0x00000000003c8a05
- (void)setView:(id)arg1;	// IMP=0x00000000003c899a
- (void)loadView;	// IMP=0x00000000003c8388
- (id)_wrappingView;	// IMP=0x00000000003c8124
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003c804b
- (void)dealloc;	// IMP=0x00000000003c7fc3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003c7ec8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000003c7e99
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x00000000003c7e11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

