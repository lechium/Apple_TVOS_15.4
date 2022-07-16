//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAppletSubcredential, PKPaymentPass;

@interface PKPaymentLocalAppletSubcredentialPassCredential
{
    PKPaymentPass *_paymentPass;	// 80 = 0x50
    PKAppletSubcredential *_credentialToShare;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001aa1fe
@property(readonly, nonatomic) PKAppletSubcredential *credentialToShare; // @synthesize credentialToShare=_credentialToShare;
@property(readonly, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
- (id)initWithPaymentPass:(id)arg1 credentialToShare:(id)arg2;	// IMP=0x00000000001aa113

@end
