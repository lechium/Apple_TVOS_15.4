//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationSuccessStateParam
{
    PKPeerPaymentTransactionMetadata *_peerPaymentTransactionMetadata;	// 8 = 0x8
}

+ (id)paramWithPeerPaymentTransactionMetadata:(id)arg1;	// IMP=0x00000000002f6d30
- (void).cxx_destruct;	// IMP=0x00000000002f6e0b
@property(retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata; // @synthesize peerPaymentTransactionMetadata=_peerPaymentTransactionMetadata;
- (id)description;	// IMP=0x00000000002f6d9e

@end
