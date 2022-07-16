//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, UIFont, UIView;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarView
{
    UIView *_indicatorView;	// 8 = 0x8
    double _preferredIndicatorWidth;	// 16 = 0x10
    double _preferredLabelFontSize;	// 24 = 0x18
    NSMutableArray *_backgroundLabels;	// 32 = 0x20
    NSMutableArray *_foregroundLabels;	// 40 = 0x28
    UIView *_foregroundWrapperView;	// 48 = 0x30
    UIView *_foregroundMaskView;	// 56 = 0x38
    long long _deflectedIndex;	// 64 = 0x40
    double _deflectionAmount;	// 72 = 0x48
    UIFont *_backgroundFont;	// 80 = 0x50
    UIFont *_foregroundFont;	// 88 = 0x58
    UIView *_emphasisBackgroundView;	// 96 = 0x60
    NSArray *_entries;	// 104 = 0x68
    long long _focusProminence;	// 112 = 0x70
    long long _style;	// 120 = 0x78
    struct CGPoint _minimumContentOffset;	// 128 = 0x80
    struct CGPoint _maximumContentOffset;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000621b89
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) struct CGPoint maximumContentOffset; // @synthesize maximumContentOffset=_maximumContentOffset;
@property(nonatomic) struct CGPoint minimumContentOffset; // @synthesize minimumContentOffset=_minimumContentOffset;
@property(nonatomic) long long focusProminence; // @synthesize focusProminence=_focusProminence;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)_backgroundLabelTextColor;	// IMP=0x0000000000621acf
- (_Bool)_shouldUseDarkAppearance;	// IMP=0x0000000000621a5f
- (id)_indicatorShadowPath;	// IMP=0x00000000006219c7
- (id)_backgroundFont;	// IMP=0x000000000062194b
- (id)_foregroundFont;	// IMP=0x00000000006218e3
- (void)_determinePreferredSizes;	// IMP=0x0000000000621422
- (void)_updateEmphasisBackgroundColor;	// IMP=0x0000000000621383
- (void)_updateColors;	// IMP=0x00000000006211df
- (void)_createLabels;	// IMP=0x0000000000620ec8
- (void)_showReducedFocusProminence;	// IMP=0x0000000000620cea
- (void)_showNormalFocusProminence;	// IMP=0x0000000000620b3b
- (void)layoutSubviews;	// IMP=0x000000000062063f
- (void)destroyEmphasisBackgroundIfNecessary;	// IMP=0x00000000006205fd
- (void)toggleEmphasisBackgroundVisible:(_Bool)arg1;	// IMP=0x00000000006205cf
- (void)createEmphasisBackgroundIfNecessary;	// IMP=0x00000000006204e9
- (void)resetDeflection:(_Bool)arg1;	// IMP=0x0000000000620204
- (void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2;	// IMP=0x000000000061fdd8
- (id)_lowerEntryForOffset:(double)arg1;	// IMP=0x000000000061fbf7
- (id)_upperEntryForOffset:(double)arg1;	// IMP=0x000000000061fa1d
- (double)_indicatorVerticalPositionForContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000061f4eb
- (void)updateForContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000061f3eb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000061f193
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000061f126
- (_Bool)canBecomeFocused;	// IMP=0x000000000061f11e
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x000000000061ed4c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000061ed38

@end
