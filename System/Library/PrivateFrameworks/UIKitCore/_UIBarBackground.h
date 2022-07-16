//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImageView, UIView, UIVisualEffectView, _UIBarBackgroundLayout, _UIBarBackgroundShadowView;

__attribute__((visibility("hidden")))
@interface _UIBarBackground
{
    UIVisualEffectView *_effectView1;	// 112 = 0x70
    UIImageView *_colorAndImageView1;	// 120 = 0x78
    _UIBarBackgroundShadowView *_shadowView1;	// 128 = 0x80
    UIVisualEffectView *_effectView2;	// 136 = 0x88
    UIImageView *_colorAndImageView2;	// 144 = 0x90
    _UIBarBackgroundShadowView *_shadowView2;	// 152 = 0x98
    UIView *_topInsetView;	// 160 = 0xa0
    double _bg1LastLayoutHeight;	// 168 = 0xa8
    double _bg2LastLayoutHeight;	// 176 = 0xb0
    struct {
        unsigned int needsTopInsetView:1;
        unsigned int needsEffectView1:1;
        unsigned int needsColorAndImageView1:1;
        unsigned int needsShadowView1:1;
        unsigned int needsEffectView2:1;
        unsigned int needsColorAndImageView2:1;
        unsigned int needsShadowView2:1;
    } _backgroundFlags;	// 184 = 0xb8
    _Bool _topAligned;	// 192 = 0xc0
    NSString *_groupName;	// 200 = 0xc8
    _UIBarBackgroundLayout *_layout;	// 208 = 0xd0
    UIView *_customBackgroundView;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000000fe9a0
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) _UIBarBackgroundLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool topAligned; // @synthesize topAligned=_topAligned;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void)set_shadowView:(id)arg1;	// IMP=0x00000000000fe930
- (id)_shadowView;	// IMP=0x00000000000fe910
- (void)set_backgroundEffectView:(id)arg1;	// IMP=0x00000000000fe8f3
- (id)_backgroundEffectView;	// IMP=0x00000000000fe8d3
- (void)transitionBackgroundViews;	// IMP=0x00000000000fe7a5
- (void)cleanupBackgroundViews;	// IMP=0x00000000000fe4c6
- (void)updateBackground;	// IMP=0x00000000000fde1f
- (void)_setupShadowView:(id)arg1 effect:(id)arg2 image:(id)arg3 shadowColor:(id)arg4 shadowTint:(id)arg5 alpha:(double)arg6;	// IMP=0x00000000000fdc47
- (void)prepareBackgroundViews;	// IMP=0x00000000000fd57c
- (struct CGRect)frameForYOrigin:(double)arg1 height:(double)arg2;	// IMP=0x00000000000fd50a
- (void)_orderSubviews;	// IMP=0x00000000000fd3b7
- (void)transition:(unsigned long long)arg1 toLayout:(id)arg2;	// IMP=0x00000000000fd255
- (void)_updateBackgroundViewVisiblity;	// IMP=0x00000000000fcf5b
- (void)layoutSubviews;	// IMP=0x00000000000fc6b6
- (id)_encodableSubviews;	// IMP=0x00000000000fc6a9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fc6a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fc657
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000fc5fa
- (void)_setupBackgroundValues;	// IMP=0x00000000000fc5a0

@end
