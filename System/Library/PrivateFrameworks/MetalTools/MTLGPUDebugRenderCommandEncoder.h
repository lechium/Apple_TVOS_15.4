//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLGPUDebugCommandEncoder-Protocol.h>

@class MTLGPUDebugCommandBuffer, MTLGPUDebugRenderPipelineState, MTLToolsDepthStencilState, NSString;
@protocol MTLBuffer;

@interface MTLGPUDebugRenderCommandEncoder <MTLGPUDebugCommandEncoder>
{
    unsigned int useResourceIteration;	// 36 = 0x24
    _Bool _tileStageActive;	// 40 = 0x28
    _Bool _tileStageUsed;	// 41 = 0x29
    _Bool _fragmentStageActive;	// 42 = 0x2a
    _Bool _vertexStageActive;	// 43 = 0x2b
    _Bool _enableUseResourceValidation;	// 44 = 0x2c
    MTLGPUDebugCommandBuffer *_commandBuffer;	// 48 = 0x30
    struct MTLGPUDebugStageBufferHandles _vertexHandles;	// 56 = 0x38
    struct MTLGPUDebugStageBufferHandles _fragmentHandles;	// 1432 = 0x598
    struct MTLGPUDebugStageBufferHandles _tileHandles;	// 2808 = 0xaf8
    struct MTLGPUDebugTileThreadgroup _threadgroup;	// 4184 = 0x1058
    struct Options *_options;	// 4448 = 0x1160
    struct GPUDebugEventUUIDPacket _drawID;	// 4456 = 0x1168
    unsigned long long _encoderType;	// 4480 = 0x1180
    MTLGPUDebugRenderPipelineState *_currentPipeline;	// 4488 = 0x1188
    MTLToolsDepthStencilState *_currentDepthStencil;	// 4496 = 0x1190
    struct MTLGPUDebugBufferSubAlloc _vertexReportBuffer;	// 4504 = 0x1198
    struct MTLGPUDebugBufferSubAlloc _fragmentReportBuffer;	// 4520 = 0x11a8
    struct MTLGPUDebugBufferSubAlloc _tileReportBuffer;	// 4536 = 0x11b8
    id <MTLBuffer> _vertexBufferUsageTable;	// 4552 = 0x11c8
    id <MTLBuffer> _vertexTextureUsageTable;	// 4560 = 0x11d0
    id <MTLBuffer> _fragmentBufferUsageTable;	// 4568 = 0x11d8
    id <MTLBuffer> _fragmentTextureUsageTable;	// 4576 = 0x11e0
}

- (id).cxx_construct;	// IMP=0x00000000000048fd
- (void)endEncoding;	// IMP=0x0000000000004808
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x000000000000466c
- (void)setDepthStencilState:(id)arg1;	// IMP=0x0000000000004632
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x00000000000045da
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000000458e
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;	// IMP=0x0000000000004500
- (void)useHeap:(id)arg1;	// IMP=0x0000000000004475
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;	// IMP=0x000000000000440f
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x00000000000043b7
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x0000000000004221
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000004209
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000004203
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000041fd
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_1e3be3a8)arg2;	// IMP=0x0000000000004193
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;	// IMP=0x0000000000004144
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;	// IMP=0x0000000000004070
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;	// IMP=0x0000000000003fa8
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;	// IMP=0x0000000000003f31
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000003ec7
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x0000000000003e50
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;	// IMP=0x0000000000003de2
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;	// IMP=0x0000000000003d74
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000003d06
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x0000000000003c98
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;	// IMP=0x0000000000003c32
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000003bd6
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;	// IMP=0x0000000000003b7a
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000003a7a
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000039de
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000038de
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000003842
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000003742
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000036a6
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000003637
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000035d4
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000000356c
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000003555
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000034e6
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000003483
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000000341b
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000003404
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000003395
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000003353
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000032eb
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000032d4
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000003257
- (void)setRenderPipelineStateBuffers:(id)arg1;	// IMP=0x0000000000002db3
- (void)setTileReportBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000002d15
- (void)setFragmentReportBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000002c77
- (void)setVertexReportBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000002bd9
- (void)setBufferUsageTable:(id)arg1 textureUsageTable:(id)arg2 forStage:(unsigned long long)arg3;	// IMP=0x0000000000002a5b
- (void)setTessellationControlPointIndexBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000000293c
- (void)flushBindings;	// IMP=0x0000000000001ff2
- (id)temporaryBufferWithLength:(unsigned long long)arg1;	// IMP=0x0000000000001fc1
- (id)temporaryBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000001f81
@property(readonly) unsigned int encoderID;
- (id)initWithRenderCommandEncoder:(id)arg1 parallelEncoder:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;	// IMP=0x0000000000001e8f
- (id)initWithRenderCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;	// IMP=0x0000000000001dbe
- (void)_initBufferArgumentData:(id)arg1;	// IMP=0x0000000000001db8

// Remaining properties
@property(readonly) MTLGPUDebugCommandBuffer *commandBuffer; // @dynamic commandBuffer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
