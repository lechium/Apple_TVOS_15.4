//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GKAcceptedInviteManager : NSObject
{
    NSMutableArray *_acceptedMultiplayerInvites;	// 8 = 0x8
    NSMutableArray *_queuedCancelledMultiplayerInviteSessionTokens;	// 16 = 0x10
    NSMutableArray *_acceptedTurnBased;	// 24 = 0x18
    NSMutableArray *_acceptedTournamentInvites;	// 32 = 0x20
}

+ (id)syncQueue;	// IMP=0x00400000000ee894
- (void).cxx_destruct;	// IMP=0x00200000000f157b
@property(retain) NSMutableArray *acceptedTournamentInvites; // @synthesize acceptedTournamentInvites=_acceptedTournamentInvites;
@property(retain) NSMutableArray *acceptedTurnBased; // @synthesize acceptedTurnBased=_acceptedTurnBased;
@property(retain) NSMutableArray *queuedCancelledMultiplayerInviteSessionTokens; // @synthesize queuedCancelledMultiplayerInviteSessionTokens=_queuedCancelledMultiplayerInviteSessionTokens;
@property(retain) NSMutableArray *acceptedMultiplayerInvites; // @synthesize acceptedMultiplayerInvites=_acceptedMultiplayerInvites;
- (id)description;	// IMP=0x00100000000f1389
- (id)tournamentInviteForGame:(id)arg1;	// IMP=0x00100000000f114f
- (id)turnBasedInviteForGameDescriptor:(id)arg1;	// IMP=0x00100000000f0f47
- (id)turnBasedInviteForGame:(id)arg1;	// IMP=0x00100000000f0d7e
- (id)multiplayerInviteForGameDescriptor:(id)arg1;	// IMP=0x00100000000f0a2e
- (id)multiplayerInviteForGame:(id)arg1;	// IMP=0x00100000000f0865
- (id)removeAndReturnTurnBasedInviteWithMatchID:(id)arg1;	// IMP=0x00100000000f061f
- (_Bool)removeAndReturnQueuedCancelledInviteWithSessionToken:(id)arg1;	// IMP=0x00100000000f040f
- (id)removeAndReturnInviteWithSessionToken:(id)arg1;	// IMP=0x00100000000f01c9
- (void)addTournamentInvite:(id)arg1;	// IMP=0x00100000000f003b
- (void)addTurnBasedEvent:(id)arg1;	// IMP=0x00100000000efead
- (void)queueCancelledMultiplayerInviteSessionToken:(id)arg1;	// IMP=0x00100000000efd1f
- (void)addMultiplayerInvite:(id)arg1;	// IMP=0x00100000000ef936
- (id)_fetchAndRemoveBulletinFromArray:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ef597
- (id)_fetchObjectFromArray:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ef1e9
- (void)_insertBulletin:(id)arg1 atFrontOfArray:(id)arg2;	// IMP=0x00100000000eefa2
- (void)_addBulletin:(id)arg1 toArray:(id)arg2;	// IMP=0x00100000000eed5d
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000eea46
- (id)init;	// IMP=0x00100000000ee7f1

@end
