//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATRemoteConnectionDelegate-Protocol.h>

@class CATRemoteConnection, NSMutableDictionary, NSString;
@protocol CATRemoteTransportDelegate;

@interface CATRemoteTransport <CATRemoteConnectionDelegate>
{
    CATRemoteConnection *mConnection;	// 8 = 0x8
    NSMutableDictionary *mOperationByUUID;	// 16 = 0x10
    _Bool mConnectionHasOpened;	// 24 = 0x18
    id <CATRemoteTransportDelegate> _remoteTransportDelegate;	// 32 = 0x20
}

+ (void)createRemoteTransportPairWithTransport:(id *)arg1 andTransport:(id *)arg2;	// IMP=0x000000000001de99
+ (id)new;	// IMP=0x000000000001dd3e
- (void).cxx_destruct;	// IMP=0x000000000001edc1
@property(nonatomic) __weak id <CATRemoteTransportDelegate> remoteTransportDelegate; // @synthesize remoteTransportDelegate=_remoteTransportDelegate;
- (void)remoteTransportSendMessageOperation:(id)arg1 sendData:(id)arg2;	// IMP=0x000000000001ecc1
- (void)connectionDidClose:(id)arg1;	// IMP=0x000000000001eaff
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x000000000001e891
- (void)connection:(id)arg1 didInterruptWithError:(id)arg2;	// IMP=0x000000000001e6d7
- (void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4;	// IMP=0x000000000001e5f0
- (void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000001e527
- (void)connectionDidSecure:(id)arg1;	// IMP=0x000000000001e48a
- (void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;	// IMP=0x000000000001e3e0
- (void)connectionWillSecure:(id)arg1;	// IMP=0x000000000001e343
- (void)setName:(id)arg1;	// IMP=0x000000000001e326
- (id)name;	// IMP=0x000000000001e309
- (id)operationToSendMessage:(id)arg1;	// IMP=0x000000000001e29d
- (void)invalidateConnection;	// IMP=0x000000000001e256
- (void)suspendConnection;	// IMP=0x000000000001e20f
- (void)resumeConnection;	// IMP=0x000000000001e19a
@property(readonly, nonatomic) struct __SecTrust *peerTrust;
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x000000000001e058
- (id)init;	// IMP=0x000000000001dde2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

