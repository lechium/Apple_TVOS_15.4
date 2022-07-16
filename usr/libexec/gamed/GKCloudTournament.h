//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKCloudTournament : NSObject
{
}

+ (void)lookForCustomTournamentInvitesInParticipantRecords:(id)arg1;	// IMP=0x0020000000027650
+ (void)findContactParticipantRecordToRemoveForTournamentID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026f53
+ (void)createZoneForPrivateContactDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026c22
+ (void)createPrivateContactInviteRecordsForPlayers:(id)arg1 tournamentID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000025e39
+ (id)contactInviteRecordNameForTournamentID:(id)arg1 playerID:(id)arg2;	// IMP=0x0010000000025e11
+ (void)isMessagesIDForLocalUser:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025e0b
+ (void)acceptShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025c53
+ (void)fetchTournamentRecordIfNeededWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000256c6
+ (void)addInviteeAndGenerateBulletinForShareMetadata:(id)arg1;	// IMP=0x00100000000246e3
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x001000000002458d
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023ef2
+ (void)setInProgressAcceptShareRecordIDs:(id)arg1;	// IMP=0x0010000000023ead
+ (id)inProgressAcceptShareRecordIDs;	// IMP=0x0010000000023e9c
+ (void)createShareWithShareRecordID:(id)arg1 rootRecord:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002336d
+ (void)createCustomInviteZoneWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002303c
+ (void)fetchExistingShareWithRecordID:(id)arg1 fromDatabase:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022c23
+ (void)shareURLForCustomTournament:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002214a
+ (id)inviteRecordWithDataForSharingTournament:(id)arg1 clientProxy:(id)arg2;	// IMP=0x0010000000021f55
+ (id)inviteDictionaryForTournament:(id)arg1 originatingPlayerID:(id)arg2 clientProxy:(id)arg3;	// IMP=0x0010000000021d60
+ (id)cloudKitOperationConfigurationForCustomInvite;	// IMP=0x0010000000021c9f
+ (id)shareRecordIDForTournamentID:(id)arg1 zoneID:(id)arg2;	// IMP=0x0010000000021bfb
+ (id)sharedDatabaseForInviteContainer;	// IMP=0x0010000000021b9d
+ (id)privateDatabaseForInviteContainer;	// IMP=0x0010000000021b3f
+ (void)removeCustomTournament:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000021739
+ (void)manageStatesForTournamentsWithDefinitionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000020455
+ (void)manageTournamentsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fae3
+ (_Bool)canManageTournaments;	// IMP=0x001000000001fa5a
+ (id)lastUsedBundleID;	// IMP=0x001000000001fa49
+ (void)setLastUsedBundleID:(id)arg1;	// IMP=0x001000000001f9b8
+ (id)lastManagementDate;	// IMP=0x001000000001f9a7
+ (void)setLastManagementDate:(id)arg1;	// IMP=0x001000000001f962
+ (void)resetDataForTournamentsWithTournamentDefinitionID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f3d2
+ (void)fetchAndUpdateRecordsWithIDs:(id)arg1 database:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ea0a
+ (id)checkForServerRecordChangedErrorsInModifyRecordsOperationError:(id)arg1;	// IMP=0x001000000001e5c1
+ (void)subscribeToDatabaseChangesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001dcb5
+ (void)activeAutomaticTournamentsForTournamentDefinition:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d51f
+ (void)allParticipantRecordsForTournamentReferences:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ce61
+ (void)localPlayerTournamentRecordsForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bc60
+ (void)localPlayerParticipantRecordsForTournaments:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b4de
+ (void)allTournamentDefintionRecordsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001ae5f
+ (void)updateCacheForDatabase:(id)arg1 zoneIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018ff1
+ (void)updateCacheForPublicDatabaseForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000188bd
+ (void)updateCacheForDatabaseWithScope:(long long)arg1 bundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017ecf
+ (void)updatePlayerRanksForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017398
+ (void)updateScoreDataForParticipantRecord:(id)arg1 newScore:(long long)arg2 tournamentScoringMethod:(long long)arg3;	// IMP=0x00100000000171e5
+ (id)createParticipantRecordForTournamentRecord:(id)arg1 playerID:(id)arg2;	// IMP=0x0010000000016e31
+ (void)saveTournamentRecords:(id)arg1 deleteTournamentRecordIDs:(id)arg2 database:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000015ce8
+ (id)cloudKitOperationConfiguration;	// IMP=0x0010000000015c27
+ (void)createCustomTournamentWithRequest:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014b98
+ (id)customTournamentRecordsForRequest:(id)arg1 definitionReference:(id)arg2;	// IMP=0x00100000000143b8
+ (void)createAutomaticTournamentFromDefinition:(id)arg1 startDate:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001342c
+ (id)automaticTournamentNameFromDefinition:(id)arg1 startDate:(id)arg2;	// IMP=0x0010000000013126
+ (long long)timePeriod:(id)arg1;	// IMP=0x00100000000130b3
+ (id)nextAutomaticTournamentStartDateForDefinitionRecurrenceRule:(id)arg1;	// IMP=0x0010000000012f32
+ (void)sortParticipants:(id)arg1;	// IMP=0x0010000000012de2
+ (void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011eab
+ (id)contactPlayerInternalForPlayerID:(id)arg1 tournamentID:(id)arg2;	// IMP=0x0010000000011ca6
+ (void)declineLocalPlayerInvitationInTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010f93
+ (void)removeInvitees:(id)arg1 fromCustomTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000feca
+ (void)removeCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f044
+ (void)addCreator:(id)arg1 forTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e185
+ (void)addInvitees:(id)arg1 toCustomTournamentWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c9fc
+ (id)participantRecordNameForTournamentID:(id)arg1 playerID:(id)arg2;	// IMP=0x001000000000c9c9
+ (void)historicalDataForPlayer:(id)arg1 tournamentDefinitionWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b8bb
+ (id)computeHistoricalDataFromParticipationRecords:(id)arg1;	// IMP=0x001000000000b3d7
+ (void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000a6e1
+ (void)reportScore:(long long)arg1 withTryToken:(id)arg2 forLocalPlayerInTournamentWithID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000097ce
+ (_Bool)tryTokenIsValid:(id)arg1 forTournamentParticipantRecord:(id)arg2;	// IMP=0x0010000000009753
+ (_Bool)deviceIsValidForTournamentParticipantRecord:(id)arg1;	// IMP=0x001000000000969d
+ (void)resignLocalPlayerFromTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000088fd
+ (void)resumePlayInTournamentWithID:(id)arg1 withTryToken:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000079ad
+ (void)beginPlayInTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006979
+ (void)registerLocalPlayerForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005805
+ (void)decrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2;	// IMP=0x001000000000573d
+ (void)incrementPlayerCountForTournamentRecord:(id)arg1 by:(long long)arg2;	// IMP=0x0010000000005678
+ (void)getLocalParticipantForTournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005595
+ (void)getFriendCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005583
+ (void)getTotalPlayerCountInTournamentWithID:(id)arg1 forGroup:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000543d
+ (void)tournamentsMatchingPredicate:(id)arg1 bundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004c89
+ (id)filterCustomTournamentsForLocalPlayer:(id)arg1;	// IMP=0x001000000000490c
+ (void)tournamentWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000047f9
+ (void)tournamentDefinitionWithID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000045d7
+ (void)tournamentDefinitionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000045c5
+ (void)updateUserRecordWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000041f6
+ (void)setProcessedRecordIDsForBulletins:(id)arg1;	// IMP=0x00100000000041b1
+ (id)processedRecordIDsForBulletins;	// IMP=0x00100000000041a0
+ (id)privateDatabase;	// IMP=0x0010000000004142
+ (id)publicDatabase;	// IMP=0x00100000000040e4
+ (id)tournamentQueue;	// IMP=0x0010000000004088
+ (id)cacheQueue;	// IMP=0x0010000000004031
+ (MISSING_TYPE *)tournamentCache;	// IMP=0x0010000000003fdc

@end
