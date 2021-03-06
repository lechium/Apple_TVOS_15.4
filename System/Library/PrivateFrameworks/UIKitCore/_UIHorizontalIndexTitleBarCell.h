//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIView, _UIFocusFastScrollingIndexBarEntry;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBarCell
{
    _UIFocusFastScrollingIndexBarEntry *_entry;	// 280 = 0x118
    UILabel *_titleLabel;	// 288 = 0x120
    UIView *_roundedCornersBackground;	// 296 = 0x128
}

+ (id)cellFont;	// IMP=0x0000000000612d97
- (void).cxx_destruct;	// IMP=0x0000000000613b5a
@property(retain, nonatomic) UIView *roundedCornersBackground; // @synthesize roundedCornersBackground=_roundedCornersBackground;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry; // @synthesize entry=_entry;
- (void)_updateColors;	// IMP=0x00000000006138ab
- (_Bool)_isAnotherIndexTitleCellFocused;	// IMP=0x00000000006137cf
- (double)_maxCellWidth;	// IMP=0x000000000061366f
- (void)updateForEntry:(id)arg1;	// IMP=0x00000000006135cf
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000061358e
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000006134fa
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000613451
- (void)prepareForReuse;	// IMP=0x000000000061339a
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000006132c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000612e0f

@end

