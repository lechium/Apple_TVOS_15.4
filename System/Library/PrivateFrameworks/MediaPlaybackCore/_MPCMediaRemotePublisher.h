//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>
#import <MediaPlaybackCore/MPNowPlayingPlaybackQueueDataSourcePrivate-Protocol.h>

@class MPCPlaybackEngine, MPCPlayerPath, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSArray, NSString, NSUserDefaults;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MPCMediaRemotePublisher : NSObject <MPNowPlayingPlaybackQueueDataSourcePrivate, MPCPlaybackEngineEventObserving>
{
    NSArray *_accounts;	// 8 = 0x8
    _Bool _activeAccountAllowsSubscriptionPlayback;	// 16 = 0x10
    _Bool _activeAccountRequiresAuthorizationTokensForPlayback;	// 17 = 0x11
    NSString *_activeAccountStoreFrontIdentifier;	// 24 = 0x18
    NSUserDefaults *_ipodDefaults;	// 32 = 0x20
    _Bool _hasBeganFastForward;	// 40 = 0x28
    _Bool _hasBeganRewind;	// 41 = 0x29
    NSObject<OS_dispatch_source> *_nextPreviousTrackCooldownTimer;	// 48 = 0x30
    long long _deferredTrackChangeDelta;	// 56 = 0x38
    _Bool _initializedSupportedCommands;	// 64 = 0x40
    _Bool _engineRestoringState;	// 65 = 0x41
    _Bool _mediaServerAvailable;	// 66 = 0x42
    MPCPlaybackEngine *_playbackEngine;	// 72 = 0x48
    MPNowPlayingInfoCenter *_infoCenter;	// 80 = 0x50
    MPRemoteCommandCenter *_commandCenter;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000007acd0
@property(nonatomic, getter=isMediaServerAvailable) _Bool mediaServerAvailable; // @synthesize mediaServerAvailable=_mediaServerAvailable;
@property(nonatomic, getter=isEngineRestoringState) _Bool engineRestoringState; // @synthesize engineRestoringState=_engineRestoringState;
@property(readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property(nonatomic, getter=hasInitializedSupportedCommands) _Bool initializedSupportedCommands; // @synthesize initializedSupportedCommands=_initializedSupportedCommands;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000075147
- (void)_performDebugEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000074ea0
- (_Bool)_canInsertPlaybackContext:(id)arg1 forUser:(id)arg2;	// IMP=0x0000000000074de2
- (_Bool)_isRestrictedSubscriptionUser:(id)arg1;	// IMP=0x0000000000074d08
- (void)_updateSupportedCommands;	// IMP=0x000000000007264d
- (_Bool)_playbackStateIsIdle:(long long)arg1;	// IMP=0x0000000000072640
- (void)_updateLaunchCommands;	// IMP=0x00000000000725f9
- (id)_supportedSessionTypes;	// IMP=0x000000000007210f
- (id)_exportableSessionTypes;	// IMP=0x0000000000071aea
- (void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg1 play:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007166a
- (void)_becomeActiveIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007123c
- (void)_likedStateChangedNotification:(id)arg1;	// IMP=0x000000000007122a
- (void)_durationAvailableNotification:(id)arg1;	// IMP=0x0000000000071218
- (void)_disableQueueModificationsChangedNotification:(id)arg1;	// IMP=0x0000000000071206
- (void)_commandEventDidTimeoutNotification:(id)arg1;	// IMP=0x000000000007109d
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;	// IMP=0x0000000000070ad6
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;	// IMP=0x000000000007095b
- (void)engineDidResetMediaServices:(id)arg1;	// IMP=0x0000000000070951
- (void)engineDidLoseMediaServices:(id)arg1;	// IMP=0x0000000000070947
- (void)engine:(id)arg1 didChangeAccounts:(id)arg2;	// IMP=0x00000000000706d8
- (void)engineDidEndStateRestoration:(id)arg1;	// IMP=0x00000000000706ce
- (void)engineWillBeginStateRestoration:(id)arg1;	// IMP=0x00000000000706c4
- (void)engine:(id)arg1 didChangeCurrentItemVariantID:(id)arg2;	// IMP=0x00000000000706b2
- (void)engine:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;	// IMP=0x0000000000070651
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x0000000000070601
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x00000000000705b1
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x00000000000704ce
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x00000000000704b5
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;	// IMP=0x000000000007046c
- (void)leaveSharedSessionWithCommandID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000701b5
- (void)getShouldRestoreStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000700e3
- (void)reportUserBackgroundedApplication;	// IMP=0x0000000000070053
- (void)publishIfNeeded;	// IMP=0x000000000006f32e
@property(readonly, nonatomic) MPCPlayerPath *playerPath;
- (void)becomeActive;	// IMP=0x000000000006f277
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000006f069
- (void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x0000000000083bab
- (void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2;	// IMP=0x0000000000083a9d
- (void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000838fc
- (id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000083766
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;	// IMP=0x00000000000835ec
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000083460
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;	// IMP=0x0000000000083362
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long *)arg4;	// IMP=0x00000000000832a6
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000831e1
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;	// IMP=0x00000000000830fa
- (id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;	// IMP=0x0000000000083059

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

