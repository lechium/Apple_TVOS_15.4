//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AVKit/AVPictureInPictureContentSource-Protocol.h>
#import <AVKit/AVPictureInPictureControllerDelegate-Protocol.h>
#import <AVKit/PBSPictureInPicturePlaybackDelegate-Protocol.h>
#import <AVKit/_AVFocusContainerDelegate-Protocol.h>

@class AVBehaviorStorage, AVContentProposalViewController, AVContentRestrictionsViewController, AVControlItem, AVDelegateManager, AVDigitizerTouchGestureRecognizer, AVGestureRecognizerDelegate, AVGlobalUserSettings, AVInternalPlaybackOptions, AVKeyValueObserverCollection, AVMediaRemoteManager, AVNonDigitizerTapRecognizer, AVPermissiveSwipeGestureRecognizer, AVPictureInPictureController, AVPlaybackControlsViewController, AVPlayer, AVPlayerController, AVPlayerItem, AVPlayerLayerView, AVPlayerViewControllerTransition, AVScrubbingPanGestureRecognizer, AVTransportBarViewController, AVVisibilityTogglingGestureRecognizer, AVxCustomOverlayHostViewController, MRPlayerPath, NSArray, NSDictionary, NSLayoutConstraint, NSNumber, NSObject, NSString, NSTimer, NSURL, UIAlertController, UIDigitizerLongPressGestureRecognizer, UIDigitizerTapGestureRecognizer, UILayoutGuide, UITapGestureRecognizer, UIView, UIWindow, _UIRotaryGestureRecognizer;
@protocol AVPlaybackControlsProtocol, AVPlayerViewControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AVPlayerViewController : UIViewController <AVPictureInPictureContentSource, AVPictureInPictureControllerDelegate, PBSPictureInPicturePlaybackDelegate, _AVFocusContainerDelegate>
{
    _Bool _showsPlaybackControls;	// 8 = 0x8
    _Bool _playbackControlsViewControllerShouldShowLoadingIndicator;	// 9 = 0x9
    _Bool _showsPlaybackControlsView;	// 10 = 0xa
    _Bool _isShowingPlaybackControlsViewForUserInteraction;	// 11 = 0xb
    _Bool _isShowingPlaybackControlsViewForAudioOnlyContent;	// 12 = 0xc
    _Bool _isShowingPlaybackControlsViewForPlayingOnExternalScreen;	// 13 = 0xd
    _Bool _isFullUXEnabled;	// 14 = 0xe
    _Bool _deactivated;	// 15 = 0xf
    _Bool _shouldPlayAfterAppBecomesActive;	// 16 = 0x10
    _Bool _shouldBecomeNowPlayingAfterAppBecomesActive;	// 17 = 0x11
    _Bool _playerHasBeenValid;	// 18 = 0x12
    _Bool _shouldEndLimitingRemoteInput;	// 19 = 0x13
    _Bool _startingContentProposalPresentation;	// 20 = 0x14
    _Bool _HDCPMonitoringActive;	// 21 = 0x15
    _Bool _shouldHidePlaybackControlsWhenMultipleTapGestureRecognized;	// 22 = 0x16
    _Bool _haveShownCustomOverlayHint;	// 23 = 0x17
    _Bool _pausedDueToInsufficientExternalProtection;	// 24 = 0x18
    unsigned int _deactivationReasons;	// 28 = 0x1c
    long long _playControlsStateToRestoreWhenAppBecomesActive;	// 32 = 0x20
    NSString *_videoGravity;	// 40 = 0x28
    AVKeyValueObserverCollection *_keyValueObservers;	// 48 = 0x30
    AVDelegateManager *_delegateManager;	// 56 = 0x38
    NSString *__playerIdentifier;	// 64 = 0x40
    MRPlayerPath *__mediaRemotePlayerPath;	// 72 = 0x48
    AVMediaRemoteManager *_mediaRemoteManager;	// 80 = 0x50
    UIView *_contentContainerView;	// 88 = 0x58
    UIView *_contentOverlayView;	// 96 = 0x60
    UIView *_iAdPrerollView;	// 104 = 0x68
    UIView *_HDCPObscuringView;	// 112 = 0x70
    NSArray *_playerLayerViewConstraints;	// 120 = 0x78
    NSArray *_constraintsForContentProposal;	// 128 = 0x80
    AVInternalPlaybackOptions *_playbackOptions;	// 136 = 0x88
    AVControlItem *_customOverlayControlItem;	// 144 = 0x90
    AVxCustomOverlayHostViewController *_customOverlayHostViewController;	// 152 = 0x98
    AVContentRestrictionsViewController *__contentRestrictionsViewController;	// 160 = 0xa0
    AVContentProposalViewController *_contentProposalViewController;	// 168 = 0xa8
    id _mediaServicesWereResetObserver;	// 176 = 0xb0
    id _willAddDeactivationReasonObserver;	// 184 = 0xb8
    id _didRemoveDeactivationReasonObserver;	// 192 = 0xc0
    id _applicationWillResignActiveObserver;	// 200 = 0xc8
    id _applicationDidBecomeActiveObserver;	// 208 = 0xd0
    id _playerItemDidPlayToEndObserver;	// 216 = 0xd8
    id _playerItemBlockedDueToRestrictionsObserver;	// 224 = 0xe0
    id _contentProposalBoundaryTimeObserver;	// 232 = 0xe8
    AVPlayer *_playerForContentProposalBoundaryTimeObserver;	// 240 = 0xf0
    NSTimer *_loadingIndicatorTimer;	// 248 = 0xf8
    long long _showPlaybackControlsViewCount;	// 256 = 0x100
    NSTimer *_hidePlaybackControlsViewAfterDelayTimer;	// 264 = 0x108
    NSNumber *__defaultPlaybackRateStorage;	// 272 = 0x110
    AVPlayerController *_playerController;	// 280 = 0x118
    AVGestureRecognizerDelegate *_gestureRecognizerDelegate;	// 288 = 0x120
    AVDigitizerTouchGestureRecognizer *_panGestureRecognizer;	// 296 = 0x128
    AVScrubbingPanGestureRecognizer *_scrubGestureRecognizer;	// 304 = 0x130
    AVNonDigitizerTapRecognizer *_b39ArrowGestureRecognizer;	// 312 = 0x138
    AVNonDigitizerTapRecognizer *_b39ArrowLongPressGestureRecognizer;	// 320 = 0x140
    AVNonDigitizerTapRecognizer *_b39SelectGestureRecognizer;	// 328 = 0x148
    AVPermissiveSwipeGestureRecognizer *_swipeDownGestureRecognizer;	// 336 = 0x150
    AVPermissiveSwipeGestureRecognizer *_swipeUpGestureRecognizer;	// 344 = 0x158
    _UIRotaryGestureRecognizer *_rotaryGestureRecognizer;	// 352 = 0x160
    UIDigitizerTapGestureRecognizer *_selectDigitizerTapRecognizer;	// 360 = 0x168
    UIDigitizerLongPressGestureRecognizer *_selectLongPressRecognizer;	// 368 = 0x170
    UITapGestureRecognizer *_menuTapRecognizerDismissal;	// 376 = 0x178
    UITapGestureRecognizer *_menuTapRecognizerOther;	// 384 = 0x180
    UITapGestureRecognizer *_playPauseTapRecognizer;	// 392 = 0x188
    UITapGestureRecognizer *_independentTouchRecognizer;	// 400 = 0x190
    AVVisibilityTogglingGestureRecognizer *_singleTouchRecognizer;	// 408 = 0x198
    UITapGestureRecognizer *_doubleTouchRecognizer;	// 416 = 0x1a0
    double _timeRemainingForCurrentAdvertisements;	// 424 = 0x1a8
    double _timeIntervalOfLastSwitchToFullScreen;	// 432 = 0x1b0
    NSURL *_alternateThumbnailStreamURL;	// 440 = 0x1b8
    NSArray *_allowedSubtitleLanguages;	// 448 = 0x1c0
    NSArray *_customInfoViewControllers;	// 456 = 0x1c8
    NSString *_infoHint;	// 464 = 0x1d0
    AVPlayerViewControllerTransition *_playerViewControllerTransition;	// 472 = 0x1d8
    UILayoutGuide *_unobscuredContentGuide;	// 480 = 0x1e0
    NSLayoutConstraint *_unobscuredContentGuideTopConstraint;	// 488 = 0x1e8
    NSLayoutConstraint *_unobscuredContentGuideBottomConstraint;	// 496 = 0x1f0
    NSObject<OS_dispatch_queue> *_HDCPTimerQueue;	// 504 = 0x1f8
    NSObject<OS_dispatch_source> *_HDCPTimer;	// 512 = 0x200
    UIAlertController *_HDCPAlertController;	// 520 = 0x208
    NSDictionary *_pixelBufferAttributes;	// 528 = 0x210
    AVGlobalUserSettings *_globalUserSettings;	// 536 = 0x218
    AVPlayerItem *_lastValidPlayerItem;	// 544 = 0x220
    _Bool _presentingContentProposal;	// 552 = 0x228
    _Bool _shouldObscureOutputDueToInsufficientExternalProtection;	// 553 = 0x229
    AVPictureInPictureController *_pictureInPictureController;	// 560 = 0x230
    UIView *__placeholderViewDuringPresentation;	// 568 = 0x238
    AVBehaviorStorage *__behaviorStorage;	// 576 = 0x240
    AVPlayerLayerView *_playerLayerView;	// 584 = 0x248
    AVPlaybackControlsViewController<AVPlaybackControlsProtocol> *_playbackControlsViewController;	// 592 = 0x250
}

+ (id)keyPathsForValuesAffectingVideoBounds;	// IMP=0x000000000009008f
+ (id)keyPathsForValuesAffectingReadyForDisplay;	// IMP=0x000000000009006f
+ (id)keyPathsForValuesAffectingVideoGravity;	// IMP=0x000000000009004f
+ (id)activePictureInPicturePlayerViewController;	// IMP=0x000000000008ffb2
+ (void)setActivePictureInPictureController:(id)arg1;	// IMP=0x000000000008ff9e
+ (id)activePictureInPictureController;	// IMP=0x000000000008ff4b
+ (id)keyPathsForValuesAffectingAlternateThumbnailStreamURL;	// IMP=0x0000000000095aed
- (void).cxx_destruct;	// IMP=0x000000000008b401
@property(retain, nonatomic, setter=_setMediaRemotePlayerPath:) MRPlayerPath *_mediaRemotePlayerPath; // @synthesize _mediaRemotePlayerPath=__mediaRemotePlayerPath;
@property(readonly, nonatomic) NSString *_playerIdentifier; // @synthesize _playerIdentifier=__playerIdentifier;
@property(retain, nonatomic, getter=_playbackControlsViewController, setter=_setPlaybackControlsViewController:) AVPlaybackControlsViewController<AVPlaybackControlsProtocol> *playbackControlsViewController; // @synthesize playbackControlsViewController=_playbackControlsViewController;
@property(nonatomic) _Bool shouldObscureOutputDueToInsufficientExternalProtection; // @synthesize shouldObscureOutputDueToInsufficientExternalProtection=_shouldObscureOutputDueToInsufficientExternalProtection;
@property(retain, nonatomic) AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(readonly, nonatomic) AVBehaviorStorage *_behaviorStorage; // @synthesize _behaviorStorage=__behaviorStorage;
@property(nonatomic, getter=isPresentingContentProposal, setter=_setPresentingContentProposal:) _Bool presentingContentProposal; // @synthesize presentingContentProposal=_presentingContentProposal;
@property(retain, nonatomic) UIView *_placeholderViewDuringPresentation; // @synthesize _placeholderViewDuringPresentation=__placeholderViewDuringPresentation;
@property(readonly, nonatomic) AVPictureInPictureController *pictureInPictureController; // @synthesize pictureInPictureController=_pictureInPictureController;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(readonly, nonatomic) AVInternalPlaybackOptions *_playbackOptions; // @synthesize _playbackOptions;
- (void)_didSelectMediaSelectionOption:(id)arg1 withMediaCharacteristic:(id)arg2;	// IMP=0x000000000008b15f
- (void)togglePlayback:(id)arg1;	// IMP=0x000000000008b122
- (_Bool)_canDismiss;	// IMP=0x000000000008afec
- (void)dismissAction:(id)arg1;	// IMP=0x000000000008aef8
- (void)_dismissUsingExternalGestureRecognizerIfNecessary:(_Bool)arg1;	// IMP=0x000000000008a463
- (void)_outputObscuredDueToInsufficientExternalProtectionDidChange;	// IMP=0x000000000008a0f8
- (void)_stopSpinningAndPlay;	// IMP=0x0000000000089fb6
- (void)_cancelHDCPTimer;	// IMP=0x0000000000089f4b
- (void)_updateOutputObscuredDueToInsufficientExternalProtection:(id)arg1;	// IMP=0x0000000000089e6f
- (void)_setupHDCPMonitoring;	// IMP=0x0000000000089cfb
- (void)_resetInfoViewActions;	// IMP=0x0000000000089b30
- (void)_updateLegibleContentInsets;	// IMP=0x00000000000898d8
- (_Bool)_showsPlaybackControlsView;	// IMP=0x00000000000898c8
- (void)_showOrHidePlaybackControlsView;	// IMP=0x000000000008962d
- (void)_fireHidePlaybackControlsViewAfterDelayTimer:(id)arg1;	// IMP=0x000000000008958d
- (void)_hidePlaybackControlsViewIfPossibleAfterDelayForUserInteraction;	// IMP=0x0000000000089520
- (void)_showPlaybackControlsViewIfNeededAndHideAfterDelayIfPlayingForUserInteraction;	// IMP=0x00000000000894bb
- (void)_hidePlaybackControlsViewIfPossibleForUserInteraction;	// IMP=0x0000000000089458
- (void)_showPlaybackControlsViewIfNeededForUserInteraction;	// IMP=0x00000000000893f5
- (void)_hidePlaybackControlsViewIfPossible;	// IMP=0x00000000000893d8
- (void)_showPlaybackControlsViewIfNeeded;	// IMP=0x00000000000893bb
- (void)_handleB39Select:(id)arg1;	// IMP=0x000000000008935d
- (void)_handleSelectLongPressGesture:(id)arg1;	// IMP=0x00000000000891e0
- (void)_handleSelectTapGesture:(id)arg1;	// IMP=0x0000000000088e9a
- (void)_handlePlayPauseTapGesture:(id)arg1;	// IMP=0x0000000000088dd2
- (_Bool)_handlePreviousNavigationMarker;	// IMP=0x0000000000088cea
- (_Bool)_handleNextNavigationMarker;	// IMP=0x0000000000088c02
- (_Bool)_handleStop;	// IMP=0x0000000000088bf0
- (_Bool)_handlePlay;	// IMP=0x00000000000889ea
- (_Bool)_handlePause;	// IMP=0x0000000000088841
- (_Bool)_handleTogglePlayPauseCommand;	// IMP=0x0000000000088775
- (_Bool)_handleTogglePlayPause;	// IMP=0x0000000000088455
- (void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;	// IMP=0x00000000000883a8
- (void)_updatePlaybackControlsViewController;	// IMP=0x0000000000087c0d
- (void)_installPlaybackControlsGestureRecognizers;	// IMP=0x00000000000879d5
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000087994
- (void)_updateUnobscuredContentGuide;	// IMP=0x000000000008773b
- (void)_didResetMediaServices;	// IMP=0x0000000000087735
- (_Bool)_isAudioOnlyContent;	// IMP=0x00000000000876c6
- (void)_fireLoadingIndicatorTimer:(id)arg1;	// IMP=0x0000000000087657
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000008764f
- (void)updateViewConstraints;	// IMP=0x00000000000875f9
- (void)_didChangeFullScreen;	// IMP=0x0000000000087378
- (void)_showCustomOverlayHintIfApplicable;	// IMP=0x000000000008719d
- (void)_hideCustomOverlayHintTimeout;	// IMP=0x0000000000087156
- (_Bool)_considerDisplayModeSwitchFinishedIfPlaying;	// IMP=0x0000000000086fd2
- (void)_updatePreferredDisplayCriteria;	// IMP=0x0000000000086dda
- (void)_updatePreferredDisplayCriteriaForAsset:(id)arg1;	// IMP=0x0000000000086bea
- (void)_clearPreferredDisplayCriteria;	// IMP=0x0000000000086b15
- (void)_setPreferredDisplayCriteria:(id)arg1;	// IMP=0x0000000000086979
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000086831
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000866fd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000086620
- (void)_viewDisappearingOrLosingFocus;	// IMP=0x000000000008660e
- (void)_viewAppearingOrGainingFocus;	// IMP=0x00000000000863d0
- (_Bool)becomeFirstResponder;	// IMP=0x000000000008634e
- (void)_becomeNowPlaying;	// IMP=0x00000000000861cd
- (void)focusContainerViewDidMoveToWindow:(id)arg1;	// IMP=0x000000000008611c
- (void)focusContainerView:(id)arg1 willMoveToWindow:(id)arg2;	// IMP=0x0000000000086031
- (void)didUpdateFocusToFocusContainerView:(id)arg1;	// IMP=0x0000000000085f63
- (void)didUpdateFocusFromFocusContainerView:(id)arg1;	// IMP=0x0000000000085f5d
- (_Bool)shouldUpdateFocusToFocusContainerView:(id)arg1;	// IMP=0x0000000000085f48
- (id)preferredFocusEnvironments;	// IMP=0x0000000000085dc4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000085868
- (void)_updateUXState;	// IMP=0x00000000000853e0
- (void)activateForActivatingApp;	// IMP=0x00000000000851d1
- (_Bool)deactivateForResigningApp;	// IMP=0x0000000000084e6c
- (void)deactivateRemovingApplicationModal;	// IMP=0x0000000000084cf8
- (void)handleClickAtPosition:(long long)arg1;	// IMP=0x0000000000084b0b
- (void)adjustVolume:(id)arg1;	// IMP=0x0000000000084a5b
- (_Bool)_menuTapRecognizerOtherShouldBegin;	// IMP=0x00000000000848f2
- (void)_handleMenuTapGestureOther:(id)arg1;	// IMP=0x0000000000084632
- (void)_handleMenuTapGestureDismissal:(id)arg1;	// IMP=0x0000000000084545
- (_Bool)_handleSeekToTime:(double)arg1;	// IMP=0x00000000000843f8
- (_Bool)_handleSkipBackwardBy:(double)arg1;	// IMP=0x0000000000084222
- (_Bool)_handleSkipForwardBy:(double)arg1;	// IMP=0x0000000000084053
- (void)touchRecognizer:(id)arg1;	// IMP=0x0000000000083e8e
- (void)_independentSingleTouchRecognizer:(id)arg1;	// IMP=0x0000000000083da6
- (void)doubleTouchRecognizer:(id)arg1;	// IMP=0x0000000000083c5b
- (void)didPressRightArrowDigitizer;	// IMP=0x0000000000083b46
- (void)didPressLeftArrowDigitizer;	// IMP=0x0000000000083a31
- (void)didSwipeDown;	// IMP=0x0000000000083868
- (void)navigateDown:(id)arg1;	// IMP=0x00000000000837ea
- (void)navigateUp:(id)arg1;	// IMP=0x00000000000837aa
- (void)rotaryGesture:(id)arg1;	// IMP=0x000000000008363d
- (void)scrubbingGesture:(id)arg1;	// IMP=0x00000000000835cb
- (void)panningGesture:(id)arg1;	// IMP=0x00000000000835c5
- (void)_swipeUpGesture:(id)arg1;	// IMP=0x00000000000833e9
- (void)_swipeDownGesture:(id)arg1;	// IMP=0x00000000000832fe
- (void)avkitDidDismissOverlayViewController;	// IMP=0x0000000000083268
- (void)avkitWillDismissOverlayViewController;	// IMP=0x0000000000083262
- (void)avkitDidArrowDown:(id)arg1;	// IMP=0x0000000000083250
- (void)avkitDidArrowUp:(id)arg1;	// IMP=0x00000000000831a7
- (void)_presentCustomOverlayViewController;	// IMP=0x00000000000830d3
- (_Bool)isPresentingInteractiveOverlay;	// IMP=0x000000000008308f
- (void)_presentInteractiveOverlayViewController;	// IMP=0x0000000000082e01
- (void)_updateInteractiveOverlayControls;	// IMP=0x0000000000082bfa
- (id)interactiveOverlayViewController;	// IMP=0x0000000000082baa
- (id)nowPlayingPlaybackControlsViewController;	// IMP=0x0000000000082b95
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000082995
- (void)loadView;	// IMP=0x0000000000080995
@property(nonatomic) double defaultPlaybackRate;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property(readonly, nonatomic) struct CGRect videoBounds;
@property(nonatomic) _Bool allowsPictureInPicturePlayback;
- (void)_ensureBehaviorStorage;	// IMP=0x000000000008054a
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes;
- (void)updateNowPlayingInfoFull;	// IMP=0x00000000000804a6
- (void)updateNowPlayingInfo;	// IMP=0x0000000000080489
- (_Bool)resignNowPlayingWithoutUpdating;	// IMP=0x000000000008041b
- (void)resignNowPlaying;	// IMP=0x00000000000803fc
- (_Bool)isActiveNowPlaying;	// IMP=0x00000000000803df
- (_Bool)_isAnotherPlayerViewControllerNowPlaying;	// IMP=0x0000000000080391
- (id)_containerView;	// IMP=0x000000000008037f
@property(readonly, nonatomic) UILayoutGuide *unobscuredContentGuide;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (void)_layoutContentOverlayViewIfLoaded;	// IMP=0x000000000007fd3d
- (void)_loadContentOverlayViewIfNeeded;	// IMP=0x000000000007fcb3
@property(nonatomic) _Bool requiresLinearPlayback;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(nonatomic) _Bool appliesPreferredDisplayCriteriaAutomatically;
@property(nonatomic) _Bool showsPlaybackControls;
- (void)setPrivateDelegate:(id)arg1;	// IMP=0x000000000007f6ca
- (id)privateDelegate;	// IMP=0x000000000007f6ad
@property(nonatomic) __weak id <AVPlayerViewControllerDelegate> delegate;
@property(retain, nonatomic) AVPlayer *player;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007f2a7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f160
- (void)dealloc;	// IMP=0x000000000007ec59
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000007eb48
- (id)_customOverlayControlItem;	// IMP=0x000000000007e9af
@property(readonly, nonatomic) AVContentRestrictionsViewController *_contentRestrictionsViewController;
@property(readonly, nonatomic) UIView *iAdPrerollView;
- (void)didChangePlayerController;	// IMP=0x0000000000090c3c
@property(retain, nonatomic) AVPlayerController *playerController;
- (void)contentProposalViewController:(id)arg1 rejectContentProposal:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094d7f
- (void)contentProposalViewController:(id)arg1 acceptContentProposal:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094bb0
- (void)hideContentProposalViewController:(id)arg1 animated:(_Bool)arg2 hidingPlayerView:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000094952
- (void)_replayFromBeginning;	// IMP=0x0000000000094704
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000945e8
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000944a5
- (void)_didDismissViewController:(id)arg1;	// IMP=0x000000000009435f
- (void)_willDismissViewController:(id)arg1;	// IMP=0x000000000009423b
- (void)_didPresentViewController:(id)arg1;	// IMP=0x00000000000940bb
- (void)_willPresentViewController:(id)arg1;	// IMP=0x0000000000093fa9
- (void)_internalWillResumePlaybackAfterUserNavigatedFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000093deb
- (void)dismissContentProposalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000093d1d
- (void)presentContentProposal:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000093b2c
- (void)_presentContentProposal:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000092fc1
- (id)_presentedContentProposal;	// IMP=0x0000000000092f55
- (void)_didPlayToEnd:(id)arg1;	// IMP=0x0000000000092d84
- (void)_scheduleNextContentProposal;	// IMP=0x0000000000092a35
- (void)_invalidateContentProposalBoundaryTimeObserver;	// IMP=0x00000000000929bd
- (CDStruct_1b6d18a9)contentTimeToPresentContentProposal;	// IMP=0x0000000000092955
- (id)nextContentProposalForCurrentItem;	// IMP=0x00000000000928db
- (id)dateOfAutomaticContentProposalAcceptance;	// IMP=0x000000000009286f
@property(retain, nonatomic) AVContentProposalViewController *contentProposalViewController;
@property(nonatomic, getter=isSkipBackwardEnabled) _Bool skipBackwardEnabled;
@property(nonatomic, getter=isSkipForwardEnabled) _Bool skipForwardEnabled;
@property(nonatomic) long long skippingBehavior;
- (void)setTimeRemainingForCurrentAdvertisements:(double)arg1;	// IMP=0x00000000000925e2
- (double)timeRemainingForCurrentAdvertisements;	// IMP=0x00000000000925d0
@property(copy, nonatomic) NSArray *allowedSubtitleOptionLanguages;
@property(nonatomic) _Bool requiresFullSubtitles;
- (void)setAlternateThumbnailStreamURL:(id)arg1;	// IMP=0x00000000000905a1
- (id)alternateThumbnailStreamURL;	// IMP=0x000000000009052d
@property(nonatomic) _Bool allowInfoMetadataSubpanel; // @dynamic allowInfoMetadataSubpanel;
@property(retain, nonatomic) NSString *infoHint;
@property(copy, nonatomic) NSArray *infoViewActions;
@property(copy, nonatomic) NSArray *contextualActions;
@property(copy, nonatomic) NSArray *transportBarCustomMenuItems;
@property(retain, nonatomic) UIViewController *customOverlayViewController;
@property(copy, nonatomic) NSArray *customInfoViewControllers;
@property(retain, nonatomic) UIViewController *customInfoViewController;
@property(nonatomic) _Bool transportBarIncludesTitleView;
@property(nonatomic) _Bool playbackControlsIncludeInfoViews;
@property(nonatomic) _Bool playbackControlsIncludeTransportBar;
- (_Bool)_isPresentingTransportBarViewController;	// IMP=0x00000000000903c4
- (void)_presentTransportBarViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000902f3
- (void)_dismissTransportBarViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009028c
@property(retain, nonatomic) AVTransportBarViewController *transportBarViewController;
@property(nonatomic) _Bool titleMetadataIncludesHDRBadge;
@property(nonatomic) _Bool titleMetadataIncludesProResBadge;
- (void)pictureInPictureController:(id)arg1 didSendPlaybackCommand:(unsigned long long)arg2;	// IMP=0x0000000000091702
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009159f
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;	// IMP=0x0000000000091534
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;	// IMP=0x00000000000913de
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;	// IMP=0x00000000000912cb
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;	// IMP=0x00000000000911a6
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;	// IMP=0x00000000000910bd
- (long long)avkit_contentSourceType;	// IMP=0x00000000000910b5
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg1;	// IMP=0x00000000000910af
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;	// IMP=0x00000000000910a9
- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;	// IMP=0x00000000000910a3
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;	// IMP=0x0000000000091029
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;	// IMP=0x0000000000090faf
- (id)avkit_pictureInPictureViewController;	// IMP=0x0000000000090f54
- (id)avkit_makePlayerControllerIfNeeded:(id)arg1;	// IMP=0x0000000000090f42
@property(readonly, nonatomic) struct CGRect avkit_videoRectInWindow;
@property(readonly, nonatomic) _Bool avkit_isVisible;
@property(readonly, nonatomic) UIWindow *avkit_window;
- (void)stopPictureInPicture;	// IMP=0x0000000000090df8
- (void)startPictureInPicture;	// IMP=0x0000000000090dbb
@property(readonly, nonatomic) NSArray *behaviors;
- (void)removeBehavior:(id)arg1;	// IMP=0x000000000009d4ef
- (void)addBehavior:(id)arg1;	// IMP=0x000000000009d479

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

