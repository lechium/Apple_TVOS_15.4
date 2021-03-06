//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableData, PXGShaderSource;

@interface PXGShader : NSObject
{
    NSDictionary *_sourceByShaderFunction;	// 8 = 0x8
    NSArray *_valueUniforms;	// 16 = 0x10
    NSArray *_texture2DUniforms;	// 24 = 0x18
    NSArray *_texture3DUniforms;	// 32 = 0x20
    NSMutableData *_valueUniformsData;	// 40 = 0x28
    PXGShaderSource *_source;	// 48 = 0x30
    NSArray *_uniforms;	// 56 = 0x38
    NSDictionary *_components;	// 64 = 0x40
    unsigned long long _sampler;	// 72 = 0x48
    CDStruct_b796b1f4 _opcodes;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000004a1109
@property(nonatomic) unsigned long long sampler; // @synthesize sampler=_sampler;
@property(readonly, copy, nonatomic) NSDictionary *components; // @synthesize components=_components;
@property(readonly, copy, nonatomic) NSArray *uniforms; // @synthesize uniforms=_uniforms;
@property(readonly, copy, nonatomic) PXGShaderSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) CDStruct_b796b1f4 opcodes; // @synthesize opcodes=_opcodes;
- (void)encodeBindableArgumentsWithEncoder:(id)arg1;	// IMP=0x00000000004a07c2
- (id)parameterBindingDeclarations;	// IMP=0x00000000004a0558
- (_Bool)isEquivalentToShader:(id)arg1;	// IMP=0x00000000004a01c0
@property(readonly, nonatomic) _Bool isOpaque;
- (id)description;	// IMP=0x000000000049ff2d
- (id)initWithOpcodes:(CDStruct_b796b1f4)arg1 source:(id)arg2 uniforms:(id)arg3 components:(id)arg4;	// IMP=0x000000000049f8d4
- (id)init;	// IMP=0x000000000049f85a

@end

