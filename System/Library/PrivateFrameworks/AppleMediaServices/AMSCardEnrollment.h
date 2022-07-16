//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMSCardEnrollment : NSObject
{
}

+ (id)_shouldAttemptApplePayWithCountryCode:(id)arg1 paymentNetworks:(id)arg2;	// IMP=0x00000000000cf0d4
+ (id)_paymentServicesMerchantURLPromise;	// IMP=0x00000000000cef98
+ (id)_currentIdentifier;	// IMP=0x00000000000cee5b
+ (id)_cardEligibilityStatusForCountryCode:(id)arg1;	// IMP=0x00000000000ced1f
+ (_Bool)shouldUseAutoEnrollmentWithPercentage:(double)arg1 sessionDuration:(double)arg2;	// IMP=0x00000000000ceaf8
+ (_Bool)shouldAttemptAutoEnrollmentWithCountryCode:(id)arg1;	// IMP=0x00000000000ce9bb
+ (_Bool)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 accessControlRef:(struct __SecAccessControl *)arg3;	// IMP=0x00000000000ce885
+ (_Bool)shouldAttemptAutoEnrollment;	// IMP=0x00000000000ce748
+ (void)updateAutoEnrollmentIdentifier;	// IMP=0x00000000000ce453
+ (_Bool)shouldUseAutoEnrollmentWithBag:(id)arg1;	// IMP=0x00000000000cde9f
+ (_Bool)shouldUseApplePayClassicWithBag:(id)arg1;	// IMP=0x00000000000cdc0f
+ (_Bool)shouldAttemptAutoEnrollmentWithBag:(id)arg1 accessControlRef:(struct __SecAccessControl *)arg2;	// IMP=0x00000000000cdad2
+ (_Bool)shouldAttemptApplePayClassicWithBag:(id)arg1 accessControlRef:(struct __SecAccessControl *)arg2;	// IMP=0x00000000000cd6fb
+ (void)finishCardEnrollmentAttemptWithBag:(id)arg1 buyParams:(id)arg2 purchaseResult:(id)arg3;	// IMP=0x00000000000cceaf
+ (void)clearAutoEnrollmentIdentifier;	// IMP=0x00000000000ccd66
+ (_Bool)beginCardEnrollmentAttemptWithBag:(id)arg1 account:(id)arg2;	// IMP=0x00000000000cca8f
+ (id)paymentServicesMerchantURL;	// IMP=0x00000000000cc953

@end

