//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

@interface TVLTumblerHeaderView
{
    _Bool _showsLeftArrow;	// 8 = 0x8
    _Bool _showsRightArrow;	// 9 = 0x9
    UIView *_leftArrowView;	// 16 = 0x10
    UIView *_rightArrowView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000038272
@property(retain, nonatomic) UIView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UIView *leftArrowView; // @synthesize leftArrowView=_leftArrowView;
@property(nonatomic) _Bool showsRightArrow; // @synthesize showsRightArrow=_showsRightArrow;
@property(nonatomic) _Bool showsLeftArrow; // @synthesize showsLeftArrow=_showsLeftArrow;
- (void)layoutSubviews;	// IMP=0x0000000000038023
- (void)setTitle:(id)arg1 animateFromDirection:(long long)arg2;	// IMP=0x0000000000037bab
- (id)initWithHeaderElement:(id)arg1;	// IMP=0x00000000000379fa

@end

