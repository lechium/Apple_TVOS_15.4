//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKClientProtocol-Protocol.h>
#import <GameCenterFoundation/NSXPCConnectionDelegate-Protocol.h>

@class NSDictionary, NSHashTable, NSObject, NSString, NSXPCConnection;
@protocol GKDaemonProxyDataUpdateDelegate, GKDaemonProxyNetworkActivityIndicatorDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GKDaemonProxy <NSXPCConnectionDelegate, GKClientProtocol>
{
    int _hostPID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_invocationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_authenticationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;	// 32 = 0x20
    NSDictionary *_interfaceLookup;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    id <GKDaemonProxyNetworkActivityIndicatorDelegate> _networkActivityIndicatorDelegate;	// 56 = 0x38
    id <GKDaemonProxyDataUpdateDelegate> _dataUpdateDelegate;	// 64 = 0x40
    NSHashTable *_dataUpdateDelegates;	// 72 = 0x48
}

+ (oneway void)getActiveFriendRequestCount:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ae8c7
+ (oneway void)messagesDidReceiveGameCenterURL:(id)arg1;	// IMP=0x00000000000ae8ab
+ (oneway void)messagesDidReceiveGameCenterURL:(id)arg1 senderHandle:(id)arg2 contactID:(id)arg3;	// IMP=0x00000000000ae535
+ (id)proxyForPlayer:(id)arg1;	// IMP=0x00000000000ae2a4
+ (void)removeProxyForPlayer:(id)arg1;	// IMP=0x00000000000ae1ed
+ (id)proxiesForPlayer;	// IMP=0x00000000000ae181
+ (id)daemonProxy;	// IMP=0x00000000000ae12c
- (void).cxx_destruct;	// IMP=0x00000000000b4e5f
@property(retain, nonatomic) NSHashTable *dataUpdateDelegates; // @synthesize dataUpdateDelegates=_dataUpdateDelegates;
@property(nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(nonatomic) __weak id <GKDaemonProxyDataUpdateDelegate> dataUpdateDelegate; // @synthesize dataUpdateDelegate=_dataUpdateDelegate;
@property(nonatomic) __weak id <GKDaemonProxyNetworkActivityIndicatorDelegate> networkActivityIndicatorDelegate; // @synthesize networkActivityIndicatorDelegate=_networkActivityIndicatorDelegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSDictionary *interfaceLookup; // @synthesize interfaceLookup=_interfaceLookup;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *concurrentRequestSemaphore; // @synthesize concurrentRequestSemaphore=_concurrentRequestSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authenticationQueue; // @synthesize authenticationQueue=_authenticationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue; // @synthesize invocationQueue=_invocationQueue;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000000000b47ca
- (id)replyQueueForRequestSelector:(SEL)arg1;	// IMP=0x00000000000b4698
- (oneway void)requestSandboxExtension:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b4363
- (oneway void)setLogBits:(int)arg1;	// IMP=0x00000000000b4357
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x00000000000b3ed5
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;	// IMP=0x00000000000b3cbe
- (void)resetLoginCancelCount;	// IMP=0x00000000000b3ae5
- (void)loadRemoteImageDataForClientForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b3924
- (id)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000000000b34a9
- (oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;	// IMP=0x00000000000b3490
- (oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;	// IMP=0x00000000000b3477
- (oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;	// IMP=0x00000000000b345e
- (oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;	// IMP=0x00000000000b3445
- (oneway void)session:(id)arg1 removedPlayer:(id)arg2;	// IMP=0x00000000000b342c
- (oneway void)session:(id)arg1 addedPlayer:(id)arg2;	// IMP=0x00000000000b3413
- (oneway void)localPlayerAcceptedCustomTournamentInvite;	// IMP=0x00000000000b33a5
- (oneway void)didReceiveData:(id)arg1 reliably:(_Bool)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;	// IMP=0x00000000000b3375
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;	// IMP=0x00000000000b3345
- (oneway void)didConnectToParticipantWithID:(id)arg1;	// IMP=0x00000000000b3315
- (id)userInfoForPlayerID:(id)arg1 deviceID:(id)arg2 data:(id)arg3 discoveryInfo:(id)arg4;	// IMP=0x00000000000b3202
- (oneway void)nearbyDataReceivedForPlayerID:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x00000000000b3182
- (oneway void)nearbyPlayerLostForPlayerID:(id)arg1 deviceID:(id)arg2;	// IMP=0x00000000000b30ff
- (oneway void)nearbyPlayerFoundForPlayerID:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x00000000000b307c
- (oneway void)relayPushNotification:(id)arg1;	// IMP=0x00000000000b2ffa
- (oneway void)cancelGameInvite:(id)arg1;	// IMP=0x00000000000b2f84
- (oneway void)cancelInviteWithNotification:(id)arg1;	// IMP=0x00000000000b2f0e
- (oneway void)declineInviteWithNotification:(id)arg1;	// IMP=0x00000000000b2e98
- (oneway void)acceptInviteWithNotification:(id)arg1;	// IMP=0x00000000000b2e22
- (oneway void)acceptMultiplayerGameInvite;	// IMP=0x00000000000b2d0d
- (oneway void)fetchTurnBasedData;	// IMP=0x00000000000b2cc9
- (oneway void)challengeCompleted:(id)arg1;	// IMP=0x00000000000b2a5e
- (oneway void)challengeReceived:(id)arg1;	// IMP=0x00000000000b278f
- (oneway void)completedChallengeSelected:(id)arg1;	// IMP=0x00000000000b2678
- (void)dispatchCompletedChallenge:(id)arg1;	// IMP=0x00000000000b2484
- (oneway void)achievementSelected:(id)arg1;	// IMP=0x00000000000b247e
- (oneway void)scoreSelected:(id)arg1;	// IMP=0x00000000000b2478
- (oneway void)receivedChallengeSelected:(id)arg1;	// IMP=0x00000000000b2253
- (oneway void)friendRequestSelected:(id)arg1;	// IMP=0x00000000000b1f1d
- (oneway void)respondedToNearbyInvite:(id)arg1;	// IMP=0x00000000000b1ea7
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b1e8e
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b1e88
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b1d90
- (oneway void)setPreferencesValues:(id)arg1;	// IMP=0x00000000000b1d1a
- (oneway void)resetNetworkActivity;	// IMP=0x00000000000b1cdd
- (oneway void)endNetworkActivity;	// IMP=0x00000000000b1ca0
- (oneway void)beginNetworkActivity;	// IMP=0x00000000000b1c63
- (void)removeDataUpdateDelegate:(id)arg1;	// IMP=0x00000000000b1c46
- (void)addDataUpdateDelegate:(id)arg1;	// IMP=0x00000000000b1c29
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b1b11
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b19f9
- (id)getGamedFiredUp;	// IMP=0x00000000000b1716
- (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;	// IMP=0x00000000000b134d
- (id)authenticatedCredential;	// IMP=0x00000000000b10d1
- (id)authenticatedPlayerInfo;	// IMP=0x00000000000b0e55
- (_Bool)hasAuthenticatedAccount;	// IMP=0x00000000000b0c29
- (id)accountName;	// IMP=0x00000000000b09ad
- (id)authenticatedPlayerID;	// IMP=0x00000000000b06ad
- (id)init;	// IMP=0x00000000000b02a7
- (oneway void)setTestGame:(id)arg1;	// IMP=0x00000000000afdae
- (void)buildInterfaceLookup;	// IMP=0x00000000000af1a8
- (void)addInterface:(id)arg1 toLookup:(id)arg2;	// IMP=0x00000000000aefc2
- (void)resetServiceLookup;	// IMP=0x00000000000aef10
- (void)_resetServiceLookup;	// IMP=0x00000000000aeb74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

