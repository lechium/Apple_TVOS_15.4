//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular
{
    UIColor *_titleColor;	// 8 = 0x8
    UIColor *_inputColor;	// 16 = 0x10
    UIColor *_dividerColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000b4026d
@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(retain, nonatomic) UIColor *inputColor; // @synthesize inputColor=_inputColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (double)minimumFontScaleBeforeTruncation;	// IMP=0x0000000000b401f0
- (double)summaryLineSpacing;	// IMP=0x0000000000b401e2
- (double)summaryLineHeight;	// IMP=0x0000000000b4017d
- (id)summaryFont;	// IMP=0x0000000000b4015a
- (double)summaryModifiersSpacing;	// IMP=0x0000000000b4014c
- (double)summaryDescriptionToModifiersSpacing;	// IMP=0x0000000000b4013e
- (double)summaryYPadding;	// IMP=0x0000000000b40130
- (double)summaryXPadding;	// IMP=0x0000000000b40122
- (double)columnDividerHeightForHUDHeight:(double)arg1;	// IMP=0x0000000000b40114
- (double)columnDividerWidth;	// IMP=0x0000000000b400b1
- (double)maxHUDHeightForHeight:(double)arg1;	// IMP=0x0000000000b4009f
- (double)maxHUDWidthForWidth:(double)arg1;	// IMP=0x0000000000b4008d
- (double)HUDPageControlBottomMargin;	// IMP=0x0000000000b4007f
- (struct UIEdgeInsets)HUDViewInsets;	// IMP=0x0000000000b40067
- (id)init;	// IMP=0x0000000000b3ff56

@end

