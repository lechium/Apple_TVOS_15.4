//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface PKPerformActionPurchaseNewCell : UITableViewCell
{
    UILabel *_descriptionLabel;	// 8 = 0x8
    UILabel *_amountLabel;	// 16 = 0x10
    NSString *_descriptionText;	// 24 = 0x18
    NSString *_amountText;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000041a85
@property(copy, nonatomic) NSString *amountText; // @synthesize amountText=_amountText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void)_addSubviews;	// IMP=0x0000000000041917
- (void)layoutSubviews;	// IMP=0x000000000004152e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000414dd

@end

