//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PKPaymentCredentialAccountAttesationRequest
{
    NSDictionary *_requestBody;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002b38c9
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002b3682
- (id)requestBodyWithAttesationRequest:(id)arg1;	// IMP=0x00000000002b31d7
- (id)initWithCredential:(id)arg1 attesationRequest:(id)arg2;	// IMP=0x00000000002b313e

@end

