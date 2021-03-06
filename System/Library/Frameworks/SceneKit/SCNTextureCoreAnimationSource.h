//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNTextureCoreAnimationSource
{
    CALayer *_layer;	// 40 = 0x28
    double _lastUpdate;	// 48 = 0x30
    double _nextUpdateDate;	// 56 = 0x38
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x0000000000048416
- (struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x00000000000482f9
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x0000000000048261
- (double)layerContentsScaleFactor;	// IMP=0x0000000000048236
- (struct CGSize)layerSizeInPixels;	// IMP=0x000000000004821c
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x00000000000481ed
- (double)__updateTextureWithLayer:(id)arg1 texture:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 sampler:(struct __C3DTextureSampler *)arg4;	// IMP=0x0000000000047d5f
- (double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(_Bool)arg5 forceUpdate:(_Bool *)arg6 didUpdate: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000047913
- (double)__renderLayerUsingMetal:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(_Bool)arg5 forceUpdate:(_Bool *)arg6 didUpdate: /* Error: Ran out of types for this method. */;	// IMP=0x000000000004763e
- (void)_resizeLayer:(id)arg1 toSize:(struct CGSize)arg2 updateLayer:(_Bool)arg3 updateTransform:(_Bool)arg4 caRenderer:(id)arg5;	// IMP=0x0000000000046e97
- (_Bool)requiresMainThreadUpdates;	// IMP=0x0000000000046e8f
- (float)clearValue;	// IMP=0x0000000000046e86
- (id)layerToFocusForRenderedLayer:(id)arg1;	// IMP=0x0000000000046e7d
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x0000000000046d5e
- (_Bool)prefersGL3;	// IMP=0x0000000000046d18
- (_Bool)supportsMetal;	// IMP=0x0000000000046d10
- (void)dealloc;	// IMP=0x0000000000046cce

@end

