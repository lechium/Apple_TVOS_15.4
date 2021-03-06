//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface VUIListFloatingCollectionViewCell
{
    UIColor *_focusedColor;	// 8 = 0x8
    UIColor *_selectedColor;	// 16 = 0x10
    _UIFloatingContentView *_floatingView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000038105
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *focusedColor; // @synthesize focusedColor=_focusedColor;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000037fdc
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000037ee6
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000037dde
- (unsigned long long)_floatingViewControlState;	// IMP=0x0000000000037d8d
- (id)_findSelectingView;	// IMP=0x0000000000037bc2
- (void)_updateBackgroundHighlightColorCornerRadius;	// IMP=0x0000000000037a45
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000037817
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000037722
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x000000000003766e
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000375d7
- (void)vui_prepareForReuse;	// IMP=0x000000000003755a
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000003746e
- (void)setHighlightedBackgroundColor:(id)arg1;	// IMP=0x00000000000371df
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000037149
- (void)setShouldAppearSelected:(_Bool)arg1;	// IMP=0x000000000003709f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000036ec6
- (id)vuiContentView;	// IMP=0x0000000000036ea9
- (_Bool)_descendantsShouldHighlight;	// IMP=0x0000000000036ea1

@end

