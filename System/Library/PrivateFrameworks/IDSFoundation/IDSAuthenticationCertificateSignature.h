//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAuthenticationCertificate, NSData, NSString;

@interface IDSAuthenticationCertificateSignature : NSObject
{
    NSString *_subscriptionIdentifier;	// 8 = 0x8
    IDSAuthenticationCertificate *_authenticationCertificate;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
    NSString *_serverVerifiableEncoding;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000009d48a
@property(readonly, nonatomic) NSString *serverVerifiableEncoding; // @synthesize serverVerifiableEncoding=_serverVerifiableEncoding;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) IDSAuthenticationCertificate *authenticationCertificate; // @synthesize authenticationCertificate=_authenticationCertificate;
@property(readonly, nonatomic) NSString *subscriptionIdentifier; // @synthesize subscriptionIdentifier=_subscriptionIdentifier;
- (id)description;	// IMP=0x000000000009d378
- (id)initWithSubscriptionIdentifier:(id)arg1 authenticationCertificate:(id)arg2 signature:(id)arg3 serverVerifiableEncoding:(id)arg4;	// IMP=0x000000000009d296
- (id)initWithSubscriptionIdentifier:(id)arg1 authenticationCertificate:(id)arg2 signature:(id)arg3 nonce:(id)arg4;	// IMP=0x000000000009d12b

@end

