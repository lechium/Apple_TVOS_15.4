//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVPlayback/TVPPlaybackViewControllerDelegate-Protocol.h>
#import <TVPlayback/TVPVideoPlayerViewControllerDelegate-Protocol.h>

@class MPAVRoute, NSObject, NSString, NSTimer, TVPHardwareButtonEventManager;
@protocol TVPPlayback, TVPPlaybackViewControllerDelegate;

@interface TVPPlaybackViewController : UIViewController <TVPVideoPlayerViewControllerDelegate, TVPPlaybackViewControllerDelegate>
{
    _Bool _showsTitleWhileLoading;	// 8 = 0x8
    _Bool _isRadioPlayback;	// 9 = 0x9
    _Bool _isIdleScreen;	// 10 = 0xa
    _Bool _allowDefaultMenuButtonBehavior;	// 11 = 0xb
    _Bool _popWhenPlayerStops;	// 12 = 0xc
    _Bool _isMusicPlaylist;	// 13 = 0xd
    _Bool _allowsSkipping;	// 14 = 0xe
    _Bool _foregrounded;	// 15 = 0xf
    _Bool _showsInfoMetadataSubpanel;	// 16 = 0x10
    _Bool _invalidatePlayerWhenDone;	// 17 = 0x11
    _Bool _startedPlaying;	// 18 = 0x12
    _Bool _hasBeenRemovedFromParentViewController;	// 19 = 0x13
    NSObject<TVPPlayback> *_player;	// 24 = 0x18
    long long _initialPlaybackType;	// 32 = 0x20
    long long _resumeMenuOption;	// 40 = 0x28
    double _startTime;	// 48 = 0x30
    id <TVPPlaybackViewControllerDelegate> _playbackDelegate;	// 56 = 0x38
    MPAVRoute *_endpointRoute;	// 64 = 0x40
    NSTimer *_playbackLimitTimer;	// 72 = 0x48
    TVPHardwareButtonEventManager *_buttonEventManager;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000f0984
@property(retain, nonatomic) TVPHardwareButtonEventManager *buttonEventManager; // @synthesize buttonEventManager=_buttonEventManager;
@property(nonatomic) _Bool hasBeenRemovedFromParentViewController; // @synthesize hasBeenRemovedFromParentViewController=_hasBeenRemovedFromParentViewController;
@property(retain, nonatomic) NSTimer *playbackLimitTimer; // @synthesize playbackLimitTimer=_playbackLimitTimer;
@property(nonatomic, getter=hasStartedPlaying) _Bool startedPlaying; // @synthesize startedPlaying=_startedPlaying;
@property(nonatomic) _Bool invalidatePlayerWhenDone; // @synthesize invalidatePlayerWhenDone=_invalidatePlayerWhenDone;
@property(nonatomic) _Bool showsInfoMetadataSubpanel; // @synthesize showsInfoMetadataSubpanel=_showsInfoMetadataSubpanel;
@property(nonatomic, getter=isForegrounded) _Bool foregrounded; // @synthesize foregrounded=_foregrounded;
@property(nonatomic) _Bool allowsSkipping; // @synthesize allowsSkipping=_allowsSkipping;
@property(retain, nonatomic) MPAVRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
@property(nonatomic) _Bool isMusicPlaylist; // @synthesize isMusicPlaylist=_isMusicPlaylist;
@property(nonatomic) _Bool popWhenPlayerStops; // @synthesize popWhenPlayerStops=_popWhenPlayerStops;
@property(nonatomic) _Bool allowDefaultMenuButtonBehavior; // @synthesize allowDefaultMenuButtonBehavior=_allowDefaultMenuButtonBehavior;
@property(nonatomic) _Bool isIdleScreen; // @synthesize isIdleScreen=_isIdleScreen;
@property(nonatomic) __weak id <TVPPlaybackViewControllerDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
@property(nonatomic) _Bool isRadioPlayback; // @synthesize isRadioPlayback=_isRadioPlayback;
@property(nonatomic) _Bool showsTitleWhileLoading; // @synthesize showsTitleWhileLoading=_showsTitleWhileLoading;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long resumeMenuOption; // @synthesize resumeMenuOption=_resumeMenuOption;
@property(readonly, nonatomic) long long initialPlaybackType; // @synthesize initialPlaybackType=_initialPlaybackType;
@property(retain, nonatomic) NSObject<TVPPlayback> *player; // @synthesize player=_player;
- (void)_playbackLimitTimerFired:(id)arg1;	// IMP=0x00000000000f072c
- (void)_startPlaybackLimitTimerWithLimit:(double)arg1;	// IMP=0x00000000000f0699
- (void)_clearPlaybackLimitTimer;	// IMP=0x00000000000f060f
- (void)_playerStateChanged:(id)arg1;	// IMP=0x00000000000f038e
- (_Bool)playbackViewControllerShouldChangeMediaUsingDirection:(id)arg1;	// IMP=0x00000000000f02e0
- (_Bool)playbackViewController:(id)arg1 handleControlGesture:(long long)arg2;	// IMP=0x00000000000f0228
- (long long)currentEndpointDeviceTypeForPlaybackViewController:(id)arg1;	// IMP=0x00000000000f0178
- (void)playbackViewControllerUserWillInitiatePlayback:(id)arg1;	// IMP=0x00000000000f00d1
- (void)playbackViewController:(id)arg1 willShowIdleViewController:(id)arg2 forMediaItem:(id)arg3 targetCoverFrame:(inout struct CGRect *)arg4;	// IMP=0x00000000000effe9
- (void)playbackViewController:(id)arg1 wantsIdleViewControllerForMediaItem:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eff0c
- (_Bool)playbackViewController:(id)arg1 shouldShowIdleViewControllerForMediaItem:(id)arg2;	// IMP=0x00000000000efe3f
- (void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000efd45
- (_Bool)playbackViewControllerProvidesCustomControls:(id)arg1;	// IMP=0x00000000000efc97
- (void)contextMenuForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000efbb5
- (void)_updateChildViewControllerForCurrentMediaItem;	// IMP=0x00000000000ef491
- (void)_currentMediaItemDidChange:(id)arg1;	// IMP=0x00000000000ef47f
- (void)_useNowPlayingVideoViewController:(id)arg1;	// IMP=0x00000000000ef3d8
- (void)userDidFinishInteractionAfterErrorWasPresented:(id)arg1;	// IMP=0x00000000000ef37b
- (void)videoPlayerViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ef2d3
- (void)_currentChildViewControllerDidChangeFrom:(id)arg1;	// IMP=0x00000000000ef2cd
- (void)_currentChildViewControllerWillChangeTo:(id)arg1;	// IMP=0x00000000000ef2c7
- (_Bool)_tvTabBarShouldAutohide;	// IMP=0x00000000000ef225
- (void)transitionToForeground:(_Bool)arg1;	// IMP=0x00000000000ef140
- (void)transitionToBackground:(_Bool)arg1;	// IMP=0x00000000000ef05a
@property(nonatomic) _Bool startPlaybackWhenViewAppears;
@property(nonatomic) _Bool showsVideoControls;
- (void)loadCurrentMediaItem;	// IMP=0x00000000000eeab1
- (void)insertOverlayViewController:(id)arg1;	// IMP=0x00000000000eea02
- (void)insertOverlaySubview:(id)arg1;	// IMP=0x00000000000ee953
- (void)dismissWithErrorText:(id)arg1;	// IMP=0x00000000000ee8a5
@property(nonatomic) _Bool presentsNowPlayingVideoWithoutAnimations;
@property(nonatomic) _Bool allowsVideoPlaybackWithoutVisuals;
- (id)currentChildViewController;	// IMP=0x00000000000ee057
- (void)loadView;	// IMP=0x00000000000ede9a
- (id)preferredFocusEnvironments;	// IMP=0x00000000000ede02
- (id)tvp_customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x00000000000edd79
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000edd2f
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000edb26
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000eda93
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ed9fd
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000000ed940
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00000000000ed8a4
- (void)dealloc;	// IMP=0x00000000000ed750
- (id)initWithPlayer:(id)arg1 invalidateWhenDone:(_Bool)arg2 initialPlaybackType:(long long)arg3;	// IMP=0x00000000000ed2b5
- (id)initWithPlayer:(id)arg1 invalidateWhenDone:(_Bool)arg2;	// IMP=0x00000000000ed2a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ed284
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000ed268
- (id)init;	// IMP=0x00000000000ed24c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

