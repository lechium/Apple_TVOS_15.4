//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKLeaderboardEntry;

@protocol GKLeaderboardScoreDelegate <NSObject>
- (void)collectionViewDidScroll;
- (void)didLoadAdditionalScores;
- (void)didLoadScoresWithLocalPlayerEntry:(GKLeaderboardEntry *)arg1 topPlayer:(GKLeaderboardEntry *)arg2 playerAbove:(GKLeaderboardEntry *)arg3 playerBelow:(GKLeaderboardEntry *)arg4 totalEntries:(long long)arg5;
@end
