//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVPlayback/TVPMusicVideoTitleControllerDelegate-Protocol.h>
#import <TVPlayback/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <TVPlayback/UIViewControllerTransitioningDelegate-Protocol.h>

@class AVPlayer, AVPlayerViewController, NSString, TVPMusicNowPlayingVideoView, TVPMusicVideoTitleController, UIView;
@protocol TVPAVFPlayback, TVPMusicVideoPlayerViewControllerDelegate;

@interface TVPMusicVideoPlayerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, TVPMusicVideoTitleControllerDelegate>
{
    _Bool _viewVisible;	// 8 = 0x8
    _Bool _manuallyPausedState;	// 9 = 0x9
    id <TVPMusicVideoPlayerViewControllerDelegate> _delegate;	// 16 = 0x10
    AVPlayerViewController *_avPlayerViewController;	// 24 = 0x18
    AVPlayer *_avPlayer;	// 32 = 0x20
    id <TVPAVFPlayback> _player;	// 40 = 0x28
    TVPMusicNowPlayingVideoView *_videoView;	// 48 = 0x30
    TVPMusicNowPlayingVideoView *_interstitialView;	// 56 = 0x38
    TVPMusicVideoTitleController *_titleController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000f44e6
@property(nonatomic, getter=isManuallyPausedState) _Bool manuallyPausedState; // @synthesize manuallyPausedState=_manuallyPausedState;
@property(retain, nonatomic) TVPMusicVideoTitleController *titleController; // @synthesize titleController=_titleController;
@property(readonly, nonatomic) TVPMusicNowPlayingVideoView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(readonly, nonatomic) TVPMusicNowPlayingVideoView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) id <TVPAVFPlayback> player; // @synthesize player=_player;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(readonly, nonatomic) AVPlayerViewController *avPlayerViewController; // @synthesize avPlayerViewController=_avPlayerViewController;
@property(nonatomic) __weak id <TVPMusicVideoPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectAddButton:(id)arg1;	// IMP=0x00000000000f43b3
- (void)didHideTitle:(id)arg1;	// IMP=0x00000000000f43a1
- (void)didShowTitle:(id)arg1;	// IMP=0x00000000000f438f
- (void)_animateDismissTransition:(id)arg1;	// IMP=0x00000000000f351b
- (void)_animatePresentTransition:(id)arg1;	// IMP=0x00000000000f2723
- (void)animateTransition:(id)arg1;	// IMP=0x00000000000f2663
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000f2655
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000f264c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000000f2643
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000000f25d3
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x00000000000f2542
- (id)preferredFocusEnvironments;	// IMP=0x00000000000f23d7
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000f1e60
@property(readonly, nonatomic) UIView *previewView;
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000f1c14
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000f1b99
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000f1b28
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000f1ae2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000f1a1d
- (void)viewDidLoad;	// IMP=0x00000000000f18a4
- (void)dealloc;	// IMP=0x00000000000f17f8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000f1603
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000f1551

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

