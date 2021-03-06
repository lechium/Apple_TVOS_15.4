//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKExtensionHostContextProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_group, PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext <PKExtensionHostContextProtocol>
{
    id <PKPaymentAuthorizationHostProtocol> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_delayCallbacksGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bf05b
@property(retain, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup; // @synthesize delayCallbacksGroup=_delayCallbacksGroup;
@property(nonatomic) __weak id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)authorizationDidAuthorizeContext;	// IMP=0x00000000000bf003
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;	// IMP=0x00000000000beffd
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;	// IMP=0x00000000000beff7
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;	// IMP=0x00000000000beed6
- (void)authorizationDidPresent;	// IMP=0x00000000000bedc5
- (void)authorizationDidChangeCouponCode:(id)arg1;	// IMP=0x00000000000becca
- (void)authorizationDidSelectPaymentMethod:(id)arg1;	// IMP=0x00000000000bebcf
- (void)authorizationDidSelectShippingAddress:(id)arg1;	// IMP=0x00000000000bead4
- (void)authorizationDidSelectShippingMethod:(id)arg1;	// IMP=0x00000000000be9d9
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;	// IMP=0x00000000000be8de
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;	// IMP=0x00000000000be7e3
- (void)authorizationDidAuthorizePurchase:(id)arg1;	// IMP=0x00000000000be6e8
- (void)authorizationDidAuthorizePayment:(id)arg1;	// IMP=0x00000000000be5ed
- (void)authorizationDidRequestMerchantSession;	// IMP=0x00000000000be53b
- (void)authorizationDidFinishWithError:(id)arg1;	// IMP=0x00000000000be440
- (void)authorizationWillStart;	// IMP=0x00000000000be38e
- (void)endDelayingCallbacks;	// IMP=0x00000000000be379
- (void)beginDelayingCallbacks;	// IMP=0x00000000000be364
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be352
- (id)vendorContext;	// IMP=0x00000000000be340
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x00000000000be2ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

