//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/PKPaymentAuthorizationControllerDelegate-Protocol.h>
#import <AppleMediaServices/PKPaymentAuthorizationControllerPrivateDelegate-Protocol.h>

@class AKAppleIDAuthenticationContext, AMSFinancePaymentSheetResponse, AMSPaymentSheetAssetCache, AMSPaymentSheetRequest, AMSPromise, AMSPurchaseInfo, NSDictionary, NSMutableArray, NSObject, NSString, PKPaymentAuthorizationController, _PaymentSheetState;
@protocol AMSBagProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    NSDictionary *_metricsDictionary;	// 16 = 0x10
    AMSPurchaseInfo *_purchaseInfo;	// 24 = 0x18
    AMSPaymentSheetAssetCache *_assetCache;	// 32 = 0x20
    AKAppleIDAuthenticationContext *_authenticationContext;	// 40 = 0x28
    PKPaymentAuthorizationController *_paymentAuthorizationController;	// 48 = 0x30
    AMSPromise *_paymentSheetPromise;	// 56 = 0x38
    AMSFinancePaymentSheetResponse *_paymentSheetResponse;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_presentationQueue;	// 72 = 0x48
    AMSPaymentSheetRequest *_request;	// 80 = 0x50
    _PaymentSheetState *_state;	// 88 = 0x58
    NSMutableArray *_userActions;	// 96 = 0x60
}

+ (_Bool)_shouldCompanionAuthFallbackToPasswordForError:(id)arg1;	// IMP=0x00000000001c6141
- (void).cxx_destruct;	// IMP=0x00000000001c8659
@property(retain, nonatomic) NSMutableArray *userActions; // @synthesize userActions=_userActions;
@property(retain, nonatomic) _PaymentSheetState *state; // @synthesize state=_state;
@property(readonly, nonatomic) AMSPaymentSheetRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *presentationQueue; // @synthesize presentationQueue=_presentationQueue;
@property(readonly, nonatomic) AMSFinancePaymentSheetResponse *paymentSheetResponse; // @synthesize paymentSheetResponse=_paymentSheetResponse;
@property(retain, nonatomic) AMSPromise *paymentSheetPromise; // @synthesize paymentSheetPromise=_paymentSheetPromise;
@property(retain, nonatomic) PKPaymentAuthorizationController *paymentAuthorizationController; // @synthesize paymentAuthorizationController=_paymentAuthorizationController;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(retain, nonatomic) AMSPaymentSheetAssetCache *assetCache; // @synthesize assetCache=_assetCache;
@property(retain, nonatomic) AMSPurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
@property(retain, nonatomic) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;	// IMP=0x00000000001c82e8
- (void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;	// IMP=0x00000000001c7e70
- (void)_dismissPaymentAuthorizationController:(id)arg1;	// IMP=0x00000000001c7aa1
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;	// IMP=0x00000000001c78fb
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c6149
- (_Bool)_presentPaymentSheetWithPaymentRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c5a7e
- (_Bool)_presentCompanionAuthenticationSheetWithPaymentRequest:(id)arg1 purchaseResult:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c58ae
- (id)_paymentRequest;	// IMP=0x00000000001c4e7a
- (id)_metricsEvent;	// IMP=0x00000000001c4718
- (float)_challengeSigningDelay;	// IMP=0x00000000001c43e3
- (id)perform;	// IMP=0x00000000001c381c
- (_Bool)cancel;	// IMP=0x00000000001c37ae
- (id)initWithRequest:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001c3630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

