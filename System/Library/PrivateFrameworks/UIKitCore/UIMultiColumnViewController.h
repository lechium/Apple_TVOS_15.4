//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, UIBarButtonItem, UIImage;
@protocol UIMultiColumnViewControllerDelegate;

@interface UIMultiColumnViewController
{
    unsigned long long _lastColumnCount;	// 400 = 0x190
    unsigned long long _animatingTargetColumnCount;	// 408 = 0x198
    UIBarButtonItem *_showSecondColumnBarButtonItem;	// 416 = 0x1a0
    UIBarButtonItem *_hideSecondColumnBarButtonItem;	// 424 = 0x1a8
    struct {
        unsigned int updatingNavControllerChildren:1;
        unsigned int animatingItem1LeftBarButton:1;
        unsigned int lastColumnCountIsValid:1;
        unsigned int animatingSplitToWidth:1;
    } _mcvcFlags;	// 432 = 0x1b0
    NSMutableArray *_borderViews;	// 440 = 0x1b8
    struct CGRect _lastFrameInWindow;	// 448 = 0x1c0
    struct CGSize _containerSizeAtLastUpdate;	// 480 = 0x1e0
    NSArray *_possibleStatesAtLastUpdate;	// 496 = 0x1f0
    id <UIMultiColumnViewControllerDelegate> _delegate;	// 504 = 0x1f8
    NSArray *_viewControllers;	// 512 = 0x200
    NSArray *_navControllers;	// 520 = 0x208
    double _keyboardInset;	// 528 = 0x210
    NSArray *_columnWidths;	// 536 = 0x218
    UIImage *__columnToggleButtonImage;	// 544 = 0x220
}

- (void).cxx_destruct;	// IMP=0x0000000000446cfc
@property(retain, nonatomic, setter=_setColumnToggleButtonImage:) UIImage *_columnToggleButtonImage; // @synthesize _columnToggleButtonImage=__columnToggleButtonImage;
@property(retain, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(nonatomic) double keyboardInset; // @synthesize keyboardInset=_keyboardInset;
@property(retain, nonatomic) NSArray *navControllers; // @synthesize navControllers=_navControllers;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak id <UIMultiColumnViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x00000000004465cf
- (void)_hideSecondColumn:(id)arg1;	// IMP=0x00000000004465b3
- (void)_showSecondColumn:(id)arg1;	// IMP=0x000000000044650d
- (id)_secondColumnBarButtonItem:(long long)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x00000000004463c1
- (unsigned long long)_columnCountForPossibleStates:(id)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x000000000044614a
- (_Bool)_allowMultipleColumnsForPossibleStates:(id)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x0000000000445f5b
- (_Bool)sizeMightAllowMultipleColumns:(struct CGSize)arg1;	// IMP=0x0000000000445eb6
- (void)_updateButtonsForColumnCount:(unsigned long long)arg1 animatingChange:(_Bool)arg2;	// IMP=0x00000000004459c9
- (id)_removeSecondColumnBarButton:(long long)arg1 fromNavItem:(id)arg2;	// IMP=0x00000000004458b9
- (id)_addSecondColumnBarButton:(long long)arg1 toNavItem:(id)arg2;	// IMP=0x0000000000445794
- (void)_moveViewControllersForColumnCount:(unsigned long long)arg1;	// IMP=0x000000000044549b
- (void)_willShowColumnCount:(unsigned long long)arg1;	// IMP=0x0000000000445415
- (_Bool)_canShowColumnIndex:(unsigned long long)arg1;	// IMP=0x00000000004453c1
- (id)_liveVCs;	// IMP=0x000000000044527f
- (id)_contentSizesForColumnWidths:(id)arg1;	// IMP=0x000000000044508b
- (double)_unsafeAreaPaddingForFirstVisibleColumn;	// IMP=0x0000000000444fe6
- (id)_possibleContentSizes;	// IMP=0x0000000000444f69
- (id)_effectiveColumnWidths;	// IMP=0x0000000000444eb2
- (void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg1;	// IMP=0x0000000000444be7
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// IMP=0x0000000000444aba
- (id)_splitViewControllerImageForDisplayModeButtonToShowPrimary:(id)arg1;	// IMP=0x00000000004449ae
- (id)_sideBarImage;	// IMP=0x000000000044498e
- (void)_splitViewControllerDidUpdate:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x000000000044457a
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;	// IMP=0x00000000004444e2
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x00000000004444b8
- (void)_navigationControllerChangedViewControllers:(id)arg1;	// IMP=0x0000000000444454
- (id)_navigationBarForDragAffordance;	// IMP=0x00000000004443da
- (void)_setAllowNestedNavigationControllers:(_Bool)arg1;	// IMP=0x000000000044427d
- (id)_preferredContentSizes;	// IMP=0x000000000044417c
@property(readonly, nonatomic) unsigned long long columnCount;
- (void)requestColumnCount:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000443da6
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;	// IMP=0x000000000044361c
- (void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x00000000004434cb
- (void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1;	// IMP=0x000000000044346e
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x000000000044316a
- (id)title;	// IMP=0x00000000004430f0
- (id)childViewControllerForStatusBarStyle;	// IMP=0x00000000004430a0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000044303e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000442f4a
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000441b70
- (void)dealloc;	// IMP=0x0000000000441afb
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2;	// IMP=0x00000000004416a8
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2 columnWidths:(id)arg3;	// IMP=0x0000000000441696

@end
