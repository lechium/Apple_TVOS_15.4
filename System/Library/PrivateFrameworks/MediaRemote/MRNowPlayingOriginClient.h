//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class MRApplicationActivity, MRClient, MRDeviceInfo, MROrigin, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    _Bool _overrideApp;	// 16 = 0x10
    NSString *_overrideAppBundleID;	// 24 = 0x18
    unsigned int _routeDiscoveryMode;	// 32 = 0x20
    NSMutableArray *_applicationPickedRoutes;	// 40 = 0x28
    unsigned int _inputMode;	// 48 = 0x30
    float _volume;	// 52 = 0x34
    unsigned int _volumeCapabilities;	// 56 = 0x38
    MRApplicationActivity *_activity;	// 64 = 0x40
    NSString *_routingContextID;	// 72 = 0x48
    MRDeviceInfo *_deviceInfo;	// 80 = 0x50
    CDUnknownBlockType _playbackQueueCallback;	// 88 = 0x58
    CDUnknownBlockType _playbackQueueTransactionCallback;	// 96 = 0x60
    CDUnknownBlockType _capabilitiesCallback;	// 104 = 0x68
    CDUnknownBlockType _commandCallback;	// 112 = 0x70
    CDUnknownBlockType _beginLyricsEventCallback;	// 120 = 0x78
    CDUnknownBlockType _endLyricsEventCallback;	// 128 = 0x80
    CDUnknownBlockType _playbackSessionCallback;	// 136 = 0x88
    CDUnknownBlockType _playbackSessionMigrateBeginCallback;	// 144 = 0x90
    CDUnknownBlockType _playbackSessionMigrateEndCallback;	// 152 = 0x98
    CDUnknownBlockType _playbackSessionMigrateRequestCallback;	// 160 = 0xa0
    CDUnknownBlockType _clientMessageCallback;	// 168 = 0xa8
    NSMutableArray *_nowPlayingClients;	// 176 = 0xb0
    unsigned int _hardwareRemoteBehavior;	// 184 = 0xb8
    MRClient *_activeNowPlayingClient;	// 192 = 0xc0
    MROrigin *_origin;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000001fd355
@property(nonatomic) unsigned int hardwareRemoteBehavior; // @synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior;
@property(nonatomic, getter=isOverrideApp) _Bool overrideApp; // @synthesize overrideApp=_overrideApp;
@property(readonly, nonatomic) MROrigin *origin; // @synthesize origin=_origin;
- (id)debugDescription;	// IMP=0x00000000001fcfbc
- (id)description;	// IMP=0x00000000001fce51
- (void)_restoreNowPlayingClientState;	// IMP=0x00000000001fcb36
- (void)_prepareToRestoreClientStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fc327
- (void)restoreNowPlayingClientState;	// IMP=0x00000000001fc214
- (void)removeAllClients;	// IMP=0x00000000001fc1ac
- (void)removeClient:(id)arg1;	// IMP=0x00000000001fbf27
- (id)nowPlayingClientForPlayerPath:(id)arg1;	// IMP=0x00000000001fbbd7
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;	// IMP=0x00000000001fb8eb
@property(retain, nonatomic) MRDeviceInfo *deviceInfo;
@property(retain, nonatomic) MRApplicationActivity *activity;
@property(retain, nonatomic) MRClient *activeNowPlayingClient; // @synthesize activeNowPlayingClient=_activeNowPlayingClient;
@property(nonatomic) unsigned int inputMode;
@property(nonatomic) unsigned int routeDiscoveryMode;
@property(copy, nonatomic) NSString *overrideAppBundleID;
- (_Bool)overrideApp;	// IMP=0x00000000001fae88
- (void)setIsOverrideApp:(_Bool)arg1;	// IMP=0x00000000001fae2a
@property(copy, nonatomic) NSArray *applicationPickedRoutes;
@property(copy, nonatomic) CDUnknownBlockType clientMessageCallback;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateRequestCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateEndCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionMigrateBeginCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackSessionCallback;
@property(copy, nonatomic) CDUnknownBlockType commandCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueTransactionCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueCallback;
@property(readonly, nonatomic) NSArray *nowPlayingClients;
@property(nonatomic) unsigned int volumeCapabilities;
@property(nonatomic) float volume;
- (void)_handleDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x00000000001f9433
- (id)initWithOrigin:(id)arg1;	// IMP=0x00000000001f92eb

@end
