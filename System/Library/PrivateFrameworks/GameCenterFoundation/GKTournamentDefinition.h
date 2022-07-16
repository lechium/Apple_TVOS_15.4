//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKRecurrenceRule, GKTournamentDefinitionInternal, NSString;

@interface GKTournamentDefinition : NSObject <NSSecureCoding>
{
    GKTournamentDefinitionInternal *_internal;	// 8 = 0x8
}

+ (void)loadTournamentDefinitionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004dc8
+ (void)loadTournamentDefinitionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000046ea
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000423c
- (void).cxx_destruct;	// IMP=0x00000000000062fa
@property(retain) GKTournamentDefinitionInternal *internal; // @synthesize internal=_internal;
- (void)loadHistoricalDataForPlayer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005c22
- (void)loadTournamentsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005470
- (id)proposedNextCustomTournamentStartDate;	// IMP=0x00000000000045c4
- (id)participationTypeDescription;	// IMP=0x000000000000458c
- (id)tournamentTypeDescription;	// IMP=0x0000000000004563
- (id)creationMethodDescription;	// IMP=0x000000000000451c
- (id)seedingMethodDescription;	// IMP=0x00000000000044b4
- (id)scoringMethodDescription;	// IMP=0x000000000000443c
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000000442a
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x00000000000043c2
- (id)init;	// IMP=0x0000000000004368
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000042ef
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004244

// Remaining properties
@property(readonly, nonatomic) double PreRegistrationTime; // @dynamic PreRegistrationTime;
@property(readonly, nonatomic) long long creationMethod; // @dynamic creationMethod;
@property(readonly, nonatomic) long long customMaxPlayers; // @dynamic customMaxPlayers;
@property(readonly, nonatomic) long long customMaxReplays; // @dynamic customMaxReplays;
@property(readonly, nonatomic) long long customMinPlayers; // @dynamic customMinPlayers;
@property(readonly, nonatomic) long long customScoringMethods; // @dynamic customScoringMethods;
@property(readonly, nonatomic) long long customSeedingMethods; // @dynamic customSeedingMethods;
@property(readonly, nonatomic) _Bool customTournamentAllowIcon; // @dynamic customTournamentAllowIcon;
@property(readonly, nonatomic) double customTournamentDuration; // @dynamic customTournamentDuration;
@property(readonly, nonatomic) NSString *customTournamentIcon; // @dynamic customTournamentIcon;
@property(readonly, nonatomic) NSString *customTournamentName; // @dynamic customTournamentName;
@property(readonly, nonatomic) long long customTournamentNameFormat; // @dynamic customTournamentNameFormat;
@property(readonly, nonatomic) long long maxPlayerShards; // @dynamic maxPlayerShards;
@property(readonly, nonatomic) long long maxPlayers; // @dynamic maxPlayers;
@property(readonly, nonatomic) long long maxReplays; // @dynamic maxReplays;
@property(readonly, nonatomic) long long minPlayers; // @dynamic minPlayers;
@property(readonly, nonatomic) long long participationType; // @dynamic participationType;
@property(readonly, nonatomic) GKRecurrenceRule *recurrenceRule; // @dynamic recurrenceRule;
@property(readonly, nonatomic) long long scoringMethod; // @dynamic scoringMethod;
@property(readonly, nonatomic) long long seedingMethod; // @dynamic seedingMethod;
@property(readonly, nonatomic) NSString *tournamentDefinitionID; // @dynamic tournamentDefinitionID;
@property(readonly, nonatomic) NSString *tournamentDescription; // @dynamic tournamentDescription;
@property(readonly, nonatomic) double tournamentDuration; // @dynamic tournamentDuration;
@property(readonly, nonatomic) NSString *tournamentIcon; // @dynamic tournamentIcon;
@property(readonly, nonatomic) NSString *tournamentName; // @dynamic tournamentName;
@property(readonly, nonatomic) long long tournamentNameFormat; // @dynamic tournamentNameFormat;
@property(readonly, nonatomic) long long tournamentType; // @dynamic tournamentType;
@property(readonly, nonatomic) double typicalGameplayDuration; // @dynamic typicalGameplayDuration;

@end
