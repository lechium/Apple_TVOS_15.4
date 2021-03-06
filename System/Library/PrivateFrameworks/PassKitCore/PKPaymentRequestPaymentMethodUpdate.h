//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, PKPeerPaymentQuote;

@interface PKPaymentRequestPaymentMethodUpdate <NSSecureCoding>
{
    NSArray *_errors;	// 40 = 0x28
    PKPeerPaymentQuote *_peerPaymentQuote;	// 48 = 0x30
    NSString *_installmentGroupIdentifier;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003d0de7
- (void).cxx_destruct;	// IMP=0x00000000003d0e47
@property(copy, nonatomic) NSString *installmentGroupIdentifier; // @synthesize installmentGroupIdentifier=_installmentGroupIdentifier;
@property(retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // @synthesize peerPaymentQuote=_peerPaymentQuote;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d0d48
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d0c59
- (id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2;	// IMP=0x00000000003d0b3c
- (id)initWithPaymentSummaryItems:(id)arg1;	// IMP=0x00000000003d0b25

@end

