//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAKeyframeAnimation, NSArray, UITextInteractionAssistant, UITextRangeView, UITextSelection, UIView;

__attribute__((visibility("hidden")))
@interface UITextSelectionView
{
    UITextInteractionAssistant *m_interactionAssistant;	// 112 = 0x70
    UITextSelection *m_selection;	// 120 = 0x78
    UIView *m_caretView;	// 128 = 0x80
    UIView *m_floatingCaretView;	// 136 = 0x88
    UITextRangeView *m_rangeView;	// 144 = 0x90
    _Bool m_caretBlinks;	// 152 = 0x98
    _Bool m_caretShowingNow;	// 153 = 0x99
    _Bool m_caretAnimating;	// 154 = 0x9a
    _Bool m_ghostApperarance;	// 155 = 0x9b
    _Bool m_caretVisible;	// 156 = 0x9c
    _Bool m_visible;	// 157 = 0x9d
    _Bool m_activated;	// 158 = 0x9e
    _Bool m_wasShowingCommands;	// 159 = 0x9f
    _Bool m_delayShowingCommands;	// 160 = 0xa0
    _Bool m_dictationReplacementsMode;	// 161 = 0xa1
    _Bool m_shouldEmphasizeNextSelectionRects;	// 162 = 0xa2
    int m_showingCommandsCounter;	// 164 = 0xa4
    NSArray *m_replacements;	// 168 = 0xa8
    _Bool m_deferSelectionCommands;	// 176 = 0xb0
    struct __CFRunLoopObserver *m_observer;	// 184 = 0xb8
    _Bool m_activeCaret;	// 192 = 0xc0
    _Bool m_isSuspended;	// 193 = 0xc1
    int m_showingCommandsCounterForRotate;	// 196 = 0xc4
    unsigned long long _activeGrabberSuppressionAssertions;	// 200 = 0xc8
    CAKeyframeAnimation *_caretBlinkAnimation;	// 208 = 0xd0
    id _floatingCaretBlinkAssertion;	// 216 = 0xd8
    unsigned long long _viewDidCommitNotification;	// 224 = 0xe0
    unsigned long long _viewDidStopNotification;	// 232 = 0xe8
    _Bool m_forceRangeView;	// 240 = 0xf0
    _Bool m_isInstalledInSelectionContainerView;	// 241 = 0xf1
    _Bool _isIndirectFloatingCaret;	// 242 = 0xf2
    struct CGRect _stashedCaretRect;	// 248 = 0xf8
    struct CGRect _previousGhostCaretRect;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000000e49962
@property(nonatomic) struct CGRect previousGhostCaretRect; // @synthesize previousGhostCaretRect=_previousGhostCaretRect;
@property(nonatomic) _Bool isIndirectFloatingCaret; // @synthesize isIndirectFloatingCaret=_isIndirectFloatingCaret;
@property(nonatomic) struct CGRect stashedCaretRect; // @synthesize stashedCaretRect=_stashedCaretRect;
@property(readonly, nonatomic) _Bool isInstalledInSelectionContainerView; // @synthesize isInstalledInSelectionContainerView=m_isInstalledInSelectionContainerView;
@property(retain, nonatomic) NSArray *replacements; // @synthesize replacements=m_replacements;
@property(nonatomic) _Bool forceRangeView; // @synthesize forceRangeView=m_forceRangeView;
@property(readonly, nonatomic) __weak UITextInteractionAssistant *interactionAssistant; // @synthesize interactionAssistant=m_interactionAssistant;
@property(readonly, nonatomic) UIView *floatingCaretView; // @synthesize floatingCaretView=m_floatingCaretView;
- (struct CGRect)clippedTargetRect:(struct CGRect)arg1;	// IMP=0x0000000000e49183
- (id)scrollView;	// IMP=0x0000000000e4912c
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e49108
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e490e4
- (void)didRotate:(id)arg1;	// IMP=0x0000000000e49048
- (void)willRotate:(id)arg1;	// IMP=0x0000000000e48f54
- (void)scaleDidChange:(id)arg1;	// IMP=0x0000000000e48edf
- (void)scaleWillChange:(id)arg1;	// IMP=0x0000000000e48e6a
- (void)doneMagnifying;	// IMP=0x0000000000e48dc2
- (void)prepareForMagnification;	// IMP=0x0000000000e48d1a
- (void)layoutChangedByScrolling:(_Bool)arg1;	// IMP=0x0000000000e48cec
- (struct CGRect)selectionBoundingBoxForRects:(id)arg1;	// IMP=0x0000000000e488cc
- (struct CGRect)selectionBoundingBox;	// IMP=0x0000000000e487e6
@property(readonly, nonatomic) UITextSelection *selection;
@property(readonly, nonatomic) UITextRangeView *rangeView;
- (void)updateDocumentHasContent:(_Bool)arg1;	// IMP=0x0000000000e4860a
- (id)dynamicCaretList;	// IMP=0x0000000000e485c3
- (id)dynamicCaret;	// IMP=0x0000000000e48579
- (void)releaseGrabberHandleSuppressionAssertion:(id)arg1;	// IMP=0x0000000000e4843e
- (_Bool)shouldSuppressSelectionHandles;	// IMP=0x0000000000e48429
- (id)obtainGrabberSuppressionAssertion;	// IMP=0x0000000000e483e8
- (void)endFloatingCursor;	// IMP=0x0000000000e48184
- (void)endFloatingCaretView;	// IMP=0x0000000000e47fcc
- (void)animateCaret:(id)arg1 toPosition:(struct CGPoint)arg2 withSize:(struct CGSize)arg3;	// IMP=0x0000000000e47c3f
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;	// IMP=0x0000000000e474aa
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e4748d
- (struct CGPoint)floatingCursorPositionForPoint:(struct CGPoint)arg1 lineSnapping:(_Bool)arg2;	// IMP=0x0000000000e47053
- (struct CGPoint)floatingCursorPositionForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e4703c
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e46d06
- (_Bool)_shouldUseIndirectFloatingCaret;	// IMP=0x0000000000e46cb1
- (void)willBeginFloatingCursor:(_Bool)arg1;	// IMP=0x0000000000e46be6
- (void)animatePulsingDirectCaret:(id)arg1;	// IMP=0x0000000000e4692f
- (void)animatePulsingIndirectCaret:(id)arg1;	// IMP=0x0000000000e466dc
- (void)beginFloatingCaretView;	// IMP=0x0000000000e46026
- (_Bool)point:(struct CGPoint)arg1 isNearCursorRect:(struct CGRect)arg2;	// IMP=0x0000000000e45fc8
@property(readonly, nonatomic) UIView *caretView; // @synthesize caretView=m_caretView;
- (id)floatingCaretViewColor;	// IMP=0x0000000000e45e29
- (id)caretViewColor;	// IMP=0x0000000000e45cf5
- (id)ghostCaretViewColor;	// IMP=0x0000000000e45c7b
- (void)_setCaretBlinkAnimationEnabled:(_Bool)arg1;	// IMP=0x0000000000e45a91
- (void)_showCaret:(int)arg1;	// IMP=0x0000000000e458d9
- (void)showCaret:(int)arg1;	// IMP=0x0000000000e45885
- (void)showInitialCaret;	// IMP=0x0000000000e45790
- (void)animateExpanderOn:(id)arg1;	// IMP=0x0000000000e4513d
- (void)animateBoxShrinkOn:(id)arg1;	// IMP=0x0000000000e44d6e
- (void)_hideCaret:(int)arg1;	// IMP=0x0000000000e44bae
- (void)hideCaret:(int)arg1;	// IMP=0x0000000000e44b9c
- (void)clearCaret;	// IMP=0x0000000000e44b11
- (_Bool)activeCaret;	// IMP=0x0000000000e44b01
- (void)configureForPencilDeletionPreviewMode;	// IMP=0x0000000000e44abf
- (void)configureForPencilHighlightMode;	// IMP=0x0000000000e44a7d
- (void)configureForReplacementMode;	// IMP=0x0000000000e44a22
- (void)configureForHighlightMode;	// IMP=0x0000000000e449e0
- (void)configureForSelectionMode;	// IMP=0x0000000000e449a1
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e44769
@property(readonly, nonatomic) _Bool selectionCommandsShowing;
- (void)hideSelectionCommands;	// IMP=0x0000000000e446e9
- (void)hideSelectionCommandsAfterDelay:(double)arg1;	// IMP=0x0000000000e446a0
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;	// IMP=0x0000000000e443ea
- (void)calculateReplacementsWithGenerator:(id)arg1 andShowAfterDelay:(double)arg2;	// IMP=0x0000000000e4437a
- (void)_showSelectionCommandsForContextMenu:(_Bool)arg1;	// IMP=0x0000000000e44238
- (void)updateRangeViewForSelectionMode;	// IMP=0x0000000000e441f9
- (void)showSelectionCommands;	// IMP=0x0000000000e441e5
- (void)showSelectionCommandsAfterDelay:(double)arg1;	// IMP=0x0000000000e44123
- (void)showCalloutBarAfterDelay:(double)arg1;	// IMP=0x0000000000e43fcc
- (void)cancelDelayedCommandRequests;	// IMP=0x0000000000e43f9a
- (void)updateSelectionCommands;	// IMP=0x0000000000e43dd5
- (void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(_Bool)arg2 forDictation:(_Bool)arg3 rectsToEvade:(id)arg4;	// IMP=0x0000000000e434d5
- (void)_showCommandsWithReplacements:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;	// IMP=0x0000000000e432c4
- (void)showCommandsWithReplacements:(id)arg1;	// IMP=0x0000000000e432ad
- (_Bool)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2 rectsToEvade:(id)arg3;	// IMP=0x0000000000e42a5c
@property(nonatomic) _Bool ghostAppearance;
@property(nonatomic) _Bool caretVisible;
@property(nonatomic) _Bool caretBlinks; // @synthesize caretBlinks=m_caretBlinks;
@property(nonatomic) _Bool visible; // @synthesize visible=m_visible;
- (void)appearOrFadeIfNecessary;	// IMP=0x0000000000e42648
- (_Bool)shouldBeVisible;	// IMP=0x0000000000e42640
- (void)updateSelectionDots;	// IMP=0x0000000000e42586
- (void)updateSelectionRectsIfNeeded;	// IMP=0x0000000000e4250a
- (void)deferredUpdateSelectionCommands;	// IMP=0x0000000000e424ed
- (void)setEmphasisOnNextSelectionRects;	// IMP=0x0000000000e424dc
- (void)deferredUpdateSelectionRects;	// IMP=0x0000000000e423bf
- (void)wilLResume:(id)arg1;	// IMP=0x0000000000e423a2
- (void)didSuspend:(id)arg1;	// IMP=0x0000000000e42391
- (void)tintColorDidChange;	// IMP=0x0000000000e4230d
- (void)updateSelectionRects;	// IMP=0x0000000000e411fa
- (void)selectionChanged;	// IMP=0x0000000000e40e75
- (id)_actingParentViewForGestureRecognizers;	// IMP=0x0000000000e40deb
- (void)installIfNecessary;	// IMP=0x0000000000e40ce6
- (id)_customSelectionContainerView;	// IMP=0x0000000000e40bda
- (_Bool)_viewUsesAsynchronousProtocol;	// IMP=0x0000000000e40b96
- (void)clearRangeAnimated:(_Bool)arg1;	// IMP=0x0000000000e40b79
- (void)removeFromSuperview;	// IMP=0x0000000000e409b7
- (void)textSelectionViewActivated:(id)arg1;	// IMP=0x0000000000e4083d
- (void)selectionDidTranslateForReachability:(id)arg1;	// IMP=0x0000000000e4081c
- (void)selectionWillTranslateForReachability:(id)arg1;	// IMP=0x0000000000e407c8
- (void)inputViewDidAnimate;	// IMP=0x0000000000e406c8
- (void)inputViewWillAnimate;	// IMP=0x0000000000e40620
- (void)inputViewDidMove;	// IMP=0x0000000000e405ff
- (void)inputViewWillMove:(id)arg1;	// IMP=0x0000000000e40478
- (void)inputViewDidChange;	// IMP=0x0000000000e403f9
- (void)inputViewWillChange;	// IMP=0x0000000000e40352
- (_Bool)affectedByScrollerNotification:(id)arg1;	// IMP=0x0000000000e401fc
- (void)selectionDidScroll:(id)arg1;	// IMP=0x0000000000e4005f
- (void)selectionWillScroll:(id)arg1;	// IMP=0x0000000000e3ff13
- (void)_unregisterForViewAnimationNotificationsIfNecessary;	// IMP=0x0000000000e3fe82
- (void)_registerForViewAnimationNotificationsIfNecessary;	// IMP=0x0000000000e3fdc7
- (void)_updateViewAnimateNotificationObservationIfNecessary;	// IMP=0x0000000000e3fd4c
- (void)viewAnimate:(id)arg1;	// IMP=0x0000000000e3fa04
- (void)inputModeDidChange:(id)arg1;	// IMP=0x0000000000e3f9cd
- (void)windowDidResignOrBecomeKey;	// IMP=0x0000000000e3f9ac
- (void)deactivateAndCollapseSelection:(_Bool)arg1;	// IMP=0x0000000000e3f8fa
- (void)deactivate;	// IMP=0x0000000000e3f8e6
- (void)activate;	// IMP=0x0000000000e3f795
- (void)detach;	// IMP=0x0000000000e3f783
- (void)dealloc;	// IMP=0x0000000000e3f745
- (_Bool)isValid;	// IMP=0x0000000000e3f704
- (void)invalidate;	// IMP=0x0000000000e3f63d
- (void)didMoveToSuperview;	// IMP=0x0000000000e3f62b
- (void)willMoveToSuperview;	// IMP=0x0000000000e3f619
- (void)validateWithInteractionAssistant:(id)arg1;	// IMP=0x0000000000e3f276
- (id)initWithInteractionAssistant:(id)arg1;	// IMP=0x0000000000e3ef3e

@end
