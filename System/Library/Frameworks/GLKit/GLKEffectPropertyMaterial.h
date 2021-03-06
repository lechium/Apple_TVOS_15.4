//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GLKEffectPropertyMaterial
{
    union _GLKVector4 _ambientColor;	// 32 = 0x20
    union _GLKVector4 _diffuseColor;	// 48 = 0x30
    union _GLKVector4 _specularColor;	// 64 = 0x40
    union _GLKVector4 _emissiveColor;	// 80 = 0x50
    float _shininess;	// 96 = 0x60
    int _ambientColorLoc;	// 100 = 0x64
    int _diffuseColorLoc;	// 104 = 0x68
    int _specularColorLoc;	// 108 = 0x6c
    int _emissiveColorLoc;	// 112 = 0x70
    int _shininessLoc;	// 116 = 0x74
    unsigned long long *_effectDirtyUniforms;	// 120 = 0x78
    struct GLKBigInt_s _colorMaterialEnabledMask;	// 128 = 0x80
}

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;	// IMP=0x000000000000ceaf
@property(nonatomic) struct GLKBigInt_s _colorMaterialEnabledMask; // @synthesize _colorMaterialEnabledMask;
@property(nonatomic) int _shininessLoc; // @synthesize _shininessLoc;
@property(nonatomic) int _emissiveColorLoc; // @synthesize _emissiveColorLoc;
@property(nonatomic) int _specularColorLoc; // @synthesize _specularColorLoc;
@property(nonatomic) int _diffuseColorLoc; // @synthesize _diffuseColorLoc;
@property(nonatomic) int _ambientColorLoc; // @synthesize _ambientColorLoc;
@property(nonatomic) unsigned long long *effectDirtyUniforms; // @synthesize effectDirtyUniforms=_effectDirtyUniforms;
@property(nonatomic) float shininess; // @synthesize shininess=_shininess;
@property(nonatomic) union _GLKVector4 emissiveColor; // @synthesize emissiveColor=_emissiveColor;
@property(nonatomic) union _GLKVector4 specularColor; // @synthesize specularColor=_specularColor;
@property(nonatomic) union _GLKVector4 diffuseColor; // @synthesize diffuseColor=_diffuseColor;
@property(nonatomic) union _GLKVector4 ambientColor; // @synthesize ambientColor=_ambientColor;
- (void)dealloc;	// IMP=0x000000000000d326
- (id)description;	// IMP=0x000000000000d1d7
- (void)bind;	// IMP=0x000000000000d0ac
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;	// IMP=0x000000000000d058
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;	// IMP=0x000000000000d005
- (void)setShaderBindings;	// IMP=0x000000000000cdfa
- (void)initializeMasks;	// IMP=0x000000000000cada
- (void)dirtyAllUniforms;	// IMP=0x000000000000c97e
- (id)init;	// IMP=0x000000000000c8db

@end

