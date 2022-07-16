//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLGPUDebugBuffer, MTLGPUDebugImageData, MTLRenderPipelineReflection, NSArray, NSMutableArray;

@interface MTLGPUDebugRenderPipelineState
{
    MTLRenderPipelineReflection *_internalReflection;	// 40 = 0x28
    MTLRenderPipelineReflection *_userReflection;	// 48 = 0x30
    NSMutableArray *_binaryFunctionData;	// 56 = 0x38
    MTLGPUDebugImageData *_vertexFunctionData;	// 64 = 0x40
    MTLGPUDebugImageData *_fragmentFunctionData;	// 72 = 0x48
    MTLGPUDebugImageData *_tileFunctionData;	// 80 = 0x50
    NSMutableArray *_retainedFunctions;	// 88 = 0x58
    MTLGPUDebugBuffer *_indirectStateBuffer;	// 96 = 0x60
    _Bool _supportsIndirectCommandBuffers;	// 104 = 0x68
}

@property(readonly, nonatomic) NSArray *binaryFunctionData; // @synthesize binaryFunctionData=_binaryFunctionData;
- (void)dealloc;	// IMP=0x0000000000026700
@property(readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;
@property(readonly, nonatomic) MTLGPUDebugBuffer *tileConstantsBuffer;
@property(readonly, nonatomic) MTLGPUDebugBuffer *fragmentConstantsBuffer;
@property(readonly, nonatomic) MTLGPUDebugBuffer *vertexConstantsBuffer;
@property(readonly, nonatomic) MTLRenderPipelineReflection *userReflection;
@property(readonly, nonatomic) MTLRenderPipelineReflection *internalReflection;
@property(readonly, nonatomic) MTLGPUDebugImageData *tileFunctionData;
@property(readonly, nonatomic) MTLGPUDebugImageData *fragmentFunctionData;
@property(readonly, nonatomic) MTLGPUDebugImageData *vertexFunctionData;
- (void)releaseReflection;	// IMP=0x00000000000265dd
- (id)initWithRenderPipelineState:(id)arg1 tileDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;	// IMP=0x00000000000261e3
- (id)initWithRenderPipelineState:(id)arg1 vertexBinaryFunctions:(id)arg2 fragmentBinaryFunctions:(id)arg3 tileBinaryFunctions:(id)arg4 withState:(id)arg5 device:(id)arg6;	// IMP=0x0000000000025d22
- (id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 unwrappedDescriptor:(id)arg3 reflection:(id)arg4 device:(id)arg5 pipelineOptions:(unsigned long long)arg6;	// IMP=0x00000000000256cb
- (void)_initConstantsBuffer:(id)arg1 device:(id)arg2;	// IMP=0x00000000000252eb

@end
