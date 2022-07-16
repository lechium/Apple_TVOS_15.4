//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitCore/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>

@class NSError, NSString, PKContactResolver, PKPaymentAuthorizationCoordinator, PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentControllerInternalState, PKPeerPaymentPerformResponse, PKPeerPaymentQuote, PKPeerPaymentRecipient, PKPeerPaymentRequestToken, PKPeerPaymentWebService;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PKPeerPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKPeerPaymentControllerInternalState *_is;	// 8 = 0x8
    PKPeerPaymentAccount *_account;	// 16 = 0x10
    PKPaymentPass *_peerPaymentPass;	// 24 = 0x18
    PKContactResolver *_contactResolver;	// 32 = 0x20
    PKPaymentAuthorizationCoordinator *_performQuoteAuthorizationCoordinator;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_performQuoteGroup;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_performQuoteCallbackQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    _Bool _performQuoteSuccess;	// 72 = 0x48
    NSError *_performQuoteError;	// 80 = 0x50
    PKPeerPaymentWebService *_webService;	// 88 = 0x58
}

+ (id)_displayNameForRecipientAddress:(id)arg1 contactResolver:(id)arg2 foundInContacts:(_Bool *)arg3;	// IMP=0x00000000001db5ce
+ (id)displayNameForAddress:(id)arg1 contactResolver:(id)arg2;	// IMP=0x00000000001db4af
+ (id)_peerPaymentPassURL;	// IMP=0x00000000001db38e
+ (_Bool)errorIsTermsAcceptanceRequiredError:(id)arg1;	// IMP=0x00000000001db381
+ (_Bool)errorIsIdentityVerificationRequiredError:(id)arg1;	// IMP=0x00000000001db374
+ (unsigned long long)proposedResolutionForError:(id)arg1;	// IMP=0x00000000001db1e4
+ (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;	// IMP=0x00000000001daaac
+ (id)displayableErrorForError:(id)arg1;	// IMP=0x00000000001da940
- (void).cxx_destruct;	// IMP=0x00000000001de839
@property(readonly, nonatomic) PKPeerPaymentWebService *webService; // @synthesize webService=_webService;
- (void)_updatePreservePeerPaymentBalanceSetting:(_Bool)arg1;	// IMP=0x00000000001de7dc
@property(readonly, copy) NSString *description;
- (void)_setPerformQuoteSuccess:(_Bool)arg1;	// IMP=0x00000000001de792
- (id)internalState;	// IMP=0x00000000001de784
- (void)aggDAuthorizedQuoteWithSuccess:(_Bool)arg1 authorizedQuote:(id)arg2;	// IMP=0x00000000001de424
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dd8dd
- (_Bool)_contactInfoIsValidForAuthorizedQuote:(id)arg1 errors:(id *)arg2;	// IMP=0x00000000001dd205
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dd1ff
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dca54
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;	// IMP=0x00000000001dc934
- (id)summaryItemsForQuote:(id)arg1;	// IMP=0x00000000001db77a
- (id)_contactResolver;	// IMP=0x00000000001db6e3
- (id)contactForHandle:(id)arg1;	// IMP=0x00000000001db660
- (id)displayNameForRecipientAddress:(id)arg1 foundInContacts:(_Bool *)arg2;	// IMP=0x00000000001db53a
- (id)displayNameForRecipientAddress:(id)arg1;	// IMP=0x00000000001db526
- (id)displayableErrorForError:(id)arg1;	// IMP=0x00000000001daa5b
- (void)_handleAccountChanged:(id)arg1;	// IMP=0x00000000001da6ce
@property(readonly, nonatomic) PKPaymentPass *peerPaymentPass;
@property(readonly, nonatomic) PKPeerPaymentAccount *account;
- (void)handleTermsAcceptanceRequiredWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001da4c8
- (void)handleIdentityVerificationWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001da2aa
- (void)statusForPaymentIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001da12a
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d9fa3
- (void)formalRequestTokenForAmount:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d9829
- (void)formalRequestTokenForAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d9812
- (void)_updateLastUsedAlternateFundingSource;	// IMP=0x00000000001d967e
- (void)performQuoteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d9661
- (void)performQuote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d8baf
- (id)_defaultAlternateFundingSourceForMode:(unsigned long long)arg1;	// IMP=0x00000000001d89a0
- (void)_requestQuoteWithRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d8475
- (void)quoteWithAmount:(id)arg1 source:(unsigned long long)arg2 requestToken:(id)arg3 alternateFundingSource:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001d7dae
- (void)quoteWithAmount:(id)arg1 source:(unsigned long long)arg2 requestToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d7d8c
- (void)quoteWithAmount:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d7d67
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d7d3d
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d7d13
- (void)quoteWithAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d7cfc
- (void)selectMode:(unsigned long long)arg1;	// IMP=0x00000000001d7a88
- (void)identifyRecipientSelf;	// IMP=0x00000000001d79df
- (void)identifyRecipientDebitCardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d7708
- (void)identifyRecipientWithRoutingNumber:(id)arg1 accountNumber:(id)arg2 accountName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001d7341
- (void)_refreshRecipientWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d6c74
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d6444
@property(readonly, nonatomic) PKPeerPaymentPerformResponse *performQuoteResponse;
@property(readonly, nonatomic) PKPeerPaymentQuote *quote;
@property(readonly, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property(readonly, copy, nonatomic) NSString *recipientDisplayName;
@property(readonly, copy, nonatomic) PKPeerPaymentRecipient *recipient;
@property(readonly, copy, nonatomic) NSString *recipientPhoneOrEmail;
@property(readonly, copy, nonatomic) NSString *senderPhoneOrEmail;
@property(readonly, nonatomic) unsigned long long mode;
@property(readonly, nonatomic) unsigned long long state;
- (_Bool)restoreStateWithExternalizedControllerState:(id)arg1;	// IMP=0x00000000001d6078
- (id)externalizedControllerState;	// IMP=0x00000000001d6050
- (void)_resetToState:(unsigned long long)arg1;	// IMP=0x00000000001d5ed8
- (void)reset;	// IMP=0x00000000001d5e30
- (_Bool)_ensureState:(unsigned long long)arg1;	// IMP=0x00000000001d5c44
- (void)_setState:(unsigned long long)arg1 notify:(_Bool)arg2;	// IMP=0x00000000001d59c1
- (void)dealloc;	// IMP=0x00000000001d594c
- (id)initWithPeerPaymentWebService:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001d5622
- (id)initWithPeerPaymentWebService:(id)arg1;	// IMP=0x00000000001d560e
- (id)init;	// IMP=0x00000000001d5600
- (void)requestTokenForAmount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001dea6c
- (void)identifyRecipientWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001dea55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
