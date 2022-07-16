//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, _UILegibilitySettings;

@interface _UIVibrantSettings : NSObject
{
    long long _style;	// 8 = 0x8
    UIColor *_referenceColor;	// 16 = 0x10
    _UILegibilitySettings *_legibilitySettings;	// 24 = 0x18
    double _referenceContrast;	// 32 = 0x20
    UIColor *_tintColor;	// 40 = 0x28
    UIColor *_highlightLimitingColor;	// 48 = 0x30
    UIColor *_shimmerColor;	// 56 = 0x38
    UIColor *_chevronShimmerColor;	// 64 = 0x40
    UIColor *_highlightColor;	// 72 = 0x48
}

+ (id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;	// IMP=0x0000000000f0ed5f
- (void).cxx_destruct;	// IMP=0x0000000000f0fda7
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *chevronShimmerColor; // @synthesize chevronShimmerColor=_chevronShimmerColor;
@property(retain, nonatomic) UIColor *shimmerColor; // @synthesize shimmerColor=_shimmerColor;
@property(retain, nonatomic) UIColor *highlightLimitingColor; // @synthesize highlightLimitingColor=_highlightLimitingColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) double referenceContrast; // @synthesize referenceContrast=_referenceContrast;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) UIColor *referenceColor; // @synthesize referenceColor=_referenceColor;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)highlightLimitingViewWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f0fc65
- (id)tintViewWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f0fb8f
- (id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2;	// IMP=0x0000000000f0f8e7
- (long long)_style;	// IMP=0x0000000000f0f015
- (unsigned long long)hash;	// IMP=0x0000000000f0ef78
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f0ee90
- (id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;	// IMP=0x0000000000f0eddd

@end

