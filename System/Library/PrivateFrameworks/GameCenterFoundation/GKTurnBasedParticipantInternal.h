//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKPlayerInternal, NSDate, NSString;

@interface GKTurnBasedParticipantInternal
{
    NSString *_sessionID;	// 8 = 0x8
    GKPlayerInternal *_player;	// 16 = 0x10
    GKPlayerInternal *_invitedBy;	// 24 = 0x18
    NSString *_inviteMessage;	// 32 = 0x20
    NSString *_status;	// 40 = 0x28
    NSDate *_lastTurnDate;	// 48 = 0x30
    NSDate *_timeoutDate;	// 56 = 0x38
    unsigned int _matchOutcome;	// 64 = 0x40
    unsigned char _slot;	// 68 = 0x44
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000000000ff35c
- (void).cxx_destruct;	// IMP=0x00000000000ffa76
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
@property(nonatomic) unsigned char slot; // @synthesize slot=_slot;
@property(nonatomic) unsigned int matchOutcome; // @synthesize matchOutcome=_matchOutcome;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(retain, nonatomic) GKPlayerInternal *invitedBy; // @synthesize invitedBy=_invitedBy;
@property(retain, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(retain, nonatomic) NSDate *lastTurnDate; // @synthesize lastTurnDate=_lastTurnDate;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) _Bool isAutomatchParticipant; // @dynamic isAutomatchParticipant;
- (id)descriptionSubstitutionMap;	// IMP=0x00000000000ff870
- (id)serverRepresentation;	// IMP=0x00000000000ff603
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ff517
- (unsigned long long)hash;	// IMP=0x00000000000ff501
@property(readonly, nonatomic) NSString *playerID;

@end

