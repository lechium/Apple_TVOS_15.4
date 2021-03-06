//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXStoryQueueParticipant-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>
#import <PhotosUICore/PXTouchingUIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/PXVerticalSwipeGestureRecognizerHelperDelegate-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSObject, NSString, PXApplicationDisabledIdleTimerToken, PXGView, PXMediaProvider, PXStoryModel, PXStoryTransitionableTungstenViewManager, PXStoryViewDismissalController, PXStoryViewLayout, PXStoryViewModel, PXTouchingUIGestureRecognizer, PXUpdater, PXVerticalSwipeGestureRecognizerHelper, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol OS_dispatch_queue, PXStoryPacingTimeSource;

@interface PXStoryView : UIView <UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate, PXStoryQueueParticipant, PXChangeObserver, PXTapToRadarDiagnosticProvider>
{
    _Bool _isActive;	// 8 = 0x8
    _Bool _shouldPreventDisplaySleep;	// 9 = 0x9
    _Bool _isTouching;	// 10 = 0xa
    _Bool _shouldAppyBackgroundColorToTungstenView;	// 11 = 0xb
    NSMutableArray *_lastDemotedDisplayAssets;	// 16 = 0x10
    PXStoryViewDismissalController *_dismissalController;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_storyQueue;	// 32 = 0x20
    UITapGestureRecognizer *_tapGestureRecognizer;	// 40 = 0x28
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 48 = 0x30
    UIPanGestureRecognizer *_panUpGestureRecognizer;	// 56 = 0x38
    UIPanGestureRecognizer *_panDownGestureRecognizer;	// 64 = 0x40
    PXVerticalSwipeGestureRecognizerHelper *_swipeDownGestureHelper;	// 72 = 0x48
    NSArray *_swipeGestureRecognizers;	// 80 = 0x50
    UITapGestureRecognizer *_menuGestureRecognizer;	// 88 = 0x58
    PXTouchingUIGestureRecognizer *_touchingGestureRecognizer;	// 96 = 0x60
    UILongPressGestureRecognizer *_anyIndirectTouchGestureRecognizer;	// 104 = 0x68
    UILongPressGestureRecognizer *_anyPressGestureRecognizer;	// 112 = 0x70
    NSMutableSet *_activeRemoteGestureRecognizers;	// 120 = 0x78
    PXStoryModel *_mainModel;	// 128 = 0x80
    id <PXStoryPacingTimeSource> _timeSource;	// 136 = 0x88
    PXMediaProvider *_mediaProvider;	// 144 = 0x90
    PXUpdater *_updater;	// 152 = 0x98
    PXStoryViewLayout *_viewLayout;	// 160 = 0xa0
    PXApplicationDisabledIdleTimerToken *_preventedDisplaySleepToken;	// 168 = 0xa8
    PXStoryViewModel *_viewModel;	// 176 = 0xb0
    PXStoryTransitionableTungstenViewManager *_tungstenViewManager;	// 184 = 0xb8
}

+ (_Bool)dumpTapToRadarDiagnosticAttachmentsToURL:(id)arg1;	// IMP=0x000000000041dc61
+ (id)allDiagnosticDescriptions;	// IMP=0x000000000041db43
- (void).cxx_destruct;	// IMP=0x000000000041cbce
@property(readonly, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager; // @synthesize tungstenViewManager=_tungstenViewManager;
@property(readonly, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) _Bool shouldAppyBackgroundColorToTungstenView; // @synthesize shouldAppyBackgroundColorToTungstenView=_shouldAppyBackgroundColorToTungstenView;
@property(nonatomic) _Bool isTouching; // @synthesize isTouching=_isTouching;
@property(retain, nonatomic) PXApplicationDisabledIdleTimerToken *preventedDisplaySleepToken; // @synthesize preventedDisplaySleepToken=_preventedDisplaySleepToken;
@property(nonatomic) _Bool shouldPreventDisplaySleep; // @synthesize shouldPreventDisplaySleep=_shouldPreventDisplaySleep;
@property(readonly, nonatomic) PXStoryViewLayout *viewLayout; // @synthesize viewLayout=_viewLayout;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXStoryPacingTimeSource> timeSource; // @synthesize timeSource=_timeSource;
@property(retain, nonatomic) PXStoryModel *mainModel; // @synthesize mainModel=_mainModel;
@property(readonly, nonatomic) NSMutableSet *activeRemoteGestureRecognizers; // @synthesize activeRemoteGestureRecognizers=_activeRemoteGestureRecognizers;
@property(readonly, nonatomic) UILongPressGestureRecognizer *anyPressGestureRecognizer; // @synthesize anyPressGestureRecognizer=_anyPressGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *anyIndirectTouchGestureRecognizer; // @synthesize anyIndirectTouchGestureRecognizer=_anyIndirectTouchGestureRecognizer;
@property(readonly, nonatomic) PXTouchingUIGestureRecognizer *touchingGestureRecognizer; // @synthesize touchingGestureRecognizer=_touchingGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(readonly, nonatomic) NSArray *swipeGestureRecognizers; // @synthesize swipeGestureRecognizers=_swipeGestureRecognizers;
@property(readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *swipeDownGestureHelper; // @synthesize swipeDownGestureHelper=_swipeDownGestureHelper;
@property(readonly, nonatomic) UIPanGestureRecognizer *panDownGestureRecognizer; // @synthesize panDownGestureRecognizer=_panDownGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panUpGestureRecognizer; // @synthesize panUpGestureRecognizer=_panUpGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // @synthesize storyQueue=_storyQueue;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;	// IMP=0x000000000041c958
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000041c7d9
- (void)_updateMainModel;	// IMP=0x000000000041c6d6
- (void)_invalidateMainModel;	// IMP=0x000000000041c692
- (void)_updateBackgroundColor;	// IMP=0x000000000041c55a
- (void)_invalidateBackgroundColor;	// IMP=0x000000000041c516
- (void)_updateShouldPreventDisplaySleep;	// IMP=0x000000000041c48d
- (void)_invalidateShouldPreventDisplaySleep;	// IMP=0x000000000041c47b
- (void)_updateGestureRecognizers;	// IMP=0x000000000041c1e2
- (void)_invalidateGestureRecognizers;	// IMP=0x000000000041c19e
- (void)_setNeedsUpdate;	// IMP=0x000000000041c18c
- (void)layoutSubviews;	// IMP=0x000000000041c121
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000041bfe1
- (id)preferredFocusEnvironments;	// IMP=0x000000000041becc
- (_Bool)canBecomeFocused;	// IMP=0x000000000041be47
- (void)touchingUIGestureRecognizerDidEndTouching:(id)arg1;	// IMP=0x000000000041be33
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)arg1;	// IMP=0x000000000041be1c
- (_Bool)verticalSwipeGestureRecognizerHelper:(id)arg1 shouldRecognizeSwipeDownGestureRecognizer:(id)arg2;	// IMP=0x000000000041bd57
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000041bbd2
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000041ba58
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000041b972
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000041b8d4
- (void)_considerPerformingCrossfadeAnimation;	// IMP=0x000000000041b6a3
- (void)_considerUpdatingFocusForInfoPanel;	// IMP=0x000000000041b5d8
- (void)_considerUpdatingFocusForRelatedOverlay;	// IMP=0x000000000041b54e
- (void)_considerUpdatingFocusForChrome;	// IMP=0x000000000041b4c4
- (void)_handleTwoFingerTap:(id)arg1;	// IMP=0x000000000041b38c
- (void)_handlePanDown:(id)arg1;	// IMP=0x000000000041ac84
@property(readonly, nonatomic) PXStoryViewDismissalController *dismissalController; // @synthesize dismissalController=_dismissalController;
- (void)_handleArrowButton:(id)arg1;	// IMP=0x000000000041aacf
- (void)_handleLongPress:(id)arg1;	// IMP=0x000000000041a9ee
- (void)_handleSelect:(id)arg1;	// IMP=0x000000000041a928
- (void)_handleTap:(id)arg1;	// IMP=0x000000000041a8a3
- (void)_handleSwipeGesture:(id)arg1;	// IMP=0x000000000041a77d
- (void)_handleAnyTouchOrPressGesture:(id)arg1;	// IMP=0x000000000041a6a5
- (void)_handleMenuGestureRecognizer:(id)arg1;	// IMP=0x000000000041a562
- (void)_handlePlayPauseGesture:(id)arg1;	// IMP=0x000000000041a526
- (void)cancelOperation:(id)arg1;	// IMP=0x000000000041a4bc
- (void)insertNewline:(id)arg1;	// IMP=0x000000000041a3dd
- (void)moveRight:(id)arg1;	// IMP=0x000000000041a36d
- (void)moveLeft:(id)arg1;	// IMP=0x000000000041a2fd
- (void)togglePlayback:(id)arg1;	// IMP=0x000000000041a2eb
@property(readonly, nonatomic) NSMutableArray *lastDemotedDisplayAssets; // @synthesize lastDemotedDisplayAssets=_lastDemotedDisplayAssets;
- (void)_changeOverallDuration:(long long)arg1;	// IMP=0x000000000041a167
- (void)_changeColorGrade;	// IMP=0x000000000041a08c
- (void)_changeStyle;	// IMP=0x0000000000419f62
- (void)_hideRelatedOverlay;	// IMP=0x0000000000419f1e
- (void)_toggleChrome;	// IMP=0x0000000000419eda
- (void)_togglePlayback;	// IMP=0x0000000000419e96
- (id)_storyHitTestResultAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000419dd9
- (void)_handleEdgeTap:(unsigned long long)arg1;	// IMP=0x0000000000419c31
- (void)_handleRelatedKeyboardNavigation:(unsigned long long)arg1;	// IMP=0x0000000000419b9d
- (_Bool)_handlePrimaryInteractionAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000419982
- (void)_skipToSegmentWithOffset:(long long)arg1 afterEdgeTap:(_Bool)arg2;	// IMP=0x00000000004198f9
- (_Bool)_isRTL;	// IMP=0x00000000004198df
- (void)_moveRightAfterEdgeTap:(_Bool)arg1;	// IMP=0x0000000000419896
- (void)_moveLeftAfterEdgeTap:(_Bool)arg1;	// IMP=0x000000000041984f
- (void)insertText:(id)arg1;	// IMP=0x00000000004196ed
- (_Bool)acceptsFirstResponder;	// IMP=0x00000000004196e5
- (void)_initializeGestureRecognizers;	// IMP=0x000000000041920e
- (id)itemPlacementControllerForItemReference:(id)arg1;	// IMP=0x000000000041918b
@property(readonly, nonatomic) id mainItemReference;
@property(readonly, nonatomic) PXGView *tungstenView;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x0000000000418a3e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004189bb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000418941

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

