//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIFocusEnvironment-Protocol.h>
#import <UIKitCore/UIInterfaceActionDisplayPropertyObserver-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer, UIInterfaceActionVisualBackgroundDisplaying;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionRepresentationView <UIFocusEnvironment, UIInterfaceActionDisplayPropertyObserver>
{
    _Bool _hasLoadedBackgroundView;	// 112 = 0x70
    _Bool _canKeepContentsInHierarchy;	// 113 = 0x71
    _Bool _hasLoadedContentFirstTime;	// 114 = 0x72
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisible;	// 115 = 0x73
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;	// 116 = 0x74
    _Bool _contentsInsertedIntoViewHierarchy;	// 117 = 0x75
    _Bool _ownsActionContent;	// 118 = 0x76
    _Bool _highlighted;	// 119 = 0x77
    _Bool _pressed;	// 120 = 0x78
    _Bool _canRemoveContentFromHierarchyWhenNotVisible;	// 121 = 0x79
    UIInterfaceAction *_action;	// 128 = 0x80
    unsigned long long _visualCornerPosition;	// 136 = 0x88
    id _actionViewStateContext;	// 144 = 0x90
    UIView<UIInterfaceActionVisualBackgroundDisplaying> *_backgroundHighlightView;	// 152 = 0x98
    NSLayoutConstraint *_minimumWidthConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_minimumHeightConstraint;	// 168 = 0xa8
    NSArray *_viewsToDisappearWhenHighlighted;	// 176 = 0xb0
    NSString *_sectionID;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000386ae
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) _Bool canRemoveContentFromHierarchyWhenNotVisible; // @synthesize canRemoveContentFromHierarchyWhenNotVisible=_canRemoveContentFromHierarchyWhenNotVisible;
@property(retain, nonatomic) NSArray *viewsToDisappearWhenHighlighted; // @synthesize viewsToDisappearWhenHighlighted=_viewsToDisappearWhenHighlighted;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(readonly, nonatomic) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView; // @synthesize backgroundHighlightView=_backgroundHighlightView;
@property(retain, nonatomic) id actionViewStateContext; // @synthesize actionViewStateContext=_actionViewStateContext;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(nonatomic) _Bool ownsActionContent; // @synthesize ownsActionContent=_ownsActionContent;
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
@property(nonatomic, setter=_setContentsInsertedIntoViewHierarchy:) _Bool _contentsInsertedIntoViewHierarchy; // @synthesize _contentsInsertedIntoViewHierarchy;
- (id)_actionViewState;	// IMP=0x0000000000038522
- (void)_clearBackgroundPressedState;	// IMP=0x0000000000038503
- (id)_viewDisplayingBackground;	// IMP=0x00000000000384ee
- (_Bool)_isVisibleWithinContainmentAncestor;	// IMP=0x00000000000383fb
- (_Bool)_canLoadContentsIntoHierarchy;	// IMP=0x00000000000383c7
- (void)_removeLoadedContentsFromHierarchyIfNotVisible;	// IMP=0x0000000000038374
- (void)_addLoadedContentsToHierarchyIfAllowed;	// IMP=0x000000000003832b
- (void)_addLoadedContentsToHierarchyFirstTime;	// IMP=0x0000000000038295
- (void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;	// IMP=0x000000000003826a
- (void)_loadContentsIntoHierarchyAndPrepareIfNecessary;	// IMP=0x000000000003821e
- (void)_updateHighlightAndPressedFeedback;	// IMP=0x0000000000037f61
- (_Bool)isFocused;	// IMP=0x0000000000037eec
- (void)_reloadBackgroundHighlightView;	// IMP=0x0000000000037ab6
- (void)_applyVisualStyleToBackgroundViewAndHighlighting;	// IMP=0x0000000000037aa4
- (void)_applyVisualStyleToLayoutMargins;	// IMP=0x00000000000379b4
- (void)_initializeHorizontalMarginsForAction;	// IMP=0x00000000000378ef
- (void)_setHorizontalMargins:(struct UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(_Bool)arg2;	// IMP=0x0000000000037806
- (_Bool)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;	// IMP=0x0000000000037787
- (void)_applyVisualStyleToMinimumSizeConstraints;	// IMP=0x000000000003760b
- (void)_applyVisualStyle;	// IMP=0x00000000000375d0
- (void)_didScroll;	// IMP=0x00000000000375be
- (void)_showVisualFeedbackForPressed:(_Bool)arg1;	// IMP=0x000000000003759b
- (_Bool)_shouldShowPressFeedbackForEventWithPresses:(id)arg1;	// IMP=0x00000000000374fa
- (_Bool)_handleVisualFeedbackForPress:(id)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000000374b6
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003742d
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000373a4
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000037318
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003728c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000037152
- (_Bool)canBecomeFocused;	// IMP=0x000000000003710e
- (_Bool)_showsFocusForFocusedView:(id)arg1;	// IMP=0x0000000000037098
- (struct CGRect)_fittingContentSizingViewFrameInBounds:(struct CGRect)arg1;	// IMP=0x000000000003703b
- (struct CGSize)_fittingContentSizeWithFittingViewSize:(struct CGSize)arg1;	// IMP=0x0000000000036fe0
- (struct UIEdgeInsets)_fittingContentSizingViewMargins;	// IMP=0x0000000000036fb8
- (id)_fittingContentSizingView;	// IMP=0x0000000000036faf
- (id)__fittingContentSizingViewAllowingSelf;	// IMP=0x0000000000036f6a
- (id)__fittingContentSizingViewIfNotSelf;	// IMP=0x0000000000036f26
- (void)_updateFittingContentSizingViewToFitSize;	// IMP=0x0000000000036e59
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000036e47
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000036d69
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000036cb7
- (void)layoutMarginsDidChange;	// IMP=0x0000000000036c76
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000036c09
- (void)layoutSubviews;	// IMP=0x0000000000036b08
- (void)updateConstraints;	// IMP=0x0000000000036aca
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x0000000000036ab8
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x00000000000369d2
- (void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(_Bool)arg1;	// IMP=0x000000000003698a
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;	// IMP=0x0000000000036982
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
- (void)invokeInterfaceAction;	// IMP=0x00000000000367ba
- (void)updateContentsInsertedIntoHierarchy;	// IMP=0x0000000000036791
- (void)loadContents;	// IMP=0x000000000003678b
- (void)dealloc;	// IMP=0x000000000003673f
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1;	// IMP=0x00000000000364f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

