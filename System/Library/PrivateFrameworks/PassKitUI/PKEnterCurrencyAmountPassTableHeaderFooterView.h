//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class PKEnterCurrencyAmountPassView;
@protocol PKEnterCurrencyAmountPassViewDelegate;

@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView
{
    id <PKEnterCurrencyAmountPassViewDelegate> _delegate;	// 8 = 0x8
    PKEnterCurrencyAmountPassView *_amountPassView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005c3b
@property(readonly, nonatomic) PKEnterCurrencyAmountPassView *amountPassView; // @synthesize amountPassView=_amountPassView;
@property(nonatomic) __weak id <PKEnterCurrencyAmountPassViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_bottomPadding;	// IMP=0x0000000000005ba8
- (void)layoutSubviews;	// IMP=0x0000000000005a73
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000005a1b
- (id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2;	// IMP=0x000000000000590b
- (id)initWithCurrenyAmount:(id)arg1;	// IMP=0x00000000000058f7

@end

