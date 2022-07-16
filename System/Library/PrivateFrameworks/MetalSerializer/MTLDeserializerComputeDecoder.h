//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalSerializer/MTLDeserializerDecoder-Protocol.h>

@class NSString, _MTLDeserializer;
@protocol MTLComputeCommandEncoderSPI, MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface MTLDeserializerComputeDecoder : NSObject <MTLDeserializerDecoder>
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLComputeCommandEncoderSPI> computeEncoder;	// 16 = 0x10
    id <MTLComputePipelineState> _computePipeline;	// 24 = 0x18
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x0000000000019be8
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000197da
- (void)decodeBarrierResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000019671
- (void)decodeBarrierScope:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000019629
- (void)decodeWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000195d1
- (void)decodeUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000019579
- (void)decodeSetThreadgroupMemoryLength:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000194c1
- (void)decodeSetStageInRegionIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000193fb
- (void)decodeSetStageInRegion:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000019375
- (void)decodeSetPipelineState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000192ff
- (void)decodeSetBufferOffset:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000019248
- (void)decodeUseHeaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000190df
- (void)decodeUseResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018f72
- (void)decodeSetTextures:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018d81
- (void)decodeSetSamplersLODClamp:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018b37
- (void)decodeSetSamplers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018949
- (void)decodeSetBuffers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018734
- (void)decodeDispatchThreads:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018687
- (void)decodeDispatchThreadgroupsIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000185cc
- (void)decodeDispatchThreadgroups:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001851f
- (void)readVariableCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 maxExpectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000018483
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x00000000000183c4
- (void)dealloc;	// IMP=0x000000000001837a
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000018314

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
