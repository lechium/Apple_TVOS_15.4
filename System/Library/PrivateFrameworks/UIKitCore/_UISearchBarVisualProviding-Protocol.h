//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIBarButtonItem, UIButton, UIColor, UIImage, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBar, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UITextField, UIView, UIVisualEffectView, _UIBackdropView, _UIBarButtonItemAppearanceStorage, _UIBarInsertLayoutData, _UINavigationBarTitleViewOverlayRects, _UISearchBarScopeBarBackground;
@protocol _UINavigationBarTitleViewDataSource, _UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private;

@protocol _UISearchBarVisualProviding <NSObject>
@property(nonatomic) __weak id searchDisplayController;
@property(readonly, nonatomic) UINavigationItem *searchNavigationItem;
@property(readonly, nonatomic) UIBarButtonItem *animatedAppearanceBarButtonItem;
@property(nonatomic) _Bool allowsInlineScopeBar;
@property(readonly, nonatomic) _Bool backgroundLayoutNeedsUpdate;
@property(nonatomic) _Bool drawsBackgroundInPalette;
@property(readonly, nonatomic, getter=isLegacy) _Bool legacy;
@property(retain, nonatomic) _UINavigationBarTitleViewOverlayRects *navBarTitleViewOverlayRects;
@property(nonatomic) long long navBarTitleViewLocation;
@property(nonatomic) __weak id <_UINavigationBarTitleViewDataSource> navBarTitleViewDataSource;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) double scopeBarHeight;
@property(readonly, nonatomic) double searchFieldHeight;
@property(nonatomic) double tableViewIndexWidth;
@property(readonly, nonatomic) _Bool alwaysUsesLayoutMarginsForHorizontalContentInset;
@property(readonly, nonatomic) struct UIEdgeInsets scopeBarInsets;
@property(readonly, nonatomic) struct UIEdgeInsets effectiveContentInset;
@property(nonatomic) struct UIEdgeInsets minimumContentInset;
@property(readonly, nonatomic) UIColor *textColor;
@property(nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;
@property(retain, nonatomic) UIImage *separatorImage;
@property(readonly, nonatomic, getter=isFrozenForDismissalCrossfade) _Bool frozenForDismissalCrossfade;
@property(nonatomic, getter=isHostedByNavigationBar) _Bool hostedByNavigationBar;
@property(nonatomic, getter=isInNavigationPalette) _Bool inNavigationPalette;
@property(nonatomic, getter=isPlacedInToolbar) _Bool placedInToolbar;
@property(nonatomic, getter=isPlacedInNavigationBar) _Bool placedInNavigationBar;
@property(nonatomic) long long selectedScope;
@property(readonly, nonatomic) _Bool scopeBarIsVisible;
@property(nonatomic) _Bool showsScopeBar;
@property(nonatomic) _Bool showsBookmarkButton;
@property(nonatomic, getter=isSearchResultsButtonSelected) _Bool searchResultsButtonSelected;
@property(nonatomic) _Bool showsSearchResultsButton;
@property(nonatomic) _Bool cancelButtonWantsLetterpress;
@property(nonatomic) _Bool autoDisableCancelButton;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool usesEmbeddedAppearance;
@property(nonatomic) _Bool drawsBackground;
@property(nonatomic) _Bool reliesOnNavigationBarBackdrop;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) _Bool centerPlaceholder;
@property(nonatomic) long long searchFieldLeftViewMode;
@property(nonatomic) unsigned long long scopeBarPosition;
@property(nonatomic) long long barPosition;
@property(retain, nonatomic) UIColor *barTintColor;
@property(nonatomic) unsigned long long backdropStyle;
@property(nonatomic) long long barTranslucence;
@property(nonatomic) unsigned long long searchBarStyle;
@property(nonatomic) long long barStyle;
@property(copy, nonatomic) NSString *cancelButtonText;
@property(copy, nonatomic) NSArray *scopeTitles;
@property(copy, nonatomic) NSString *prompt;
@property(readonly, nonatomic) UIImageView *shadowView;
@property(readonly, nonatomic) UIView *searchBarClippingView;
@property(retain, nonatomic) _UISearchBarScopeBarBackground *scopeBarBackgroundView;
@property(readonly, nonatomic) UIView *scopeBarContainerView;
@property(retain, nonatomic) UISegmentedControl *scopeBar;
@property(retain, nonatomic) UIImageView *separator;
@property(retain, nonatomic) UILabel *promptLabel;
@property(readonly, nonatomic) UINavigationButton *leftButton;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property(retain, nonatomic) UIButton *cancelButton;
@property(retain, nonatomic) UIVisualEffectView *backdropVisualEffectView;
@property(retain, nonatomic) _UIBackdropView *backdrop;
@property(retain, nonatomic) UISearchBarBackground *searchBarBackground;
@property(readonly, nonatomic) UITextField *searchFieldIfExists;
@property(retain, nonatomic) UISearchBarTextField *searchField;
@property(nonatomic) UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> *delegate;
@property(readonly, copy, nonatomic) NSArray *runtimeOnlyViews;
- (void)setClippingViewBounds:(struct CGRect)arg1;
- (void)setClippingViewActive:(_Bool)arg1;
- (void)updateBackgroundToBackdropStyle:(long long)arg1;
- (_Bool)isInBarButNotHosted;
- (void)setBackgroundLayoutNeedsUpdate;
- (_Bool)wantsDictationButton;
- (void)setDisableDictationButton:(_Bool)arg1;
- (void)setSearchDisplayControllerShowsCancelButton:(_Bool)arg1;
- (void)setUpCancelButtonWithAppearance:(_UIBarButtonItemAppearanceStorage *)arg1;
- (void)setShadowVisibleIfNecessary:(_Bool)arg1;
- (UIImageView *)makeShadowView;
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(_UIBarInsertLayoutData *)arg1 collapsibleScopeBar:(_UIBarInsertLayoutData *)arg2 forLayoutState:(long long)arg3;
- (double)navigationBarContentHeight;
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets)arg2;
- (double)barHeightForBarMetrics:(long long)arg1;
- (long long)barMetricsForOrientation:(long long)arg1;
- (_Bool)wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;
- (_Bool)shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (void)allowCursorToAppear:(_Bool)arg1;
- (void)updateScopeBarBackground;
- (void)updateIfNecessaryForOldSize:(struct CGSize)arg1;
- (void)updateSearchFieldArt;
- (void)updateSearchBarOpacity;
- (void)updateScopeBarForSelectedScope;
- (void)updateDictationButton;
- (void)updateMagnifyingGlassView;
- (void)updateForDrawsBackgroundInPalette;
- (void)_setShowsScopeBar:(_Bool)arg1;
- (void)_setHideBackground:(_Bool)arg1;
- (void)_setSearchResultsButtonSelected:(_Bool)arg1;
- (void)_setShowsSearchResultsButton:(_Bool)arg1;
- (void)_setShowsBookmarkButton:(_Bool)arg1;
- (void)_setShowsCancelButton:(_Bool)arg1;
- (void)_setAutoDisableCancelButton:(_Bool)arg1;
- (void)_setBarTranslucence:(long long)arg1;
- (void)_setBarTintColor:(UIColor *)arg1;
- (void)_setBarStyle:(long long)arg1;
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)defaultHeightForOrientation:(long long)arg1;
- (void)updateEffectiveContentInset;
- (void)getOverrideContentInsets:(struct UIEdgeInsets *)arg1 overriddenEdges:(unsigned long long *)arg2;
- (void)setOverrideContentInsets:(struct UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2;
- (void)updatePlaceholderColor;
- (UIColor *)effectiveBarTintColor;
- (void)setBarTintColor:(UIColor *)arg1 forceUpdate:(_Bool)arg2;
- (UIColor *)colorForComponent:(unsigned long long)arg1 disabled:(_Bool)arg2;
- (UIImage *)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(UIImage *)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (UIImage *)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(_Bool *)arg3;
- (UIImage *)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (void)setImage:(UIImage *)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
- (UIImage *)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (void)setSearchFieldBackgroundImage:(UIImage *)arg1 forState:(unsigned long long)arg2;
- (void)updateForSemanticContext;
- (void)updateForDynamicType;
- (void)applySearchBarStyle;
- (void)updateRightView;
- (void)setUpScopeBar;
- (void)setShowsDeleteButton:(_Bool)arg1;
- (void)setShowsSeparator:(_Bool)arg1;
- (void)layoutSubviews;
- (void)invalidateLayout;
- (void)setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHelperPlaceholderHidden:(_Bool)arg1;
- (void)setHelperPlaceholderOverride:(NSAttributedString *)arg1;
- (void)setHelperPlaceholder:(NSAttributedString *)arg1;
- (void)destroyCancelButton;
- (void)teardown;
- (void)setUpSearchField;
- (void)setUpPromptLabel;
- (void)prepare;
- (id)initWithDelegate:(UISearchBar *)arg1;
@end
