//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentTransaction, PKTransactionMapView, UIImageView, UILabel;

@interface PKPaymentTransactionLocationTableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    PKTransactionMapView *_mapView;	// 16 = 0x10
    UIImageView *_disclosureView;	// 24 = 0x18
    PKPaymentTransaction *_transaction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000033d871
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (id)_disclosureView;	// IMP=0x000000000033d79c
- (_Bool)_shouldShowDisclosureIndicator;	// IMP=0x000000000033d709
@property(nonatomic) _Bool usesDarkMapAppearance;
- (void)setTitleLabelColor:(id)arg1;	// IMP=0x000000000033d6b2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000033d3fe
- (void)layoutSubviews;	// IMP=0x000000000033d09b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000033ceb9

@end

