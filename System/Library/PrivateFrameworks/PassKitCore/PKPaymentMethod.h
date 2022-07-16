//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CNContact, NSString, PKBankAccountInformation, PKDisbursementVoucher, PKPaymentPass, PKRemotePaymentInstrument, PKSecureElementPass;

@interface PKPaymentMethod : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _usePeerPaymentBalance;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSString *_network;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    PKSecureElementPass *_secureElementPass;	// 40 = 0x28
    CNContact *_billingAddress;	// 48 = 0x30
    PKRemotePaymentInstrument *_remoteInstrument;	// 56 = 0x38
    NSString *_peerPaymentQuoteIdentifier;	// 64 = 0x40
    PKDisbursementVoucher *_disbursementVoucher;	// 72 = 0x48
    PKBankAccountInformation *_bankAccount;	// 80 = 0x50
    NSString *_bindToken;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003eeb47
+ (long long)version;	// IMP=0x00000000003ee0c8
+ (id)paymentMethodWithProtobuf:(id)arg1;	// IMP=0x000000000016ee63
- (void).cxx_destruct;	// IMP=0x00000000003ef045
@property(copy, nonatomic) NSString *bindToken; // @synthesize bindToken=_bindToken;
@property(retain, nonatomic) PKBankAccountInformation *bankAccount; // @synthesize bankAccount=_bankAccount;
@property(retain, nonatomic) PKDisbursementVoucher *disbursementVoucher; // @synthesize disbursementVoucher=_disbursementVoucher;
@property(nonatomic) _Bool usePeerPaymentBalance; // @synthesize usePeerPaymentBalance=_usePeerPaymentBalance;
@property(copy, nonatomic) NSString *peerPaymentQuoteIdentifier; // @synthesize peerPaymentQuoteIdentifier=_peerPaymentQuoteIdentifier;
@property(retain, nonatomic) PKRemotePaymentInstrument *remoteInstrument; // @synthesize remoteInstrument=_remoteInstrument;
@property(copy, nonatomic) CNContact *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(copy, nonatomic) PKSecureElementPass *secureElementPass; // @synthesize secureElementPass=_secureElementPass;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)dictionaryRepresentation;	// IMP=0x00000000003eebe4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003eeb4f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003ee7f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003ee566
@property(copy, nonatomic) PKPaymentPass *paymentPass;
- (id)initWithBankAccount:(id)arg1;	// IMP=0x00000000003ee4d4
- (id)initWithBindToken:(id)arg1;	// IMP=0x00000000003ee461
- (id)initWithDisbursementVoucher:(id)arg1;	// IMP=0x00000000003ee3f6
- (id)initWithPeerPaymentQuote:(id)arg1;	// IMP=0x00000000003ee37b
- (id)initWithRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;	// IMP=0x00000000003ee312
- (id)initWithRemotePaymentInstrument:(id)arg1;	// IMP=0x00000000003ee2a1
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2 obfuscateNetworks:(_Bool)arg3;	// IMP=0x00000000003ee0ea
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(_Bool)arg2;	// IMP=0x00000000003ee0d3
- (id)protobuf;	// IMP=0x000000000016ef33

@end

