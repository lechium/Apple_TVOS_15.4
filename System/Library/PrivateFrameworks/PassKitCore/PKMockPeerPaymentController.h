//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCurrencyAmount;

@interface PKMockPeerPaymentController
{
    id _performCompletion;	// 8 = 0x8
    _Bool _shouldGenerateMockTransactions;	// 16 = 0x10
    PKCurrencyAmount *_mockBalance;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001091f7
@property(nonatomic) _Bool shouldGenerateMockTransactions; // @synthesize shouldGenerateMockTransactions=_shouldGenerateMockTransactions;
@property(retain, nonatomic) PKCurrencyAmount *mockBalance; // @synthesize mockBalance=_mockBalance;
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001090e8
- (void)paymentAuthorizationCoordinator:(id *)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000108cc7
- (void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)arg1;	// IMP=0x0000000000108980
- (void)_insertPeerPaymentTransactionForAuthroizedTransferQuote:(id)arg1;	// IMP=0x00000000001083ab
- (void)_adjustBalanceForAuthorizedTransferQuote:(id)arg1;	// IMP=0x000000000010825f
- (void)paymentAuthorizationCoordinator:(id *)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010802a
- (void)formalRequestTokenForAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000107e80
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000106ef8
- (id)_quoteItemDictionaryWithType:(unsigned long long)arg1 amount:(id)arg2 alternateFundingSource:(id)arg3 featureDescriptor:(id)arg4;	// IMP=0x00000000001068ca
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000106613
- (id)initWithPeerPaymentWebService:(id)arg1;	// IMP=0x0000000000106525

@end
