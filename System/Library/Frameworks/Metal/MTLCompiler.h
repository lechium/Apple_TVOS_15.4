//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDevice;
@protocol OS_dispatch_queue;

@interface MTLCompiler : NSObject
{
    _MTLDevice *_device;	// 8 = 0x8
    NSString *_pluginPath;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_compilerQueue;	// 24 = 0x18
    struct MTLCompilerConnectionManager *_compilerConnectionManager;	// 32 = 0x20
    unsigned int _compilerId;	// 40 = 0x28
    unsigned long long _compilerFlags;	// 48 = 0x30
    struct shared_ptr<MTLCompilerCache> _shaderCache;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0000000000071591
- (void).cxx_destruct;	// IMP=0x0000000000071583
@property(readonly) unsigned long long compilerFlags; // @synthesize compilerFlags=_compilerFlags;
@property(readonly) unsigned int compilerId; // @synthesize compilerId=_compilerId;
@property(readonly) struct MTLCompilerConnectionManager *compilerConnectionManager; // @synthesize compilerConnectionManager=_compilerConnectionManager;
@property(readonly) NSObject<OS_dispatch_queue> *compilerQueue; // @synthesize compilerQueue=_compilerQueue;
@property(readonly, copy) NSString *pluginPath; // @synthesize pluginPath=_pluginPath;
- (void)allowLibrariesFromOtherPlatforms;	// IMP=0x000000000007153e
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000071536
- (id)newComputePipelineStateWithDescriptorInternal:(id)arg1 options:(unsigned long long)arg2 pipelineCache:(id)arg3 destinationBinaryArchive:(id)arg4 reflection:(id *)arg5 error:(id *)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000071194
- (id)pipelineStateWithVariant:(struct VariantEntry *)arg1 descriptor:(id)arg2 options:(unsigned long long)arg3 computeProgram:(void *)arg4 kernelDriverCompileTimeData:(id)arg5 serializedComputeDataDescriptor:(id)arg6 compileTimeStatistics:(id)arg7 reflection:(id *)arg8 error:(id *)arg9 completionHandler:(CDUnknownBlockType)arg10;	// IMP=0x0000000000070941
- (struct VariantEntry *)computeVariantEntryWithDescriptor:(id)arg1 options:(unsigned long long)arg2 serializedComputeDataDescriptor:(id)arg3 asyncCompile:(_Bool)arg4 pipelineCache:(id)arg5 destinationBinaryArchive:(id)arg6 computeProgram:(struct MTLProgramObject **)arg7 kernelDriverCompileTimeData:(id *)arg8 compileTimeStatistics:(id)arg9;	// IMP=0x000000000006fa4c
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006f9be
- (id)newRenderPipelineStateWithDescriptorInternal:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 destinationBinaryArchive:(id)arg4 error:(id *)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000006e0e9
- (void)addFunctionKeys:(void *)arg1 function:(id)arg2 driverData:(id)arg3 frameworkData:(id)arg4 compilerOptions:(int)arg5;	// IMP=0x000000000006ddc5
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006dda4
- (id)createVertexStageAndLinkPipelineWithFragment:(void *)arg1 fragmentVariant:(id)arg2 vertexFunction:(id)arg3 serializedVertexDescriptor:(id)arg4 descriptor:(id)arg5 destinationArchive:(id)arg6 options:(unsigned long long)arg7 reflection:(id *)arg8 compileStatistics:(id)arg9 fragmentCompileTimeData:(id)arg10 error:(id *)arg11 completionHandler:(CDUnknownBlockType)arg12;	// IMP=0x000000000006c7b5
- (void *)getProgramObject:(id)arg1 destinationArchive:(id)arg2 sourceBinaryArchives:(id)arg3 variantKey:(const struct VariantKey *)arg4 requiredBinaryKeys:(const void *)arg5 failOnMiss:(_Bool)arg6;	// IMP=0x000000000006c719
- (void *)getProgramObjectForFunction:(id)arg1 variantKey:(const struct VariantKey *)arg2 requiredBinaryKeys:(const void *)arg3 sourceBinaryArchives:(id)arg4;	// IMP=0x000000000006c465
- (vector_2bd519e0)requiredKeysForFunction:(id)arg1 variantKey:(const struct VariantKey *)arg2 frameworkData:(id)arg3 compilerOptions:(int)arg4;	// IMP=0x000000000006c308
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(_Bool)arg3 pipelineLibrary:(id)arg4 binaryArchives:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000006b9fb
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(_Bool)arg3 pipelineLibrary:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006b9df
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(_Bool)arg3 binaryArchives:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006b9be
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006b99c
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006b984
- (void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006b8d1
- (_Bool)addTileRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000006b85a
- (_Bool)addRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000006b846
- (_Bool)addComputePipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000006b832
- (_Bool)addTileRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006b7c3
- (_Bool)addRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006b754
- (_Bool)addComputePipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006b6e5
- (id)compileDynamicLibrary:(id)arg1 computePipelineDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006b57c
- (void)compileDynamicLibrary:(id)arg1 computePipelineDescriptor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006b4f6
- (void)compileFunction:(id)arg1 visibleFunctions:(id)arg2 visibleFunctionGroups:(id)arg3 frameworkData:(id)arg4 driverKeyData:(id)arg5 options:(unsigned long long)arg6 pipelineCache:(id)arg7 sync:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x000000000006b4a5
- (void)compileFunction:(id)arg1 visibleFunctions:(id)arg2 privateVisibleFunctions:(id)arg3 visibleFunctionGroups:(id)arg4 frameworkData:(id)arg5 driverKeyData:(id)arg6 options:(unsigned long long)arg7 pipelineCache:(id)arg8 sync:(_Bool)arg9 completionHandler:(CDUnknownBlockType)arg10;	// IMP=0x000000000006b379
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 sync:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000006b292
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000006b1b1
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(_Bool)arg5 options:(unsigned int)arg6 pipelineCache:(id)arg7 sync:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x000000000006b062
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(_Bool)arg5 options:(unsigned int)arg6 sync:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000006b02b
- (void)statelessBackendCompileRequestInternal:(struct MTLCompilerFunctionRequest *)arg1 sync:(_Bool)arg2 compilerHash:(const CDStruct_41a22ec7 *)arg3 reflectionOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000006a960
- (void)compileLibraryRequest:(struct MTLCompileLibraryRequestData)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006a6ce
- (void)compileStatelessFunctionRequest:(id)arg1 reflectionOnly:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a161
- (void)compileFunctionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006a0d2
- (void)compileFunctionRequestInternal:(id)arg1 frameworkLinking:(_Bool)arg2 linkDataSize:(unsigned long long)arg3 reflectionOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000068201
- (CDStruct_41a22ec7)getHashForScript:(const void *)arg1 function:(id)arg2 compilerOptions:(char **)arg3 compilerOptionsSize:(unsigned long long)arg4;	// IMP=0x0000000000068159
- (void)initializeFunctionRequestScriptAndFunctionId:(id)arg1 script:(const void *)arg2 driverCompilerOptions:(id)arg3;	// IMP=0x0000000000068061
- (id)lookupBinaryInArchives:(id)arg1;	// IMP=0x0000000000067dd9
- (struct MTLFunctionId)getFunctionId:(id)arg1;	// IMP=0x0000000000067bdd
- (CDStruct_41a22ec7)getGPUCompilerHashForScript:(struct PipelineScript *)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000067b70
- (void)cacheCompilerData:(void *)arg1 cachedData:(void *)arg2 hashMap:(void *)arg3 libraryData:(struct MTLLibraryData *)arg4 functionCache:(const struct MultiLevelPipelineCache *)arg5;	// IMP=0x0000000000067a2a
- (void)releaseCompilerOutputBlocks:(void *)arg1;	// IMP=0x00000000000679f8
- (void)addCompiledOutput:(id)arg1 importedSymbols:(id)arg2 importedLibraries:(id)arg3 hashKey:(const CDStruct_41a22ec7 *)arg4 functionCache:(const struct MultiLevelPipelineCache *)arg5;	// IMP=0x00000000000679d2
- (void)addCompiledOutput:(id)arg1 cachedCompiledOutput:(id)arg2 importedSymbols:(id)arg3 importedLibraries:(id)arg4 hashKey:(const CDStruct_41a22ec7 *)arg5 functionCache:(const struct MultiLevelPipelineCache *)arg6;	// IMP=0x0000000000067960
- (CDStruct_41a22ec7)hashKeyForStatelessCompilationRequest:(id)arg1;	// IMP=0x000000000006787b
- (CDStruct_41a22ec7)hashKeyForLibraryRequest:(struct MTLCompileLibraryRequestData *)arg1;	// IMP=0x00000000000677b4
- (_Bool)validateLanguageAndAIRVersionForFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006762b
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067604
- (void)compileRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067598
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 sync:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000671bd
- (void)dealloc;	// IMP=0x000000000006711d
- (CDStruct_c0454aff)pipelineCacheStats;	// IMP=0x00000000000670fb
- (CDStruct_c0454aff)libraryCacheStats;	// IMP=0x00000000000670b3
- (_Bool)copyShaderCacheToPath:(id)arg1;	// IMP=0x0000000000067041
- (void *)getShaderCacheKeys;	// IMP=0x0000000000067032
- (void)unloadShaderCaches;	// IMP=0x0000000000066fa4
- (id)initWithTargetData:(id)arg1 cacheUUID:(CDStruct_41a22ec7 *)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5;	// IMP=0x0000000000066d62

@end

