//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlaybackControlsViewController, UIEvent, UIView;
@protocol AVPlaybackControlsProtocol;

__attribute__((visibility("hidden")))
@interface _AVPlayerViewControllerContainerView
{
    UIEvent *_mostRecentEndOrCancelTouchesEvent;	// 16 = 0x10
    _Bool _fullScreen;	// 24 = 0x18
    UIView *_forwardFocusView;	// 32 = 0x20
    AVPlaybackControlsViewController<AVPlaybackControlsProtocol> *_nowPlayingPlaybackControlsViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000540c7
@property(nonatomic) __weak AVPlaybackControlsViewController<AVPlaybackControlsProtocol> *nowPlayingPlaybackControlsViewController; // @synthesize nowPlayingPlaybackControlsViewController=_nowPlayingPlaybackControlsViewController;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) UIView *forwardFocusView; // @synthesize forwardFocusView=_forwardFocusView;
- (id)accessibilityElements;	// IMP=0x0000000000054005
- (id)preferredFocusEnvironments;	// IMP=0x0000000000053f22
- (void)layoutSubviews;	// IMP=0x0000000000053eb5
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000053dee
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000053bdc
- (void)_updateFullScreenIfAppropriate;	// IMP=0x0000000000053adf
- (void)_updateFullScreenIfAppropriateForFrame:(struct CGRect)arg1;	// IMP=0x0000000000053a7e
@property(readonly, nonatomic, getter=_isUXAllowed) _Bool uxAllowed;

@end

