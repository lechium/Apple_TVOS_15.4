//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLComputeCommandEncoderSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsComputeCommandEncoder <MTLComputeCommandEncoderSPI>
{
}

- (_Bool)encodeEndIf;	// IMP=0x00000000000121c1
- (void)encodeStartElse;	// IMP=0x0000000000012196
- (void)encodeStartIf:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x000000000001211c
- (_Bool)encodeEndWhile;	// IMP=0x00000000000120f1
- (void)encodeStartWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x0000000000012077
- (_Bool)encodeEndDoWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x0000000000011ffd
- (void)encodeStartDoWhile;	// IMP=0x0000000000011fd2
- (void)useResourceGroup:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000011f92
- (void)enableNullBufferBinds:(_Bool)arg1;	// IMP=0x0000000000011f1c
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x0000000000011ead
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000011df3
- (void)memoryBarrierWithScope:(unsigned long long)arg1;	// IMP=0x0000000000011dc2
@property(readonly) unsigned long long dispatchType;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000011d17
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000011ca8
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000011bee
- (void)useHeap:(id)arg1;	// IMP=0x0000000000011ba6
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x0000000000011ae2
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x0000000000011a8b
- (void)waitForFence:(id)arg1;	// IMP=0x0000000000011a33
- (void)updateFence:(id)arg1;	// IMP=0x00000000000119db
- (id)newKernelDebugInfo;	// IMP=0x00000000000119b0
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x0000000000011949
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x000000000001191e
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x00000000000118b7
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000011877
- (void)setImageBlockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000011865
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x00000000000117fe
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;	// IMP=0x00000000000117d3
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x00000000000117a8
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000011768
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x000000000001166a
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x00000000000115ef
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000001150b
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000114a4
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000113c0
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000011359
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000011265
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000111f6
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000111b6
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000011171
- (void)setComputePipelineState:(id)arg1;	// IMP=0x0000000000011119
- (id)initWithComputeCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;	// IMP=0x00000000000110ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

