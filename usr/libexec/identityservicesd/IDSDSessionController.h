//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IMMultiQueue, NSMutableDictionary;

@interface IDSDSessionController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_sessions;	// 16 = 0x10
    FTMessageDelivery *_messageDelivery;	// 24 = 0x18
    IMMultiQueue *_sessionIDMultiQueue;	// 32 = 0x20
    _Bool _reportedReceivedMKM;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00400000002c8080
- (void).cxx_destruct;	// IMP=0x00200000002d8870
// Error: Property attributes should begin with the type ('T') attribute, property name: messageDelivery
// Property attributes: (null)

- (void)updateCriticalReliabilityState;	// IMP=0x00100000002d8350
- (id)sessionIDForAlias:(id)arg1 salt:(id)arg2;	// IMP=0x00100000002d7f50
- (id)groupSessionGroupIDs;	// IMP=0x00100000002d7c60
- (id)sessionWithGroupUUID:(id)arg1;	// IMP=0x00100000002d76d0
- (id)sessionWithGroupID:(id)arg1;	// IMP=0x00100000002d7130
- (id)sessionWithInstanceID:(id)arg1;	// IMP=0x00100000002d6bb0
- (id)sessionWithUniqueID:(id)arg1;	// IMP=0x00100000002d6930
- (id)_specificOriginatorFromID:(id)arg1 senderToken:(id)arg2 accountUniqueID:(id)arg3;	// IMP=0x00100000002d5970
- (void)_handleClientDeath:(id)arg1;	// IMP=0x00100000002d51d0
- (void)cleanupSessionsForClient:(id)arg1;	// IMP=0x00100000002d48f0
- (void)cleanupSessionWithChannelDestination:(id)arg1;	// IMP=0x00100000002d4830
- (void)cleanupSessionWithInstanceID:(id)arg1;	// IMP=0x00100000002d44f0
- (void)cleanupSession:(id)arg1;	// IMP=0x00100000002d4020
- (void)processIncomingGroupSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 toID:(id)arg4 topic:(id)arg5 idsMessageContext:(id)arg6;	// IMP=0x00100000002d0bf0
- (void)processIncomingSessionReinitiateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002d0660
- (void)processIncomingSessionEndMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002d00d0
- (void)processIncomingSessionMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002cfb40
- (void)processIncomingSessionCancelMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002cf5b0
- (void)processIncomingSessionDeclineMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002cf020
- (void)processIncomingSessionAcceptMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 idsMessageContext:(id)arg4;	// IMP=0x00100000002cea90
- (void)processIncomingInvitationWithPayload:(id)arg1 topic:(id)arg2 fromToken:(id)arg3 fromID:(id)arg4 toID:(id)arg5 idsMessageContext:(id)arg6 messageContext:(id)arg7;	// IMP=0x00100000002ca4c0
- (id)setupNewIncomingSessionWithOptions:(id)arg1;	// IMP=0x00100000002c9620
- (id)setupNewOutgoingSessionWithOptions:(id)arg1;	// IMP=0x00100000002c84a0
- (void)dealloc;	// IMP=0x00100000002c8440
- (id)init;	// IMP=0x00100000002c8140

@end
