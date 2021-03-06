//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UIVisualEffectView, _TVProgressBarView;

@interface _TVProgressView : UIView
{
    _TVProgressBarView *_progressBarView;	// 8 = 0x8
    _Bool _useMaterial;	// 16 = 0x10
    _Bool _shouldProgressBarUseRoundCorner;	// 17 = 0x11
    long long _style;	// 24 = 0x18
    double _cornerRadius;	// 32 = 0x20
    double _progress;	// 40 = 0x28
    UIColor *_progressTintColor;	// 48 = 0x30
    UIColor *_gradientStartColor;	// 56 = 0x38
    UIColor *_gradientEndColor;	// 64 = 0x40
    UIColor *_completeTintColor;	// 72 = 0x48
    UIVisualEffectView *_materialView;	// 80 = 0x50
    UIImageView *_shadowImageView;	// 88 = 0x58
    struct UIEdgeInsets _padding;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000bfaa3
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIVisualEffectView *materialView; // @synthesize materialView=_materialView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool shouldProgressBarUseRoundCorner; // @synthesize shouldProgressBarUseRoundCorner=_shouldProgressBarUseRoundCorner;
@property(nonatomic) _Bool useMaterial; // @synthesize useMaterial=_useMaterial;
@property(retain, nonatomic) UIColor *completeTintColor; // @synthesize completeTintColor=_completeTintColor;
@property(retain, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(retain, nonatomic) UIColor *gradientStartColor; // @synthesize gradientStartColor=_gradientStartColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_updateForStyleChange;	// IMP=0x00000000000bf85a
- (id)_maskImageForProgressBar;	// IMP=0x00000000000bf68f
- (void)_layoutMaterialView;	// IMP=0x00000000000bf57e
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000bf2ce
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000bef92
- (void)layoutSubviews;	// IMP=0x00000000000bee42
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000beb98

@end

