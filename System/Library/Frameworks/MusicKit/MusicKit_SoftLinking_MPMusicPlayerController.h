//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMusicPlayerController, MusicKit_SoftLinking_MPMusicPlayerItem;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPMusicPlayerController : NSObject
{
    MPMusicPlayerController *_underlyingPlayerController;	// 8 = 0x8
}

+ (id)notificationUserInfoKeyContentItemIDs;	// IMP=0x000000000000856b
+ (id)playbackStateDidChangeNotificationName;	// IMP=0x000000000000855e
+ (id)playbackQueueDidChangeNotificationName;	// IMP=0x0000000000008551
+ (id)nowPlayingItemDidChangeNotificationName;	// IMP=0x0000000000008544
+ (id)applicationMusicPlayer;	// IMP=0x00000000000078a7
+ (id)systemMusicPlayer;	// IMP=0x00000000000076f0
- (void).cxx_destruct;	// IMP=0x00000000000087ef
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x000000000000874c
- (void)_handleQueueDidChangeNotification:(id)arg1;	// IMP=0x00000000000086a9
- (void)_handleNowPlayingItemDidChangeNotification:(id)arg1;	// IMP=0x0000000000008606
- (void)endGeneratingPlaybackNotifications;	// IMP=0x000000000000852e
- (void)beginGeneratingPlaybackNotifications;	// IMP=0x0000000000008518
- (void)skipToPreviousItem;	// IMP=0x0000000000008502
- (void)skipToBeginning;	// IMP=0x00000000000084ec
- (void)skipToNextItem;	// IMP=0x00000000000084d6
- (void)endSeeking;	// IMP=0x00000000000084c0
- (void)beginSeekingBackward;	// IMP=0x00000000000084aa
- (void)beginSeekingForward;	// IMP=0x0000000000008494
@property(nonatomic) float currentPlaybackRate;
@property(nonatomic) double currentPlaybackTime;
- (void)stop;	// IMP=0x0000000000008426
- (void)pause;	// IMP=0x0000000000008410
- (void)play;	// IMP=0x00000000000083fa
- (void)prepareToPlayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000083e4
@property(readonly, nonatomic) _Bool isPreparedToPlay;
@property(nonatomic) long long shuffleMode;
@property(nonatomic) long long repeatMode;
@property(readonly, nonatomic) long long playbackState;
- (void)performQueueTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008212
- (void)appendQueueDescriptor:(id)arg1;	// IMP=0x00000000000081c2
- (void)prependQueueDescriptor:(id)arg1;	// IMP=0x0000000000008172
- (void)setQueueWithDescriptor:(id)arg1;	// IMP=0x0000000000008122
- (void)setNowPlayingItemWithIdentifier:(id)arg1;	// IMP=0x000000000000810c
- (id)itemsForContentItemIDs:(id)arg1;	// IMP=0x0000000000007ed8
@property(readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerItem *nowPlayingItem;
- (void)dealloc;	// IMP=0x0000000000007d85
- (id)_initWithUnderlyingPlayerController:(id)arg1;	// IMP=0x0000000000007a5e

@end

