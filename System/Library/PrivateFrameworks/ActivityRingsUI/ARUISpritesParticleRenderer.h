//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ARUISpriteParticleRenderState;
@protocol MTLBuffer;

@interface ARUISpritesParticleRenderer : NSObject
{
    id <MTLBuffer> _spriteVertexBuffer;	// 8 = 0x8
    id <MTLBuffer> _spriteIndexBuffer;	// 16 = 0x10
    unsigned long long _numIndicies;	// 24 = 0x18
    id <MTLBuffer> _vertexAttributesBuffer;	// 32 = 0x20
    id <MTLBuffer> _uniformsBuffer;	// 40 = 0x28
    ARUISpriteParticleRenderState *_spriteRenderState;	// 48 = 0x30
    unsigned long long _bufferSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001b7bc
- (void)renderSpriteSheet:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3;	// IMP=0x000000000001b397
- (void)_sharedInitWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2;	// IMP=0x000000000001b268
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 bufferSize:(unsigned long long)arg3;	// IMP=0x000000000001b1a6
- (id)initWithDevice:(id)arg1 library:(id)arg2 bufferSize:(unsigned long long)arg3;	// IMP=0x000000000001b0e1

@end

