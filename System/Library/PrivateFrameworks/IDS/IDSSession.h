//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _IDSSession;

@interface IDSSession : NSObject
{
    _IDSSession *_internal;	// 8 = 0x8
    NSString *_uniqueID;	// 16 = 0x10
    struct os_unfair_lock_s _uniqueIDLock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003a8f4
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;	// IMP=0x000000000003a7af
- (_Bool)shouldUseSocketForTransport;	// IMP=0x000000000003a6a1
- (void)setPreferences:(id)arg1;	// IMP=0x000000000003a5bf
@property(readonly, nonatomic) unsigned int sessionEndedReason;
- (void)reconnectSession;	// IMP=0x000000000003a40f
@property(nonatomic) long long invitationTimeOut;
- (_Bool)sendData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003a0e5
@property(nonatomic) _Bool isMuted;
@property(nonatomic) _Bool isAudioEnabled;
- (void)sendAllocationRequest:(id)arg1;	// IMP=0x0000000000039c89
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x0000000000039b79
- (void)sendSessionMessage:(id)arg1;	// IMP=0x0000000000039a9b
- (void)endSessionWithData:(id)arg1;	// IMP=0x00000000000399bd
- (void)endSession;	// IMP=0x000000000003991e
- (void)declineInvitation;	// IMP=0x000000000003987f
- (void)acceptInvitation;	// IMP=0x00000000000397e0
- (void)cancelInvitation;	// IMP=0x0000000000039741
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x0000000000039663
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x0000000000039585
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x00000000000394a7
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x00000000000393f7
- (id)_streamPreferences;	// IMP=0x00000000000392a2
- (void)setStreamPreferences:(id)arg1;	// IMP=0x00000000000391c4
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x00000000000390d6
- (void)sendInvitationWithData:(id)arg1;	// IMP=0x00000000000390c2
- (void)sendInvitationWithOptions:(id)arg1;	// IMP=0x0000000000038e88
- (void)sendInvitation;	// IMP=0x0000000000038e74
- (unsigned long long)initialLinkType;	// IMP=0x0000000000038d59
- (id)_internal;	// IMP=0x0000000000038cb5
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000038ba5
- (unsigned int)state;	// IMP=0x0000000000038a94
- (id)description;	// IMP=0x0000000000038a4f
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSString *sessionID;
@property(readonly, nonatomic) int socket;
- (void)dealloc;	// IMP=0x00000000000386b8
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;	// IMP=0x000000000003847c
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;	// IMP=0x000000000003816d
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;	// IMP=0x0000000000037e77

@end

