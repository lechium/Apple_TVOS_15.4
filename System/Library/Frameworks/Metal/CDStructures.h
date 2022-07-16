//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal, MTLComputePassSampleBufferAttachmentDescriptorArrayInternal, MTLFunctionConstantValues, MTLLinkedFunctions, MTLPipelineBufferDescriptorArrayInternal, MTLRenderPassColorAttachmentDescriptorArrayInternal, MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal, MTLRenderPipelineColorAttachmentDescriptorArrayInternal, MTLResourceList, MTLStageInputOutputDescriptor, MTLStencilDescriptorInternal, MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, MTLVertexDescriptorInternal, NSArray, NSData, NSDictionary, NSObject, NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Allocator;

struct DebugLocation {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct DebugSubProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct FileIdentifier {
    int dev;
    unsigned long long ino;
};

struct FlatBufferBuilder {
    struct vector_downward buf_;
    unsigned int num_field_loc;
    unsigned short max_voffset_;
    _Bool nested;
    _Bool finished;
    unsigned long long minalign_;
    _Bool force_defaults_;
    _Bool dedup_vtables_;
    void *string_pool;
};

struct IndirectArgumentBufferCapabilities {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :29;
};

struct MTLArgumentDescriptorPrivate {
    unsigned long long dataType;
    unsigned long long index;
    unsigned long long arrayLength;
    unsigned long long access;
    unsigned long long textureType;
    unsigned long long constantBlockAlignment;
};

struct MTLAttributeFlags {
    union {
        struct {
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :5;
        } _field1;
        unsigned char _field2;
    } _field1;
};

struct MTLBlitPassDescriptorPrivate {
    MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments;
};

struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate {
    id sampleBuffer;
    unsigned long long startOfEncoderSampleIndex;
    unsigned long long endOfEncoderSampleIndex;
};

struct MTLCompileLibraryRequestData {
    _Bool _field1;
    id _field2;
    unsigned int _field3;
    id _field4;
    id _field5;
};

struct MTLCompilerCache {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    int _field3;
    int _field4;
};

struct MTLCompilerConnectionManager {
    CDUnknownFunctionPointerType *_field1;
};

struct MTLCompilerFunctionRequest {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    id _field3;
    id _field4;
    id _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    id _field9;
    id _field10;
    unsigned long long _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    int _field16;
    _Bool _field17;
    unsigned int _field18;
};

struct MTLComputePassDescriptorPrivate {
    unsigned long long dispatchType;
    MTLComputePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments;
    _Bool allowCommandEncoderCoalescing;
};

struct MTLComputePassSampleBufferAttachmentDescriptorPrivate {
    id sampleBuffer;
    unsigned long long startOfEncoderSampleIndex;
    unsigned long long endOfEncoderSampleIndex;
};

struct MTLComputePipelineDescriptorPrivate {
    NSString *label;
    id computeFunction;
    _Bool threadGroupSizeIsMultipleOfThreadExecutionWidth;
    unsigned short maxTotalThreadsPerThreadgroup;
    MTLStageInputOutputDescriptor *stageInputDescriptor;
    NSDictionary *driverCompilerOptions;
    MTLPipelineBufferDescriptorArrayInternal *buffers;
    NSArray *binaryArchives;
    union {
        NSArray *preloadedLibraries;
        NSArray *insertLibraries;
    } ;
    id pipelineLibrary;
    _Bool supportIndirectCommandBuffers;
    long long textureWriteRoundingMode;
    _Bool forceResourceIndex;
    unsigned long long resourceIndex;
    NSDictionary *pluginData;
    unsigned int openGLMode:1;
    unsigned int openCLMode:1;
    unsigned int reserved:30;
    NSArray *functionPointers;
    NSDictionary *functionPointerGroups;
    MTLLinkedFunctions *linkedFunctions;
};

struct MTLDepthStencilDescriptorPrivate {
    MTLStencilDescriptorInternal *frontFaceStencil;
    MTLStencilDescriptorInternal *backFaceStencil;
    unsigned long long depthCompareFunction;
    _Bool depthWriteEnabled;
    NSString *label;
};

struct MTLDispatch {
    struct MTLDispatch *_field1;
    CDUnknownBlockType _field2;
};

struct MTLFunctionData {
    unsigned long long bitCodeOffset;
    unsigned long long bitCodeFileSize;
    unsigned long long publicArgumentsOffset;
    unsigned long long privateArgumentsOffset;
    unsigned long long sourceArchiveOffset;
    unsigned short airMajorVersion;
    unsigned short airMinorVersion;
    unsigned short languageMajorVersion;
    unsigned short languageMinorVersion;
    CDStruct_41a22ec7 bitcodeHash;
    unsigned char bitcodeType;
    NSData *pluginData;
    unsigned char renderTargetArrayIndexType;
    unsigned int patchType:2;
    unsigned int controlPointCount:6;
    NSObject *functionInputs;
};

struct MTLFunctionDescriptorPrivate {
    NSString *name;
    NSString *specializedName;
    unsigned long long options;
    MTLFunctionConstantValues *constantValues;
    NSArray *binaryArchives;
    _Bool applyFunctionConstants;
    NSArray *privateFunctions;
};

struct MTLFunctionId {
    CDStruct_41a22ec7 _field1[3];
    unsigned int _field2;
};

struct MTLHeapDescriptorPrivate {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct MTLIndirectCommandBufferDescriptorState {
    unsigned long long commandTypes;
    _Bool inheritPipelineState;
    _Bool inheritBuffers;
    unsigned long long maxVertexBufferBindCount;
    unsigned long long maxFragmentBufferBindCount;
    unsigned long long maxKernelBufferBindCount;
    unsigned long long resourceIndex;
};

struct MTLLibraryContainer {
    struct MTLPipelineCollection *_field1;
    _Atomic int _field2;
    CDStruct_41a22ec7 _field3;
    struct MTLLibraryData *_field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
};

struct MTLLibraryData {
    CDUnknownFunctionPointerType *_field1;
    CDStruct_41a22ec7 _field2;
    _Atomic int _field3;
    id _field4;
    id _field5;
};

struct MTLLinkedFunctionsPrivate {
    NSArray *functions;
    NSArray *privateFunctions;
    NSDictionary *groups;
};

struct MTLLoaderSliceIdentifier {
    int _field1;
    int _field2;
};

struct MTLPipelineBufferDescriptorPrivate {
    union {
        struct {
            unsigned int mutability:2;
        } ;
        CDStruct_914d909e ;
    } ;
};

struct MTLPipelineCollection;

struct MTLPipelineLibraryBuilder {
    id _field1;
    id _field2;
};

struct MTLRenderPassAttachmentDescriptorPrivate {
    id texture;
    unsigned long long level;
    unsigned long long slice;
    unsigned long long depthPlane;
    unsigned long long loadAction;
    unsigned long long storeAction;
    unsigned long long storeActionOptions;
    CDStruct_3ead2808 clearColor;
    double clearDepth;
    unsigned int clearStencil;
    unsigned long long stencilResolveFilter;
    id resolveTexture;
    unsigned long long resolveLevel;
    unsigned long long resolveSlice;
    unsigned long long resolveDepthPlane;
    unsigned long long resolveFilter;
    unsigned long long width;
    unsigned long long height;
    _Bool yInvert;
};

struct MTLRenderPassDescriptorPrivate {
    MTLRenderPassColorAttachmentDescriptorArrayInternal *attachments;
    id visibilityResultBuffer;
    unsigned long long renderTargetWidth;
    unsigned long long renderTargetHeight;
    unsigned long long defaultColorSampleCount;
    _Bool fineGrainedBackgroundVisibilityEnabled;
    _Bool ditherEnabled;
    _Bool openGLModeEnabled;
    unsigned long long renderTargetArrayLength;
    unsigned long long tileWidth;
    unsigned long long tileHeight;
    union {
        unsigned long long defaultSampleCount;
        unsigned long long defaultRasterSampleCount;
    } ;
    unsigned long long imageBlockSampleLength;
    unsigned long long threadgroupMemoryLength;
    CDStruct_6e3f967a customSamplePositions[4];
    unsigned long long numCustomSamplePositions;
    MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments;
    _Bool pointCoordYFlipEnabled;
};

struct MTLRenderPassSampleBufferAttachmentDescriptorPrivate {
    id sampleBuffer;
    unsigned long long startOfVertexSampleIndex;
    unsigned long long endOfVertexSampleIndex;
    unsigned long long startOfFragmentSampleIndex;
    unsigned long long endOfFragmentSampleIndex;
};

struct MTLRenderPipelineAttachmentDescriptorPrivate {
    union {
        struct {
            unsigned int blendingEnabled:1;
            unsigned int rgbBlendOperation:3;
            unsigned int alphaBlendOperation:3;
            unsigned int sourceRGBBlendFactor:5;
            unsigned int sourceAlphaBlendFactor:5;
            unsigned int destinationRGBBlendFactor:5;
            unsigned int destinationAlphaBlendFactor:5;
            unsigned int writeMask:4;
            unsigned int logicOpEnabled:1;
            unsigned int logicOp:4;
            unsigned int pixelFormat:28;
        } ;
        CDStruct_914d909e ;
    } ;
};

struct MTLRenderPipelineDescriptorPrivate {
    MTLRenderPipelineColorAttachmentDescriptorArrayInternal *attachments;
    unsigned long long rtBlendDescHash[8];
    unsigned long long depthAttachmentPixelFormat;
    unsigned long long stencilAttachmentPixelFormat;
    unsigned long long tessellationPartitionMode;
    unsigned long long maxTessellationFactor;
    _Bool tessellationFactorScaleEnabled;
    unsigned long long tessellationFactorFormat;
    unsigned long long tessellationControlPointIndexType;
    unsigned long long tessellationFactorStepFunction;
    unsigned long long tessellationOutputWindingOrder;
    unsigned long long postVertexDumpBufferIndex;
    _Bool supportIndirectCommandBuffers;
    long long textureWriteRoundingMode;
    CDUnion_a2c16d69 ;
    unsigned long long sampleMask;
    union {
        unsigned int sampleCoverageHash;
        float sampleCoverage;
    } ;
    unsigned long long paddingToRemove;
    unsigned long long colorSampleCount;
    union {
        unsigned int miscHash[2];
        struct {
            unsigned int alphaToCoverageEnabled:1;
            unsigned int alphaToOneEnabled:1;
            unsigned int rasterizationEnabled:1;
            unsigned int inputPrimitiveTopology:2;
            unsigned int private0:1;
            unsigned int depthStencilWriteDisabled:1;
            unsigned int openGLMode:1;
            unsigned int sampleCoverageInvert:1;
            unsigned int private4:1;
            unsigned int private5:1;
            unsigned int twoSideEnabled:1;
            unsigned int pointSizeOutputVS:1;
            unsigned int pointCoordLowerLeft:1;
            unsigned int pointSmoothEnabled:1;
            unsigned int clipDistanceEnableMask:8;
            unsigned int alphaTestFunc:3;
            unsigned int alphaTestEnabled:1;
            unsigned int logicOp:4;
            unsigned int logicOpEnabled:1;
            unsigned int forceResourceIndex:1;
            unsigned int forceSoftwareVertexFetch:1;
            unsigned int private6:2;
        } ;
    } ;
    unsigned int vertexDepthCompareClampMask;
    unsigned int fragmentDepthCompareClampMask;
    unsigned long long resourceIndex;
    NSString *label;
    id vertexFunction;
    id fragmentFunction;
    MTLVertexDescriptorInternal *vertexDescriptor;
    MTLPipelineBufferDescriptorArrayInternal *vertexBuffers;
    MTLPipelineBufferDescriptorArrayInternal *fragmentBuffers;
    NSDictionary *driverCompilerOptions;
    id pipelineLibrary;
    void *pad0;
    void *pad1;
    NSDictionary *pluginData;
    NSArray *binaryArchives;
    MTLLinkedFunctions *vertexLinkedFunctions;
    MTLLinkedFunctions *fragmentLinkedFunctions;
    NSArray *vertexPreloadedLibraries;
    NSArray *fragmentPreloadedLibraries;
};

struct MTLResourceListChunk {
    int currentEntry;
    void **entries;
    struct MTLResourceListChunk *nextChunk;
};

struct MTLSamplerDescriptorPrivate {
    union {
        struct {
            unsigned int minFilter:2;
            unsigned int magFilter:2;
            unsigned int mipFilter:2;
            unsigned int sAddressMode:3;
            unsigned int tAddressMode:3;
            unsigned int rAddressMode:3;
            unsigned int normalizedCoords:1;
            unsigned int lodAverage:1;
            unsigned int compareFunction:3;
            unsigned int supportArgumentBuffers:1;
            unsigned int forceResourceIndex:1;
        } ;
        unsigned int miscHash;
    } ;
    union {
        unsigned int lodMinClampHash;
        float lodMinClamp;
    } ;
    union {
        unsigned int lodMaxClampHash;
        float lodMaxClamp;
    } ;
    union {
        unsigned int lodBiasHash;
        float lodBias;
    } ;
    unsigned long long maxAnisotropy;
    NSString *label;
    unsigned long long resourceIndex;
};

struct MTLSharedEventHandlePrivate {
    unsigned int _field1;
    id _field2;
    unsigned long long _field3;
};

struct MTLStencilDescriptorPrivate {
    unsigned long long stencilCompareFunction;
    unsigned long long stencilFailureOperation;
    unsigned long long depthFailureOperation;
    unsigned long long depthStencilPassOperation;
    unsigned int readMask;
    unsigned int writeMask;
};

struct MTLSyncDispatch {
    struct MTLSyncDispatch *_field1;
    CDUnknownBlockType _field2;
};

struct MTLTargetDeviceArch {
    unsigned long long _field1;
    unsigned int _field2;
    char *_field3;
};

struct MTLTextureDescriptorPrivate {
    unsigned long long textureType;
    unsigned long long pixelFormat;
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
    unsigned long long mipmapLevelCount;
    unsigned long long sampleCount;
    unsigned long long arrayLength;
    _Bool zeroFill;
    unsigned long long rotation;
    _Bool framebufferOnly;
    _Bool isDrawable;
    unsigned int swizzle;
    _Bool writeSwizzleEnabled;
    unsigned long long compressionMode;
    union {
        unsigned long long textureUsage;
        unsigned long long usage;
    } ;
    unsigned long long resourceOptions;
    _Bool allowGPUOptimizedContents;
    _Bool forceResourceIndex;
    unsigned long long resourceIndex;
    unsigned long long protectionOptions;
    unsigned long long resolvedUsage;
    unsigned long long cpuCacheMode;
    unsigned long long storageMode;
};

struct MTLTileRenderPipelineAttachmentDescriptorPrivate {
    union {
        struct {
            unsigned int pixelFormat;
        } ;
        struct {
            unsigned int bits;
        } ;
    } ;
};

struct MTLTileRenderPipelineDescriptorPrivate {
    MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal *attachments;
    CDUnion_a2c16d69 ;
    NSString *label;
    id tileFunction;
    _Bool threadgroupSizeMatchesTileSize;
    unsigned long long paddingToRemove;
    unsigned long long colorSampleCount;
    MTLPipelineBufferDescriptorArrayInternal *tileBuffers;
    unsigned short maxTotalThreadsPerThreadgroup;
    long long textureWriteRoundingMode;
    NSDictionary *pluginData;
    NSArray *binaryArchives;
    MTLLinkedFunctions *linkedFunctions;
    NSArray *preloadedLibraries;
};

struct MultiLevelPipelineCache {
    _Bool _field1;
    id _field2;
    id _field3;
    struct MTLCompilerCache *_field4;
    struct MTLCompilerCache *_field5;
    struct MTLCompilerCache *_field6;
    _Bool _field7;
    _Bool _field8;
};

struct PipelineScript {
    unsigned char _field1[1];
};

struct VariantEntry {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    id _field5;
    id _field6;
    unsigned long long _field7;
    id _field8;
    id _field9;
};

struct VariantKey {
    void *_field1;
    void *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
    id _field5;
    void *_field6;
    unsigned long long _field7;
};

struct _MTLResourceListPoolPrivate {
    struct resourceListQueue queue;
    struct os_unfair_lock_s lock;
    int count;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFString;

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> {
    struct __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> {
                void *__left_;
            } __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct once_flag {
    unsigned long long __state_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct resourceListQueue {
    MTLResourceList *tqh_first;
    id *tqh_last;
};

struct shared_ptr<MTLCompilerCache> {
    struct MTLCompilerCache *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<MTLPipelineCollection, std::default_delete<MTLPipelineCollection>> {
    struct __compressed_pair<MTLPipelineCollection *, std::default_delete<MTLPipelineCollection>> {
        struct MTLPipelineCollection *__value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<MTLFunctionId, std::pair<unsigned long long, unsigned long long>, CompareFunctionIdHash, CompareFunctionIdHash, std::allocator<std::pair<const MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>> {
    struct __hash_table<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>, std::allocator<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<MTLFunctionId, std::__hash_value_type<MTLFunctionId, std::pair<unsigned long long, unsigned long long>>, CompareFunctionIdHash, CompareFunctionIdHash, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> {
    struct __hash_table<std::__hash_value_type<MTLLoadedFile *, id>, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, true>, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>, true>, std::allocator<std::__hash_value_type<MTLLoadedFile *, id>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<MTLUINT256_t, MTLProgramObject *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, MTLProgramObject *>>> {
    struct __hash_table<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<MTLUINT256_t, NSObject<OS_dispatch_data>*, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, NSObject<OS_dispatch_data>*>>> {
    struct __hash_table<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, UnorderedContainerHash, UnorderedContainerHash, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data>*>, UnorderedContainerHash, UnorderedContainerHash, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<MTLDebugLocation *, std::allocator<MTLDebugLocation *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<MTLDebugLocation **, std::allocator<MTLDebugLocation *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<MTLDebugSubProgram *, std::allocator<MTLDebugSubProgram *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<MTLDebugSubProgram **, std::allocator<MTLDebugSubProgram *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<const __CFString *, std::allocator<const __CFString *>> {
    struct __CFString **__begin_;
    struct __CFString **__end_;
    struct __compressed_pair<const __CFString **, std::allocator<const __CFString *>> {
        struct __CFString **__value_;
    } __end_cap_;
};

struct vector<std::pair<CompilerOutputType, MTLBinaryKey *>, std::allocator<std::pair<CompilerOutputType, MTLBinaryKey *>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<CompilerOutputType, MTLBinaryKey *>*, std::allocator<std::pair<CompilerOutputType, MTLBinaryKey *>>> {
        void *_field1;
    } _field3;
};

struct vector_downward {
    struct Allocator *allocator_;
    _Bool own_allocator_;
    unsigned long long initial_size_;
    unsigned long long buffer_minalign_;
    unsigned long long reserved_;
    char *buf_;
    char *cur_;
    char *scratch_;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    _Bool _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    _Bool _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    _Bool _field13;
} CDStruct_0d7d3062;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned int maxFramebufferStorageBits;
    unsigned int linearTextureArrayAlignmentBytes;
    unsigned int linearTextureArrayAlignmentSlice;
    unsigned int maxTileBuffers;
    unsigned int maxTileTextures;
    unsigned int maxTileSamplers;
    unsigned int maxTileInlineDataSize;
    unsigned int minTilePixels;
    unsigned int maxColorAttachments;
    unsigned int maxVertexAttributes;
    unsigned int maxVertexBuffers;
    unsigned int maxVertexTextures;
    unsigned int maxVertexSamplers;
    unsigned int maxVertexInlineDataSize;
    unsigned int maxInterpolants;
    unsigned int maxFragmentBuffers;
    unsigned int maxFragmentTextures;
    unsigned int maxFragmentSamplers;
    unsigned int maxFragmentInlineDataSize;
    unsigned int maxComputeBuffers;
    unsigned int maxComputeTextures;
    unsigned int maxComputeSamplers;
    unsigned int maxComputeInlineDataSize;
    unsigned int maxComputeLocalMemorySizes;
    unsigned int maxTotalComputeThreadsPerThreadgroup;
    unsigned int maxComputeThreadgroupMemory;
    float maxLineWidth;
    float maxPointSize;
    unsigned int maxVisibilityQueryOffset;
    unsigned int padmaxBufferLength;
    unsigned int minConstantBufferAlignmentBytes;
    unsigned int minBufferNoCopyAlignmentBytes;
    unsigned int maxTextureWidth1D;
    unsigned int maxTextureWidth2D;
    unsigned int maxTextureHeight2D;
    unsigned int maxTextureWidth3D;
    unsigned int maxTextureHeight3D;
    unsigned int maxTextureDepth3D;
    unsigned int maxTextureDimensionCube;
    unsigned int maxTextureLayers;
    unsigned int linearTextureAlignmentBytes;
    unsigned int iosurfaceTextureAlignmentBytes;
    unsigned int iosurfaceReadOnlyTextureAlignmentBytes;
    unsigned int deviceLinearTextureAlignmentBytes;
    unsigned int deviceLinearReadOnlyTextureAlignmentBytes;
    unsigned int maxFunctionConstantIndices;
    unsigned int maxComputeThreadgroupMemoryAlignmentBytes;
    unsigned int maxInterpolatedComponents;
    unsigned int maxTessellationFactor;
    unsigned int maxIndirectBuffers;
    unsigned int maxIndirectTextures;
    unsigned int maxIndirectSamplers;
    unsigned int maxIndirectSamplersPerDevice;
    unsigned int maxFenceInstances;
    unsigned int maxViewportCount;
    unsigned int maxCustomSamplePositions;
    unsigned int maxTextureBufferWidth;
    unsigned int maxComputeAttributes;
    unsigned int maxPredicatedNestingDepth;
    unsigned int maxConstantBufferArguments;
    unsigned long long maxBufferLength;
} CDStruct_0eb86347;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long bits;
} CDStruct_914d909e;

typedef struct {
    unsigned char key[32];
} CDStruct_41a22ec7;

typedef struct {
    unsigned int fragmentUsesDiscard:1;
    unsigned int fragmentWritesSampleMask:1;
    unsigned int fragmentWritesDepth:1;
    unsigned int vertexRegisterSpill:1;
    unsigned int fragmentRegisterSpill:1;
    unsigned int fragmentReadsFramebufferValues:1;
    unsigned int fragmentPunchThrough:1;
    unsigned int vertexWritesPointSize:1;
    unsigned int private2:1;
    unsigned int reserved:55;
} CDStruct_7ce1aa5b;

typedef struct {
    unsigned int kernelRegisterSpill:1;
    unsigned int threadgroupBarrier:1;
    unsigned int deviceMemoryAtomics:1;
    unsigned int threadgroupMemoryAtomics:1;
    unsigned int reserved:60;
} CDStruct_596dc0d1;

typedef struct {
    unsigned int :8;
    unsigned int :24;
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_4af8c268;

typedef struct {
    double red;
    double green;
    double blue;
    double alpha;
} CDStruct_3ead2808;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    _Bool _field1;
    unsigned long long _field2;
    struct *_field3;
} CDStruct_dbc1e4aa;

typedef struct {
    CDStruct_da2e99ad _field1;
    CDStruct_da2e99ad _field2;
} CDStruct_caaed6bc;

// Template types
typedef struct vector<std::pair<CompilerOutputType, MTLBinaryKey *>, std::allocator<std::pair<CompilerOutputType, MTLBinaryKey *>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<CompilerOutputType, MTLBinaryKey *>*, std::allocator<std::pair<CompilerOutputType, MTLBinaryKey *>>> {
        void *_field1;
    } _field3;
} vector_2bd519e0;

#pragma mark Typedef'd Unions

typedef union {
    CDStruct_4af8c268 _field1;
    CDStruct_4af8c268 _field2;
} CDUnion_c6e49ed4;

// Ambiguous groups
typedef union {
    unsigned long long sampleCount;
    unsigned long long rasterSampleCount;
} CDUnion_a2c16d69;

