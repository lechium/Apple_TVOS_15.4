//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalSerializer/MTLDeserializationContext-Protocol.h>
#import <MetalSerializer/MTLDeserializer-Protocol.h>

@class MTLSharedEventListener, NSString;
@protocol MTLCommandQueue, MTLDeserializerObjectDelegate, MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MTLDeserializer : NSObject <MTLDeserializer, MTLDeserializationContext>
{
    NSObject<OS_dispatch_queue> *submissionQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *completionQueue;	// 16 = 0x10
    id <MTLCommandQueue> commandQueue;	// 24 = 0x18
    id <MTLDevice> device;	// 32 = 0x20
    id <MTLDeserializerObjectDelegate> _objectDelegate;	// 40 = 0x28
    MTLSharedEventListener *eventListener;	// 48 = 0x30
    _Bool _generateResourceRefs;	// 56 = 0x38
}

@property(readonly) _Bool generateResourceRefs; // @synthesize generateResourceRefs=_generateResourceRefs;
@property(readonly) id <MTLDevice> device; // @synthesize device;
- (id)functionWithFunctionRef:(unsigned long long)arg1;	// IMP=0x0000000000012eea
- (unsigned int)registerCommandQueue:(id)arg1;	// IMP=0x0000000000012ecf
- (unsigned int)registerBuffer:(id)arg1;	// IMP=0x0000000000012eb4
- (id)getResourceForReference:(unsigned int)arg1;	// IMP=0x0000000000012e9e
- (void)decodeSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 into:(id)arg4;	// IMP=0x0000000000012d82
- (void)submitCommandSegmentsTimed:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5 commandQueueRef:(unsigned int)arg6;	// IMP=0x0000000000012517
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5 commandQueueRef:(unsigned int)arg6;	// IMP=0x0000000000012478
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(CDUnknownBlockType)arg4 commandBufferCompleted:(CDUnknownBlockType)arg5;	// IMP=0x000000000001245c
- (id)decodeSegmentWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2 withDecoder:(id)arg3 into:(id)arg4;	// IMP=0x00000000000122f8
- (id)newObjectCommandWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;	// IMP=0x0000000000012215
- (void)deleteObjectWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;	// IMP=0x00000000000121bc
- (void)deleteResource:(unsigned int)arg1;	// IMP=0x00000000000121a6
- (void)notifyListenerForEventWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3 allocator:(id)arg4;	// IMP=0x00000000000120bd
- (void)newTextureWithIOSurface:(struct __IOSurface *)arg1 serializedData:(const char *)arg2 serializedDataSize:(unsigned long long)arg3 allocator:(id)arg4;	// IMP=0x0000000000011f74
- (_Bool)operationWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x00000000000119fd
- (_Bool)operationWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;	// IMP=0x0000000000011996
- (void)getBytes:(void *)arg1 dataSize:(unsigned long long)arg2 command:(const CDStruct_c0454aff *)arg3;	// IMP=0x00000000000118e2
- (id)replaceRegion:(const CDStruct_c0454aff *)arg1;	// IMP=0x0000000000011856
- (void)newSharedEventWithEventPort:(unsigned int)arg1 label:(id)arg2 serializedData:(const char *)arg3 serializedDataSize:(unsigned long long)arg4 allocator:(id)arg5;	// IMP=0x00000000000117a2
- (_Bool)didModifyRange:(CDStruct_9835624e *)arg1 serializedDataSize:(unsigned long long)arg2;	// IMP=0x000000000001179a
- (_Bool)newSharedEvent:(CDStruct_6238c8e0 *)arg1 allocator:(id)arg2;	// IMP=0x0000000000011721
- (_Bool)newFence:(CDStruct_6238c8e0 *)arg1 allocator:(id)arg2;	// IMP=0x00000000000116a8
- (_Bool)newFunctionWithSerializedMetallib:(id)arg1 commandData:(const char *)arg2 commandDataSize:(unsigned long long)arg3 overrideTargetTriple:(id)arg4 allocator:(id)arg5;	// IMP=0x0000000000011575
- (_Bool)newTiledTextureViewWithBuffer:(CDStruct_199767e7 *)arg1 allocator:(id)arg2;	// IMP=0x000000000001156d
- (_Bool)newTextureViewWithBuffer:(CDStruct_199767e7 *)arg1 allocator:(id)arg2;	// IMP=0x00000000000114be
- (_Bool)newTextureViewWithSwizzle:(CDStruct_f41d351c *)arg1 allocator:(id)arg2;	// IMP=0x00000000000113f1
- (_Bool)newTextureViewWithTextureType:(CDStruct_9da0e9c0 *)arg1 allocator:(id)arg2;	// IMP=0x0000000000011347
- (_Bool)newTextureViewWithPixelFormat:(CDStruct_1ab23c75 *)arg1 allocator:(id)arg2;	// IMP=0x00000000000112b7
- (_Bool)makeAliasiableResource:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000011232
- (_Bool)heapBufferSizeAndAlign:(CDStruct_5e0ae671 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x00000000000111a4
- (_Bool)heapTextureSizeAndAlign:(CDStruct_d55b6325 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000011108
- (_Bool)argumentEncoderSetValues:(CDStruct_091769f4 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010e4e
- (_Bool)sharedEventWaitSignaledValue:(CDStruct_9835624e *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010de1
- (_Bool)sharedEventSetSignaledValue:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010da1
- (_Bool)sharedEventSignaledValue:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010d41
- (_Bool)doResourcesAlias:(CDStruct_eb9e20c8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010c21
- (_Bool)argumentEncoderConstantAtIndex:(CDStruct_b92aab1b *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010b5b
- (_Bool)argumentBufferLayoutConstantAtIndex:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010ac5
- (_Bool)newArgumentEncoderWithBufferLayout:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010985
- (_Bool)newArgumentBufferLayoutWithStructType:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010771
- (_Bool)newRenderPipelineStateWithDescriptor:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010622
- (_Bool)uniqueIdentifier:(CDStruct_1e94be47 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010563
- (_Bool)newComputePipelineStateWithDescriptor:(CDStruct_c0454aff *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010318
- (_Bool)heapMaxAvailableSizeWithAlignment:(CDStruct_d008d4b8 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x00000000000102a4
- (_Bool)computeInfo:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010207
- (_Bool)minimumTextureBufferAlignment:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x00000000000101af
- (_Bool)minimumLinearTextureAlignment:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x0000000000010157
- (_Bool)bufferGPUAddress:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x00000000000100ea
- (_Bool)sizeInfoForHeap:(CDStruct_6238c8e0 *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id)arg3;	// IMP=0x000000000001005b
- (_Bool)newBufferWithHeap:(CDStruct_e833742d *)arg1 allocator:(id)arg2;	// IMP=0x000000000000ffa6
- (_Bool)newTextureWithHeap:(CDStruct_ab6bd9ea *)arg1 allocator:(id)arg2;	// IMP=0x000000000000fed4
- (_Bool)newHeapWithDescriptor:(CDStruct_1ffa15be *)arg1 allocator:(id)arg2;	// IMP=0x000000000000fe3b
- (id)newHeapWithDescriptor:(CDStruct_1ffa15be *)arg1;	// IMP=0x000000000000fd88
- (_Bool)newDepthStencilStateWithDescriptor:(CDStruct_db93b3bd *)arg1 allocator:(id)arg2;	// IMP=0x000000000000fcef
- (id)newDepthStencilStateWithDescriptor:(CDStruct_db93b3bd *)arg1;	// IMP=0x000000000000fc3c
- (_Bool)newSamplerStateWithDescriptor:(CDStruct_36a1713d *)arg1 allocator:(id)arg2;	// IMP=0x000000000000fba3
- (id)newSamplerStateWithDescriptor:(CDStruct_36a1713d *)arg1;	// IMP=0x000000000000faf0
- (_Bool)newTextureWithDescriptor:(CDStruct_161c8b3b *)arg1 allocator:(id)arg2;	// IMP=0x000000000000fa57
- (id)newTextureWithDescriptor:(CDStruct_161c8b3b *)arg1;	// IMP=0x000000000000f9a4
- (void)deleteEventForReference:(unsigned int)arg1;	// IMP=0x000000000000f572
- (id)getEventForReference:(unsigned int)arg1;	// IMP=0x000000000000f55c
- (unsigned int)registerEventForReference:(unsigned int)arg1 event:(id)arg2;	// IMP=0x000000000000f546
- (void)deleteHeapForReference:(unsigned int)arg1;	// IMP=0x000000000000f530
- (id)getHeapForReference:(unsigned int)arg1;	// IMP=0x000000000000f51a
- (unsigned int)registerHeapForReference:(unsigned int)arg1 heap:(id)arg2;	// IMP=0x000000000000f504
- (void)deleteArgumentEncoderForReference:(unsigned int)arg1;	// IMP=0x000000000000f4ee
- (id)getArgumentEncoderForReference:(unsigned int)arg1;	// IMP=0x000000000000f4d8
- (unsigned int)registerArgumentEncoderForReference:(unsigned int)arg1 argumentEncoder:(id)arg2;	// IMP=0x000000000000f4c2
- (void)deleteArgumentBufferLayoutForReference:(unsigned int)arg1;	// IMP=0x000000000000f4ac
- (id)getArgumentBufferLayoutForReference:(unsigned int)arg1;	// IMP=0x000000000000f496
- (unsigned int)registerArgumentBufferLayoutForReference:(unsigned int)arg1 argumentBufferLayout:(id)arg2;	// IMP=0x000000000000f480
- (void)deleteFenceForReference:(unsigned int)arg1;	// IMP=0x000000000000f46a
- (id)getFenceForReference:(unsigned int)arg1;	// IMP=0x000000000000f454
- (unsigned int)registerFenceForReference:(unsigned int)arg1 fence:(id)arg2;	// IMP=0x000000000000f43e
- (void)deleteDepthStencilStateForReference:(unsigned int)arg1;	// IMP=0x000000000000f428
- (id)getDepthStencilStateForReference:(unsigned int)arg1;	// IMP=0x000000000000f412
- (unsigned int)registerDepthStencilStateForReference:(unsigned int)arg1 depthStencil:(id)arg2;	// IMP=0x000000000000f3fc
- (void)deleteSamplerStateForReference:(unsigned int)arg1;	// IMP=0x000000000000f3e6
- (id)getSamplerStateForReference:(unsigned int)arg1;	// IMP=0x000000000000f3d0
- (unsigned int)registerSamplerStateForReference:(unsigned int)arg1 sampler:(id)arg2;	// IMP=0x000000000000f3ba
- (void)deleteTextureForReference:(unsigned int)arg1;	// IMP=0x000000000000f3a4
- (id)getTextureForReference:(unsigned int)arg1;	// IMP=0x000000000000f38e
- (unsigned int)registerTextureForReference:(unsigned int)arg1 texture:(id)arg2;	// IMP=0x000000000000f378
- (void)deleteBufferForReference:(unsigned int)arg1;	// IMP=0x000000000000f362
- (id)getBufferForReference:(unsigned int)arg1;	// IMP=0x000000000000f34c
- (unsigned int)registerBufferForReference:(unsigned int)arg1 buffer:(id)arg2;	// IMP=0x000000000000f336
- (void)deleteRenderPipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000f320
- (id)getRenderPipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000f30a
- (unsigned int)registerRenderPipelineStateForReference:(unsigned int)arg1 renderPipeline:(id)arg2;	// IMP=0x000000000000f2f4
- (void)deleteComputePipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000f2de
- (id)getComputePipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000f2c8
- (unsigned int)registerComputePipelineStateForReference:(unsigned int)arg1 computePipeline:(id)arg2;	// IMP=0x000000000000f2b2
- (void)deleteFunctionForReference:(unsigned int)arg1;	// IMP=0x000000000000f29c
- (id)getFunctionForReference:(unsigned int)arg1;	// IMP=0x000000000000f286
- (unsigned int)registerFunctionForReference:(unsigned int)arg1 function:(id)arg2;	// IMP=0x000000000000f270
- (void)deleteCommandQueueForReference:(unsigned int)arg1;	// IMP=0x000000000000f25a
- (id)getCommandQueueForReference:(unsigned int)arg1;	// IMP=0x000000000000f244
- (unsigned int)registerCommandQueueForReference:(unsigned int)arg1 commandQueue:(id)arg2;	// IMP=0x000000000000f22e
- (void)dealloc;	// IMP=0x000000000000f1ad
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000000f195
- (id)initWithDevice:(id)arg1 generateResourceRefs:(_Bool)arg2;	// IMP=0x000000000000f12a
- (id)initWithDevice:(id)arg1 generateResourceRefs:(_Bool)arg2 objectDelegate:(id)arg3 createQueues:(_Bool)arg4;	// IMP=0x000000000000f020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

