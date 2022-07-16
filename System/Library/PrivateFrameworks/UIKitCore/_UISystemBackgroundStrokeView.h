//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UISystemBackgroundStrokeView
{
    _Bool _useContinuousCurve;	// 8 = 0x8
    double _strokeWidth;	// 16 = 0x10
    double _strokeCornerRadius;	// 24 = 0x18
    UIColor *_strokeColor;	// 32 = 0x20
    unsigned long long _maskedCorners;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000e1b0a0
@property(nonatomic) _Bool useContinuousCurve; // @synthesize useContinuousCurve=_useContinuousCurve;
@property(nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeCornerRadius; // @synthesize strokeCornerRadius=_strokeCornerRadius;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000e1ad44

@end

