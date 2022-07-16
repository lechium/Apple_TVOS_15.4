//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, PKPaymentSetupProduct;

@interface PKReaderModeHeaderView
{
    PKPaymentSetupProduct *_product;	// 8 = 0x8
    NSArray *_resourceKeys;	// 16 = 0x10
    long long _context;	// 24 = 0x18
    NSDictionary *_readerModeResources;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000045688
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)layoutSubviews;	// IMP=0x00000000000455ba
- (void)_configureForCurrentState;	// IMP=0x00000000000452f0
- (id)_subtitleForState:(unsigned long long)arg1;	// IMP=0x000000000004511c
- (id)_titleForState:(unsigned long long)arg1;	// IMP=0x0000000000044fe5
- (id)initWithState:(unsigned long long)arg1 context:(long long)arg2 product:(id)arg3;	// IMP=0x0000000000044e20

@end

