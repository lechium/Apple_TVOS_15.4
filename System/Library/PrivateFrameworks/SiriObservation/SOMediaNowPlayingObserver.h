//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriObservation/MRNowPlayingControllerDelegate-Protocol.h>

@class AFInstanceContext, MRNowPlayingController, NSDate, NSHashTable, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SOMediaNowPlayingObserver : NSObject <MRNowPlayingControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_playbackStateGroup;	// 16 = 0x10
    long long _playbackStateGroupDepth;	// 24 = 0x18
    long long _playbackState;	// 32 = 0x20
    NSDate *_lastPlayingDate;	// 40 = 0x28
    NSHashTable *_listeners;	// 48 = 0x30
    AFInstanceContext *_instanceContext;	// 56 = 0x38
    MRNowPlayingController *_nowPlayingController;	// 64 = 0x40
    _Bool _isProxyGroupPlayer;	// 72 = 0x48
    _Bool _isObserving;	// 73 = 0x49
}

+ (id)defaultObserver;	// IMP=0x0000000000006550
- (void).cxx_destruct;	// IMP=0x000000000000911d
- (void)_fetchLastPlayingDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008b57
- (void)_fetchNowPlayingAppPlaybackStateForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000087ae
- (void)_handleLastPlayingDateChangedTo:(id)arg1;	// IMP=0x000000000000879d
- (void)_handleNowPlayingApplicationPlaybackStateChange:(long long)arg1;	// IMP=0x000000000000828f
- (void)mediaRemoteActiveDeviceInfoDidChange:(id)arg1;	// IMP=0x0000000000008184
- (void)_updateProxyGroupPlayerState;	// IMP=0x0000000000007fff
- (void)mediaRemoteNowPlayingInfoDidChange:(id)arg1;	// IMP=0x0000000000007db6
- (void)mediaRemoteNowPlayingApplicationPlaybackStateDidChange:(id)arg1;	// IMP=0x0000000000007bfb
- (_Bool)_isProxyGroupPlayer;	// IMP=0x0000000000007b72
- (_Bool)_supportsProxyGroupPlayer;	// IMP=0x0000000000007b6a
- (void)_stopObservingNowPlayingAppPlaybackState;	// IMP=0x00000000000079ae
- (void)_startObservingNowPlayingAppPlaybackState;	// IMP=0x00000000000077ce
- (void)_endGroup;	// IMP=0x0000000000007792
- (void)_beginGroup;	// IMP=0x0000000000007759
- (void)controller:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000007571
- (void)controllerWillReloadForInvalidation:(id)arg1;	// IMP=0x0000000000007434
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;	// IMP=0x00000000000072dd
- (void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;	// IMP=0x000000000000712d
- (void)removeListener:(id)arg1;	// IMP=0x000000000000707f
- (void)addListener:(id)arg1;	// IMP=0x0000000000006f8c
- (void)getProxyGroupPlayerStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006ee2
- (void)getNowPlayingApplicationBundleIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006e38
- (void)getNowPlayingInfoForCurrentItemWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006d8e
- (void)getPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006c3f
@property(readonly, nonatomic) long long playbackState;
- (void)dealloc;	// IMP=0x0000000000006a71
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000069f0
- (id)initWithQueue:(id)arg1 instanceContext:(id)arg2;	// IMP=0x0000000000006624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

