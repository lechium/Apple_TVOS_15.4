//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AVKit/AVInfoCollectionViewHorizontalLayoutDelegate-Protocol.h>
#import <AVKit/UICollectionViewDataSource-Protocol.h>

@class AVInfoMenuTransitioningAnimation, AVInfoPanelContentViewController, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UICollectionView, UIFocusGuide, UIView, UIVisualEffectView;
@protocol AVInfoMenuDelegate;

__attribute__((visibility("hidden")))
@interface AVInfoMenuController : UIViewController <UICollectionViewDataSource, AVInfoCollectionViewHorizontalLayoutDelegate>
{
    UIVisualEffectView *_dividerContainer;	// 8 = 0x8
    UIView *_divider;	// 16 = 0x10
    AVInfoPanelContentViewController *_selectedViewController;	// 24 = 0x18
    double _timeOfLastFocusChange;	// 32 = 0x20
    AVInfoMenuTransitioningAnimation *_transitioningAnimation;	// 40 = 0x28
    _Bool _showsSelection;	// 48 = 0x30
    id <AVInfoMenuDelegate> _delegate;	// 56 = 0x38
    NSArray *_viewControllers;	// 64 = 0x40
    UIView *_panelWrapperView;	// 72 = 0x48
    NSIndexPath *_selectedIndexPath;	// 80 = 0x50
    UICollectionView *_collectionView;	// 88 = 0x58
    NSLayoutConstraint *_panelWrapperViewHeightConstraint;	// 96 = 0x60
    double _contentHeight;	// 104 = 0x68
    UIFocusGuide *_panelDownFocusGuide;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000099eb4
@property(retain, nonatomic) UIFocusGuide *panelDownFocusGuide; // @synthesize panelDownFocusGuide=_panelDownFocusGuide;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) NSLayoutConstraint *panelWrapperViewHeightConstraint; // @synthesize panelWrapperViewHeightConstraint=_panelWrapperViewHeightConstraint;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(readonly, nonatomic) UIView *panelWrapperView; // @synthesize panelWrapperView=_panelWrapperView;
@property(nonatomic) _Bool showsSelection; // @synthesize showsSelection=_showsSelection;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak id <AVInfoMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000099d31
- (void)_interruptTransitioningAnimation;	// IMP=0x0000000000099cf2
- (_Bool)_isTransitioning;	// IMP=0x0000000000099cd5
- (void)transitionSelectionFrom:(id)arg1 to:(id)arg2 animated:(_Bool)arg3 direction:(long long)arg4;	// IMP=0x000000000009917c
- (struct CGSize)preferredSizeForViewController:(id)arg1;	// IMP=0x00000000000990bc
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000098fbf
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x0000000000098d90
- (void)_focusIndexPath:(id)arg1;	// IMP=0x0000000000098af8
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000098ae6
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000098a2b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000009883a
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000987f6
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000000987eb
- (id)_viewControllerForIndexPath:(id)arg1;	// IMP=0x0000000000098754
- (id)_firstIndexPath;	// IMP=0x0000000000098740
- (id)_indexPathForIndex:(long long)arg1;	// IMP=0x0000000000098641
- (long long)_indexForIndexPath:(id)arg1;	// IMP=0x0000000000098539
@property(retain, nonatomic) AVInfoPanelContentViewController *selectedViewController;
- (long long)_setSelectedIndex:(unsigned long long)arg1;	// IMP=0x0000000000098160
@property(nonatomic) unsigned long long selectedIndex;
- (struct CGSize)_constrainedPanelSize:(struct CGSize)arg1;	// IMP=0x000000000009807e
- (void)recalculateContentHeight;	// IMP=0x0000000000097df2
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000978be
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000976cd
- (void)viewDidLoad;	// IMP=0x00000000000960e9
- (id)divider;	// IMP=0x0000000000095fd6
- (id)dividerContainer;	// IMP=0x0000000000095eb7
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIView *menuView;
- (id)infoMenuLayout;	// IMP=0x0000000000095d8f
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x0000000000095bd9
- (id)init;	// IMP=0x0000000000095b0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
