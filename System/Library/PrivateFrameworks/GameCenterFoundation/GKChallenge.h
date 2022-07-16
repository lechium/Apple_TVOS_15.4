//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKChallengeInternal, GKGame, GKPlayer, NSDate, NSOrderedSet, NSString;

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding>
{
    GKChallengeInternal *_internal;	// 8 = 0x8
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x00000000000c4bfd
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000c4a76
+ (void)loadReceivedChallengesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3fed
+ (void)loadReceivedPendingChallengesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3d82
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3d61
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3732
+ (void)getCountOfChallenges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c361e
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;	// IMP=0x00000000000c3393
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;	// IMP=0x00000000000c3108
+ (id)challengeForInternalRepresentation:(id)arg1;	// IMP=0x00000000000c307b
+ (id)stringForState:(long long)arg1;	// IMP=0x00000000000c3041
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c2f33
- (void).cxx_destruct;	// IMP=0x00000000000c4e81
@property(retain) GKChallengeInternal *internal; // @synthesize internal=_internal;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4e4c
@property(readonly, nonatomic) _Bool detailsLoaded;
- (id)infoTextForIssuingPlayer:(id)arg1;	// IMP=0x00000000000c4d77
- (void)loadUIDetailsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c4d65
- (_Bool)hasLoadedUIDetails;	// IMP=0x00000000000c4d5d
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000c4cd7
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000c4c54
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000c4b82
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000c4ae8
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000c4a64
@property(readonly, copy, nonatomic) GKPlayer *receivingPlayer; // @dynamic receivingPlayer;
@property(readonly, copy, nonatomic) GKPlayer *issuingPlayer; // @dynamic issuingPlayer;
- (id)receivingPlayerID;	// IMP=0x00000000000c4815
- (id)issuingPlayerID;	// IMP=0x00000000000c472f
@property(readonly, nonatomic) GKGame *game; // @dynamic game;
- (void)decline;	// IMP=0x00000000000c4686
- (void)declineWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c44a5
- (void)issueToPlayers:(id)arg1 message:(id)arg2;	// IMP=0x00000000000c4177
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c2fc8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c2f3b
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x00000000000c2f04
- (unsigned long long)hash;	// IMP=0x00000000000c2ec0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c2dfa

// Remaining properties
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy, nonatomic) NSString *challengeID; // @dynamic challengeID;
@property(readonly, copy, nonatomic) NSOrderedSet *compatibleBundleIDs; // @dynamic compatibleBundleIDs;
@property(readonly, retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(readonly, retain, nonatomic) NSDate *issueDate; // @dynamic issueDate;
@property(readonly, copy, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) long long state; // @dynamic state;

@end
