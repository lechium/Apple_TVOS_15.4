//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GLKEffectPropertyConstantColor
{
    union _GLKVector4 _color;	// 32 = 0x20
    unsigned char _enabled;	// 48 = 0x30
}

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;	// IMP=0x0000000000009af1
@property(nonatomic) unsigned char enabled; // @synthesize enabled=_enabled;
@property(nonatomic) union _GLKVector4 color; // @synthesize color=_color;
- (void)dealloc;	// IMP=0x0000000000009c4d
- (id)description;	// IMP=0x0000000000009b9f
- (void)bind;	// IMP=0x0000000000009b5e
- (void)setShaderBindings;	// IMP=0x0000000000009af7
- (void)dirtyAllUniforms;	// IMP=0x0000000000009aeb
- (id)init;	// IMP=0x0000000000009a7b

@end
