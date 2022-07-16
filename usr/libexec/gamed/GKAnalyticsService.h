//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKAnalyticsService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000010c41f
+ (Class)interfaceClass;	// IMP=0x001000000010c40e
- (void)respondedToBulletin:(id)arg1;	// IMP=0x002000000010c492
- (void)purchasedGame:(id)arg1;	// IMP=0x001000000010c48c
- (void)stoppedPlayingGame;	// IMP=0x001000000010c486
- (void)beganPlayingGame;	// IMP=0x001000000010c480
- (void)quitMatch:(id)arg1 withOutcome:(long long)arg2;	// IMP=0x001000000010c47a
- (void)disconnectedMatchWithID:(id)arg1;	// IMP=0x001000000010c474
- (void)rematchedWithMatchRequest:(id)arg1;	// IMP=0x001000000010c46e
- (void)sentMatchRequest:(id)arg1;	// IMP=0x001000000010c468
- (void)declinedInvite:(id)arg1;	// IMP=0x001000000010c462
- (void)declinedInviteForTurnBasedMatch:(id)arg1;	// IMP=0x001000000010c45c
- (void)acceptedInviteForTurnBasedMatch:(id)arg1;	// IMP=0x001000000010c456
- (void)acceptedInvite:(id)arg1;	// IMP=0x001000000010c450
- (void)completedChallenge:(id)arg1;	// IMP=0x001000000010c44a
- (void)wantsToPlayChallenge:(id)arg1;	// IMP=0x001000000010c444
- (void)declinedChallenge:(id)arg1;	// IMP=0x001000000010c43e
- (void)postedScore:(id)arg1;	// IMP=0x001000000010c438
- (void)updatedAchievement:(id)arg1;	// IMP=0x001000000010c432
- (_Bool)requiresAuthentication;	// IMP=0x001000000010c42a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
