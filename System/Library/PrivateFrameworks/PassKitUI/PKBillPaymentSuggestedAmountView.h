//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountView : UIView
{
    CABackdropLayer *_background;	// 8 = 0x8
    PKBillPaymentSuggestedAmount *_suggestedAmount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000487f4
@property(readonly, nonatomic) PKBillPaymentSuggestedAmount *suggestedAmount; // @synthesize suggestedAmount=_suggestedAmount;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000487db
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000487ca
- (void)layoutSubviews;	// IMP=0x00000000000486c9
- (id)initWithSuggestedAmount:(id)arg1;	// IMP=0x00000000000483e1

@end

