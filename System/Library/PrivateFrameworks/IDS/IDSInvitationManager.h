//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>
#import <IDS/IDSServiceDelegateInvitation-Protocol.h>

@class IDSService, NSMutableDictionary, NSSet, NSString;
@protocol IDSInvitationManagerDelegate, OS_dispatch_queue;

@interface IDSInvitationManager : NSObject <IDSServiceDelegateInvitation, IDSDaemonListenerProtocol>
{
    NSMutableDictionary *_serverAcknowledgedBlockMap;	// 8 = 0x8
    NSMutableDictionary *_serverAcknowledgedBlockWithInvitationMap;	// 16 = 0x10
    NSMutableDictionary *_pendingInvitations;	// 24 = 0x18
    NSMutableDictionary *_receivedInvitations;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    _Bool _invitationsLoadedFromDisk;	// 48 = 0x30
    IDSService *_internal;	// 56 = 0x38
    id <IDSInvitationManagerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002edc6
@property(nonatomic) __weak id <IDSInvitationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IDSService *internal; // @synthesize internal=_internal;
- (void)removeReceivedInvitation:(id)arg1;	// IMP=0x000000000002ec5d
- (void)removePendingInvitation:(id)arg1;	// IMP=0x000000000002eb25
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000000002ddbe
- (void)service:(id)arg1 account:(id)arg2 incomingInvitationUpdate:(id)arg3 withContext:(id)arg4;	// IMP=0x000000000002d6a0
- (void)service:(id)arg1 account:(id)arg2 incomingInvitation:(id)arg3 withContext:(id)arg4;	// IMP=0x000000000002cf77
- (_Bool)validateReceivedInvitation:(id)arg1;	// IMP=0x000000000002c876
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002c75a
- (void)declineInvitation:(id)arg1 serverAcknowledgedBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c0ab
- (void)acceptInvitation:(id)arg1 withContext:(id)arg2 serverAcknowledgedBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b9d4
- (void)cancelInvitation:(id)arg1 serverAcknowledgedBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b27c
- (void)sendInvitationToDestination:(id)arg1 expirationDate:(id)arg2 context:(id)arg3 serverAcknowledgedBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002a94e
- (id)validateStrictDecodingForSentInvitation:(id)arg1;	// IMP=0x000000000002a631
- (void)setupInvitationsForService:(id)arg1;	// IMP=0x0000000000029d07
@property(readonly, copy, nonatomic) NSSet *receivedInvitations;
@property(readonly, copy, nonatomic) NSSet *pendingInvitations;
- (id)initWithServiceIdentifier:(id)arg1;	// IMP=0x00000000000297d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
