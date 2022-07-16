//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLRenderPassDescriptorInternal
{
    struct MTLRenderPassDescriptorPrivate _private;	// 40 = 0x28
}

+ (id)renderPassDescriptor;	// IMP=0x0000000000078a9c
- (id)sampleBufferAttachments;	// IMP=0x000000000007a7fc
- (const struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000007a7ec
- (_Bool)validate:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;	// IMP=0x000000000007a198
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007a0cd
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000079f56
- (unsigned long long)defaultRasterSampleCount;	// IMP=0x0000000000079f44
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000079f32
- (unsigned long long)tileHeight;	// IMP=0x0000000000079f20
- (void)setTileHeight:(unsigned long long)arg1;	// IMP=0x0000000000079f0e
- (unsigned long long)tileWidth;	// IMP=0x0000000000079efc
- (void)setTileWidth:(unsigned long long)arg1;	// IMP=0x0000000000079eea
- (unsigned long long)threadgroupMemoryLength;	// IMP=0x0000000000079ed8
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1;	// IMP=0x0000000000079ec6
- (unsigned long long)imageblockSampleLength;	// IMP=0x0000000000079eb4
- (void)setImageblockSampleLength:(unsigned long long)arg1;	// IMP=0x0000000000079ea2
- (_Bool)pointCoordYFlipEnabled;	// IMP=0x0000000000079e8e
- (void)setPointCoordYFlipEnabled:(_Bool)arg1;	// IMP=0x0000000000079e7a
- (_Bool)openGLModeEnabled;	// IMP=0x0000000000079e69
- (void)setOpenGLModeEnabled:(_Bool)arg1;	// IMP=0x0000000000079e58
- (_Bool)isDitherEnabled;	// IMP=0x0000000000079e47
- (void)setDitherEnabled:(_Bool)arg1;	// IMP=0x0000000000079e36
- (_Bool)fineGrainedBackgroundVisibilityEnabled;	// IMP=0x0000000000079e25
- (void)setFineGrainedBackgroundVisibilityEnabled:(_Bool)arg1;	// IMP=0x0000000000079e14
- (unsigned long long)defaultColorSampleCount;	// IMP=0x0000000000079e02
- (void)setDefaultColorSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000079df0
- (unsigned long long)renderTargetHeight;	// IMP=0x0000000000079dde
- (void)setRenderTargetHeight:(unsigned long long)arg1;	// IMP=0x0000000000079dcc
- (unsigned long long)renderTargetWidth;	// IMP=0x0000000000079dba
- (void)setRenderTargetWidth:(unsigned long long)arg1;	// IMP=0x0000000000079da8
- (unsigned long long)renderTargetArrayLength;	// IMP=0x0000000000079d96
- (void)setRenderTargetArrayLength:(unsigned long long)arg1;	// IMP=0x0000000000079d84
- (id)visibilityResultBuffer;	// IMP=0x0000000000079d72
- (void)setVisibilityResultBuffer:(id)arg1;	// IMP=0x0000000000079cde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079ac0
- (id)description;	// IMP=0x0000000000079aac
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000794bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000078f67
- (unsigned long long)hash;	// IMP=0x0000000000078df9
- (void)dealloc;	// IMP=0x0000000000078d98
- (id)stencilAttachment;	// IMP=0x0000000000078d26
- (void)setStencilAttachment:(id)arg1;	// IMP=0x0000000000078c80
- (id)depthAttachment;	// IMP=0x0000000000078c0e
- (void)setDepthAttachment:(id)arg1;	// IMP=0x0000000000078b68
- (id)colorAttachments;	// IMP=0x0000000000078b57
- (id)init;	// IMP=0x0000000000078ab6

@end

