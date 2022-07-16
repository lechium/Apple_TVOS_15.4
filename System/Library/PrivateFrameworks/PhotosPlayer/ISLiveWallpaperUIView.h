//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISLiveWallpaperPlayer, NSTimer, UIGestureRecognizer;

@interface ISLiveWallpaperUIView
{
    _Bool _touching;	// 8 = 0x8
    UIGestureRecognizer *_playbackGestureRecognizer;	// 16 = 0x10
    double _force;	// 24 = 0x18
    NSTimer *_updateTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000014f87
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) _Bool touching; // @synthesize touching=_touching;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
- (void)dealloc;	// IMP=0x0000000000014ee6
- (void)_updatePlayer;	// IMP=0x0000000000014e1c
- (void)_handlePlaybackRecognizer:(id)arg1;	// IMP=0x0000000000014ddf
- (void)_handleUpdateTimer;	// IMP=0x0000000000014d68
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000014bbb
- (void)_ISLiveWallpaperUIViewCommonInitialization;	// IMP=0x0000000000014a9c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000014a3f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000149f3

// Remaining properties
@property(retain, nonatomic) ISLiveWallpaperPlayer *player; // @dynamic player;

@end
