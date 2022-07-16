//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDynamicColor;

__attribute__((visibility("hidden")))
@interface UIDynamicModifiedColor
{
    UIDynamicColor *_baseColor;	// 24 = 0x18
    double _alphaComponent;	// 32 = 0x20
    long long _contrast;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000071ac2f
- (void).cxx_destruct;	// IMP=0x000000000071b3b4
- (id)description;	// IMP=0x000000000071b296
- (id)_backgroundColorIgnoringHighContrast;	// IMP=0x000000000071b21e
- (id)_highContrastDynamicColor;	// IMP=0x000000000071b1b3
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000071b13e
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x000000000071ae3e
- (_Bool)_isDynamicTintColor;	// IMP=0x000000000071ae21
- (unsigned long long)hash;	// IMP=0x000000000071adb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000071ad07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000071acfc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000071ac37
- (id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3;	// IMP=0x000000000071ab08

@end

