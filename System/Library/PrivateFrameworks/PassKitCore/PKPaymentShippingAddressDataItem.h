//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, NSAttributedString, NSString;

@interface PKPaymentShippingAddressDataItem
{
}

+ (long long)dataType;	// IMP=0x0000000000044caf
- (id)firstModelError;	// IMP=0x000000000004559f
- (id)validate;	// IMP=0x00000000000454de
- (_Bool)isValidWithError:(id *)arg1;	// IMP=0x000000000004548f
- (_Bool)isShippingServiceableWithError:(id *)arg1;	// IMP=0x000000000004524b
@property(readonly, nonatomic) _Bool isShippingEditable;
- (id)paymentContactFormatErrors;	// IMP=0x00000000000450fb
- (id)errors;	// IMP=0x0000000000044fef
@property(readonly, nonatomic) NSString *shippingType;
- (_Bool)hasShippingAddress;	// IMP=0x0000000000044f2d
@property(readonly, nonatomic) CNContact *shippingAddress;
@property(readonly, nonatomic) NSAttributedString *formattedAddressString;
- (id)_shippingName;	// IMP=0x0000000000044cc5
- (long long)context;	// IMP=0x0000000000044cba
- (id)createShippingAddressErrorWithDescription:(id)arg1 failureReason:(id)arg2;	// IMP=0x000000000043c300
- (id)unavailableShippingAddressErrorFailureReason;	// IMP=0x000000000043c2a5
- (id)unavailableShippingAddressErrorDescription;	// IMP=0x000000000043c24a
- (id)createUnavailableShippingAddressError;	// IMP=0x000000000043c1c7
- (id)incompleteShippingAddressErrorFailureReason;	// IMP=0x000000000043c16c
- (id)incompleteShippingAddressErrorDescription;	// IMP=0x000000000043c111
- (id)createIncompleteShippingAddressError;	// IMP=0x000000000043c08e
- (id)requiredShippingAddressErrorFailureReason;	// IMP=0x000000000043c033
- (id)requiredShippingAddressErrorDescription;	// IMP=0x000000000043bfd8
- (id)createRequiredShippingAddressError;	// IMP=0x000000000043bf55
- (_Bool)isClientError:(id)arg1;	// IMP=0x000000000043bf04
- (id)createShippingAddressErrorFromError:(id)arg1;	// IMP=0x000000000043bc23
- (unsigned long long)rawShippingType;	// IMP=0x000000000043bbb5

@end

