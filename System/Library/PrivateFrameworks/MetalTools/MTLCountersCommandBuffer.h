//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLCountersTraceCommandBuffer;

@interface MTLCountersCommandBuffer
{
    MTLCountersTraceCommandBuffer *_traceBuffer;	// 48 = 0x30
}

@property(readonly, nonatomic) MTLCountersTraceCommandBuffer *traceBuffer; // @synthesize traceBuffer=_traceBuffer;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000007fc9b
- (void)presentDrawable:(id)arg1;	// IMP=0x000000000007fc48
- (void)waitUntilCompleted;	// IMP=0x000000000007fbfa
- (void)waitUntilScheduled;	// IMP=0x000000000007fbac
- (void)addPurgedHeap:(id)arg1;	// IMP=0x000000000007fb7b
- (void)addPurgedResource:(id)arg1;	// IMP=0x000000000007fb4a
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000007fa97
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000007f9e4
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000000007f93a
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000007f884
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000007f7ce
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;	// IMP=0x000000000007f739
- (id)blitCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000007f6a4
- (id)computeCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000007f60f
- (id)computeCommandEncoder;	// IMP=0x000000000007f57f
- (id)renderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000007f4e9
- (id)blitCommandEncoder;	// IMP=0x000000000007f459
- (void)dealloc;	// IMP=0x000000000007f1d4
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;	// IMP=0x000000000007f0c4

@end
