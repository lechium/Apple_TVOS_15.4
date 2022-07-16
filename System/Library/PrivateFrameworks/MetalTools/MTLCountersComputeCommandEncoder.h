//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLCountersTraceComputeCommandEncoder;

@interface MTLCountersComputeCommandEncoder
{
    _Bool _APITimingEnabled;	// 36 = 0x24
    MTLCountersTraceComputeCommandEncoder *_traceEncoder;	// 40 = 0x28
}

- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000002521c
- (void)memoryBarrierWithScope:(unsigned long long)arg1;	// IMP=0x0000000000025167
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000025098
- (void)useHeap:(id)arg1;	// IMP=0x0000000000024fe3
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x0000000000024f00
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000024e31
- (void)endEncoding;	// IMP=0x0000000000024d87
- (void)waitForFence:(id)arg1;	// IMP=0x0000000000024cd2
- (void)updateFence:(id)arg1;	// IMP=0x0000000000024c1d
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x0000000000024b4e
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x0000000000024a71
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x000000000002498e
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x00000000000248b1
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x00000000000247e2
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;	// IMP=0x000000000002470e
- (void)setImageBlockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x00000000000246ce
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000245ff
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000002450e
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000024421
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000002433e
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000002426f
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000002418c
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000240bd
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000023fce
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000023eff
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000023e1c
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000023d39
- (void)setComputePipelineState:(id)arg1;	// IMP=0x0000000000023c84
- (void)setLabel:(id)arg1;	// IMP=0x0000000000023bcf
- (void)popDebugGroup;	// IMP=0x0000000000023b25
- (void)pushDebugGroup:(id)arg1;	// IMP=0x0000000000023a70
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x00000000000239bb
- (void)dealloc;	// IMP=0x0000000000023979
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x00000000000238d6

@end
