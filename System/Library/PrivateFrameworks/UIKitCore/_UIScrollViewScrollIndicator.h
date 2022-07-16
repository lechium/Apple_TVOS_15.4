//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIScrollViewScrollIndicator
{
    _Bool _expandedForDirectManipulation;	// 112 = 0x70
    unsigned long long _type;	// 120 = 0x78
    long long _style;	// 128 = 0x80
    UIView *_roundedFillView;	// 136 = 0x88
    UIColor *_foregroundColor;	// 144 = 0x90
}

+ (double)_expandedIndicatorDimension;	// IMP=0x0000000000792f8c
+ (double)indicatorDimension;	// IMP=0x0000000000792f7e
- (void).cxx_destruct;	// IMP=0x000000000079391c
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) UIView *roundedFillView; // @synthesize roundedFillView=_roundedFillView;
@property(nonatomic) _Bool expandedForDirectManipulation; // @synthesize expandedForDirectManipulation=_expandedForDirectManipulation;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000079389b
- (void)layoutSubviews;	// IMP=0x0000000000793858
- (void)_layoutFillViewAnimated:(_Bool)arg1;	// IMP=0x00000000007934a2
- (struct CGRect)_offsetFillViewRectForExpandedState:(struct CGRect)arg1;	// IMP=0x00000000007933ca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007930a3
- (id)_colorForStyle:(long long)arg1;	// IMP=0x0000000000792f9a

@end
