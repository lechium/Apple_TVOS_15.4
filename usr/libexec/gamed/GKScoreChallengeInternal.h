//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal
{
    GKScoreInternal *_score;	// 88 = 0x58
    GKLeaderboardInternal *_leaderboard;	// 96 = 0x60
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0040000000168622
+ (id)internalRepresentation;	// IMP=0x0010000000168610
- (void).cxx_destruct;	// IMP=0x0020000000168c42
@property(retain, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(copy, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (id)titleText;	// IMP=0x0010000000168a82
- (unsigned long long)type;	// IMP=0x0010000000168a77
- (id)serverRepresentationForReceivingPlayer:(id)arg1;	// IMP=0x0010000000168748

@end

