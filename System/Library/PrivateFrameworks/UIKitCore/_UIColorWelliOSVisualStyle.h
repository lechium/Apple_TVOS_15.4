//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UIView;

__attribute__((visibility("hidden")))
@interface _UIColorWelliOSVisualStyle
{
    UIButton *_button;	// 8 = 0x8
    UIView *_gradientView;	// 16 = 0x10
    UIView *_borderView;	// 24 = 0x18
    _Bool _isSelected;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000ec4b8f
- (void)_invokeColorPicker:(id)arg1;	// IMP=0x0000000000ec4b52
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000ec4afc
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000ec4aa2
- (double)_widthForTraitCollection:(id)arg1;	// IMP=0x0000000000ec4a77
- (void)touchUp:(id)arg1;	// IMP=0x0000000000ec4a5a
- (void)touchDown:(id)arg1;	// IMP=0x0000000000ec4a3d
- (void)layoutSubviews;	// IMP=0x0000000000ec4615
- (void)setSelectedColor:(id)arg1;	// IMP=0x0000000000ec45d4
- (id)initWithColorWell:(id)arg1;	// IMP=0x0000000000ec437e

@end
