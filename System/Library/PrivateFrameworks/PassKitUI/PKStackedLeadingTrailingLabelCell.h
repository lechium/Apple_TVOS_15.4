//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSString, PKProgressBar, UIColor, UILabel;

@interface PKStackedLeadingTrailingLabelCell : UICollectionViewListCell
{
    UILabel *_leadingPrimaryLabel;	// 8 = 0x8
    UILabel *_leadingSecondaryLabel;	// 16 = 0x10
    UILabel *_trailingPrimaryLabel;	// 24 = 0x18
    UILabel *_trailingSecondaryLabel;	// 32 = 0x20
    UILabel *_detailLabel;	// 40 = 0x28
    PKProgressBar *_progressBar;	// 48 = 0x30
    _Bool _showProgressBar;	// 56 = 0x38
    NSString *_leadingPrimaryText;	// 64 = 0x40
    NSString *_leadingSecondaryText;	// 72 = 0x48
    NSString *_trailingPrimaryText;	// 80 = 0x50
    NSString *_trailingSecondaryText;	// 88 = 0x58
    NSString *_detailText;	// 96 = 0x60
    double _progress;	// 104 = 0x68
    UIColor *_progressBarStartColor;	// 112 = 0x70
    UIColor *_progressBarEndColor;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000035a25f
@property(retain, nonatomic) UIColor *progressBarEndColor; // @synthesize progressBarEndColor=_progressBarEndColor;
@property(retain, nonatomic) UIColor *progressBarStartColor; // @synthesize progressBarStartColor=_progressBarStartColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *trailingSecondaryText; // @synthesize trailingSecondaryText=_trailingSecondaryText;
@property(copy, nonatomic) NSString *trailingPrimaryText; // @synthesize trailingPrimaryText=_trailingPrimaryText;
@property(copy, nonatomic) NSString *leadingSecondaryText; // @synthesize leadingSecondaryText=_leadingSecondaryText;
@property(copy, nonatomic) NSString *leadingPrimaryText; // @synthesize leadingPrimaryText=_leadingPrimaryText;
- (void)prepareForReuse;	// IMP=0x000000000035a03b
- (double)_layoutLabelsStacked:(struct CGRect)arg1 allocated:(struct CGRect *)arg2 unallocated:(struct CGRect *)arg3 isTemplateLayout:(_Bool)arg4;	// IMP=0x0000000000359c0a
- (double)_layoutLabelsSideBySide:(struct CGRect)arg1 allocated:(struct CGRect *)arg2 unallocated:(struct CGRect *)arg3 isTemplateLayout:(_Bool)arg4;	// IMP=0x00000000003597ad
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x0000000000359303
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003592ba
- (void)layoutSubviews;	// IMP=0x0000000000359219
- (void)_updateProgressBar;	// IMP=0x0000000000359131

@end

