//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface _TVSUITextAlertHeaderView : UICollectionViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    NSLayoutConstraint *_titleLabelLeadingConstraint;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003af4d
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_textColor;	// IMP=0x000000000003aec7
- (void)setTitleLabelLeadingConstant:(double)arg1;	// IMP=0x000000000003aeaa
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003adcf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003aaeb

@end

