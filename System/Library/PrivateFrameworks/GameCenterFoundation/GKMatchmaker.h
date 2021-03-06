//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDiscovery, GKDispatchGroup, GKMatch, GKMatchRequest, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface GKMatchmaker : NSObject
{
    _Bool _nearbyAdvertising;	// 8 = 0x8
    _Bool _wasNearbyBrowsing;	// 9 = 0x9
    _Bool _nearbyBrowsing;	// 10 = 0xa
    _Bool _generatingCompatiblityHashes;	// 11 = 0xb
    _Bool _serverHosted;	// 12 = 0xc
    _Bool _nearbyDiscoverySetup;	// 13 = 0xd
    int _matching;	// 16 = 0x10
    CDUnknownBlockType _inviteHandler;	// 24 = 0x18
    GKMatch *_match;	// 32 = 0x20
    CDUnknownBlockType _inviteeResponseHandler;	// 40 = 0x28
    CDUnknownBlockType _recipientResponseHandler;	// 48 = 0x30
    NSSet *_invitees;	// 56 = 0x38
    NSDictionary *_inviteesByUserID;	// 64 = 0x40
    CDUnknownBlockType _nearbyPlayerHandler;	// 72 = 0x48
    CDUnknownBlockType _nearbyPlayerIDHandler;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_lookForInviteQueue;	// 88 = 0x58
    NSMutableDictionary *_nearbyPlayers;	// 96 = 0x60
    NSDate *_nearbyQueryLastCheckDate;	// 104 = 0x68
    GKDiscovery *_nearbyDiscovery;	// 112 = 0x70
    double _nearbyQueryAllowance;	// 120 = 0x78
    NSSet *_nearbyCompatibleVersionHashes;	// 128 = 0x80
    NSSet *_nearbyCompatibleShortVersionHashes;	// 136 = 0x88
    GKDispatchGroup *_compatibilityHashGroup;	// 144 = 0x90
    NSMutableDictionary *_nearbyInvites;	// 152 = 0x98
    NSMutableArray *_shareInvitees;	// 160 = 0xa0
    NSMutableArray *_acceptedInviteesTokens;	// 168 = 0xa8
    NSMutableSet *_autoMatchedPlayers;	// 176 = 0xb0
    NSMutableSet *_invitedInvitees;	// 184 = 0xb8
    NSMutableSet *_invitedShareInvitees;	// 192 = 0xc0
    NSMutableSet *_invitedNearbyPlayers;	// 200 = 0xc8
    NSString *_inviterPlayerID;	// 208 = 0xd0
    unsigned long long _inviteApproach;	// 216 = 0xd8
    NSMutableSet *_siblingInvitees;	// 224 = 0xe0
    GKMatchRequest *_currentMatchRequest;	// 232 = 0xe8
}

+ (id)sharedMatchmaker;	// IMP=0x000000000008e73c
+ (id)descriptionForNearbyDictionary:(id)arg1;	// IMP=0x00000000000cd313
+ (id)syncQueue;	// IMP=0x00000000000cca1b
- (void).cxx_destruct;	// IMP=0x000000000008eb13
@property(retain, nonatomic) GKMatchRequest *currentMatchRequest; // @synthesize currentMatchRequest=_currentMatchRequest;
@property(retain, nonatomic) NSMutableSet *siblingInvitees; // @synthesize siblingInvitees=_siblingInvitees;
@property(nonatomic) unsigned long long inviteApproach; // @synthesize inviteApproach=_inviteApproach;
@property(retain, nonatomic) NSString *inviterPlayerID; // @synthesize inviterPlayerID=_inviterPlayerID;
@property(retain, nonatomic) NSMutableSet *invitedNearbyPlayers; // @synthesize invitedNearbyPlayers=_invitedNearbyPlayers;
@property(retain, nonatomic) NSMutableSet *invitedShareInvitees; // @synthesize invitedShareInvitees=_invitedShareInvitees;
@property(retain, nonatomic) NSMutableSet *invitedInvitees; // @synthesize invitedInvitees=_invitedInvitees;
@property(retain, nonatomic) NSMutableSet *autoMatchedPlayers; // @synthesize autoMatchedPlayers=_autoMatchedPlayers;
@property(nonatomic) _Bool nearbyDiscoverySetup; // @synthesize nearbyDiscoverySetup=_nearbyDiscoverySetup;
@property(nonatomic) _Bool serverHosted; // @synthesize serverHosted=_serverHosted;
@property(retain, nonatomic) NSMutableArray *acceptedInviteesTokens; // @synthesize acceptedInviteesTokens=_acceptedInviteesTokens;
@property(retain, nonatomic) NSMutableArray *shareInvitees; // @synthesize shareInvitees=_shareInvitees;
@property(retain, nonatomic) NSMutableDictionary *nearbyInvites; // @synthesize nearbyInvites=_nearbyInvites;
@property(retain, nonatomic) GKDispatchGroup *compatibilityHashGroup; // @synthesize compatibilityHashGroup=_compatibilityHashGroup;
@property(nonatomic) _Bool generatingCompatiblityHashes; // @synthesize generatingCompatiblityHashes=_generatingCompatiblityHashes;
@property(retain, nonatomic) NSSet *nearbyCompatibleShortVersionHashes; // @synthesize nearbyCompatibleShortVersionHashes=_nearbyCompatibleShortVersionHashes;
@property(retain, nonatomic) NSSet *nearbyCompatibleVersionHashes; // @synthesize nearbyCompatibleVersionHashes=_nearbyCompatibleVersionHashes;
@property(nonatomic) double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property(retain, nonatomic) GKDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property(retain, nonatomic) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property(nonatomic) _Bool nearbyBrowsing; // @synthesize nearbyBrowsing=_nearbyBrowsing;
@property(nonatomic) _Bool wasNearbyBrowsing; // @synthesize wasNearbyBrowsing=_wasNearbyBrowsing;
@property(retain) NSMutableDictionary *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property(nonatomic) _Bool nearbyAdvertising; // @synthesize nearbyAdvertising=_nearbyAdvertising;
@property int matching; // @synthesize matching=_matching;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lookForInviteQueue; // @synthesize lookForInviteQueue=_lookForInviteQueue;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayerIDHandler; // @synthesize nearbyPlayerIDHandler=_nearbyPlayerIDHandler;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayerHandler; // @synthesize nearbyPlayerHandler=_nearbyPlayerHandler;
@property(retain) NSDictionary *inviteesByUserID; // @synthesize inviteesByUserID=_inviteesByUserID;
@property(retain, nonatomic) NSSet *invitees; // @synthesize invitees=_invitees;
@property(copy, nonatomic) CDUnknownBlockType recipientResponseHandler; // @synthesize recipientResponseHandler=_recipientResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;
@property(retain, nonatomic) GKMatch *match; // @synthesize match=_match;
@property(copy, nonatomic) CDUnknownBlockType inviteHandler; // @synthesize inviteHandler=_inviteHandler;
- (void)nearbyDataReceived:(id)arg1;	// IMP=0x000000000008e583
- (void)nearbyPlayerLost:(id)arg1;	// IMP=0x000000000008e405
- (void)nearbyPlayerFound:(id)arg1;	// IMP=0x000000000008e24d
- (void)setNearbyPlayerFailed:(id)arg1;	// IMP=0x000000000008df65
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000008dc34
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;	// IMP=0x000000000008d867
- (void)inviteeDeclinedNotification:(id)arg1;	// IMP=0x000000000008d534
- (void)inviteeAcceptedNotification:(id)arg1;	// IMP=0x000000000008c46d
- (void)localPlayerAcceptedGameInviteNotification:(id)arg1;	// IMP=0x000000000008c45b
- (void)localPlayerAcceptedGameInvite;	// IMP=0x000000000008c449
- (long long)responseForDeclineReason:(long long)arg1;	// IMP=0x000000000008c428
- (void)stopBrowsingForNearbyPlayers;	// IMP=0x000000000008c29f
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008c1eb
- (void)startBrowsingForNearbyPlayersWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008c052
- (void)queryActivityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008bdfb
- (void)queryPlayerGroupActivity:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008bba9
- (void)finishMatchmakingForMatch:(id)arg1;	// IMP=0x000000000008b763
- (void)cancel;	// IMP=0x000000000008b514
- (void)cancelInviteToPlayer:(id)arg1;	// IMP=0x000000000008b0e5
- (void)cancelPendingInviteToPlayer:(id)arg1;	// IMP=0x000000000008ab8e
- (void)cancelPendingInvitesAndMarkInviteComplete:(_Bool)arg1;	// IMP=0x000000000008a4ae
- (void)doneMatchmaking;	// IMP=0x000000000008a2df
@property(readonly, nonatomic) _Bool allInviteesDidRespond;
- (void)findRematchForMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089ae3
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000089858
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000895c8
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008924c
- (void)createLeaderboardForRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089246
- (void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000088f0d
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000088aa3
- (void)setShareInvitees:(id)arg1 propogateToDaemon:(_Bool)arg2;	// IMP=0x00000000000887b2
- (void)loadURLForMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000087c63
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(long long)arg3 serverHosted:(_Bool)arg4 rematchID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000085998
- (void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(_Bool)arg4 playerCount:(long long)arg5 connectionData:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000008276e
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000081d9c
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(_Bool)arg2 onlineConnectionData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000812c5
- (void)reportResponse:(long long)arg1 forInvitees:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000809f8
- (void)matchForInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008015c
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007e5f8
- (void)matchForNearbyInvite:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007e237
- (void)respondToHostedInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007dbfd
- (void)lookForInvite;	// IMP=0x000000000007c67e
- (void)userCancelledMatching;	// IMP=0x000000000007c66a
- (void)reportPlayerConnectedWithPlayerID:(id)arg1 forMatch:(id)arg2;	// IMP=0x000000000007bcfe
- (id)allInvitedInvitees;	// IMP=0x000000000007bc23
- (_Bool)removeInvitee:(id)arg1;	// IMP=0x000000000007b969
- (_Bool)canPlayMultiplayerGameWithPlayers:(id)arg1;	// IMP=0x000000000007b669
@property(readonly, nonatomic) _Bool hasInviteListener;
- (void)registeredListentersChanged;	// IMP=0x000000000007b5af
- (void)finishedAuthenticating;	// IMP=0x000000000007b295
- (void)dealloc;	// IMP=0x000000000007b220
- (void)setConnectivitySettings:(id)arg1;	// IMP=0x000000000007af73
- (void)loadConnectivitySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007ab36
- (id)init;	// IMP=0x000000000007a7b7
- (void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2;	// IMP=0x00000000000d9d6d
- (id)declineReasonString:(long long)arg1;	// IMP=0x00000000000d9d46
- (void)declineNearbyInviteFromDevice:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000000d999d
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;	// IMP=0x00000000000d9322
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;	// IMP=0x00000000000d8f3d
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;	// IMP=0x00000000000d8755
- (void)declineReceivedNearbyInvites;	// IMP=0x00000000000d852c
- (id)nearbyInviteFromPlayer:(id)arg1;	// IMP=0x00000000000d838a
- (void)removeNearbyInviteFromPlayer:(id)arg1;	// IMP=0x00000000000d8283
- (void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2;	// IMP=0x00000000000d814d
- (void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2;	// IMP=0x00000000000d7d47
- (void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2;	// IMP=0x00000000000d7b4d
- (void)sendProfileResponseToDevice:(id)arg1;	// IMP=0x00000000000d763d
- (void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2;	// IMP=0x00000000000d6c8f
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;	// IMP=0x00000000000d6bdd
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(long long)arg3;	// IMP=0x00000000000d69fe
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;	// IMP=0x00000000000d68e5
- (void)establishNearbyFriendRelationships:(id)arg1 fromDevice:(id)arg2;	// IMP=0x00000000000d67f8
- (void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2;	// IMP=0x00000000000d5d1d
- (void)cancelSentNearbyInvites;	// IMP=0x00000000000d5a4e
- (void)cancelNearbyInvitesToPlayers:(id)arg1;	// IMP=0x00000000000d5582
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d4167
- (void)reduceRecipientsForMatchRequest:(id)arg1 toPlayersWithPlayerIDs:(id)arg2;	// IMP=0x00000000000d3e65
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;	// IMP=0x00000000000d394e
- (void)setNearbyDevice:(id)arg1 reachable:(_Bool)arg2;	// IMP=0x00000000000d35a0
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;	// IMP=0x00000000000d3285
- (void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d2853
- (void)lostNearbyDeviceID:(id)arg1;	// IMP=0x00000000000d2675
- (void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2;	// IMP=0x00000000000d1b38
- (void)stopNearbyBrowsing;	// IMP=0x00000000000d1792
- (void)startNearbyBrowsing;	// IMP=0x00000000000d1631
- (void)updateNearbyAdvertising;	// IMP=0x00000000000d1458
- (void)stopNearbyAdvertising;	// IMP=0x00000000000d10dc
- (void)startNearbyAdvertising;	// IMP=0x00000000000d0f7b
- (id)hashForCurrentGameUsingShortBundleVersionAndPlatform;	// IMP=0x00000000000d0e9a
- (id)hashForCurrentGameUsingBundleVersion;	// IMP=0x00000000000d0de6
- (id)hashForBundleID:(id)arg1 version:(id)arg2 platform:(long long)arg3;	// IMP=0x00000000000d097e
- (id)nearbyDeviceWithDeviceID:(id)arg1;	// IMP=0x00000000000d07d0
- (id)_nearbyDeviceWithDeviceID:(id)arg1;	// IMP=0x00000000000d06f6
- (void)generateHashedCompatibiltySetWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf4d1
- (void)getHashedCompatibilitySetsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf03f
- (id)compatibilityHashQueue;	// IMP=0x00000000000cefbe
- (id)unreleasedHash;	// IMP=0x00000000000ceebf
- (void)loadPhotoDataDictionaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cea1c
- (id)profileDictionaryForLocalPlayer;	// IMP=0x00000000000ce867
- (_Bool)shouldRespondToNearbyQuery;	// IMP=0x00000000000ce706
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cdc70
- (void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2;	// IMP=0x00000000000cd79b
- (long long)currentEnvironment;	// IMP=0x00000000000cd2ba
- (void)setupNearbyDiscovery;	// IMP=0x00000000000ccf72
- (void)applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000000000ccd3b
- (void)applicationWillTerminateNotification:(id)arg1;	// IMP=0x00000000000cccf3
- (void)applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000000ccc79
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cca9c

@end

