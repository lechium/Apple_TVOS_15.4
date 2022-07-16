//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PKPaymentRequestCouponCodeUpdate <NSSecureCoding>
{
    NSArray *_errors;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003d137f
- (void).cxx_destruct;	// IMP=0x00000000003d1398
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d1289
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d1197
- (id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 shippingMethods:(id)arg3;	// IMP=0x00000000003d109d
- (id)initWithPaymentSummaryItems:(id)arg1;	// IMP=0x00000000003d107f

@end

