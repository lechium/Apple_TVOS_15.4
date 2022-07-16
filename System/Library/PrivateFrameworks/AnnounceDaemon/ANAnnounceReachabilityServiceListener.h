//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnounceDaemon/ANAnnounceReachabilityManagerDelegate-Protocol.h>
#import <AnnounceDaemon/ANAnnounceReachabilityServiceInterface-Protocol.h>
#import <AnnounceDaemon/NSXPCListenerDelegate-Protocol.h>

@class ANAnnounceReachabilityManager, NSMutableSet, NSString, NSXPCListener;

@interface ANAnnounceReachabilityServiceListener : NSObject <ANAnnounceReachabilityServiceInterface, ANAnnounceReachabilityManagerDelegate, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    ANAnnounceReachabilityManager *_reachabilityManager;	// 16 = 0x10
    NSMutableSet *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000023ecc
@property(retain) NSMutableSet *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) ANAnnounceReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoom:(id)arg2 inHome:(id)arg3;	// IMP=0x0000000000023a42
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHome:(id)arg2;	// IMP=0x00000000000236b1
- (void)_sendCurrentReachabilityToConnection:(id)arg1;	// IMP=0x0000000000022df0
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000022bbc
- (void)_addConnection:(id)arg1;	// IMP=0x0000000000022a80
- (void)announceReachabilityForRoomUUID:(id)arg1 inHomeUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022946
- (void)announceReachabilityForHomeUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022854
- (void)announceReachabilityForRoomName:(id)arg1 inHomeName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002271a
- (void)announceReachabilityForHomeName:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022628
- (void)resumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002246e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000021e4c
- (void)cleanForExit;	// IMP=0x0000000000021e0f
- (id)init;	// IMP=0x0000000000021cf3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
