//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHorizontalScrollingFooterViewComparator-Protocol.h>

@class NSString, PKContinuousButton, UIColor, UIImage, UILabel;
@protocol PKSpendingSummaryFooterViewDelegate;

@interface PKSpendingSummaryFooterView : UIView <PKHorizontalScrollingFooterViewComparator>
{
    UIView *_separatorView;	// 8 = 0x8
    UIView *_topSeparatorView;	// 16 = 0x10
    PKContinuousButton *_payButton;	// 24 = 0x18
    _Bool _usingCircleButton;	// 32 = 0x20
    UIColor *_buttonTitleColor;	// 40 = 0x28
    UIColor *_buttonTintColor;	// 48 = 0x30
    UIImage *_payButtonImage;	// 56 = 0x38
    id <PKSpendingSummaryFooterViewDelegate> _delegate;	// 64 = 0x40
    UILabel *_leadingTitle;	// 72 = 0x48
    UILabel *_leadingDetail;	// 80 = 0x50
    UILabel *_trailingTitle;	// 88 = 0x58
    UILabel *_trailingDetail;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000423ebc
@property(readonly, nonatomic) UILabel *trailingDetail; // @synthesize trailingDetail=_trailingDetail;
@property(readonly, nonatomic) UILabel *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property(readonly, nonatomic) UILabel *leadingDetail; // @synthesize leadingDetail=_leadingDetail;
@property(readonly, nonatomic) UILabel *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property(nonatomic) __weak id <PKSpendingSummaryFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isEqualToFooter:(id)arg1;	// IMP=0x0000000000423a4b
- (void)_buttonTapped:(id)arg1;	// IMP=0x0000000000423a0a
- (id)_payButtonWithCircleLayout:(_Bool)arg1;	// IMP=0x0000000000423705
- (void)setPayButtonImage:(id)arg1;	// IMP=0x0000000000423671
- (void)setButtonTintColor:(id)arg1;	// IMP=0x0000000000423603
- (void)setButtonTitleColor:(id)arg1;	// IMP=0x000000000042355f
- (void)setButtonTitle:(id)arg1;	// IMP=0x000000000042337b
- (void)layoutSubviews;	// IMP=0x0000000000422b5b
- (void)_createSubviews;	// IMP=0x00000000004226a9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000422632

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

