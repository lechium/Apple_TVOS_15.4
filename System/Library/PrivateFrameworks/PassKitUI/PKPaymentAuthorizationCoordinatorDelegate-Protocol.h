//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class CNContact, NSString, PKPayment, PKPaymentAuthorizationCoordinator, PKPaymentMethod, PKShippingMethod;

@protocol PKPaymentAuthorizationCoordinatorDelegate <NSObject>
- (void)paymentAuthorizationCoordinatorDidFinish:(PKPaymentAuthorizationCoordinator *)arg1;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizePayment:(PKPayment *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;

@optional
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectShippingAddress:(CNContact *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 completion:(void (^)(long long, NSArray *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didChangeCouponCode:(NSString *)arg2 handler:(void (^)(PKPaymentRequestCouponCodeUpdate *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectShippingAddress:(CNContact *)arg2 handler:(void (^)(PKPaymentRequestShippingContactUpdate *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 handler:(void (^)(PKPaymentRequestShippingMethodUpdate *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didRequestMerchantSessionUpdate:(void (^)(PKPaymentRequestMerchantSessionUpdate *))arg2;
- (void)paymentAuthorizationCoordinatorWillAuthorizePayment:(PKPaymentAuthorizationCoordinator *)arg1;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(long long))arg3;
@end

