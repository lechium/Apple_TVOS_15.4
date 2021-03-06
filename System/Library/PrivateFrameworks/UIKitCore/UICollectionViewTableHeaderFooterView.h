//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UICollectionViewTableLayout, UICollectionViewTableLayoutAttributes, UIColor, UILabel, UITableViewHeaderFooterView, UIView;

@interface UICollectionViewTableHeaderFooterView
{
    _Bool _floating;	// 68 = 0x44
    UITableViewHeaderFooterView *_tableViewHeaderFooterView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002c9234
@property(retain, nonatomic) UITableViewHeaderFooterView *tableViewHeaderFooterView; // @synthesize tableViewHeaderFooterView=_tableViewHeaderFooterView;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UILabel *detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel;
@property(retain, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic, getter=_tableAttributes) UICollectionViewTableLayoutAttributes *tableAttributes;
@property(readonly, nonatomic, getter=_tableLayout) UICollectionViewTableLayout *tableLayout;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000002c8cf7
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000002c8a79
- (void)layoutSubviews;	// IMP=0x00000000002c89e3
- (void)prepareForReuse;	// IMP=0x00000000002c8979
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002c88fc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002c882c
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000002c8796
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002c877d
- (void)_commonInit;	// IMP=0x00000000002c86e8

@end

