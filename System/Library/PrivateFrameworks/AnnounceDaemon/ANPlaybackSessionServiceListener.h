//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnounceDaemon/ANAnnouncementCoordinatorDelegate-Protocol.h>
#import <AnnounceDaemon/ANLocalPlaybackSessionServiceInterface-Protocol.h>
#import <AnnounceDaemon/ANRemotePlaybackSessionServiceInterface-Protocol.h>
#import <AnnounceDaemon/ANRemotePlaybackStatusProvider-Protocol.h>
#import <AnnounceDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ANPlaybackSessionServiceListener : NSObject <ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, NSXPCListenerDelegate, ANAnnouncementCoordinatorDelegate, ANRemotePlaybackStatusProvider>
{
    NSXPCListener *_localPlaybackSessionListener;	// 8 = 0x8
    NSXPCListener *_remotePlaybackSessionListener;	// 16 = 0x10
    NSMutableSet *_remotePlaybackClients;	// 24 = 0x18
    NSMutableSet *_localPlaybackClients;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_playbackClientsSerialQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000165cb
@property(readonly) NSObject<OS_dispatch_queue> *playbackClientsSerialQueue; // @synthesize playbackClientsSerialQueue=_playbackClientsSerialQueue;
@property(retain) NSMutableSet *localPlaybackClients; // @synthesize localPlaybackClients=_localPlaybackClients;
@property(retain) NSMutableSet *remotePlaybackClients; // @synthesize remotePlaybackClients=_remotePlaybackClients;
@property(readonly, nonatomic) NSXPCListener *remotePlaybackSessionListener; // @synthesize remotePlaybackSessionListener=_remotePlaybackSessionListener;
@property(readonly, nonatomic) NSXPCListener *localPlaybackSessionListener; // @synthesize localPlaybackSessionListener=_localPlaybackSessionListener;
- (void)coordinator:(id)arg1 didUpdatePlaybackState:(unsigned long long)arg2 forEndpointID:(id)arg3;	// IMP=0x000000000001623b
- (void)coordinator:(id)arg1 didFinishPlayingAnnouncementsForEndpointID:(id)arg2;	// IMP=0x0000000000016224
- (void)coordinator:(id)arg1 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)arg2 forEndpointID:(id)arg3;	// IMP=0x0000000000015d5e
- (void)coordinator:(id)arg1 didReceiveAnnouncement:(id)arg2 forGroupID:(id)arg3 forEndpointID:(id)arg4;	// IMP=0x000000000001550a
- (void)coordinator:(id)arg1 didUpdateAnnouncements:(id)arg2 forGroupID:(id)arg3 forEndpointID:(id)arg4;	// IMP=0x000000000001504c
- (_Bool)isExternalPlaybackActiveForEndpointID:(id)arg1;	// IMP=0x0000000000015010
- (void)playbackStateForEndpointID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014f73
- (void)lastPlayedAnnouncementInfoForEndpointID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014ec7
- (void)resumeWithEndpointID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014e11
- (void)sendPlaybackCommand:(id)arg1 forEndpointID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014c75
- (void)setPlaybackStoppedForAnnouncement:(id)arg1;	// IMP=0x0000000000014b95
- (void)setPlaybackStartedForAnnouncement:(id)arg1;	// IMP=0x0000000000014ab5
- (void)endSessionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014a2e
- (void)startSessionForGroupID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000146c4
- (void)_setTimersActive:(_Bool)arg1 forEndPointID:(id)arg2;	// IMP=0x000000000001446c
- (_Bool)_endSessionForConnection:(id)arg1;	// IMP=0x0000000000014331
- (id)_clientForConnection:(id)arg1;	// IMP=0x0000000000013e4b
- (void)_removeConnection:(id)arg1;	// IMP=0x000000000001390b
@property(readonly, nonatomic) _Bool remoteSessionsActive;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000012c18
- (void)cleanForExit;	// IMP=0x0000000000012b97
- (id)init;	// IMP=0x000000000001297c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

