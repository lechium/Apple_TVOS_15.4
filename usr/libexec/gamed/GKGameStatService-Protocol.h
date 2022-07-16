//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GKGameDescriptor, GKLeaderboardInternal, GKLeaderboardScoreRequest, GKPlayerInternal, NSArray, NSSet, NSString;

@protocol GKGameStatService <NSObject>
- (oneway void)deleteLeaderboardWithID:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)endLeaderboardWithID:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)startLeaderboardWithID:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)createLeaderboardBasedOnID:(NSString *)arg1 recipients:(NSArray *)arg2 inviteMessage:(NSString *)arg3 context:(NSString *)arg4 duration:(double)arg5 handler:(void (^)(GKLeaderboard *, NSError *))arg6;
- (oneway void)submitInstanceScore:(long long)arg1 context:(unsigned long long)arg2 leaderboardID:(NSString *)arg3 forPlayer:(GKPlayerInternal *)arg4 whileScreeningChallenges:(_Bool)arg5 withEligibleChallenges:(NSArray *)arg6 handler:(void (^)(NSError *))arg7;
- (oneway void)submitScore:(long long)arg1 context:(unsigned long long)arg2 leaderboardIDs:(NSArray *)arg3 forPlayer:(GKPlayerInternal *)arg4 whileScreeningChallenges:(_Bool)arg5 withEligibleChallenges:(NSArray *)arg6 gameDescriptor:(GKGameDescriptor *)arg7 handler:(void (^)(NSError *))arg8;
- (oneway void)getEntriesForLeaderboard:(GKLeaderboardInternal *)arg1 gameDescriptor:(GKGameDescriptor *)arg2 localPlayer:(GKPlayerInternal *)arg3 playerScope:(long long)arg4 timeScope:(long long)arg5 range:(struct _NSRange)arg6 players:(NSArray *)arg7 handler:(void (^)(GKLeaderboardEntryInternal *, NSArray *, long long, NSError *))arg8;
- (oneway void)getPreviousInstanceForLeaderboard:(GKLeaderboardInternal *)arg1 gameDescriptor:(GKGameDescriptor *)arg2 player:(GKPlayerInternal *)arg3 handler:(void (^)(GKLeaderboardInternal *, NSError *))arg4;
- (oneway void)getLeaderboardsForGameDescriptor:(GKGameDescriptor *)arg1 player:(GKPlayerInternal *)arg2 leaderboardIDs:(NSSet *)arg3 setIdentifier:(NSString *)arg4 handler:(void (^)(NSArray *, NSError *))arg5;
- (oneway void)getDefaultLeaderboardIDWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)setDefaultLeaderboardID:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getLeaderboardSetsForGameDescriptor:(GKGameDescriptor *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getLeaderboardsForGameDescriptor:(GKGameDescriptor *)arg1 player:(GKPlayerInternal *)arg2 setIdentifier:(NSString *)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
- (oneway void)getLeaderboardSummaryForGameDescriptor:(GKGameDescriptor *)arg1 localPlayer:(GKPlayerInternal *)arg2 baseLeaderboardID:(NSString *)arg3 leaderboardID:(NSString *)arg4 timeScope:(long long)arg5 handler:(void (^)(GKLeaderboardSummaryInternal *, NSError *))arg6;
- (void)submitScores:(NSArray *)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(NSArray *)arg3 attemptInProcessFirst:(_Bool)arg4 handler:(void (^)(NSError *))arg5;
- (oneway void)getLeaderboadForRequest:(GKLeaderboardScoreRequest *)arg1 handler:(void (^)(GKLeaderboardInternal *, NSError *))arg2;
- (oneway void)resetAchievementsWithHandler:(void (^)(NSError *))arg1;
- (void)submitAchievements:(NSArray *)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(NSArray *)arg3 handler:(void (^)(NSError *))arg4;
- (oneway void)getAchievementsForGameDescriptor:(GKGameDescriptor *)arg1 players:(NSArray *)arg2 handler:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)getAchievementDescriptionsForGameDescriptor:(GKGameDescriptor *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getRecentPlayersWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getRecentMatchesForGameDescriptor:(GKGameDescriptor *)arg1 otherPlayer:(GKPlayerInternal *)arg2 handler:(void (^)(NSArray *, NSString *, NSError *))arg3;
- (oneway void)getPlayersForGameDescriptor:(GKGameDescriptor *)arg1 includeCompatibleMultiplayerGames:(_Bool)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getPlayersForGameDescriptor:(GKGameDescriptor *)arg1 achievementIdentifier:(NSString *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getPlayersForGameDescriptor:(GKGameDescriptor *)arg1 leaderboardIdentifier:(NSString *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
@end

