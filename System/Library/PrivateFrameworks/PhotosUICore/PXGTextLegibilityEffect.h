//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGShader, PXGUniform, UIColor;

@interface PXGTextLegibilityEffect
{
    PXGShader *_shader;	// 8 = 0x8
    PXGUniform *_values;	// 16 = 0x10
    double _alpha;	// 24 = 0x18
    UIColor *_tintColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000087e5d
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (id)shader;	// IMP=0x0000000000087e11
- (void)_updateValues;	// IMP=0x0000000000087d8a
- (id)initWithEntityManager:(id)arg1;	// IMP=0x0000000000087b62

@end
