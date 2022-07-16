//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLCountersTraceRenderCommandEncoder
{
}

- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000003256d
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;	// IMP=0x00000000000324dc
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000003223d
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000321f6
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000321ba
- (void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000032189
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000003214d
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000003211c
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000320d2
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000320a1
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000032066
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000032032
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;	// IMP=0x0000000000031fe2
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;	// IMP=0x0000000000031ee2
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;	// IMP=0x0000000000031ae7
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x0000000000031aa5
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x00000000000319a4
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000031973
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x0000000000031709
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000316d1
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;	// IMP=0x00000000000315ec
- (void)useHeap:(id)arg1;	// IMP=0x000000000003154e
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;	// IMP=0x000000000003151d
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;	// IMP=0x0000000000031439
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x000000000003139b
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x00000000000312fd
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000031218
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000030ea5
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000030ad5
- (void)setTessellationFactorScale:(float)arg1;	// IMP=0x0000000000030a36
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;	// IMP=0x00000000000309fb
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000030916
- (void)setViewport:(CDStruct_8727d297)arg1;	// IMP=0x00000000000307dc
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000307a0
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000003076f
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000030724
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000306e8
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000306a1
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000030670
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000030635
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000305eb
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000305ba
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000003057f
- (void)setTriangleFillMode:(unsigned long long)arg1;	// IMP=0x00000000000304e1
- (void)setStencilReferenceValue:(unsigned int)arg1;	// IMP=0x0000000000030444
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;	// IMP=0x0000000000030361
- (void)setScissorRect:(CDStruct_33dcf794)arg1;	// IMP=0x000000000003025c
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x00000000000301be
- (void)setFrontFacingWinding:(unsigned long long)arg1;	// IMP=0x0000000000030120
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000300e4
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000300b3
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000030068
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000003002c
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000002ffe5
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000002ffb4
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000002ff79
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000002ff2f
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000002fefe
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000002fec3
- (void)setDepthStencilState:(id)arg1;	// IMP=0x000000000002fe25
- (void)setDepthClipMode:(unsigned long long)arg1;	// IMP=0x000000000002fd87
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;	// IMP=0x000000000002fc7e
- (void)setCullMode:(unsigned long long)arg1;	// IMP=0x000000000002fbe0
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;	// IMP=0x000000000002fab1
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;	// IMP=0x000000000002f922
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;	// IMP=0x000000000002f7da
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;	// IMP=0x000000000002f60d
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;	// IMP=0x000000000002f483
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;	// IMP=0x000000000002f313
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(unsigned long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x000000000002f162
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;	// IMP=0x000000000002eff7
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;	// IMP=0x000000000002eeb3
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000002edb2
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x000000000002ec6f
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;	// IMP=0x000000000002eb4c
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;	// IMP=0x000000000002ea4d
- (id)init:(struct BinaryBuffer *)arg1;	// IMP=0x000000000002ea19

@end

