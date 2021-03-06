//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/AVPlayerViewControllerDelegate-Protocol.h>
#import <TVMLKit/AVPlayerViewControllerPlaybackDelegate-Protocol.h>
#import <TVMLKit/TVPlaying-Protocol.h>

@class AVPlayer, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, TVMediaItem, TVPlaylist;
@protocol TVPlayerBridging, TVPlayerImpl, TVPlayerInternalDelegate, TVPlayerItemImpl;

@interface TVPlayer : NSObject <AVPlayerViewControllerDelegate, TVPlaying, AVPlayerViewControllerPlaybackDelegate>
{
    NSObject<TVPlayerImpl> *_impl;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    long long _modifier;	// 24 = 0x18
    TVPlaylist *_playlist;	// 32 = 0x20
    double _scanRate;	// 40 = 0x28
    NSMutableSet *_observedTimedMetadataKeys;	// 48 = 0x30
    NSMutableDictionary *_observedTimeIntervalMap;	// 56 = 0x38
    NSMutableDictionary *_observedTimeBoundaryMap;	// 64 = 0x40
    struct {
        _Bool respondsToCurrentMediaItemDidChange;
        _Bool respondsToShouldAllowPlaybackWithRating;
        _Bool respondsToShouldStartPlaybackAtTime;
        _Bool respondsToDidError;
    } _internalDelegateFlags;	// 72 = 0x48
    _Bool _currentMediaItemHasVideoContent;	// 76 = 0x4c
    long long _resumeMenuBehavior;	// 80 = 0x50
    NSDictionary *userInfo;	// 88 = 0x58
    TVMediaItem *_currentMediaItem;	// 96 = 0x60
    id <TVPlayerBridging> _bridge;	// 104 = 0x68
    id <TVPlayerInternalDelegate> _internalDelegate;	// 112 = 0x70
    NSObject<TVPlayerItemImpl> *_currentPlayerItem;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000a9c24
@property(readonly, nonatomic) NSObject<TVPlayerItemImpl> *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(readonly, nonatomic) NSObject<TVPlayerImpl> *impl; // @synthesize impl=_impl;
@property(nonatomic) __weak id <TVPlayerInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak id <TVPlayerBridging> bridge; // @synthesize bridge=_bridge;
@property(readonly, nonatomic) TVMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(nonatomic) _Bool currentMediaItemHasVideoContent; // @synthesize currentMediaItemHasVideoContent=_currentMediaItemHasVideoContent;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(nonatomic) long long resumeMenuBehavior; // @synthesize resumeMenuBehavior=_resumeMenuBehavior;
- (void)_dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a9a41
- (void)_checkResumePreferenceForMediaItem:(id)arg1 resumeTime:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a9932
- (void)_checkRestrictionsForMediaItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a9836
- (void)_performPreChecksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a9205
- (void)_performPreChecks;	// IMP=0x00000000000a904a
- (void)_resolveError;	// IMP=0x00000000000a8e5f
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfTransportBar:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000a8d03
- (void)skipToPreviousItemForPlayerViewController:(id)arg1;	// IMP=0x00000000000a8c0b
- (void)skipToNextItemForPlayerViewController:(id)arg1;	// IMP=0x00000000000a8b16
- (void)shouldChangeMediaInDirection:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a889f
- (void)playerViewController:(id)arg1 shouldScanAtRate:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a8611
- (void)playerViewController:(id)arg1 shouldPauseWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a83c5
- (void)playerViewController:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a8112
- (void)playerViewController:(id)arg1 shouldSeekToDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a7eea
- (void)playerViewController:(id)arg1 shouldSeekToTime:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a7cff
- (void)previous;	// IMP=0x00000000000a7cb3
- (void)next;	// IMP=0x00000000000a7aa7
- (void)changeToMediaItemAtIndex:(long long)arg1;	// IMP=0x00000000000a7996
- (void)setPlaylist:(id)arg1;	// IMP=0x00000000000a7870
@property(readonly, nonatomic) TVPlaylist *playlist;
- (void)setCurrentMediaItem:(id)arg1;	// IMP=0x00000000000a72a7
@property(readonly, nonatomic) TVMediaItem *previousMediaItem;
@property(readonly, nonatomic) TVMediaItem *nextMediaItem;
- (id)nextMediaItemInDirection:(long long)arg1;	// IMP=0x00000000000a6f83
- (void)_updateTimeBoundaryObserversWithIntervals:(id)arg1;	// IMP=0x00000000000a6904
- (void)_updateTimeIntervalObserversWithIntervals:(id)arg1;	// IMP=0x00000000000a62f3
- (void)stopObservingEvent:(id)arg1;	// IMP=0x00000000000a5eca
- (void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;	// IMP=0x00000000000a5cdc
- (void)presentWithAnimation:(_Bool)arg1;	// IMP=0x00000000000a5c90
- (void)pause;	// IMP=0x00000000000a5c33
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) double scanRate;
- (void)stop;	// IMP=0x00000000000a5a81
- (void)play;	// IMP=0x00000000000a598d
- (void)begin;	// IMP=0x00000000000a5971
@property(retain, nonatomic) NSDate *elapsedDate;
@property(nonatomic) double elapsedTime;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long modifier;
- (void)setState:(long long)arg1 modifier:(long long)arg2;	// IMP=0x00000000000a5395
- (void)setState:(long long)arg1;	// IMP=0x00000000000a5381
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) AVPlayer *avPlayer;
- (id)errorLogs;	// IMP=0x00000000000a5185
- (id)accessLogs;	// IMP=0x00000000000a4fa5
- (id)playbackDate;	// IMP=0x00000000000a4f8f
- (void)reset;	// IMP=0x00000000000a4f7b
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback;
- (void)_processTimedMetadata:(id)arg1;	// IMP=0x00000000000a440f
- (void)_updatePlayingStateForRate:(float)arg1;	// IMP=0x00000000000a434a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000a3d5f
- (void)playerItemStalled:(id)arg1;	// IMP=0x00000000000a3c6b
- (void)playerItemPlayDidEnd:(id)arg1;	// IMP=0x00000000000a3b37
@property(readonly, nonatomic) AVPlayer *player;
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a3a81
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x00000000000a3775
- (id)initWithImpl:(id)arg1;	// IMP=0x00000000000a3552
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000a3540
- (id)init;	// IMP=0x00000000000a3500
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;	// IMP=0x00000000000e1884
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e17d7
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;	// IMP=0x00000000000e1740
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;	// IMP=0x00000000000e16ac
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;	// IMP=0x00000000000e1618
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;	// IMP=0x00000000000e1584
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;	// IMP=0x00000000000e14f0

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool showsResumeMenu;
@property(readonly) Class superclass;

@end

