//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLIndirectRenderCommandSPI-Protocol.h>

@class NSString;

@interface MTLToolsIndirectRenderCommand <MTLIndirectRenderCommandSPI>
{
}

- (unsigned long long)getOptimizedStatus;	// IMP=0x000000000004d4d5
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000004d490
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000004d44b
- (void *)getVertexBufferAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004d41a
- (void *)getFragmentBufferAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004d3e9
- (unsigned long long)getCommandType;	// IMP=0x000000000004d3be
- (id)getTessellationFactorArguments;	// IMP=0x000000000004d393
- (id)drawPatchesArguments;	// IMP=0x000000000004d368
- (id)drawIndexedPatchesArguments;	// IMP=0x000000000004d33d
- (id)drawIndexedArguments;	// IMP=0x000000000004d312
- (id)drawArguments;	// IMP=0x000000000004d2e7
- (unsigned long long)getPipelineStateUniqueIdentifier;	// IMP=0x000000000004d2bc
- (void)reset;	// IMP=0x000000000004d291
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12;	// IMP=0x000000000004d1dc
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10;	// IMP=0x000000000004d147
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x000000000004d0ff
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x000000000004d099
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x000000000004d045

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
