//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVMediaController-Protocol.h>

@class AVPlayerViewController, NSDate, NSObject, NSString, NSTimer, TVImageProxy, TVMediaInfo, TVPPlaylist, TVPStateMachine, TVPVideoView, UIImage, _TVImageView;
@protocol TVMediaControllerDelegate, TVPAVFPlayback;

@interface VUIMediaController : UIViewController <TVMediaController>
{
    _Bool _allowsSkipping;	// 8 = 0x8
    _Bool _shouldZoomWhenTransitioningToBackground;	// 9 = 0x9
    _Bool _playbackEnabled;	// 10 = 0xa
    _Bool _stopPlayerWhenViewDisappears;	// 11 = 0xb
    _Bool _clearPreviousImageBeforeLoading;	// 12 = 0xc
    _Bool _popWhenPlayerStops;	// 13 = 0xd
    _Bool _restoringAVPlayerController;	// 14 = 0xe
    _Bool _stopWhenAnotherMediaControllerStarts;	// 15 = 0xf
    _Bool _playerReadyToBePlayed;	// 16 = 0x10
    _Bool _shouldAnimateOverlayView;	// 17 = 0x11
    _Bool _doesDelegateRespondToShowStill;	// 18 = 0x12
    _Bool _doesDelegateRespondToStateChange;	// 19 = 0x13
    _Bool _automaticPlaybackStart;	// 20 = 0x14
    _Bool _automaticPlaybackStop;	// 21 = 0x15
    _Bool _shouldPlayAfterAppBecomesActive;	// 22 = 0x16
    _Bool _didWeCreatePlayer;	// 23 = 0x17
    _Bool _observingPictureInPictureActive;	// 24 = 0x18
    NSObject<TVPAVFPlayback> *_player;	// 32 = 0x20
    AVPlayerViewController *_avPlayerViewController;	// 40 = 0x28
    TVMediaInfo *_mediaInfo;	// 48 = 0x30
    id <TVMediaControllerDelegate> _delegate;	// 56 = 0x38
    long long _state;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    _TVImageView *_proxyImageView;	// 80 = 0x50
    TVImageProxy *_currentImageProxy;	// 88 = 0x58
    UIViewController *_playbackContainerController;	// 96 = 0x60
    NSDate *_playbackLoadingStartDate;	// 104 = 0x68
    NSTimer *_playbackLoadingTimer;	// 112 = 0x70
    TVPStateMachine *_stateMachine;	// 120 = 0x78
    TVPPlaylist *_pendingPlaylist;	// 128 = 0x80
    TVImageProxy *_pendingImageProxy;	// 136 = 0x88
    unsigned long long _imageAnimationOptions;	// 144 = 0x90
    double _imageAnimationDuration;	// 152 = 0x98
    double _imageTransitionInterval;	// 160 = 0xa0
    double _overlayViewDisplayDuration;	// 168 = 0xa8
    long long _playbackStopReason;	// 176 = 0xb0
    TVPVideoView *_secondaryVideoView;	// 184 = 0xb8
    NSTimer *_pauseStateTimeoutTimer;	// 192 = 0xc0
    unsigned long long _vpafPlaybackStartReason;	// 200 = 0xc8
    unsigned long long _vpafPlaybackStopReason;	// 208 = 0xd0
    NSString *_titleForLogging;	// 216 = 0xd8
    unsigned long long _deactivationReasons;	// 224 = 0xe0
    unsigned long long _ambientVideoRemainingRepeatLoopCount;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000081195
@property(nonatomic) unsigned long long ambientVideoRemainingRepeatLoopCount; // @synthesize ambientVideoRemainingRepeatLoopCount=_ambientVideoRemainingRepeatLoopCount;
@property(nonatomic) unsigned long long deactivationReasons; // @synthesize deactivationReasons=_deactivationReasons;
@property(copy, nonatomic) NSString *titleForLogging; // @synthesize titleForLogging=_titleForLogging;
@property(nonatomic) _Bool observingPictureInPictureActive; // @synthesize observingPictureInPictureActive=_observingPictureInPictureActive;
@property(nonatomic) _Bool didWeCreatePlayer; // @synthesize didWeCreatePlayer=_didWeCreatePlayer;
@property(nonatomic) _Bool shouldPlayAfterAppBecomesActive; // @synthesize shouldPlayAfterAppBecomesActive=_shouldPlayAfterAppBecomesActive;
@property(nonatomic) unsigned long long vpafPlaybackStopReason; // @synthesize vpafPlaybackStopReason=_vpafPlaybackStopReason;
@property(nonatomic, getter=isAutomaticPlaybackStop) _Bool automaticPlaybackStop; // @synthesize automaticPlaybackStop=_automaticPlaybackStop;
@property(nonatomic) unsigned long long vpafPlaybackStartReason; // @synthesize vpafPlaybackStartReason=_vpafPlaybackStartReason;
@property(nonatomic, getter=isAutomaticPlaybackStart) _Bool automaticPlaybackStart; // @synthesize automaticPlaybackStart=_automaticPlaybackStart;
@property(nonatomic) __weak NSTimer *pauseStateTimeoutTimer; // @synthesize pauseStateTimeoutTimer=_pauseStateTimeoutTimer;
@property(retain, nonatomic) TVPVideoView *secondaryVideoView; // @synthesize secondaryVideoView=_secondaryVideoView;
@property(nonatomic) long long playbackStopReason; // @synthesize playbackStopReason=_playbackStopReason;
@property(nonatomic) _Bool doesDelegateRespondToStateChange; // @synthesize doesDelegateRespondToStateChange=_doesDelegateRespondToStateChange;
@property(nonatomic) _Bool doesDelegateRespondToShowStill; // @synthesize doesDelegateRespondToShowStill=_doesDelegateRespondToShowStill;
@property(nonatomic) double overlayViewDisplayDuration; // @synthesize overlayViewDisplayDuration=_overlayViewDisplayDuration;
@property(nonatomic) _Bool shouldAnimateOverlayView; // @synthesize shouldAnimateOverlayView=_shouldAnimateOverlayView;
@property(nonatomic) double imageTransitionInterval; // @synthesize imageTransitionInterval=_imageTransitionInterval;
@property(nonatomic) double imageAnimationDuration; // @synthesize imageAnimationDuration=_imageAnimationDuration;
@property(nonatomic) unsigned long long imageAnimationOptions; // @synthesize imageAnimationOptions=_imageAnimationOptions;
@property(nonatomic, getter=isPlayerReadyToBePlayed) _Bool playerReadyToBePlayed; // @synthesize playerReadyToBePlayed=_playerReadyToBePlayed;
@property(retain, nonatomic) TVImageProxy *pendingImageProxy; // @synthesize pendingImageProxy=_pendingImageProxy;
@property(retain, nonatomic) TVPPlaylist *pendingPlaylist; // @synthesize pendingPlaylist=_pendingPlaylist;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) __weak NSTimer *playbackLoadingTimer; // @synthesize playbackLoadingTimer=_playbackLoadingTimer;
@property(retain, nonatomic) NSDate *playbackLoadingStartDate; // @synthesize playbackLoadingStartDate=_playbackLoadingStartDate;
@property(retain, nonatomic) UIViewController *playbackContainerController; // @synthesize playbackContainerController=_playbackContainerController;
@property(retain, nonatomic) TVImageProxy *currentImageProxy; // @synthesize currentImageProxy=_currentImageProxy;
@property(retain, nonatomic) _TVImageView *proxyImageView; // @synthesize proxyImageView=_proxyImageView;
@property(nonatomic, getter=shouldStopWhenAnotherMediaControllerStarts) _Bool stopWhenAnotherMediaControllerStarts; // @synthesize stopWhenAnotherMediaControllerStarts=_stopWhenAnotherMediaControllerStarts;
@property(nonatomic, getter=isRestoringAVPlayerController) _Bool restoringAVPlayerController; // @synthesize restoringAVPlayerController=_restoringAVPlayerController;
@property(nonatomic) _Bool popWhenPlayerStops; // @synthesize popWhenPlayerStops=_popWhenPlayerStops;
@property(nonatomic) _Bool clearPreviousImageBeforeLoading; // @synthesize clearPreviousImageBeforeLoading=_clearPreviousImageBeforeLoading;
@property(nonatomic, getter=shouldStopPlayerWhenViewDisappears) _Bool stopPlayerWhenViewDisappears; // @synthesize stopPlayerWhenViewDisappears=_stopPlayerWhenViewDisappears;
@property(nonatomic, getter=isPlaybackEnabled) _Bool playbackEnabled; // @synthesize playbackEnabled=_playbackEnabled;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool shouldZoomWhenTransitioningToBackground; // @synthesize shouldZoomWhenTransitioningToBackground=_shouldZoomWhenTransitioningToBackground;
@property(nonatomic) _Bool allowsSkipping; // @synthesize allowsSkipping=_allowsSkipping;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <TVMediaControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) TVMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) AVPlayerViewController *avPlayerViewController; // @synthesize avPlayerViewController=_avPlayerViewController;
@property(retain, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
- (void)_registerStateMachineHandlers;	// IMP=0x0000000000078fb7
- (void)_stateDidChangeFromState:(id)arg1 toState:(id)arg2 onEvent:(id)arg3 context:(id)arg4 userInfo:(id)arg5;	// IMP=0x0000000000078cc7
- (_Bool)_isAmbientVideoAudioPreferred;	// IMP=0x0000000000078c40
- (_Bool)_isAmbientVideoMediaItem:(id)arg1;	// IMP=0x0000000000078be6
- (_Bool)_isCurrentMediaItemAmbientVideo;	// IMP=0x0000000000078b6b
- (void)_didPlayMediaItemToEnd:(id)arg1;	// IMP=0x000000000007899f
- (void)_configureAmbientVideoPlaybackIfNeeded;	// IMP=0x000000000007862f
- (void)_recordBgAutoPlayMediaEvent;	// IMP=0x0000000000078439
- (void)_updateAVPlayerViewControllerWithAVPlayerForPlayer:(id)arg1;	// IMP=0x0000000000078252
- (void)_removePlaybackViewController;	// IMP=0x00000000000780e9
- (void)_addPlaybackViewControllerForPlayback:(_Bool)arg1;	// IMP=0x0000000000077baa
- (void)_updateCurrentPlaybackViewFrameForPlaybackInBackground:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007754e
- (struct CGRect)_secondaryVideoViewFrame:(_Bool)arg1;	// IMP=0x00000000000773e4
- (_Bool)_shouldShowSecondaryView;	// IMP=0x0000000000077355
- (_Bool)_hasSecondaryView;	// IMP=0x0000000000077322
- (struct CGRect)_playbackContainerViewFrame:(_Bool)arg1 hasSecondaryVideoView:(_Bool)arg2;	// IMP=0x000000000007727a
- (_Bool)_shouldIgnorePlaybackStop;	// IMP=0x000000000007710e
@property(readonly, nonatomic, getter=isBackgrounded) _Bool backgrounded;
- (_Bool)isFullscreenPlaybackIntent;	// IMP=0x0000000000077009
- (void)_updatePlayerMuteStateForBackgroundPlaybackWithReason:(id)arg1;	// IMP=0x0000000000076cf2
- (void)_mediaControllerStartedPlayback:(id)arg1;	// IMP=0x0000000000076af1
- (void)_handlePlaybackErrorNotification:(id)arg1;	// IMP=0x0000000000076ada
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x0000000000076752
- (void)_delayLoadImage:(id)arg1;	// IMP=0x000000000007669d
- (void)_removeProxyImageView;	// IMP=0x00000000000765c5
- (void)_addProxyImageView;	// IMP=0x0000000000076204
- (void)_addContentViewIfNeeded;	// IMP=0x0000000000075f03
- (void)_swapActiveMedia:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000758e1
- (void)_removeOverlayView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007576d
- (void)_addOverlayViewAnimatedIfNeeded:(_Bool)arg1 dismissAfter:(double)arg2;	// IMP=0x000000000007538b
- (void)_cleanUpEverythingPlaybackRelated;	// IMP=0x0000000000075100
- (void)_cleanUpEverything;	// IMP=0x0000000000074fae
- (void)_setPlaylist:(id)arg1;	// IMP=0x0000000000074e83
- (void)_setImageProxies:(id)arg1;	// IMP=0x0000000000074b70
- (void)_updateMediaInfo;	// IMP=0x00000000000746f5
- (_Bool)_canPause;	// IMP=0x00000000000746a3
- (void)_unregisterPlayerNotifications;	// IMP=0x00000000000744f5
- (void)_registerPlayerNotifications;	// IMP=0x0000000000074371
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;	// IMP=0x00000000000742da
- (void)_applicationWillAddDeactivationReason:(id)arg1;	// IMP=0x0000000000074241
- (_Bool)_shouldPausePlaybackDueToDeactivationReasons;	// IMP=0x0000000000074226
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x00000000000741a2
- (void)_handleApplicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000000740ec
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000000073f48
- (void)_registerForApplicationStateNotifications;	// IMP=0x0000000000073e5f
- (void)transitionToForeground:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000738a1
@property(nonatomic) _Bool showsVideoControls;
@property(readonly, nonatomic) UIImage *coverImage;
- (void)stop;	// IMP=0x0000000000073748
- (void)pause;	// IMP=0x0000000000073704
- (void)play;	// IMP=0x00000000000736c0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007342f
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000000007341a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000073234
- (void)viewDidLoad;	// IMP=0x00000000000731f3
- (void)dealloc;	// IMP=0x00000000000730cb
- (id)initWithName:(id)arg1;	// IMP=0x0000000000072c5d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000072c44
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072c2b
- (id)init;	// IMP=0x0000000000072c12

@end
