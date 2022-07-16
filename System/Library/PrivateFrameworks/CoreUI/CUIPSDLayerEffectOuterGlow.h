//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIColor;

@interface CUIPSDLayerEffectOuterGlow
{
    int _blendMode;	// 24 = 0x18
    double _opacity;	// 32 = 0x20
    CUIColor *_color;	// 40 = 0x28
    unsigned long long _blurSize;	// 48 = 0x30
    unsigned long long _spread;	// 56 = 0x38
}

@property unsigned long long spread; // @synthesize spread=_spread;
@property unsigned long long blurSize; // @synthesize blurSize=_blurSize;
@property(retain) CUIColor *color; // @synthesize color=_color;
@property double opacity; // @synthesize opacity=_opacity;
@property int blendMode; // @synthesize blendMode=_blendMode;
- (void)dealloc;	// IMP=0x00000000000919ca
- (id)description;	// IMP=0x00000000000918df
- (unsigned int)effectType;	// IMP=0x00000000000918d4
- (id)init;	// IMP=0x0000000000091881
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000003ed78
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003ebcf

@end
