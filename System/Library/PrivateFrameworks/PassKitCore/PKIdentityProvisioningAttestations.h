//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData;

@interface PKIdentityProvisioningAttestations : NSObject <NSSecureCoding>
{
    NSArray *_authorizationKeyAttestation;	// 8 = 0x8
    NSArray *_deviceEncryptionKeyAttestation;	// 16 = 0x10
    NSData *_deviceEncryptionKeyAuthorization;	// 24 = 0x18
    NSData *_transactionKeyCASDAttestation;	// 32 = 0x20
    NSData *_transactionKeyCASDSignature;	// 40 = 0x28
    NSData *_transactionKeyCASDAuthorization;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000717ae
- (void).cxx_destruct;	// IMP=0x0000000000071ae2
@property(readonly, nonatomic) NSData *transactionKeyCASDAuthorization; // @synthesize transactionKeyCASDAuthorization=_transactionKeyCASDAuthorization;
@property(readonly, nonatomic) NSData *transactionKeyCASDSignature; // @synthesize transactionKeyCASDSignature=_transactionKeyCASDSignature;
@property(readonly, nonatomic) NSData *transactionKeyCASDAttestation; // @synthesize transactionKeyCASDAttestation=_transactionKeyCASDAttestation;
@property(readonly, nonatomic) NSData *deviceEncryptionKeyAuthorization; // @synthesize deviceEncryptionKeyAuthorization=_deviceEncryptionKeyAuthorization;
@property(readonly, nonatomic) NSArray *deviceEncryptionKeyAttestation; // @synthesize deviceEncryptionKeyAttestation=_deviceEncryptionKeyAttestation;
@property(readonly, nonatomic) NSArray *authorizationKeyAttestation; // @synthesize authorizationKeyAttestation=_authorizationKeyAttestation;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000071873
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000717b6
- (id)initWithAuthorizationKeyAttestation:(id)arg1 deviceEncryptionKeyAttestation:(id)arg2 deviceEncryptionKeyAuthorization:(id)arg3 transactionKeyCASDAttestation:(id)arg4 transactionKeyCASDSignature:(id)arg5 transactionKeyCASDAuthorization:(id)arg6;	// IMP=0x0000000000071686

@end

