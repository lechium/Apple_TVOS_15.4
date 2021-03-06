//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, PKTransactionAuthenticationContext;

@interface PKTransactionAuthenticationResult : NSObject <NSSecureCoding>
{
    PKTransactionAuthenticationContext *_authenticationContext;	// 8 = 0x8
    NSData *_encryptedPIN;	// 16 = 0x10
    NSData *_transactionDetailsSignature;	// 24 = 0x18
    NSData *_userConfirmation;	// 32 = 0x20
    NSString *_transactionServiceIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001795c7
- (void).cxx_destruct;	// IMP=0x0000000000179aa8
@property(copy, nonatomic) NSString *transactionServiceIdentifier; // @synthesize transactionServiceIdentifier=_transactionServiceIdentifier;
@property(copy, nonatomic) NSData *userConfirmation; // @synthesize userConfirmation=_userConfirmation;
@property(copy, nonatomic) NSData *transactionDetailsSignature; // @synthesize transactionDetailsSignature=_transactionDetailsSignature;
@property(copy, nonatomic) NSData *encryptedPIN; // @synthesize encryptedPIN=_encryptedPIN;
@property(retain, nonatomic) PKTransactionAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (_Bool)isEqualToTransactionAuthenticationResult:(id)arg1;	// IMP=0x00000000001799ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000179944
- (unsigned long long)hash;	// IMP=0x00000000001798b3
- (id)description;	// IMP=0x0000000000179834
@property(readonly, nonatomic) _Bool hasDataForAllRequestedAuthenticationMechanisms;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000179678
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001795cf

@end

