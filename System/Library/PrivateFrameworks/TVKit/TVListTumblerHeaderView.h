//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIImageView, UILabel;

@interface TVListTumblerHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UIImageView *_leftArrowView;	// 24 = 0x18
    UIImageView *_rightArrowView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000117f5
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UIImageView *leftArrowView; // @synthesize leftArrowView=_leftArrowView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_animateLabel:(id)arg1 withNewText:(id)arg2 inDirection:(struct CGSize)arg3;	// IMP=0x00000000000113bf
- (struct CGSize)_normalizedVector:(struct CGSize)arg1;	// IMP=0x0000000000011389
- (struct CGSize)_vectorFromEdge:(unsigned long long)arg1;	// IMP=0x0000000000011345
- (id)_arrowImage:(_Bool)arg1;	// IMP=0x00000000000110f0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000110b9
- (void)layoutSubviews;	// IMP=0x0000000000010cc8
@property(nonatomic, getter=isRightArrowHidden) _Bool rightArrowHidden;
@property(nonatomic, getter=isLeftArrowHidden) _Bool leftArrowHidden;
- (void)setAttributedSubtitle:(id)arg1 animatedFromEdge:(unsigned long long)arg2;	// IMP=0x0000000000010be8
- (void)setAttributedTitle:(id)arg1 animatedFromEdge:(unsigned long long)arg2;	// IMP=0x0000000000010b7c
@property(copy, nonatomic) NSAttributedString *attributedSubtitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000107df

@end

