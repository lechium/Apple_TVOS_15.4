//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSTimeZone;

@interface PKPaymentDateDataItem
{
    NSDate *_paymentDate;	// 32 = 0x20
    NSTimeZone *_paymentTimeZone;	// 40 = 0x28
    long long _paymentFrequency;	// 48 = 0x30
}

+ (long long)dataType;	// IMP=0x0000000000043437
- (void).cxx_destruct;	// IMP=0x00000000000434f0
@property(nonatomic) long long paymentFrequency; // @synthesize paymentFrequency=_paymentFrequency;
@property(retain, nonatomic) NSTimeZone *paymentTimeZone; // @synthesize paymentTimeZone=_paymentTimeZone;
@property(retain, nonatomic) NSDate *paymentDate; // @synthesize paymentDate=_paymentDate;
- (_Bool)isValidWithError:(id *)arg1;	// IMP=0x000000000004347c
- (long long)context;	// IMP=0x0000000000043471
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000043442

@end

