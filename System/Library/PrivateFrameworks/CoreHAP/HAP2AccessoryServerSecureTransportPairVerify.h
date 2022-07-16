//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerTransportDelegate-Protocol.h>
#import <CoreHAP/HAPSecuritySessionDelegate-Protocol.h>

@class HAPSecuritySession, NSString;

@interface HAP2AccessoryServerSecureTransportPairVerify <HAP2AccessoryServerTransportDelegate, HAPSecuritySessionDelegate>
{
    HAPSecuritySession *_securitySession;	// 8 = 0x8
    CDUnknownBlockType _stateChangeCompletion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000089440
@property(copy, nonatomic) CDUnknownBlockType stateChangeCompletion; // @synthesize stateChangeCompletion=_stateChangeCompletion;
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000089234
- (void)_sendSetupExchangeData:(id)arg1;	// IMP=0x0000000000089097
- (void)_secureTransport;	// IMP=0x0000000000088f98
- (void)_openTransport;	// IMP=0x0000000000088ee7
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x0000000000088df5
- (void)securitySessionDidOpen:(id)arg1;	// IMP=0x0000000000088d2c
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;	// IMP=0x0000000000088c63
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000889b2
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;	// IMP=0x00000000000887c1
- (void)doCloseWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008871e
- (void)doOpenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000088692
@property(retain, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
- (id)initWithTransport:(id)arg1 operationQueue:(id)arg2;	// IMP=0x00000000000884e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

