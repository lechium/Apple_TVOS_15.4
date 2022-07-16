//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableDictionary, PKCompoundInterestCalculatorConfiguration;

@interface PKCompoundInterestCalculator : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
    NSMutableDictionary *_toDateCache;	// 16 = 0x10
    PKCompoundInterestCalculatorConfiguration *_configuration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cc716
@property(readonly, nonatomic) PKCompoundInterestCalculatorConfiguration *configuration; // @synthesize configuration=_configuration;
- (_Bool)_date:(id)arg1 isApplicableForProcessingDate:(id)arg2;	// IMP=0x00000000000cc5a2
- (id)_creditsForProcessingDate:(id)arg1;	// IMP=0x00000000000cbd73
- (id)_additionalBalanceForProcessingDate:(id)arg1;	// IMP=0x00000000000cb8a2
- (id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewPurchases:(_Bool)arg3;	// IMP=0x00000000000c9fef
- (id)_rawCompoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2 includeNewBalance:(_Bool)arg3;	// IMP=0x00000000000c9828
- (id)compoundInterestForPaymentOfAmount:(id)arg1 onDate:(id)arg2;	// IMP=0x00000000000c9224
- (_Bool)_interestCanBeCalculated;	// IMP=0x00000000000c9089
- (id)compoundInterestWithPaymentOfAmount:(id)arg1;	// IMP=0x00000000000c8ffc
- (id)compoundInterest;	// IMP=0x00000000000c8fe8
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000c8f19

@end

