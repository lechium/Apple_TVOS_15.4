//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GKNearbyDelegate;

@interface GKMultiplayerMatchService
{
    id <GKNearbyDelegate> _delegate;	// 8 = 0x8
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001fe9ed
+ (Class)interfaceClass;	// IMP=0x00100000001fe9dc
- (void).cxx_destruct;	// IMP=0x0020000000211eda
@property(nonatomic) __weak id <GKNearbyDelegate> delegate; // @synthesize delegate=_delegate;
- (oneway void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000211c4c
- (oneway void)forgetParticipant:(id)arg1 deviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000211a92
- (oneway void)setupNearbyDiscovery;	// IMP=0x0010000000210d53
- (oneway void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x0010000000210cdd
- (oneway void)presentNearbyInvite:(id)arg1;	// IMP=0x0010000000210c67
- (oneway void)stopNearbyAdvertisingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000210ae2
- (oneway void)startNearbyAdvertisingWithDiscoveryInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000210913
- (oneway void)stopNearbyBrowsingWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000021078e
- (oneway void)startNearbyBrowsingWithPlayerID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002105ed
- (oneway void)updateCacheWithNearbyProfileDictionary:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020fca6
- (oneway void)cancelRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020fa74
- (oneway void)updateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f6fb
- (oneway void)initiateRelayRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f370
- (oneway void)_performRelayAction:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020ef82
- (oneway void)sendReconnectInvitation:(id)arg1 toPlayer:(id)arg2 connectionData:(id)arg3 sessionToken:(id)arg4 pushToken:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x001000000020e46c
- (oneway void)removeInviteSession;	// IMP=0x001000000020e42f
- (oneway void)getInviteSessionTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000020e24e
- (oneway void)getPlayersToInviteWithHandlerV2:(CDUnknownBlockType)arg1;	// IMP=0x001000000020de6b
- (oneway void)hasCanceledMultiplayerInitiateBulletinForSessionToken:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020dc72
- (oneway void)getAcceptedGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000020d585
- (oneway void)declineGameInvite:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020d15b
- (oneway void)acceptGameInvite:(id)arg1 connectionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020c294
- (oneway void)putMultiPlayerGroup:(id)arg1 participants:(id)arg2 playedAt:(long long)arg3 bundleID:(id)arg4 numberOfAutomatched:(long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x001000000020bc13
- (oneway void)getMultiPlayerGroups:(CDUnknownBlockType)arg1;	// IMP=0x001000000020aa6c
- (void)convertToInternalObjects:(id)arg1 results:(id)arg2;	// IMP=0x001000000020a5df
- (id)ensureGroup:(id)arg1 participants:(id)arg2 playedAt:(long long)arg3 numberOfAutomatched:(long long)arg4 moc:(id)arg5 list:(id)arg6;	// IMP=0x001000000020a0f7
- (oneway void)cancelGameInviteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000209bbc
- (oneway void)removePlayersFromGameInviteV2:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002092c9
- (oneway void)invitePlayersForMatchRequest:(id)arg1 onlineConnectionData:(id)arg2 nearbyConnectionData:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002075f1
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020722d
- (id)privateDatabase;	// IMP=0x00100000002071cf
- (void)setupInviteShareWithRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000206b3c
- (oneway void)loadURLWithData:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000204df2
- (void)initiateInvitationForMatchRequest:(id)arg1 connectionData:(id)arg2 recipients:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002036f6
- (oneway void)setShareRecordID:(id)arg1;	// IMP=0x001000000020334f
- (oneway void)setShareInvitees:(id)arg1;	// IMP=0x00100000002025ad
- (oneway void)getCompatibilityMatrix:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002016ef
- (oneway void)getOverallFlowRateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000200b07
- (oneway void)getFlowRateForPlayerGroup:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ffe73
- (oneway void)cancelOutstandingMatchRequestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ff9f1
- (oneway void)getPlayersForMatchRequest:(id)arg1 connectionData:(id)arg2 connectedPeers:(long long)arg3 rematchID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001fe9f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

