//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKit/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKit/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>

@class NSString, PKDisbursementRequest, PKPaymentAuthorizationCoordinator;
@protocol PKDisbursementAuthorizationControllerDelegate;

@interface PKDisbursementAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKDisbursementAuthorizationController *_retainSelf;	// 8 = 0x8
    PKPaymentAuthorizationCoordinator *_authController;	// 16 = 0x10
    PKDisbursementRequest *_disbursementRequest;	// 24 = 0x18
    id <PKDisbursementAuthorizationControllerDelegate> _delegate;	// 32 = 0x20
}

+ (_Bool)supportsDisbursements;	// IMP=0x0000000000005b63
- (void).cxx_destruct;	// IMP=0x0000000000005bb9
@property(readonly, nonatomic) __weak id <PKDisbursementAuthorizationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005b9d
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;	// IMP=0x0000000000005b97
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005b91
- (void)authorizeDisbursementWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005b79
- (id)initWithDisbursementRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000005b6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

