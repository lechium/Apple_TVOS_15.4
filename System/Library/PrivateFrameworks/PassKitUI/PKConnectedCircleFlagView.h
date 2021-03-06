//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface PKConnectedCircleFlagView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIColor *_flagBackgroundColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000041ecce
@property(readonly, nonatomic) UIColor *flagBackgroundColor; // @synthesize flagBackgroundColor=_flagBackgroundColor;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x000000000041eb48
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000041eaff
- (void)layoutSubviews;	// IMP=0x000000000041ea90
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000041ea73
- (id)init;	// IMP=0x000000000041ea41
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x000000000041ea04
- (id)initWithFlagBackgroundColor:(id)arg1;	// IMP=0x000000000041e91d

@end

