//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MTLDebugDevice
{
    struct MTLSamplerDescriptorHashMap _argumentBufferSamplers;	// 96 = 0x60
    struct os_unfair_lock_s _referenceTrackingCommandBufferLock;	// 144 = 0x90
    struct unordered_set<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> _referenceTrackingCommandBuffers;	// 152 = 0x98
    struct CheckerboardRenderTargetPipelineCache _checkerboardRTPipelineCache;	// 192 = 0xc0
    _Bool _storeValidationEnabled;	// 280 = 0x118
    _Bool _loadValidationEnabled;	// 281 = 0x119
}

+ (_Bool)complainAboutSloppyTextureUsage;	// IMP=0x000000000005ca00
- (id).cxx_construct;	// IMP=0x0000000000063c2c
- (void).cxx_destruct;	// IMP=0x0000000000063bf0
@property(readonly) _Bool loadValidationEnabled; // @synthesize loadValidationEnabled=_loadValidationEnabled;
@property(readonly) _Bool storeValidationEnabled; // @synthesize storeValidationEnabled=_storeValidationEnabled;
- (id)getSamplerStateForBaseObject:(id)arg1 descriptor:(id)arg2;	// IMP=0x0000000000063b2d
- (id)getDepthStencilStateForBaseObject:(id)arg1 descriptor:(id)arg2;	// IMP=0x0000000000063a0b
- (id)getFunctionForBaseObject:(id)arg1 library:(id)arg2;	// IMP=0x0000000000063977
- (id)getDynamicLibraryForBaseObject:(id)arg1;	// IMP=0x00000000000638e0
- (void)clearRenderEncoder:(id)arg1 writeMask:(unsigned long long)arg2 withCheckerboard:(float *)arg3;	// IMP=0x00000000000633e0
- (void)notifyExternalReferencesNonZeroOnDealloc:(id)arg1;	// IMP=0x0000000000063259
- (void)removeReferenceTrackingCommandBuffer:(id)arg1;	// IMP=0x00000000000631fe
- (void)addReferenceTrackingCommandBuffer:(id)arg1;	// IMP=0x00000000000631b0
- (id)newFence;	// IMP=0x0000000000063130
- (id)newLateEvalEvent;	// IMP=0x000000000006302d
- (id)newSharedEventWithHandle:(id)arg1;	// IMP=0x0000000000062f7c
- (id)newSharedEventWithMachPort:(unsigned int)arg1;	// IMP=0x0000000000062ecd
- (id)newSharedEvent;	// IMP=0x0000000000062e24
- (id)newEvent;	// IMP=0x0000000000062d7b
- (id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000062c93
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x0000000000062c16
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x0000000000062af2
- (const struct MTLTargetDeviceArch *)targetDeviceInfo;	// IMP=0x0000000000062ac7
- (id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(_Bool)arg2;	// IMP=0x0000000000062a48
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;	// IMP=0x00000000000629a0
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;	// IMP=0x0000000000062742
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006265a
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000062595
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006215e
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000061d10
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061ba3
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061aa5
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x0000000000061a2b
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x00000000000617e2
- (id)newDagStringWithGraphs:(id)arg1;	// IMP=0x00000000000617b1
- (id)newLibraryWithDescriptorSPI:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006179f
- (void)newLibraryWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006178d
- (id)newLibraryWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006177b
- (id)newLibraryWithStitchedDescriptorSPI:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000061769
- (void)newLibraryWithStitchedDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006166d
- (id)newLibraryWithStitchedDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000615d9
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000613ee
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000061389
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000061326
- (void)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060fe4
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000060fcb
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000060f9d
- (id)_newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000060cf3
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060a65
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060a00
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006099d
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000060837
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000006081e
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000607f0
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060474
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006040f
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000603ac
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000600d4
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000600bb
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006008d
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005fcb2
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005fc4d
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005fbd0
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005fba2
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000005fb89
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000005f845
- (void)validateLinkedFunctions:(id)arg1 context:(struct _MTLMessageContext *)arg2;	// IMP=0x000000000005f36b
- (_Bool)validateDynamicLibraryURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005f2de
- (_Bool)validateDynamicLibrary:(id)arg1 state:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000005f247
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000005f159
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005f01b
- (id)newDynamicLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005eed8
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005ecf9
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000005eb98
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005eb81
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005eb6f
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005eaa2
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005e90c
- (id)newDefaultLibrary;	// IMP=0x000000000005e88e
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005e7de
- (void)notifySamplerStateDeallocated:(id)arg1;	// IMP=0x000000000005e782
- (id)newSamplerStateWithDescriptor:(id)arg1;	// IMP=0x000000000005e69b
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x000000000005e44b
- (id)newDepthStencilStateWithDescriptor:(id)arg1;	// IMP=0x000000000005dffb
- (id)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x000000000005de46
- (id)newArgumentEncoderWithLayout:(id)arg1;	// IMP=0x000000000005ddcb
- (id)newArgumentEncoderWithArguments:(id)arg1;	// IMP=0x000000000005dccb
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000005da2f
- (id)newBufferWithDescriptor:(id)arg1;	// IMP=0x000000000005d7c0
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x000000000005d5cb
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000005d467
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000005d36b
- (void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2 context:(struct _MTLMessageContext *)arg3;	// IMP=0x000000000005d2c5
- (void)validateResourceOptions:(unsigned long long)arg1 isTexture:(_Bool)arg2 isIOSurface:(_Bool)arg3 context:(struct _MTLMessageContext *)arg4;	// IMP=0x000000000005d12c
- (void)validateMemorylessResource:(id)arg1 context:(struct _MTLMessageContext *)arg2;	// IMP=0x000000000005d05a
- (id)newHeapWithDescriptor:(id)arg1;	// IMP=0x000000000005ce84
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000005ce44
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;	// IMP=0x000000000005cda9
- (id)newCommandQueueWithDescriptor:(id)arg1;	// IMP=0x000000000005cd30
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;	// IMP=0x000000000005ccb7
- (id)newCommandQueue;	// IMP=0x000000000005cc4f
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;	// IMP=0x000000000005ca0c

@end

