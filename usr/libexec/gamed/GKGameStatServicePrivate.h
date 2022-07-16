//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameStatServicePrivate
{
}

+ (id)currentFriendsPlayedList:(id)arg1;	// IMP=0x00200000001f2710
+ (unsigned long long)requiredEntitlements;	// IMP=0x00100000001f0883
+ (Class)interfaceClass;	// IMP=0x00100000001f0872
- (oneway void)getReengagementAchievement:(CDUnknownBlockType)arg1;	// IMP=0x00200000001f63c0
- (oneway void)getReengagementAchievements:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f6323
- (oneway void)loadReengagementAchievements:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f5462
- (id)processReengagementResults:(id)arg1 localPlayer:(id)arg2 expirationDate:(id)arg3 context:(id)arg4;	// IMP=0x00100000001f4b30
- (id)existingReengagementAchievement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001f464f
- (id)findAchievementInternal:(id)arg1 identifier:(id)arg2 playerID:(id)arg3 context:(id)arg4 existingPercent:(double)arg5 existingDate:(id)arg6;	// IMP=0x00100000001f3f9b
- (id)getCachedAcievementListForLocalPlayer:(id)arg1 context:(id)arg2;	// IMP=0x00100000001f3e45
- (oneway void)getGamesFriendsPlayed:(long long)arg1 type:(id)arg2 withinSecs:(long long)arg3 matchingBundleIDs:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001f3002
- (oneway void)expireGamesFriendsPlayed;	// IMP=0x00100000001f2cee
- (void)loadGamesFriendsPlayed:(id)arg1 matchingBundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f108f
- (id)ensureGameObject:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x00100000001f0f9e
- (id)currentLocalPlayer;	// IMP=0x00100000001f0ee1
- (oneway void)getHypotheticalLeaderboardRanksForScores:(id)arg1 forGameDescriptor:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f08a0
- (oneway void)getAchievementLeaderboardForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f088e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

