//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DDMatchMoneyAmount
{
    NSString *_currency;	// 32 = 0x20
    double _amount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000237c
@property(readonly, nonatomic) double amount; // @synthesize amount=_amount;
@property(readonly, nonatomic) NSString *currency; // @synthesize currency=_currency;
- (id)initWithDDScannerResult:(id)arg1;	// IMP=0x000000000000228f

@end

