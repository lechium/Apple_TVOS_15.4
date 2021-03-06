//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKSessionDelegate-Protocol.h>
#import <GameCenterFoundation/GKSessionPrivateDelegate-Protocol.h>

@class GKConnection, GKSession, GKThreadsafeDictionary, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol GKMatchDelegate, GKMatchDelegatePrivate, OS_dispatch_queue;

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate>
{
    unsigned char _version;	// 8 = 0x8
    _Bool _needHostScore;	// 9 = 0x9
    _Bool _hostScoreForQuery;	// 10 = 0xa
    _Bool _recentlyBecameActive;	// 11 = 0xb
    _Bool _fastStartStateActive;	// 12 = 0xc
    unsigned int _packetSequenceNumber;	// 16 = 0x10
    GKThreadsafeDictionary *_playersByIdentifier;	// 24 = 0x18
    NSMutableSet *_connectedPlayerIDs;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_stateChangeQueue;	// 40 = 0x28
    id <GKMatchDelegate> _delegate;	// 48 = 0x30
    GKSession *_session;	// 56 = 0x38
    GKConnection *_connection;	// 64 = 0x40
    unsigned long long _expectedPlayerCount;	// 72 = 0x48
    NSMutableDictionary *_guestConnections;	// 80 = 0x50
    NSMutableDictionary *_guestSessions;	// 88 = 0x58
    NSMutableDictionary *_playerEventQueues;	// 96 = 0x60
    NSMutableArray *_reinvitedPlayers;	// 104 = 0x68
    NSData *_selfBlob;	// 112 = 0x70
    id <GKMatchDelegatePrivate> _inviteDelegateWeak;	// 120 = 0x78
    NSMutableDictionary *_playerPushTokens;	// 128 = 0x80
    NSMutableArray *_opponentIDs;	// 136 = 0x88
    NSString *_rematchID;	// 144 = 0x90
    long long _rematchCount;	// 152 = 0x98
    NSDictionary *_networkStatistics;	// 160 = 0xa0
    NSMutableDictionary *_hostScores;	// 168 = 0xa8
    CDUnknownBlockType _chooseHostCompletion;	// 176 = 0xb0
    NSString *_groupIdentifier;	// 184 = 0xb8
    NSMutableDictionary *_playersByJoinType;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000777cc
@property(retain, nonatomic) NSMutableDictionary *playersByJoinType; // @synthesize playersByJoinType=_playersByJoinType;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(nonatomic) _Bool fastStartStateActive; // @synthesize fastStartStateActive=_fastStartStateActive;
@property(nonatomic) _Bool recentlyBecameActive; // @synthesize recentlyBecameActive=_recentlyBecameActive;
@property(copy, nonatomic) CDUnknownBlockType chooseHostCompletion; // @synthesize chooseHostCompletion=_chooseHostCompletion;
@property(nonatomic) _Bool hostScoreForQuery; // @synthesize hostScoreForQuery=_hostScoreForQuery;
@property(nonatomic) _Bool needHostScore; // @synthesize needHostScore=_needHostScore;
@property(retain, nonatomic) NSMutableDictionary *hostScores; // @synthesize hostScores=_hostScores;
@property(retain, nonatomic) NSDictionary *networkStatistics; // @synthesize networkStatistics=_networkStatistics;
@property(nonatomic) long long rematchCount; // @synthesize rematchCount=_rematchCount;
@property(retain, nonatomic) NSString *rematchID; // @synthesize rematchID=_rematchID;
@property(retain, nonatomic) NSMutableArray *opponentIDs; // @synthesize opponentIDs=_opponentIDs;
@property(retain, nonatomic) NSMutableDictionary *playerPushTokens; // @synthesize playerPushTokens=_playerPushTokens;
@property(nonatomic) unsigned int packetSequenceNumber; // @synthesize packetSequenceNumber=_packetSequenceNumber;
@property(nonatomic) __weak id <GKMatchDelegatePrivate> inviteDelegate; // @synthesize inviteDelegate=_inviteDelegateWeak;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
@property(retain, nonatomic) NSMutableArray *reinvitedPlayers; // @synthesize reinvitedPlayers=_reinvitedPlayers;
@property(retain, nonatomic) NSMutableDictionary *playerEventQueues; // @synthesize playerEventQueues=_playerEventQueues;
@property(retain, nonatomic) NSMutableDictionary *guestSessions; // @synthesize guestSessions=_guestSessions;
@property(retain, nonatomic) NSMutableDictionary *guestConnections; // @synthesize guestConnections=_guestConnections;
@property(readonly, nonatomic) unsigned long long expectedPlayerCount; // @synthesize expectedPlayerCount=_expectedPlayerCount;
@property(retain, nonatomic) GKConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) GKSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateChangeQueue; // @synthesize stateChangeQueue=_stateChangeQueue;
@property(retain, nonatomic) NSMutableSet *connectedPlayerIDs; // @synthesize connectedPlayerIDs=_connectedPlayerIDs;
@property(retain, nonatomic) GKThreadsafeDictionary *playersByIdentifier; // @synthesize playersByIdentifier=_playersByIdentifier;
- (id)dataFromBase64String:(id)arg1;	// IMP=0x00000000000774db
- (void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3;	// IMP=0x0000000000077321
- (void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3;	// IMP=0x0000000000076f30
- (_Bool)shouldStartRelay:(id)arg1;	// IMP=0x0000000000076b89
- (void)preemptRelay:(id)arg1;	// IMP=0x0000000000076919
- (void)initRelayResponse:(id)arg1 player:(id)arg2;	// IMP=0x000000000007668e
- (void)acceptRelayResponse:(id)arg1 player:(id)arg2;	// IMP=0x00000000000763e0
- (void)updateRelayConnectionForPlayer:(id)arg1;	// IMP=0x00000000000757c9
- (void)initRelayConnectionForPlayer:(id)arg1;	// IMP=0x0000000000074a71
- (void)updateRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;	// IMP=0x00000000000742bd
- (void)initRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;	// IMP=0x0000000000073c53
- (void)requestRelayUpdateForPlayer:(id)arg1;	// IMP=0x0000000000072c3d
- (void)requestRelayInitForPlayer:(id)arg1;	// IMP=0x0000000000071e0c
- (void)updateRelayInfo:(id)arg1 forPlayer:(id)arg2;	// IMP=0x00000000000716df
- (void)initRelayInfoFromPush:(id)arg1 forPlayer:(id)arg2;	// IMP=0x0000000000070f89
- (void)initRelayInfoFromServerResponse:(id)arg1 forPlayer:(id)arg2;	// IMP=0x00000000000708ee
- (void)relayPush:(id)arg1;	// IMP=0x000000000006f6ba
- (void)relayPushNotification:(id)arg1;	// IMP=0x000000000006f66b
- (void)session:(id)arg1 networkStatisticsChanged:(id)arg2;	// IMP=0x000000000006f5f0
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;	// IMP=0x000000000006e923
- (id)playerForSession:(id)arg1;	// IMP=0x000000000006e6ee
- (void)session:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000006e2ba
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;	// IMP=0x000000000006df28
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;	// IMP=0x000000000006b883
- (void)addPlayerToGroup:(id)arg1;	// IMP=0x000000000006ab78
- (id)stringForGKPeerConnectionState:(int)arg1;	// IMP=0x000000000006a936
- (id)stringForGKPlayerConnectionState:(long long)arg1;	// IMP=0x000000000006a722
- (void)sendHostScoreAsQuery:(_Bool)arg1;	// IMP=0x000000000006a4c8
- (void)calculateHostScore;	// IMP=0x00000000000699c8
- (_Bool)selectHostIfRequestedAndAllScored;	// IMP=0x0000000000069577
- (_Bool)haveAllHostScores;	// IMP=0x0000000000069464
- (void)addHostScore:(int)arg1 forPlayer:(id)arg2;	// IMP=0x00000000000692e3
- (void)receivedChooseHostData:(id)arg1 fromPlayer:(id)arg2;	// IMP=0x0000000000069122
- (void)chooseBestHostingPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068e63
- (void)chooseBestHostPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068cee
- (void)rematchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068c72
- (void)conditionallyRelaunchPlayer:(id)arg1;	// IMP=0x00000000000687ae
- (void)conditionallyReinvitePlayer:(id)arg1 sessionToken:(id)arg2;	// IMP=0x0000000000067b2e
- (void)reinviteeDeclinedNotification:(id)arg1;	// IMP=0x00000000000676b9
- (void)reinviteeAcceptedNotification:(id)arg1;	// IMP=0x0000000000067157
- (void)sendConnectingStateCallbackToDelegate:(id)arg1 forPlayers:(id)arg2;	// IMP=0x0000000000066d7f
- (id)connectedPlayers;	// IMP=0x0000000000066a90
- (void)sendStateCallbackToDelegate:(id)arg1 forPlayer:(id)arg2 state:(long long)arg3;	// IMP=0x00000000000663d2
- (void)sendStateCallbackForPlayer:(id)arg1 state:(long long)arg2;	// IMP=0x000000000006604a
- (void)updateStateForPlayer:(id)arg1 state:(long long)arg2;	// IMP=0x0000000000065741
- (void)deferStateCallbackForPlayer:(id)arg1 state:(long long)arg2;	// IMP=0x0000000000065255
- (void)sendQueuedPacketsForPlayer:(id)arg1;	// IMP=0x0000000000064d09
- (void)sendQueuedStatesAndPackets;	// IMP=0x00000000000647ab
- (void)sendData:(id)arg1 forRecipient:(id)arg2 fromPlayer:(id)arg3;	// IMP=0x000000000006432f
- (void)_delegate:(id)arg1 didReceiveData:(id)arg2 forRecipient:(id)arg3 fromPlayer:(id)arg4;	// IMP=0x0000000000063e81
- (void)queueData:(id)arg1 withEventQueueForPlayer:(id)arg2 forRecipient:(id)arg3;	// IMP=0x0000000000063d0c
- (id)peerFromPlayer:(id)arg1;	// IMP=0x00000000000638c3
- (id)playerFromPeer:(id)arg1;	// IMP=0x0000000000063569
- (void)addPlayers:(id)arg1;	// IMP=0x0000000000063221
- (id)voiceChatWithName:(id)arg1;	// IMP=0x00000000000630ff
- (void)putMultiplayerGroup;	// IMP=0x00000000000628f0
- (void)clearSession;	// IMP=0x0000000000062677
- (void)disconnect;	// IMP=0x0000000000062445
- (void)disconnectGuestSessions;	// IMP=0x00000000000620e7
- (void)sendVersionData:(unsigned char)arg1 toPeer:(id)arg2;	// IMP=0x0000000000062001
- (void)sendVersionData:(unsigned char)arg1;	// IMP=0x0000000000061e0d
- (_Bool)sendInviteData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061d60
- (void)receivedPlayerSyncData:(id)arg1;	// IMP=0x00000000000614b0
- (void)syncPlayers:(id)arg1 forJoinType:(int)arg2 toInvitees:(id)arg3;	// IMP=0x0000000000060cf7
- (_Bool)sendDataToAllPlayers:(id)arg1 withDataMode:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000060c4f
- (_Bool)sendData:(id)arg1 toPlayers:(id)arg2 withDataMode:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000000060a50
- (_Bool)sendData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000000060639
- (id)packet:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000000060512
- (void)inviteeComboMatched:(long long)arg1;	// IMP=0x0000000000060166
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;	// IMP=0x000000000005f421
- (void)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2;	// IMP=0x000000000005e988
- (void)connectToPlayers:(id)arg1 withPeerDictionaries:(id)arg2 version:(unsigned char)arg3 sessionToken:(id)arg4 cdxTicket:(id)arg5;	// IMP=0x000000000005d7a3
- (void)updateJoinedPlayer:(id)arg1 joinType:(int)arg2;	// IMP=0x000000000005d267
- (void)updateRematchID;	// IMP=0x000000000005cc9d
- (void)preLoadInviter:(id)arg1 sessionToken:(id)arg2;	// IMP=0x000000000005c934
- (void)withEventQueueForPlayer:(id)arg1 create:(CDUnknownBlockType)arg2 perform:(CDUnknownBlockType)arg3;	// IMP=0x000000000005c28f
- (void)withEventQueueForPlayer:(id)arg1 createIfNeeded:(_Bool)arg2 perform:(CDUnknownBlockType)arg3;	// IMP=0x000000000005c265
- (void)withEventQueueForPlayer:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x000000000005c24e
- (id)nearbyConnectionData;	// IMP=0x000000000005c09f
- (void)getLocalConnectionDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bd2d
- (void)localPlayerDidChange:(id)arg1;	// IMP=0x000000000005b911
- (void)dealloc;	// IMP=0x000000000005b84e
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000005b7ad
- (void)applicationWillTerminateNotification:(id)arg1;	// IMP=0x000000000005b5ee
- (id)init;	// IMP=0x000000000005b235
@property(nonatomic) __weak id <GKMatchDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)connected:(id)arg1;	// IMP=0x000000000005ad12
- (id)allIDs;	// IMP=0x000000000005aae9
- (id)playerIDs;	// IMP=0x000000000005a7b1
- (id)guestPlayers;	// IMP=0x000000000005a542
@property(readonly, nonatomic) NSArray *players;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

