//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKInAppPaymentSession
{
}

- (id)authorizeWithRequest:(id)arg1 authorizationParameters:(id)arg2;	// IMP=0x000000000031a6ad
- (id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 withAuthorizationParameters:(id)arg3;	// IMP=0x000000000031a48a
- (id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 isFeatureNotSupportedError:(_Bool *)arg5;	// IMP=0x000000000031a388
- (id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4;	// IMP=0x000000000031a29f

@end

