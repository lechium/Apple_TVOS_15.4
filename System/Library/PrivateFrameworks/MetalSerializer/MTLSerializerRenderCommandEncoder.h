//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalSerializer/MTLRenderCommandEncoderSPI-Protocol.h>

@class MTLRenderPassDescriptor, NSMutableArray, NSString;
@protocol MTLDevice, MTLSerializerBuffer, MTLSerializerDepthStencilState, MTLSerializerRenderPipelineState, MTLSerializerSamplerState, MTLSerializerTexture;

@interface MTLSerializerRenderCommandEncoder <MTLRenderCommandEncoderSPI>
{
    NSMutableArray *splitHandlers;	// 96 = 0x60
    MTLRenderPassDescriptor *renderPassDescriptor;	// 104 = 0x68
    _Bool hadSplit;	// 112 = 0x70
    id <MTLSerializerRenderPipelineState> pipelineState;	// 120 = 0x78
    id <MTLSerializerDepthStencilState> depthStencilState;	// 128 = 0x80
    id <MTLSerializerBuffer> fragmentBuffers[31];	// 136 = 0x88
    id <MTLSerializerTexture> fragmentTextures[96];	// 384 = 0x180
    id <MTLSerializerSamplerState> fragmentSamplers[16];	// 1152 = 0x480
    id <MTLSerializerBuffer> vertexBuffers[31];	// 1280 = 0x500
    id <MTLSerializerTexture> vertexTextures[96];	// 1528 = 0x5f8
    id <MTLSerializerSamplerState> vertexSamplers[16];	// 2296 = 0x8f8
    id <MTLSerializerBuffer> tessellationFactorBuffer;	// 2424 = 0x978
    void *renderPassCommand;	// 2432 = 0x980
    _Bool _resourcesDirty;	// 2440 = 0x988
    _Bool needsWrites;	// 2441 = 0x989
    unsigned long long tileWidth;	// 2448 = 0x990
    unsigned long long tileHeight;	// 2456 = 0x998
}

@property _Bool needsWrites; // @synthesize needsWrites;
@property(readonly) unsigned long long tileHeight; // @synthesize tileHeight;
@property(readonly) unsigned long long tileWidth; // @synthesize tileWidth;
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x00000000000181aa
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x0000000000018086
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5 atIndex:(unsigned long long)arg6;	// IMP=0x0000000000017f54
- (void)setStencilCleared;	// IMP=0x0000000000017ed4
- (void)setDepthCleared;	// IMP=0x0000000000017e54
- (void)setTransformFeedbackState:(unsigned long long)arg1;	// IMP=0x0000000000017dc3
- (void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;	// IMP=0x0000000000017d23
- (void)setPrimitiveRestartEnabled:(_Bool)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000000017c84
- (void)setPrimitiveRestartEnabled:(_Bool)arg1;	// IMP=0x0000000000017c11
- (void)setProvokingVertexMode:(unsigned long long)arg1;	// IMP=0x0000000000017b80
- (void)setViewportTransformEnabled:(_Bool)arg1;	// IMP=0x0000000000017aeb
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x000000000001799a
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x0000000000017849
- (void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x0000000000017776
- (void)setPointSize:(float)arg1;	// IMP=0x00000000000176de
- (void)setAlphaTestReferenceValue:(float)arg1;	// IMP=0x0000000000017646
- (void)setEncoderPosition:(unsigned long long)arg1;	// IMP=0x00000000000175d0
- (void)forceLoadActions;	// IMP=0x000000000001758b
- (void)forceStoreActionsForPosition:(unsigned long long)arg1;	// IMP=0x0000000000017517
- (void)fixStoreActions:(id)arg1;	// IMP=0x00000000000173a8
- (unsigned long long)getType;	// IMP=0x00000000000173a0
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x000000000001739a
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000017385
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000017370
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000001735b
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000017346
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000017331
- (void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001731c
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000017307
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000172f2
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000172dd
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000172c8
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000172b3
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;	// IMP=0x000000000001729e
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;	// IMP=0x0000000000017195
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x0000000000017165
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000001706c
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;	// IMP=0x000000000001703f
- (void)setLineWidth:(float)arg1;	// IMP=0x000000000001700c
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;	// IMP=0x0000000000016fca
- (_Bool)isMemorylessRender;	// IMP=0x0000000000016fc2
- (void)setDepthClipModeSPI:(unsigned long long)arg1;	// IMP=0x0000000000016fbc
- (void)addSplitHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016fb6
- (void)textureBarrier;	// IMP=0x0000000000016f9d
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000016f6d
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000016f04
- (void)setViewport:(CDStruct_8727d297)arg1;	// IMP=0x0000000000016ed0
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000016e91
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000016e42
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000016e02
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000016d98
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000016d6e
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000016d30
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000016cf1
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000016cb2
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000016c56
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000016c27
- (void)setTriangleFillMode:(unsigned long long)arg1;	// IMP=0x0000000000016bfd
- (void)setTessellationFactorScale:(float)arg1;	// IMP=0x0000000000016bca
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;	// IMP=0x0000000000016af5
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000016acb
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000016aa1
- (void)setStencilReferenceValue:(unsigned int)arg1;	// IMP=0x0000000000016a8d
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;	// IMP=0x0000000000016a5f
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000016a05
- (void)setScissorRect:(CDStruct_33dcf794)arg1;	// IMP=0x00000000000169d9
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x0000000000016906
- (void)setFrontFacingWinding:(unsigned long long)arg1;	// IMP=0x00000000000168dc
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000001689d
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001684e
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000001680e
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000167a4
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000001677a
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001673c
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000166fd
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000166be
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000016662
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000016633
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000016609
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x00000000000165df
- (void)setDepthStencilState:(id)arg1;	// IMP=0x0000000000016523
- (void)setDepthClipMode:(unsigned long long)arg1;	// IMP=0x00000000000164f9
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;	// IMP=0x00000000000164a8
- (void)setCullMode:(unsigned long long)arg1;	// IMP=0x000000000001647e
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001644e
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001641f
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;	// IMP=0x00000000000163bf
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;	// IMP=0x0000000000016319
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;	// IMP=0x0000000000016273
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;	// IMP=0x0000000000016233
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;	// IMP=0x000000000001610c
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000001603c
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000015f4d
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;	// IMP=0x0000000000015de9
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000015cb5
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;	// IMP=0x0000000000015b70
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000015a73
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;	// IMP=0x0000000000015837
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;	// IMP=0x0000000000015645
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x000000000001543b
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;	// IMP=0x00000000000152bf
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;	// IMP=0x000000000001511b
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x0000000000014fcf
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;	// IMP=0x0000000000014eca
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;	// IMP=0x0000000000014da1
- (void)flushWrites;	// IMP=0x0000000000014af8
- (_Bool)handleSplits;	// IMP=0x000000000001487f
- (_Bool)addRenderTargetReferences;	// IMP=0x000000000001460e
- (void)beginSegment:(_Bool)arg1;	// IMP=0x00000000000145f8
- (_Bool)writeDescriptor;	// IMP=0x0000000000013e48
- (void)dealloc;	// IMP=0x0000000000013cb8
- (id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 serializer:(id)arg3;	// IMP=0x0000000000013acb
- (id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2;	// IMP=0x0000000000013ab6
- (void)split;	// IMP=0x00000000000139a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

