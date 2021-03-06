//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehaviorContext-Protocol.h>
#import <AVKit/AVBehaviorContextInternal-Protocol.h>
#import <AVKit/AVPlayerViewControllerBehaviorContext-Protocol.h>
#import <AVKit/AVPlayerViewControllerPlaybackDelegate-Protocol.h>

@class AVMusicAppBehavior, AVMusicAppBehaviorPlaybackState, AVObservationController, AVPlayerController, AVPlayerViewController, NSNumber, NSString;

@interface AVMusicAppBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVPlayerViewControllerPlaybackDelegate, AVBehaviorContext>
{
    _Bool _showsSkipItemButtons;	// 8 = 0x8
    _Bool _skipToPreviousItemButtonEnabled;	// 9 = 0x9
    _Bool _skipToNextItemButtonEnabled;	// 10 = 0xa
    _Bool _scrubbing;	// 11 = 0xb
    AVPlayerViewController *_playerViewController;	// 16 = 0x10
    AVMusicAppBehavior *_behavior;	// 24 = 0x18
    NSNumber *_seekTargetTime;	// 32 = 0x20
    AVObservationController *_observationController;	// 40 = 0x28
    AVPlayerController *_playerController;	// 48 = 0x30
    AVMusicAppBehaviorPlaybackState *_playbackState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000030c94
@property(retain, nonatomic) AVMusicAppBehaviorPlaybackState *playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain, nonatomic) NSNumber *seekTargetTime; // @synthesize seekTargetTime=_seekTargetTime;
@property(nonatomic, getter=isSkipToNextItemButtonEnabled) _Bool skipToNextItemButtonEnabled; // @synthesize skipToNextItemButtonEnabled=_skipToNextItemButtonEnabled;
@property(nonatomic, getter=isSkipToPreviousItemButtonEnabled) _Bool skipToPreviousItemButtonEnabled; // @synthesize skipToPreviousItemButtonEnabled=_skipToPreviousItemButtonEnabled;
@property(nonatomic) _Bool showsSkipItemButtons; // @synthesize showsSkipItemButtons=_showsSkipItemButtons;
@property(nonatomic) __weak AVMusicAppBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void)playerControllerDidChange;	// IMP=0x0000000000030b60
- (void)_updateSkippingBehavior;	// IMP=0x00000000000308fa
- (void)didFinishSeekForPlayerViewController:(id)arg1;	// IMP=0x0000000000030827
- (void)didFinishScanningForPlayerViewController:(id)arg1;	// IMP=0x00000000000306cb
- (void)playerViewController:(id)arg1 shouldScanAtRate:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003056c
- (void)playerViewController:(id)arg1 shouldPauseWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000304ee
- (void)playerViewController:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000303d4
- (void)playerViewController:(id)arg1 shouldSeekToTime:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000302a4
- (void)didRemoveBehavior:(id)arg1;	// IMP=0x0000000000030267
- (void)willRemoveBehavior:(id)arg1;	// IMP=0x0000000000030261
- (void)didAddBehavior:(id)arg1;	// IMP=0x0000000000030164
- (void)willAddBehavior:(id)arg1;	// IMP=0x000000000003015e
- (void)dealloc;	// IMP=0x000000000003009f
- (id)initWithAVKitOwner:(id)arg1;	// IMP=0x000000000002ffd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

