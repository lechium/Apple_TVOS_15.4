//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalSerializer/MTLRenderCommandEncoder-Protocol.h>

@protocol MTLResourceGroupSPI, MTLSamplerState, MTLTexture;

@protocol MTLRenderCommandEncoderSPI <MTLRenderCommandEncoder>
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id <MTLSamplerState>)arg3 atSamplerIndex:(unsigned long long)arg4;
- (_Bool)isMemorylessRender;
- (void)addSplitHandler:(void (^)(id <MTLRenderCommandEncoderSPI>, unsigned long long))arg1;
- (void)setLineWidth:(float)arg1;
- (void)setDepthClipModeSPI:(unsigned long long)arg1;

@optional
- (void)useResourceGroup:(id <MTLResourceGroupSPI>)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_4c83c94d)arg2;
- (void)setStencilResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;
- (void)setStencilResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
- (void)setDepthResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;
- (void)setDepthResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
- (void)setColorResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5 atIndex:(unsigned long long)arg6;
- (void)setColorResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;
- (void)setStencilCleared;
- (void)setDepthCleared;
- (void)setTransformFeedbackState:(unsigned long long)arg1;
- (void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;
- (void)setPrimitiveRestartEnabled:(_Bool)arg1 index:(unsigned long long)arg2;
- (void)setPrimitiveRestartEnabled:(_Bool)arg1;
- (void)setProvokingVertexMode:(unsigned long long)arg1;
- (void)setViewportTransformEnabled:(_Bool)arg1;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setPointSize:(float)arg1;
- (void)setAlphaTestReferenceValue:(float)arg1;
- (void)setCommandDataCorruptModeSPI:(unsigned long long)arg1;
@end

