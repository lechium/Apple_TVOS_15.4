//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/TUICandidateViewDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardCandidateList-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TUICandidateView, UIKBRenderConfig, UIKBScreenTraits, UIKeyboardCandidateInlineFloatingView, UIKeyboardCandidateViewConfiguration, UIKeyboardCandidateViewState, UIPanGestureRecognizer, UIView, UIViewPropertyAnimator;
@protocol UIKeyboardCandidateControllerDelegate, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateController : NSObject <TUICandidateViewDelegate, UIGestureRecognizerDelegate, UIKeyboardCandidateList>
{
    _Bool _inlineRectIsVertical;	// 8 = 0x8
    _Bool _adjustForLeftHandBias;	// 9 = 0x9
    _Bool _reuseArrowButtonToExpandAssistantBarItems;	// 10 = 0xa
    _Bool _darkKeyboard;	// 11 = 0xb
    _Bool _darkKeyboardChanged;	// 12 = 0xc
    id <UIKeyboardCandidateControllerDelegate> _delegate;	// 16 = 0x10
    TIKeyboardCandidateResultSet *_candidateResultSet;	// 24 = 0x18
    NSString *_inlineText;	// 32 = 0x20
    double _splitGap;	// 40 = 0x28
    long long _activeCandidateViewType;	// 48 = 0x30
    UIKBScreenTraits *_screenTraits;	// 56 = 0x38
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 64 = 0x40
    TUICandidateView *_bar;	// 72 = 0x48
    TUICandidateView *_key;	// 80 = 0x50
    TUICandidateView *_inlineView;	// 88 = 0x58
    UIKeyboardCandidateInlineFloatingView *_inlineViewContainer;	// 96 = 0x60
    NSMutableArray *_activeViews;	// 104 = 0x68
    UIKeyboardCandidateViewConfiguration *_barConfiguration;	// 112 = 0x70
    UIKeyboardCandidateViewConfiguration *_inlineConfiguration;	// 120 = 0x78
    UIKeyboardCandidateViewConfiguration *_keyConfiguration;	// 128 = 0x80
    UIKeyboardCandidateViewState *_barState;	// 136 = 0x88
    UIKeyboardCandidateViewState *_extendedBarState;	// 144 = 0x90
    UIKeyboardCandidateViewState *_extendedScrolledBarState;	// 152 = 0x98
    UIKeyboardCandidateViewState *_inlineViewState;	// 160 = 0xa0
    UIKeyboardCandidateViewState *_extendedInlineViewState;	// 168 = 0xa8
    double _additionalExtendedBarBackdropOffset;	// 176 = 0xb0
    TIKeyboardCandidate *_currentCandidate;	// 184 = 0xb8
    NSDictionary *_opacities;	// 192 = 0xc0
    double _singleSlottedCellMargin;	// 200 = 0xc8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 208 = 0xd0
    UIViewPropertyAnimator *_animator;	// 216 = 0xd8
    UIKBRenderConfig *_renderConfig;	// 224 = 0xe0
    struct CGRect _inlineRect;	// 232 = 0xe8
}

+ (double)candidateViewAnimationDuration;	// IMP=0x00000000007bceb4
+ (id)sharedInstance;	// IMP=0x00000000007b52e1
- (void).cxx_destruct;	// IMP=0x00000000007bf984
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) double singleSlottedCellMargin; // @synthesize singleSlottedCellMargin=_singleSlottedCellMargin;
@property(retain, nonatomic) NSDictionary *opacities; // @synthesize opacities=_opacities;
@property(nonatomic) _Bool darkKeyboardChanged; // @synthesize darkKeyboardChanged=_darkKeyboardChanged;
@property(nonatomic) _Bool darkKeyboard; // @synthesize darkKeyboard=_darkKeyboard;
@property(retain, nonatomic) TIKeyboardCandidate *currentCandidate; // @synthesize currentCandidate=_currentCandidate;
@property(nonatomic) double additionalExtendedBarBackdropOffset; // @synthesize additionalExtendedBarBackdropOffset=_additionalExtendedBarBackdropOffset;
@property(retain, nonatomic) UIKeyboardCandidateViewState *extendedInlineViewState; // @synthesize extendedInlineViewState=_extendedInlineViewState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *inlineViewState; // @synthesize inlineViewState=_inlineViewState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *extendedScrolledBarState; // @synthesize extendedScrolledBarState=_extendedScrolledBarState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *extendedBarState; // @synthesize extendedBarState=_extendedBarState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *barState; // @synthesize barState=_barState;
@property(retain, nonatomic) UIKeyboardCandidateViewConfiguration *keyConfiguration; // @synthesize keyConfiguration=_keyConfiguration;
@property(retain, nonatomic) UIKeyboardCandidateViewConfiguration *inlineConfiguration; // @synthesize inlineConfiguration=_inlineConfiguration;
@property(retain, nonatomic) UIKeyboardCandidateViewConfiguration *barConfiguration; // @synthesize barConfiguration=_barConfiguration;
@property(retain, nonatomic) NSMutableArray *activeViews; // @synthesize activeViews=_activeViews;
@property(retain, nonatomic) UIKeyboardCandidateInlineFloatingView *inlineViewContainer; // @synthesize inlineViewContainer=_inlineViewContainer;
@property(retain, nonatomic) TUICandidateView *inlineView; // @synthesize inlineView=_inlineView;
@property(retain, nonatomic) TUICandidateView *key; // @synthesize key=_key;
@property(retain, nonatomic) TUICandidateView *bar; // @synthesize bar=_bar;
@property(nonatomic) __weak id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(retain, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
@property(nonatomic) long long activeCandidateViewType; // @synthesize activeCandidateViewType=_activeCandidateViewType;
@property(nonatomic) double splitGap; // @synthesize splitGap=_splitGap;
@property(nonatomic) _Bool reuseArrowButtonToExpandAssistantBarItems; // @synthesize reuseArrowButtonToExpandAssistantBarItems=_reuseArrowButtonToExpandAssistantBarItems;
@property(nonatomic) _Bool adjustForLeftHandBias; // @synthesize adjustForLeftHandBias=_adjustForLeftHandBias;
@property(nonatomic) _Bool inlineRectIsVertical; // @synthesize inlineRectIsVertical=_inlineRectIsVertical;
@property(nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property(copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property(nonatomic) __weak id <UIKeyboardCandidateControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dimKeys:(id)arg1;	// IMP=0x00000000007bf583
- (void)_setRenderConfig:(id)arg1;	// IMP=0x00000000007bf505
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 generateFeedback:(_Bool)arg5;	// IMP=0x00000000007bf3f6
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4;	// IMP=0x00000000007bf3d4
- (void)candidateViewNeedsToExpand:(id)arg1;	// IMP=0x00000000007bf2ca
- (void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2;	// IMP=0x00000000007bf22d
- (void)candidateViewWillBeginDragging:(id)arg1;	// IMP=0x00000000007bf01e
- (void)candidateViewDidTapInlineText:(id)arg1;	// IMP=0x00000000007bee37
- (void)candidateViewDidTapArrowButton:(id)arg1;	// IMP=0x00000000007bec0f
- (id)secureCandidateRenderTraits;	// IMP=0x00000000007be201
- (long long)rowForCandidateAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007be179
- (long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007be0f1
- (id)candidateAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007bdffd
- (id)candidates;	// IMP=0x00000000007bdfeb
- (void)revealHiddenCandidates;	// IMP=0x00000000007bde32
- (void)candidatesDidChange;	// IMP=0x00000000007bdde2
- (unsigned long long)selectedSortIndex;	// IMP=0x00000000007bdd9e
- (id)statisticsIdentifier;	// IMP=0x00000000007bdb43
- (id)keyboardBehaviors;	// IMP=0x00000000007bdad7
- (_Bool)hasCandidates;	// IMP=0x00000000007bda93
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007bda7f
- (unsigned long long)currentIndex;	// IMP=0x00000000007bd94b
- (_Bool)handleTabKeyWithShift:(_Bool)arg1;	// IMP=0x00000000007bd86c
- (_Bool)handleNumberKey:(unsigned long long)arg1;	// IMP=0x00000000007bd7fe
- (void)acceptSelectedCandidate;	// IMP=0x00000000007bd70c
- (void)showCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;	// IMP=0x00000000007bd645
- (_Bool)hasCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;	// IMP=0x00000000007bd5ed
- (_Bool)showCandidate:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;	// IMP=0x00000000007bd512
- (_Bool)showCandidate:(id)arg1;	// IMP=0x00000000007bd4fb
- (void)showCandidateAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;	// IMP=0x00000000007bd45a
- (void)showCandidateAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007bd443
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;	// IMP=0x00000000007bd3eb
- (_Bool)isFloatingList;	// IMP=0x00000000007bd3d2
- (_Bool)isExtendedList;	// IMP=0x00000000007bd366
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6;	// IMP=0x00000000007bd0bd
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;	// IMP=0x00000000007bd09d
- (long long)layoutDirectionForCurrentInputMode;	// IMP=0x00000000007bd00e
- (void)resetSortControlIndexAfterCandidatesChanged;	// IMP=0x00000000007bce79
- (void)clearCurrentCandidate;	// IMP=0x00000000007bccd4
- (void)panGestureRecognizerAction:(id)arg1;	// IMP=0x00000000007bc4df
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000007bc2b7
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000007bc1c6
- (void)setupPanGestureRecognizerIfNeeded;	// IMP=0x00000000007bbfd4
- (id)snapshot;	// IMP=0x00000000007bbf3b
- (void)removeInlineView;	// IMP=0x00000000007bbe2e
- (void)collapse;	// IMP=0x00000000007bbd73
- (void)toggleInlineViewExtendedAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007bbb5c
- (void)toggleBarExtendedWithAnimator:(id)arg1;	// IMP=0x00000000007baa83
- (void)toggleBarExtendedUnanimated;	// IMP=0x00000000007ba79c
- (void)toggleBarExtended;	// IMP=0x00000000007ba5fd
- (void)extendKeyboardBackdropHeight:(double)arg1;	// IMP=0x00000000007ba4de
- (void)setupAnimatorWithCurve:(long long)arg1;	// IMP=0x00000000007ba34b
@property(readonly, nonatomic) _Bool isExtended;
@property(readonly, nonatomic) _Bool inlineViewIsExtended;
@property(readonly, nonatomic) _Bool barIsExtended;
- (struct CGSize)maximumSizeForInlineView;	// IMP=0x00000000007ba019
- (struct UIEdgeInsets)candidateBarEdgeInsetsForOrientation:(long long)arg1;	// IMP=0x00000000007b9f4b
- (double)candidateBarHeightForOrientation:(long long)arg1;	// IMP=0x00000000007b9e5d
- (double)candidateBarHeight;	// IMP=0x00000000007b9df9
- (double)candidateBarWidth;	// IMP=0x00000000007b9da9
- (double)rowHeightForBarForOrientation:(long long)arg1;	// IMP=0x00000000007b9a9b
- (void)updateOpacitiesToState:(id)arg1;	// IMP=0x00000000007b96a7
- (void)updateStatesForKey;	// IMP=0x00000000007b92e9
- (void)updateStatesForInlineView;	// IMP=0x00000000007b888d
- (void)updateStatesForBar;	// IMP=0x00000000007b6773
- (_Bool)shouldShowDisambiguationCandidatesInExtendedView;	// IMP=0x00000000007b6761
- (_Bool)shouldShowDisambiguationCandidates;	// IMP=0x00000000007b6666
- (_Bool)shouldShowSortControlForConfiguration:(id)arg1;	// IMP=0x00000000007b65dc
- (void)updateStates;	// IMP=0x00000000007b6594
- (void)updateStyles;	// IMP=0x00000000007b64ae
- (void)loadDefaultStates;	// IMP=0x00000000007b6395
- (void)updateConfigurations;	// IMP=0x00000000007b5bbb
- (id)firstNonEmptyActiveCandidateView;	// IMP=0x00000000007b59c4
- (long long)candidateViewTypeForView:(id)arg1;	// IMP=0x00000000007b5979
@property(readonly, nonatomic) NSArray *activeCandidateViews;
- (id)newCandidateKeyWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x00000000007b574e
- (id)loadInlineCandidateView;	// IMP=0x00000000007b55ad
- (id)loadCandidateBar;	// IMP=0x00000000007b545a
@property(readonly, nonatomic) UIView *inlineCandidateView;
@property(readonly, nonatomic) UIView *candidateKey;
@property(readonly, nonatomic) UIView *candidateBar;
- (void)dealloc;	// IMP=0x00000000007b53d5
- (id)init;	// IMP=0x00000000007b5366

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
