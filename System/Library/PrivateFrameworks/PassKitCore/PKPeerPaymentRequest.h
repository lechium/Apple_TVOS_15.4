//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPeerPaymentQuote;

@interface PKPeerPaymentRequest
{
    PKPeerPaymentQuote *_peerPaymentQuote;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003a60d9
- (void).cxx_destruct;	// IMP=0x00000000003a620a
@property(readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // @synthesize peerPaymentQuote=_peerPaymentQuote;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003a617c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003a60e1
- (unsigned long long)hash;	// IMP=0x00000000003a606a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a5fd3
- (id)initWithPeerPaymentQuote:(id)arg1;	// IMP=0x00000000003a5bf3

@end

