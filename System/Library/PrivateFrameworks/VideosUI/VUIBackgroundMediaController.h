//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerViewController, NSDate, NSString, NSTimer, TVPPlayer, TVPPlaylist, TVPStateMachine, TVPVideoView, UIViewController, VUIImageProxy, VUIImageView, VUIMediaInfo;

__attribute__((visibility("hidden")))
@interface VUIBackgroundMediaController
{
    _Bool _foreground;	// 8 = 0x8
    _Bool _playbackEnabled;	// 9 = 0x9
    _Bool _stopPlayerWhenViewDisappears;	// 10 = 0xa
    _Bool _clearPreviousImageBeforeLoading;	// 11 = 0xb
    _Bool _animateImageChange;	// 12 = 0xc
    _Bool _popWhenPlayerStops;	// 13 = 0xd
    _Bool _mutePlaybackInBackground;	// 14 = 0xe
    _Bool _stopWhenAnotherMediaControllerStarts;	// 15 = 0xf
    _Bool _shouldPauseAtEnd;	// 16 = 0x10
    _Bool _startBackgroundPlaybackWhileTransitioning;	// 17 = 0x11
    _Bool _loadPlaylistInNextRunloopForBackgroundVideos;	// 18 = 0x12
    _Bool _playerReadyToBePlayed;	// 19 = 0x13
    _Bool _shouldAnimateOverlayView;	// 20 = 0x14
    _Bool _automaticPlaybackStart;	// 21 = 0x15
    _Bool _automaticPlaybackStop;	// 22 = 0x16
    _Bool _shouldPlayAfterAppBecomesActive;	// 23 = 0x17
    _Bool _didWeCreatePlayer;	// 24 = 0x18
    _Bool _observingPictureInPictureActive;	// 25 = 0x19
    _Bool _showsVideoControls;	// 26 = 0x1a
    TVPPlayer *_player;	// 32 = 0x20
    AVPlayerViewController *_avPlayerViewController;	// 40 = 0x28
    VUIMediaInfo *_mediaInfo;	// 48 = 0x30
    unsigned long long _state;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    unsigned long long _playbackStopDelayReasons;	// 72 = 0x48
    double _playbackStopDelay;	// 80 = 0x50
    unsigned long long _videoSwappingAnimationType;	// 88 = 0x58
    double _playbackLoadingDelayInterval;	// 96 = 0x60
    VUIImageProxy *_currentImageProxy;	// 104 = 0x68
    VUIImageView *_proxyImageView;	// 112 = 0x70
    VUIImageView *_alphaProxyImageView;	// 120 = 0x78
    VUIImageProxy *_alphaImageProxy;	// 128 = 0x80
    UIViewController *_playbackContainerController;	// 136 = 0x88
    NSDate *_playbackLoadingStartDate;	// 144 = 0x90
    NSTimer *_playbackLoadingTimer;	// 152 = 0x98
    TVPStateMachine *_stateMachine;	// 160 = 0xa0
    TVPPlaylist *_pendingPlaylist;	// 168 = 0xa8
    VUIImageProxy *_pendingImageProxy;	// 176 = 0xb0
    unsigned long long _imageAnimationOptions;	// 184 = 0xb8
    double _imageAnimationDuration;	// 192 = 0xc0
    double _imageTransitionInterval;	// 200 = 0xc8
    TVPVideoView *_secondaryVideoView;	// 208 = 0xd0
    NSTimer *_pauseStateTimeoutTimer;	// 216 = 0xd8
    unsigned long long _vpafPlaybackStartReason;	// 224 = 0xe0
    unsigned long long _vpafPlaybackStopReason;	// 232 = 0xe8
    NSString *_titleForLogging;	// 240 = 0xf0
    unsigned long long _deactivationReasons;	// 248 = 0xf8
    unsigned long long _ambientVideoRemainingRepeatLoopCount;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000020fc2b
@property(nonatomic) unsigned long long ambientVideoRemainingRepeatLoopCount; // @synthesize ambientVideoRemainingRepeatLoopCount=_ambientVideoRemainingRepeatLoopCount;
@property(nonatomic) _Bool showsVideoControls; // @synthesize showsVideoControls=_showsVideoControls;
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
@property(nonatomic) _Bool shouldAnimateOverlayView; // @synthesize shouldAnimateOverlayView=_shouldAnimateOverlayView;
@property(nonatomic) double imageTransitionInterval; // @synthesize imageTransitionInterval=_imageTransitionInterval;
@property(nonatomic) double imageAnimationDuration; // @synthesize imageAnimationDuration=_imageAnimationDuration;
@property(nonatomic) unsigned long long imageAnimationOptions; // @synthesize imageAnimationOptions=_imageAnimationOptions;
@property(nonatomic, getter=isPlayerReadyToBePlayed) _Bool playerReadyToBePlayed; // @synthesize playerReadyToBePlayed=_playerReadyToBePlayed;
@property(retain, nonatomic) VUIImageProxy *pendingImageProxy; // @synthesize pendingImageProxy=_pendingImageProxy;
@property(retain, nonatomic) TVPPlaylist *pendingPlaylist; // @synthesize pendingPlaylist=_pendingPlaylist;
@property(retain, nonatomic) TVPStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) __weak NSTimer *playbackLoadingTimer; // @synthesize playbackLoadingTimer=_playbackLoadingTimer;
@property(retain, nonatomic) NSDate *playbackLoadingStartDate; // @synthesize playbackLoadingStartDate=_playbackLoadingStartDate;
@property(retain, nonatomic) UIViewController *playbackContainerController; // @synthesize playbackContainerController=_playbackContainerController;
@property(retain, nonatomic) VUIImageProxy *alphaImageProxy; // @synthesize alphaImageProxy=_alphaImageProxy;
@property(retain, nonatomic) VUIImageView *alphaProxyImageView; // @synthesize alphaProxyImageView=_alphaProxyImageView;
@property(retain, nonatomic) VUIImageView *proxyImageView; // @synthesize proxyImageView=_proxyImageView;
@property(retain, nonatomic) VUIImageProxy *currentImageProxy; // @synthesize currentImageProxy=_currentImageProxy;
@property(nonatomic) _Bool loadPlaylistInNextRunloopForBackgroundVideos; // @synthesize loadPlaylistInNextRunloopForBackgroundVideos=_loadPlaylistInNextRunloopForBackgroundVideos;
@property(nonatomic) _Bool startBackgroundPlaybackWhileTransitioning; // @synthesize startBackgroundPlaybackWhileTransitioning=_startBackgroundPlaybackWhileTransitioning;
@property(nonatomic) double playbackLoadingDelayInterval; // @synthesize playbackLoadingDelayInterval=_playbackLoadingDelayInterval;
@property(nonatomic, getter=shouldPauseAtEnd) _Bool shouldPauseAtEnd; // @synthesize shouldPauseAtEnd=_shouldPauseAtEnd;
@property(nonatomic) unsigned long long videoSwappingAnimationType; // @synthesize videoSwappingAnimationType=_videoSwappingAnimationType;
@property(nonatomic) double playbackStopDelay; // @synthesize playbackStopDelay=_playbackStopDelay;
@property(nonatomic) unsigned long long playbackStopDelayReasons; // @synthesize playbackStopDelayReasons=_playbackStopDelayReasons;
@property(nonatomic, getter=shouldStopWhenAnotherMediaControllerStarts) _Bool stopWhenAnotherMediaControllerStarts; // @synthesize stopWhenAnotherMediaControllerStarts=_stopWhenAnotherMediaControllerStarts;
@property(nonatomic) _Bool mutePlaybackInBackground; // @synthesize mutePlaybackInBackground=_mutePlaybackInBackground;
@property(nonatomic) _Bool popWhenPlayerStops; // @synthesize popWhenPlayerStops=_popWhenPlayerStops;
@property(nonatomic) _Bool animateImageChange; // @synthesize animateImageChange=_animateImageChange;
@property(nonatomic) _Bool clearPreviousImageBeforeLoading; // @synthesize clearPreviousImageBeforeLoading=_clearPreviousImageBeforeLoading;
@property(nonatomic, getter=shouldStopPlayerWhenViewDisappears) _Bool stopPlayerWhenViewDisappears; // @synthesize stopPlayerWhenViewDisappears=_stopPlayerWhenViewDisappears;
@property(nonatomic, getter=isPlaybackEnabled) _Bool playbackEnabled; // @synthesize playbackEnabled=_playbackEnabled;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isForeground) _Bool foreground; // @synthesize foreground=_foreground;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) VUIMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) AVPlayerViewController *avPlayerViewController; // @synthesize avPlayerViewController=_avPlayerViewController;
@property(retain, nonatomic) TVPPlayer *player; // @synthesize player=_player;
- (void)_registerStateMachineHandlers;	// IMP=0x0000000000207686
- (void)_stateDidChangeFromState:(id)arg1 toState:(id)arg2 onEvent:(id)arg3 context:(id)arg4 userInfo:(id)arg5;	// IMP=0x0000000000207165
- (void)_didPlayMediaItemToEnd:(id)arg1;	// IMP=0x0000000000206bf6
- (_Bool)_isAmbientVideoAudioPreferred;	// IMP=0x0000000000206b6f
- (_Bool)_isAmbientVideoMediaItem:(id)arg1;	// IMP=0x0000000000206b15
- (_Bool)_isCurrentMediaItemAmbientVideo;	// IMP=0x0000000000206a9a
- (void)_updatePlayerMuteStateForAmbientVideo;	// IMP=0x0000000000206928
- (void)_configureAmbientVideoPlaybackIfNeeded;	// IMP=0x00000000002065dc
- (void)_recordBgAutoPlayMediaEvent;	// IMP=0x00000000002063e0
- (double)_computedPlaybackDelayInterval;	// IMP=0x00000000002062e8
- (void)_updateAVPlayerViewControllerWithAVPlayerForPlayer:(id)arg1;	// IMP=0x0000000000206125
- (void)_removePlaybackViewController;	// IMP=0x0000000000205fbc
- (void)_addPlaybackViewControllerForPlayback:(_Bool)arg1;	// IMP=0x0000000000205810
- (void)_updateCurrentPlaybackViewFrameForPlaybackInBackground:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002051aa
- (struct CGRect)_secondaryVideoViewFrame:(_Bool)arg1;	// IMP=0x0000000000205019
- (double)_secondaryVideoViewHeight;	// IMP=0x000000000020500b
- (_Bool)_shouldShowSecondaryView;	// IMP=0x0000000000204f7c
- (_Bool)_hasSecondaryView;	// IMP=0x0000000000204f49
- (struct CGRect)_playbackContainerViewFrame:(_Bool)arg1 hasSecondaryVideoView:(_Bool)arg2;	// IMP=0x0000000000204e88
@property(readonly, nonatomic, getter=isBackgrounded) _Bool backgrounded;
- (void)_updatePlayerMuteStateForBackgroundPlaybackWithReason:(id)arg1;	// IMP=0x0000000000204b00
- (void)_mediaControllerStartedPlayback:(id)arg1;	// IMP=0x0000000000204910
- (void)_playbackErrorDidOccur:(id)arg1;	// IMP=0x00000000002047e7
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x0000000000204465
- (void)_delayLoadImage:(id)arg1;	// IMP=0x00000000002043b0
- (void)_addAlphaProxyImageViewIfNeeded;	// IMP=0x00000000002041c6
- (void)_removeProxyImageView;	// IMP=0x00000000002040ee
- (void)_addProxyImageView;	// IMP=0x0000000000203f5e
- (void)_addContentViewIfNeeded;	// IMP=0x0000000000203ea6
- (void)_swapActiveMedia:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002037ab
- (void)_removeOverlayView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000203619
- (void)_addOverlayViewAnimatedIfNeeded:(_Bool)arg1 dismissAfter:(double)arg2;	// IMP=0x0000000000203205
- (void)_cleanUpEverythingPlaybackRelated;	// IMP=0x0000000000202f7a
- (void)_cleanUpEverything;	// IMP=0x0000000000202dd3
- (void)_setPlaylist:(id)arg1;	// IMP=0x0000000000202ca8
- (void)loadAlphaImageProxy;	// IMP=0x00000000002028f1
- (void)_setAlphaImageProxy:(id)arg1;	// IMP=0x0000000000202827
- (void)_setImageProxies:(id)arg1;	// IMP=0x00000000002023e7
- (void)_updateMediaInfo;	// IMP=0x0000000000201fe9
- (_Bool)_canPause;	// IMP=0x0000000000201f97
- (void)_unregisterPlayerNotifications;	// IMP=0x0000000000201e56
- (void)_registerPlayerNotifications;	// IMP=0x0000000000201cf6
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;	// IMP=0x0000000000201c5f
- (void)_applicationWillAddDeactivationReason:(id)arg1;	// IMP=0x0000000000201bc6
- (_Bool)_shouldPausePlaybackDueToDeactivationReasons;	// IMP=0x0000000000201bab
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000000201b27
- (void)_handleApplicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0000000000201aca
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000000201926
- (void)_registerForApplicationStateNotifications;	// IMP=0x000000000020183d
- (void)transitionToForeground:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000201394
- (void)showAlphaImage:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002010f3
- (void)stop;	// IMP=0x0000000000200f30
- (void)pause;	// IMP=0x0000000000200eec
- (void)play;	// IMP=0x0000000000200ea8
- (id)preferredFocusEnvironments;	// IMP=0x0000000000200d49
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000200d34
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000200bab
- (void)updateFrames;	// IMP=0x00000000002009a1
- (void)vui_viewDidLayoutSubviews;	// IMP=0x000000000020098f
- (void)_handleViewWillDisappear;	// IMP=0x000000000020073c
- (void)vui_viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000200659
- (void)vui_viewDidLoad;	// IMP=0x0000000000200647
- (void)dealloc;	// IMP=0x000000000020051f
- (id)initWithName:(id)arg1;	// IMP=0x0000000000200093
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000020007a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000200061
- (id)init;	// IMP=0x0000000000200048

@end

