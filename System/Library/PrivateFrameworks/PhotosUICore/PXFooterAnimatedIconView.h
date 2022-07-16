//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSObject;
@protocol OS_dispatch_queue;

@interface PXFooterAnimatedIconView : UIView
{
    unsigned long long _reasonsToPause;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    long long _lock_desiredMode;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    AVPlayer *_player;	// 40 = 0x28
    CDStruct_1b6d18a9 _introStartTime;	// 48 = 0x30
    CDStruct_1b6d18a9 _loopStartTime;	// 72 = 0x48
    CDStruct_1b6d18a9 _loopEndTime;	// 96 = 0x60
    CDStruct_1b6d18a9 _outroEndTime;	// 120 = 0x78
    float _playerRateBeforePause;	// 144 = 0x90
    id _gridCycleTimeObservationToken;	// 152 = 0x98
    long long _waitingState;	// 160 = 0xa0
    double _waitingStateStartTime;	// 168 = 0xa8
    _Bool _wantsGridCycleTimeObservation;	// 176 = 0xb0
    _Bool _isPlayerHidden;	// 177 = 0xb1
    _Bool _isPlayerPaused;	// 178 = 0xb2
    AVPlayerItem *_playerItem;	// 184 = 0xb8
    long long _style;	// 192 = 0xc0
    AVPlayerLayer *_playerLayer;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000228709
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
- (void)_mediaServicesWereReset:(id)arg1;	// IMP=0x00000000002286b1
- (void)_applicationDidEnterForeground:(id)arg1;	// IMP=0x000000000022869a
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000228683
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000228642
- (void)didMoveToWindow;	// IMP=0x0000000000228601
- (void)layoutSubviews;	// IMP=0x00000000002285ab
- (id)_movieURL;	// IMP=0x00000000002284e0
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool isObscured;
@property(readonly, nonatomic) long long presentedState;
@property(nonatomic) _Bool isPlayerPaused; // @synthesize isPlayerPaused=_isPlayerPaused;
@property(nonatomic) _Bool isPlayerHidden; // @synthesize isPlayerHidden=_isPlayerHidden;
- (void)_didPlayerToEndTime:(id)arg1;	// IMP=0x0000000000227cad
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void)_didSeekToPlayFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000227a16
- (void)_playFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000227881
- (void)_didSeekToTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000227850
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000002276cb
- (void)_createPlayerIfNeeded;	// IMP=0x0000000000227508
- (void)_hideVideo;	// IMP=0x00000000002274d4
- (void)_crossedGridCycleBoundary;	// IMP=0x00000000002273cd
@property(nonatomic) _Bool wantsGridCycleTimeObservation; // @synthesize wantsGridCycleTimeObservation=_wantsGridCycleTimeObservation;
- (void)_transitionToState:(long long)arg1;	// IMP=0x00000000002270fc
- (void)_update;	// IMP=0x0000000000226e4a
- (void)_setNeedsUpdate;	// IMP=0x0000000000226dc0
- (void)_layoutPlayer;	// IMP=0x0000000000226c53
- (void)_updateIsPlayerPaused;	// IMP=0x0000000000226b2b
- (void)_removeReasonToPause:(unsigned long long)arg1;	// IMP=0x0000000000226a67
- (void)_addReasonToPause:(unsigned long long)arg1;	// IMP=0x00000000002269a6
- (void)_updateStyle;	// IMP=0x00000000002267b1
@property long long desiredMode;
- (void)_windowDidChange;	// IMP=0x00000000002264f3
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000226497
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000226486
- (void)dealloc;	// IMP=0x0000000000226432
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000022620e

@end
