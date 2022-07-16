//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface PKPaymentRevokeSharedCredentialRequest
{
    NSString *_credentialIdentifier;	// 16 = 0x10
    NSDictionary *_revocationAttestation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b310d
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;	// IMP=0x00000000002b2f70
- (id)requestBody;	// IMP=0x00000000002b2efa
- (id)initWithCredential:(id)arg1 revocationAttestation:(id)arg2;	// IMP=0x00000000002b2d3f

@end
