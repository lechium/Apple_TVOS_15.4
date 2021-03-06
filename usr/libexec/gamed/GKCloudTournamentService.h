//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKCloudTournamentService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000000ceaea
+ (Class)interfaceClass;	// IMP=0x00100000000cead9
- (oneway void)getAcceptedCustomTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00200000000d9a72
- (oneway void)getShareURLForCustomTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d9592
- (void)tournamentForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d94e7
- (oneway void)loadTournamentsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d8ccd
- (oneway void)loadTournamentDefinitionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d85b0
- (oneway void)loadTournamentDefinitionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d82a8
- (oneway void)registerPlayerInTournament:(id)arg1 playerGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d7b73
- (oneway void)getTournamentStateForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d740e
- (oneway void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d6c9b
- (oneway void)getLocalParticipantForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d64fe
- (oneway void)getTotalPlayerCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d5828
- (oneway void)getFriendCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d4d0e
- (oneway void)resumePlayInTournament:(id)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d4592
- (oneway void)beginPlayInTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d3de6
- (oneway void)resignFromTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d36b1
- (oneway void)declineInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2f7c
- (oneway void)acceptInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2847
- (oneway void)removeCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d20c9
- (oneway void)addCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d194b
- (oneway void)removeInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d11cd
- (oneway void)addInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d0a4f
- (oneway void)createCustomTournamentWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d0299
- (oneway void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cfacd
- (oneway void)reportScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cf301
- (oneway void)loadHistoricalDataForPlayer:(id)arg1 tournamentDefinition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ceaf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

