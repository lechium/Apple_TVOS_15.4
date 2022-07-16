//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, _CDInteractionAdvisorSettings;
@protocol _CDInteractionXPCHeartBeatProtocol;

@protocol _CDInteractionAdvising
- (void)tuneSocialAdvisorUsingSettings:(_CDInteractionAdvisorSettings *)arg1 heartBeatHandler:(id <_CDInteractionXPCHeartBeatProtocol>)arg2;
- (NSArray *)adviseInteractionsForKeywordsInString:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (NSArray *)adviseSocialInteractionsForDate:(NSDate *)arg1 andSeedContacts:(NSArray *)arg2 usingSettings:(_CDInteractionAdvisorSettings *)arg3;
- (NSArray *)adviseInteractionsForLocation:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (NSArray *)adviseInteractionsForDate:(NSDate *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (NSArray *)adviseInteractionsUsingSettings:(_CDInteractionAdvisorSettings *)arg1;
- (NSArray *)rankCandidateContacts:(NSArray *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
@end

