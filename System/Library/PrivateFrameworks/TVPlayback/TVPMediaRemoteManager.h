//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, TVImageProxy, TVPMediaRemoteCommandHandler;
@protocol TVPMediaItem, TVPPlayback;

@interface TVPMediaRemoteManager : NSObject
{
    _Bool _usingPlayerForCommandHandlerOnly;	// 8 = 0x8
    _Bool _artworkNeedsUpdate;	// 9 = 0x9
    id <TVPPlayback> _player;	// 16 = 0x10
    TVPMediaRemoteCommandHandler *_remoteCommandHandler;	// 24 = 0x18
    id <TVPMediaItem> _currentMediaItem;	// 32 = 0x20
    id _elapsedTimeObserverToken;	// 40 = 0x28
    NSDate *_lastPushDate;	// 48 = 0x30
    NSDictionary *_lastNowPlayingInfo;	// 56 = 0x38
    TVImageProxy *_artworkProxy;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000000009635e
- (void).cxx_destruct;	// IMP=0x0000000000097209
@property(retain, nonatomic) TVImageProxy *artworkProxy; // @synthesize artworkProxy=_artworkProxy;
@property(nonatomic) _Bool artworkNeedsUpdate; // @synthesize artworkNeedsUpdate=_artworkNeedsUpdate;
@property(copy, nonatomic) NSDictionary *lastNowPlayingInfo; // @synthesize lastNowPlayingInfo=_lastNowPlayingInfo;
@property(retain, nonatomic) NSDate *lastPushDate; // @synthesize lastPushDate=_lastPushDate;
@property(retain, nonatomic) id elapsedTimeObserverToken; // @synthesize elapsedTimeObserverToken=_elapsedTimeObserverToken;
@property(retain, nonatomic) id <TVPMediaItem> currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(nonatomic) _Bool usingPlayerForCommandHandlerOnly; // @synthesize usingPlayerForCommandHandlerOnly=_usingPlayerForCommandHandlerOnly;
@property(retain, nonatomic) TVPMediaRemoteCommandHandler *remoteCommandHandler; // @synthesize remoteCommandHandler=_remoteCommandHandler;
@property(nonatomic) __weak id <TVPPlayback> player; // @synthesize player=_player;
- (void)_pushNowPlayingInfo:(_Bool)arg1 invalidateArtwork:(_Bool)arg2 pushImmediately:(_Bool)arg3;	// IMP=0x0000000000097106
- (void)_updateBoundRepeatMode;	// IMP=0x00000000000970ed
- (void)_updateBoundShuffleMode;	// IMP=0x00000000000970d4
- (void)_updateBoundSelectedSubtitleOption;	// IMP=0x00000000000970bb
- (void)_updateBoundSelectedAudioOption;	// IMP=0x00000000000970a2
- (void)_currentMediaItemMetadataDidChange:(id)arg1;	// IMP=0x0000000000096e70
- (void)_currentMediaItemDidChange:(id)arg1;	// IMP=0x0000000000096de7
- (void)_playbackStateDidChange:(id)arg1;	// IMP=0x0000000000096dce
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000000096d78
- (void)stopRespondingToRemoteControlEvents;	// IMP=0x0000000000096c70
- (void)startRespondingToRemoteControlEvents;	// IMP=0x0000000000096c33
- (void)setPlayerForCommandHandler:(id)arg1;	// IMP=0x000000000009657a
- (void)dealloc;	// IMP=0x00000000000964f9
- (id)init;	// IMP=0x00000000000964b8
- (id)_init;	// IMP=0x00000000000963f3
- (void)tvs_bindRepeatModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x0000000000096265
- (id)RepeatModeBinding;	// IMP=0x0000000000096215
- (void)tvs_bindShuffleModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000000009611c
- (id)ShuffleModeBinding;	// IMP=0x00000000000960cc
- (void)tvs_bindSelectedSubtitleOptionBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x0000000000095fd3
- (id)SelectedSubtitleOptionBinding;	// IMP=0x0000000000095f83
- (void)tvs_bindSelectedAudioOptionBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x0000000000095e8a
- (id)SelectedAudioOptionBinding;	// IMP=0x0000000000095e3a

@end

