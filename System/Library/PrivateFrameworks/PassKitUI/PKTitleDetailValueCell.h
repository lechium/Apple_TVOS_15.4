//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSString, PKIconTextLabel, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface PKTitleDetailValueCell : UICollectionViewListCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    PKIconTextLabel *_detailLabel;	// 16 = 0x10
    UILabel *_valueLabel;	// 24 = 0x18
    UIImageView *_disclosureView;	// 32 = 0x20
    _Bool _showChevron;	// 40 = 0x28
    NSString *_titleText;	// 48 = 0x30
    UIFont *_titleFont;	// 56 = 0x38
    UIColor *_titleColor;	// 64 = 0x40
    NSString *_detailText;	// 72 = 0x48
    UIImage *_detailIcon;	// 80 = 0x50
    UIFont *_detailFont;	// 88 = 0x58
    UIColor *_detailColor;	// 96 = 0x60
    NSString *_valueText;	// 104 = 0x68
    UIFont *_valueFont;	// 112 = 0x70
    UIColor *_valueColor;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000031903e
@property(nonatomic) _Bool showChevron; // @synthesize showChevron=_showChevron;
@property(retain, nonatomic) UIColor *valueColor; // @synthesize valueColor=_valueColor;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(copy, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(retain, nonatomic) UIFont *detailFont; // @synthesize detailFont=_detailFont;
@property(retain, nonatomic) UIImage *detailIcon; // @synthesize detailIcon=_detailIcon;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)prepareForReuse;	// IMP=0x0000000000318e65
- (void)_resetValues;	// IMP=0x0000000000318d5e
- (void)_configureView;	// IMP=0x0000000000318971
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x0000000000317cb5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000317c6c
- (void)layoutSubviews;	// IMP=0x0000000000317bcb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000317b6e
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x0000000000317b3c

@end
