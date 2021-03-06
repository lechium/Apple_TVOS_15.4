//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSString, PKAccountUser, PKCurrencyAmountSelectorOption;

@interface PKCurrencyAmountSelectorOptionProvider : NSObject
{
    PKAccountUser *_accountUser;	// 8 = 0x8
    NSArray *_defaultAmounts;	// 16 = 0x10
    NSArray *_customAmounts;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    NSDecimalNumber *_amount;	// 40 = 0x28
    NSString *_currencyCode;	// 48 = 0x30
    NSArray *_options;	// 56 = 0x38
    PKCurrencyAmountSelectorOption *_selectedOption;	// 64 = 0x40
    CDUnknownBlockType _optionsUpdateHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000022a243
@property(copy, nonatomic) CDUnknownBlockType optionsUpdateHandler; // @synthesize optionsUpdateHandler=_optionsUpdateHandler;
@property(readonly, nonatomic) PKCurrencyAmountSelectorOption *selectedOption; // @synthesize selectedOption=_selectedOption;
@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)_updateOptions;	// IMP=0x0000000000229ebb
- (id)_optionWithAmount:(id)arg1 isCustom:(_Bool)arg2 selected:(_Bool)arg3;	// IMP=0x0000000000229c60
- (void)selectAmount:(id)arg1;	// IMP=0x0000000000229c05
- (void)removeCustomAmount:(id)arg1;	// IMP=0x0000000000229b1b
- (void)insertCustomAmount:(id)arg1;	// IMP=0x0000000000229a30
- (id)initWithType:(long long)arg1 accountUser:(id)arg2 currencyCode:(id)arg3;	// IMP=0x00000000002296ee

@end

