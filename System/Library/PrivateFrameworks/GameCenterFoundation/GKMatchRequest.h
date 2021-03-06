//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKReportable-Protocol.h>

@class GKMatchRequestInternal, GKTournament, NSArray, NSString;

@interface GKMatchRequest : NSObject <GKReportable>
{
    GKMatchRequestInternal *_internal;	// 8 = 0x8
    CDUnknownBlockType _inviteeResponseHandler;	// 16 = 0x10
    CDUnknownBlockType _recipientResponseHandler;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0000000000079403
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000007927c
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1;	// IMP=0x000000000007909b
+ (id)reportableKeyPaths;	// IMP=0x000000000007881c
- (void).cxx_destruct;	// IMP=0x000000000007a784
@property(copy) CDUnknownBlockType recipientResponseHandler; // @synthesize recipientResponseHandler=_recipientResponseHandler;
@property(copy) CDUnknownBlockType inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;
@property(retain) GKMatchRequestInternal *internal; // @synthesize internal=_internal;
- (_Bool)isConfiguredForAutomatchOnly;	// IMP=0x000000000007a675
- (_Bool)isIncorrectlyInvitingPlayers;	// IMP=0x000000000007a592
- (void)loadRecipientsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000079e7b
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000079df5
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000079d72
@property(retain) NSArray *playersToInvite; // @dynamic playersToInvite;
@property(retain) GKTournament *tournamentForInvitePool;
@property(copy) NSString *inviteMessage; // @dynamic inviteMessage;
@property(retain) NSArray *recipients; // @dynamic recipients;
- (id)guestPlayers;	// IMP=0x000000000007945a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000079388
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000792ee
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000007926a
- (_Bool)isRecipientCountValid;	// IMP=0x0000000000079206
- (void)removeLocalPlayerFromPlayersToInvite;	// IMP=0x0000000000078da6
- (void)ensureValidityHosted:(_Bool)arg1;	// IMP=0x0000000000078b57
- (_Bool)isTurnBasedValid;	// IMP=0x0000000000078af0
- (_Bool)isValidForHosted:(_Bool)arg1;	// IMP=0x0000000000078a7b
- (_Bool)isValidWithMax:(unsigned long long)arg1;	// IMP=0x00000000000789ab
- (_Bool)defaultNumberOfPlayersIsValid;	// IMP=0x0000000000078933
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000078829
- (id)description;	// IMP=0x00000000000785ff
- (unsigned long long)hash;	// IMP=0x00000000000785bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000784f5
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x0000000000078325
- (id)init;	// IMP=0x00000000000782cb

// Remaining properties
@property unsigned long long defaultNumberOfPlayers; // @dynamic defaultNumberOfPlayers;
@property unsigned long long maxPlayers; // @dynamic maxPlayers;
@property unsigned long long minPlayers; // @dynamic minPlayers;
@property unsigned int playerAttributes; // @dynamic playerAttributes;
@property unsigned long long playerGroup; // @dynamic playerGroup;
@property _Bool restrictToAutomatch; // @dynamic restrictToAutomatch;

@end

