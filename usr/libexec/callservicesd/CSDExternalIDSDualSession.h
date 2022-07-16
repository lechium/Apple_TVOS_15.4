//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSDExternalIDSDualSession
{
    _Bool _receivedInvitationAccept;	// 8 = 0x8
    NSString *_remoteFromID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000152788
@property(nonatomic) _Bool receivedInvitationAccept; // @synthesize receivedInvitationAccept=_receivedInvitationAccept;
@property(copy, nonatomic) NSString *remoteFromID; // @synthesize remoteFromID=_remoteFromID;
- (void)sessionProvider:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x0010000000152627
- (void)cancelInvitationWithReason:(int)arg1;	// IMP=0x001000000015256f
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x001000000015248e
- (void)sendInvitationWithData:(id)arg1;	// IMP=0x00100000001523aa
@property(readonly, nonatomic) unsigned long long initialLinkType;
- (id)initAsInitiatorWithSessionProvider:(id)arg1;	// IMP=0x0010000000152349
- (id)initAsReceiverWithSessionProvider:(id)arg1 remoteFromID:(id)arg2 remoteProtocolVersion:(int)arg3;	// IMP=0x00100000001522a6
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteFromID:(id)arg3 remoteProtocolVersion:(id)arg4;	// IMP=0x001000000015220e
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteProtocolVersion:(id)arg3;	// IMP=0x0010000000152187

@end
