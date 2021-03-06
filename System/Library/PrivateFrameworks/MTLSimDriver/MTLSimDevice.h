//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLDevice.h>

#import <MTLSimDriver/MTLDeviceSPI-Protocol.h>

@class MTLResourceListPool, MTLSerializer, MTLTargetDeviceArchitecture, NSArray, NSDictionary, NSObject, NSString;
@protocol MTLDeviceSPI, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MTLSimDevice : _MTLDevice <MTLDeviceSPI>
{
    struct MTLSimConnection _mainConnection;	// 408 = 0x198
    struct MTLSimConnection _resourceConnection;	// 424 = 0x1a8
    struct MTLSimConnection _compilerConnection;	// 440 = 0x1b8
    MTLSerializer *_serializer;	// 456 = 0x1c8
    unsigned long long _processRef;	// 464 = 0x1d0
    unsigned int _deserializerVersion;	// 472 = 0x1d8
    unsigned long long _registryID;	// 480 = 0x1e0
    NSObject<OS_dispatch_queue> *_commandBufferQueue;	// 488 = 0x1e8
    struct unordered_map<unsigned int, MTLSimCommandBuffer *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLSimCommandBuffer *>>> _commandBuffers;	// 496 = 0x1f0
    MTLResourceListPool *_resourceListPool;	// 536 = 0x218
    id <MTLDeviceSPI> _deviceWrapper;	// 544 = 0x220
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _notificationMutex;	// 552 = 0x228
    void *_notifications;	// 616 = 0x268
    CDStruct_da2e99ad _maxThreadsPerThreadgroup;	// 624 = 0x270
    unsigned long long _maxThreadgroupMemoryLength;	// 648 = 0x288
    _Bool headless;	// 656 = 0x290
    _Bool lowPower;	// 657 = 0x291
    _Bool hasUnifiedMemory;	// 658 = 0x292
    _Bool removable;	// 659 = 0x293
    _Bool programmableSamplePositionsSupported;	// 660 = 0x294
    _Bool depth24Stencil8PixelFormatSupported;	// 661 = 0x295
    _Bool supportPriorityBand;	// 662 = 0x296
    _Bool metalAssertionsEnabled;	// 663 = 0x297
    unsigned long long currentAllocatedSize;	// 664 = 0x298
    unsigned long long singleFPConfig;	// 672 = 0x2a0
    unsigned long long sharedMemorySize;	// 680 = 0x2a8
    unsigned long long halfFPConfig;	// 688 = 0x2b0
    unsigned long long doubleFPConfig;	// 696 = 0x2b8
    unsigned long long dedicatedMemorySize;	// 704 = 0x2c0
    unsigned long long recommendedMaxWorkingSetSize;	// 712 = 0x2c8
}

+ (void)registerDevices;	// IMP=0x0000000000006929
- (id).cxx_construct;	// IMP=0x0000000000007831
- (void).cxx_destruct;	// IMP=0x0000000000007820
@property(readonly) unsigned long long recommendedMaxWorkingSetSize; // @synthesize recommendedMaxWorkingSetSize;
@property(readonly) unsigned long long dedicatedMemorySize; // @synthesize dedicatedMemorySize;
@property(readonly) unsigned long long doubleFPConfig; // @synthesize doubleFPConfig;
@property(readonly) unsigned long long halfFPConfig; // @synthesize halfFPConfig;
@property(nonatomic) _Bool metalAssertionsEnabled; // @synthesize metalAssertionsEnabled;
@property(readonly) unsigned long long sharedMemorySize; // @synthesize sharedMemorySize;
@property(readonly) unsigned long long singleFPConfig; // @synthesize singleFPConfig;
@property(readonly) _Bool supportPriorityBand; // @synthesize supportPriorityBand;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) _Bool depth24Stencil8PixelFormatSupported; // @synthesize depth24Stencil8PixelFormatSupported;
@property(readonly) unsigned long long currentAllocatedSize; // @synthesize currentAllocatedSize;
@property(readonly) unsigned long long registryID; // @synthesize registryID=_registryID;
@property(readonly) MTLResourceListPool *resourceListPool; // @synthesize resourceListPool=_resourceListPool;
@property(readonly, getter=areProgrammableSamplePositionsSupported) _Bool programmableSamplePositionsSupported; // @synthesize programmableSamplePositionsSupported;
@property(readonly, getter=isRemovable) _Bool removable; // @synthesize removable;
@property(readonly) _Bool hasUnifiedMemory; // @synthesize hasUnifiedMemory;
@property(readonly, getter=isLowPower) _Bool lowPower; // @synthesize lowPower;
@property(readonly, getter=isHeadless) _Bool headless; // @synthesize headless;
@property(readonly) MTLSerializer *serializer; // @synthesize serializer=_serializer;
@property(readonly) unsigned long long maxBufferLength;
@property(readonly) unsigned long long featureProfile;
@property(readonly) unsigned long long maxThreadgroupMemoryLength;
@property(readonly) CDStruct_da2e99ad maxThreadsPerThreadgroup;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;	// IMP=0x00000000000073c2
- (id)newSharedEventWithHandle:(id)arg1;	// IMP=0x00000000000070af
- (id)newSharedEvent;	// IMP=0x0000000000006e9d
- (id)newEvent;	// IMP=0x0000000000006e8b
@property(readonly) _Bool deserializerSupportsSharedEvents;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000006e53
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006e32
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x0000000000006cc9
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x0000000000006b06
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;	// IMP=0x0000000000006ae0
- (_Bool)setResourcesPurgeableState:(id *)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long *)arg3 count:(int)arg4;	// IMP=0x0000000000006ad8
- (id)newCommandQueueWithDescriptor:(id)arg1;	// IMP=0x0000000000006952
- (id)vendorName;	// IMP=0x0000000000006945
- (_Bool)supportsSampleCount:(unsigned long long)arg1;	// IMP=0x000000000000692f
- (int)llvmVersion;	// IMP=0x000000000000691e
- (id)productName;	// IMP=0x0000000000006911
- (id)newTiledTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;	// IMP=0x00000000000068ed
- (id)newTiledTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3 descriptor:(id)arg4 offset:(unsigned long long)arg5 bytesPerRow:(unsigned long long)arg6;	// IMP=0x00000000000068c9
- (id)newIndirectRenderCommandEncoderWithBuffer:(id)arg1;	// IMP=0x00000000000068a5
- (id)newIndirectComputeCommandEncoderWithBuffer:(id)arg1;	// IMP=0x0000000000006881
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000000685d
- (id)newArgumentEncoderWithLayout:(id)arg1;	// IMP=0x00000000000065e7
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1;	// IMP=0x00000000000063a1
- (id)familyName;	// IMP=0x0000000000006394
- (id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2 errorMessage:(id *)arg3;	// IMP=0x00000000000060b6
- (id)newComputeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x000000000000609f
- (id)wrapComputeState:(id)arg1 descriptor:(id)arg2;	// IMP=0x000000000000607b
- (id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1 compileTimeOutput:(id)arg2;	// IMP=0x000000000000600c
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 vertexCompileTimeOutput:(id)arg3 fragmentCompileTimeOutput:(id)arg4;	// IMP=0x0000000000005ef3
- (CDStruct_04792461)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;	// IMP=0x0000000000005eeb
- (id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 errorMessage:(id *)arg4;	// IMP=0x0000000000005c6b
- (id)newVertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x0000000000005c54
- (id)newFragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x0000000000005c3d
- (id)newFunctionVariantWithCompilerOutput:(id)arg1 functionType:(unsigned long long)arg2;	// IMP=0x0000000000005965
- (id)reportLeaks;	// IMP=0x0000000000005882
- (void)freeVertexFunctionKey:(void *)arg1 vertexKeySize:(unsigned long long)arg2;	// IMP=0x000000000000587c
- (void)freeFragmentFunctionKey:(void *)arg1 fragmentKeySize:(unsigned long long)arg2;	// IMP=0x0000000000005876
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long *)arg4;	// IMP=0x0000000000005867
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long *)arg4;	// IMP=0x0000000000005858
- (id)wrapRenderState:(id)arg1 descriptor:(id)arg2;	// IMP=0x0000000000005834
- (void)registerViewTexture:(id)arg1 baseTextureView:(id)arg2;	// IMP=0x000000000000582e
@property(readonly) _Bool deserializerSupportsSharedTextures;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;	// IMP=0x0000000000005413
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x0000000000005145
- (id)newSamplerStateWithDescriptor:(id)arg1;	// IMP=0x0000000000004ffd
- (void)dispatchNotificationWithReference:(unsigned int)arg1;	// IMP=0x0000000000004edc
- (void)registerEventNotification:(unsigned int)arg1 listener:(id)arg2 event:(id)arg3 value:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000000004dfb
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000004dd7
- (id)newHeapWithDescriptor:(id)arg1;	// IMP=0x0000000000004ac1
- (id)newFence;	// IMP=0x000000000000482c
- (id)newDepthStencilStateWithDescriptor:(id)arg1;	// IMP=0x00000000000046e4
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000046bb
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x000000000000468d
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000004658
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 pointer:(void *)arg3 copyBytes:(_Bool)arg4 deallocator:(CDUnknownBlockType)arg5;	// IMP=0x000000000000439d
- (void)releaseCommandBufferRef:(unsigned int)arg1;	// IMP=0x00000000000042e8
- (unsigned int)registerCommandBuffer:(id)arg1;	// IMP=0x0000000000004155
- (id)commandBufferForReference:(unsigned int)arg1;	// IMP=0x0000000000003fe8
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;	// IMP=0x0000000000003d6f
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000003bd9
- (unsigned int)getNewResourceID;	// IMP=0x0000000000003bc6
- (id)compiler;	// IMP=0x0000000000003a9d
- (id)_deviceWrapper;	// IMP=0x0000000000003a73
- (void)_setDeviceWrapper:(id)arg1;	// IMP=0x0000000000003a62
- (void)dealloc;	// IMP=0x0000000000003969
- (id)init;	// IMP=0x0000000000003126
@property(readonly) NSObject<OS_xpc_object> *compilerConnection;
@property(readonly) NSObject<OS_xpc_object> *resourceConnection;
@property(readonly) NSObject<OS_xpc_object> *mainConnection;

// Remaining properties
@property(readonly) unsigned long long argumentBuffersSupport;
@property(nonatomic) unsigned long long commandBufferErrorOptions;
@property(readonly) NSArray *counterSets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) long long defaultTextureWriteRoundingMode;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long deviceCreationFlags;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly, getter=isFloat32FilteringSupported) _Bool float32FilteringSupported;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) _Bool gpuAssertionsEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) const CDStruct_e1810d8e *limits;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property(readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property(readonly) unsigned long long maxArgumentBufferSamplerCount;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) unsigned long long maxComputeAttributes;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxConstantBufferArguments;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxFenceInstances;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long maxIndirectBuffers;
@property(readonly) unsigned long long maxIndirectSamplers;
@property(readonly) unsigned long long maxIndirectSamplersPerDevice;
@property(readonly) unsigned long long maxIndirectTextures;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) float maxLineWidth;
@property(readonly) float maxPointSize;
@property(readonly) unsigned long long maxPredicatedNestingDepth;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) unsigned long long maxTextureBufferWidth;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTileBuffers;
@property(readonly) unsigned long long maxTileInlineDataSize;
@property(readonly) unsigned long long maxTileSamplers;
@property(readonly) unsigned long long maxTileTextures;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxViewportCount;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long minTilePixels;
@property(readonly, getter=isMsaa32bSupported) _Bool msaa32bSupported;
@property(readonly) NSString *name;
@property(readonly, getter=isPlacementHeapSupported) _Bool placementHeapSupported;
@property(copy, nonatomic) NSDictionary *pluginData;
@property(readonly, getter=isQuadDataSharingSupported) _Bool quadDataSharingSupported;
@property(readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported;
@property(readonly) unsigned long long readWriteTextureSupport;
@property _Bool shaderDebugInfoCaching;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supports2DLinearTexArraySPI;
@property(readonly, nonatomic) _Bool supports32BitFloatFiltering;
@property(readonly, nonatomic) _Bool supports32BitMSAA;
@property(readonly, nonatomic) _Bool supports32bpcMSAATextures;
@property(readonly, nonatomic) _Bool supports3DASTCTextures;
@property(readonly, nonatomic) _Bool supports3DBCTextures;
@property(readonly, nonatomic) _Bool supportsASTCTextureCompression;
@property(readonly, nonatomic) _Bool supportsAlphaYUVFormats;
@property(readonly, nonatomic) _Bool supportsArgumentBuffersTier2;
@property(readonly, nonatomic) _Bool supportsArrayOfSamplers;
@property(readonly, nonatomic) _Bool supportsArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsBCTextureCompression;
@property(readonly, nonatomic) _Bool supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) _Bool supportsBinaryArchives;
@property(readonly, nonatomic) _Bool supportsBinaryLibraries;
@property(readonly, nonatomic) _Bool supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) _Bool supportsBufferPrefetchStatistics;
@property(readonly, nonatomic) _Bool supportsBufferWithIOSurface;
@property(readonly, nonatomic) _Bool supportsBufferlessClientStorageTexture;
@property(readonly, nonatomic) _Bool supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) _Bool supportsCommandBufferJump;
@property(readonly, nonatomic) _Bool supportsCompressedTextureViewSPI;
@property(readonly, nonatomic) _Bool supportsComputeMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) _Bool supportsCountingOcclusionQuery;
@property(readonly, nonatomic) _Bool supportsCustomBorderColor;
@property(readonly, nonatomic) _Bool supportsDepthClipMode;
@property(readonly, nonatomic) _Bool supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) _Bool supportsDynamicControlPointCount;
@property(readonly, nonatomic) _Bool supportsDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsExtendedXR10Formats;
@property(readonly, nonatomic) _Bool supportsExtendedYUVFormats;
@property(readonly, nonatomic) _Bool supportsFP32TessFactors;
@property(readonly, nonatomic) _Bool supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) _Bool supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsFloat16InfNanFiltering;
@property(readonly, nonatomic) _Bool supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) _Bool supportsFragmentBufferWrites;
@property(readonly, nonatomic) _Bool supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) _Bool supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsGPUStatistics;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocation;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationCompute;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationRender;
@property(readonly, nonatomic) _Bool supportsIABHashForTools;
@property(readonly, nonatomic) _Bool supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) _Bool supportsImageBlocks;
@property(readonly, nonatomic) _Bool supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) _Bool supportsIndirectStageInRegion;
@property(readonly, nonatomic) _Bool supportsIndirectTessellation;
@property(readonly, nonatomic) _Bool supportsIndirectTextures;
@property(readonly, nonatomic) _Bool supportsIndirectWritableTextures;
@property(readonly, nonatomic) _Bool supportsInt64;
@property(readonly, nonatomic) _Bool supportsInvariantVertexPosition;
@property(readonly, nonatomic) _Bool supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) _Bool supportsLateEvalEvent;
@property(readonly, nonatomic) _Bool supportsLayeredRendering;
@property(readonly, nonatomic) _Bool supportsLimitedYUVFormats;
@property(readonly, nonatomic) _Bool supportsLinearTexture2DArray;
@property(readonly, nonatomic) _Bool supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolve;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolve;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) _Bool supportsMemoryOrderAtomics;
@property(readonly, nonatomic) _Bool supportsMemorylessRenderTargets;
@property(readonly, nonatomic) _Bool supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) _Bool supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) _Bool supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) _Bool supportsNativeHardwareFP16;
@property(readonly, nonatomic) _Bool supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) _Bool supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) _Bool supportsNonSquareTileShaders;
@property(readonly, nonatomic) _Bool supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) _Bool supportsNonZeroTextureWriteLOD;
@property(readonly, nonatomic) _Bool supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) _Bool supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) _Bool supportsPipelineLibraries;
@property(readonly, nonatomic) _Bool supportsPlacementHeaps;
@property(readonly, nonatomic) _Bool supportsPostDepthCoverage;
@property(readonly, nonatomic) _Bool supportsPrimitiveRestartOverride;
@property(readonly, nonatomic) _Bool supportsProgrammableBlending;
@property(readonly, nonatomic) _Bool supportsProgrammableSamplePositions;
@property(readonly, nonatomic) _Bool supportsPublicXR10Formats;
@property(readonly, nonatomic) _Bool supportsPullModelInterpolation;
@property(readonly, nonatomic) _Bool supportsQuadGroup;
@property(readonly, nonatomic) _Bool supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroups;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroupsColorAttachment;
@property(readonly, nonatomic) _Bool supportsReadWriteBufferArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) _Bool supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) _Bool supportsRenderDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsRenderMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) _Bool supportsRenderTargetTextureRotation;
@property(readonly, nonatomic) _Bool supportsRenderTextureWrites;
@property(readonly, nonatomic) _Bool supportsRenderToLinearTextures;
@property(readonly, nonatomic) _Bool supportsSIMDGroup;
@property(readonly, nonatomic) _Bool supportsSIMDReduction;
@property(readonly, nonatomic) _Bool supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsSRGBwrites;
@property(readonly, nonatomic) _Bool supportsSamplerCompareFunction;
@property(readonly, nonatomic) _Bool supportsSeparateDepthStencil;
@property(readonly, nonatomic) _Bool supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) _Bool supportsShaderLODAverage;
@property(readonly, nonatomic) _Bool supportsShaderMinLODClamp;
@property(readonly, nonatomic) _Bool supportsSharedStorageHeapResources;
@property(readonly, nonatomic) _Bool supportsSharedStorageTextures;
@property(readonly, nonatomic) _Bool supportsSharedTextureHandles;
@property(readonly, nonatomic) _Bool supportsStackOverflowErrorCode;
@property(readonly, nonatomic) _Bool supportsStatefulDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsStencilFeedback;
@property(readonly, nonatomic) _Bool supportsStreamingCodecSignaling;
@property(readonly, nonatomic) _Bool supportsTLS;
@property(readonly, nonatomic) _Bool supportsTessellation;
@property(readonly, nonatomic) _Bool supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) _Bool supportsTextureCubeArray;
@property(readonly, nonatomic) _Bool supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) _Bool supportsTextureSwizzle;
@property(readonly, nonatomic) _Bool supportsTileShaders;
@property(readonly, nonatomic) _Bool supportsUnalignedVertexFetch;
@property(readonly, nonatomic) _Bool supportsViewportAndScissorArray;
@property(readonly, nonatomic) _Bool supportsWritableArrayOfTextures;
@property(readonly) MTLTargetDeviceArchitecture *targetDeviceArchitecture;
@property(readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;

@end

