//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/GGLLayerDelegate-Protocol.h>
#import <VectorKit/MDRenderTarget-Protocol.h>

@class CALayer, NSString, VKSharedResources;
@protocol GGLLayer, GGLRenderQueueSource;

__attribute__((visibility("hidden")))
@interface MDDisplayLayer : NSObject <GGLLayerDelegate, MDRenderTarget>
{
    CALayer<GGLLayer> *_layer;	// 8 = 0x8
    id <GGLRenderQueueSource> _renderSource;	// 16 = 0x10
    shared_ptr_e963992e _taskContext;	// 24 = 0x18
    void *_activeRenderQueue;	// 40 = 0x28
    struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKSharedResources *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _sharedResources;	// 48 = 0x30
    struct deque<std::function<void ()>, std::allocator<std::function<void ()>>> _completionHandlers;	// 72 = 0x48
    struct RenderTargetFormat _sRGBFormat;	// 120 = 0x78
    void *_device;	// 152 = 0x98
    void *_renderer;	// 160 = 0xa0
    struct mutex _debugConsoleManagerCreationLock;	// 168 = 0xa8
    struct unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>> _debugConsoleManager;	// 232 = 0xe8
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _sRGBRenderTarget;	// 240 = 0xf0
    struct unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> _depthStencil;	// 248 = 0xf8
    struct shared_ptr<ggl::RenderBuffer> _sRGBMsaaTexture;	// 256 = 0x100
    struct shared_ptr<ggl::Texture2DAbstract> _sRGBTexture;	// 272 = 0x110
    struct shared_ptr<ggl::RenderBuffer> _sRGBColorTextures[3];	// 288 = 0x120
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _blitRenderTarget;	// 336 = 0x150
    struct RenderTargetFormat _blitFormat;	// 344 = 0x158
    struct RenderTargetFormat _linearFormat;	// 376 = 0x178
    struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> _linearRenderTarget;	// 408 = 0x198
    struct shared_ptr<ggl::RenderBuffer> _linearTexture;	// 416 = 0x1a0
    struct shared_ptr<ggl::RenderBuffer> _linearColorTextures[3];	// 432 = 0x1b0
    _Bool _useMultisampling;	// 480 = 0x1e0
    _Bool _supportsFramebufferFetch;	// 481 = 0x1e1
    _Bool _requiresMultisampling;	// 482 = 0x1e2
    struct CGContext *_snapshotContext;	// 488 = 0x1e8
    _Bool _readPixels;	// 496 = 0x1f0
    _Bool _shouldRasterize;	// 497 = 0x1f1
    _Bool _allowBlitToDrawable;	// 498 = 0x1f2
    struct CGRect _bounds;	// 504 = 0x1f8
    double _contentsScale;	// 536 = 0x218
    unsigned long long _signpostId;	// 544 = 0x220
    id _enableEnhancedCommandBufferErrorsConfigListener;	// 552 = 0x228
    id _enableCommandQueueResetOnErrorConfigListener;	// 560 = 0x230
    id _commandQueueResetMaxAttemptsCountConfigListener;	// 568 = 0x238
}

- (id).cxx_construct;	// IMP=0x0000000000625b50
- (void).cxx_destruct;	// IMP=0x00000000006258b9
@property(readonly, nonatomic) _Bool shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(readonly, nonatomic) _Bool supportsFramebufferFetch; // @synthesize supportsFramebufferFetch=_supportsFramebufferFetch;
@property(readonly, nonatomic) _Bool multiSample; // @synthesize multiSample=_useMultisampling;
@property(nonatomic) id <GGLRenderQueueSource> renderSource; // @synthesize renderSource=_renderSource;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (struct __IOSurface *)flipImage;	// IMP=0x0000000000625879
- (void *)debugConsoleForId:(int)arg1;	// IMP=0x00000000006257be
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;	// IMP=0x00000000006257a8
@property(readonly, nonatomic) float averageFPS;
- (void)renderWithTimestamp:(double)arg1 completion:(function_2e574590)arg2;	// IMP=0x00000000006250f3
- (_Bool)hasRenderTarget;	// IMP=0x00000000006250e5
- (void)destroyRenderTarget;	// IMP=0x0000000000625046
- (void)createRenderTarget;	// IMP=0x0000000000624fa0
@property(readonly, nonatomic) const struct RenderTargetFormat *blitFormat;
@property(readonly, nonatomic) void *blitRenderTarget;
@property(readonly, nonatomic) void *linearRenderTarget;
@property(readonly, nonatomic) const struct RenderTargetFormat *linearFormat;
@property(readonly, nonatomic) void *finalRenderTarget;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) const struct RenderTargetFormat *format;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) double contentScale;
@property(nonatomic) struct CGSize size;
- (void)didEnterBackground;	// IMP=0x0000000000624daf
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000624da9
- (shared_ptr_fa6aa836)bitmapData;	// IMP=0x0000000000624d29
- (void)_didReadPixels:(void *)arg1;	// IMP=0x0000000000624bfe
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000062454b
- (void)setBackgroundColor:(struct CGColor *)arg1;	// IMP=0x0000000000624535
- (void)setContentsGravity:(id)arg1;	// IMP=0x000000000062451f
- (void)setOpaque:(_Bool)arg1;	// IMP=0x0000000000624509
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;	// IMP=0x00000000006244f3
- (void)expandedPerformanceHUD:(id)arg1;	// IMP=0x00000000006244b6
- (void)disablePerformanceHUD:(id)arg1;	// IMP=0x000000000062449f
- (void)enablePerformanceHUD:(id)arg1;	// IMP=0x0000000000624485
@property(readonly, nonatomic) void *renderer;
- (void)didPresent;	// IMP=0x0000000000624287
- (void)willPresent;	// IMP=0x00000000006241f8
- (void)didUpdateFrameTexture;	// IMP=0x0000000000624169
- (void)willUpdateFrameTexture;	// IMP=0x00000000006240da
- (void)drawToTexture:(void *)arg1 withRenderQueue:(void *)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000623e1c
- (void)drawToTexture:(void *)arg1 withRenderQueue:(void *)arg2;	// IMP=0x0000000000623e07
- (void *)_renderQueueForTimestamp:(double)arg1 prepareHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000623dd3
- (void *)renderQueueForTimestamp:(double)arg1;	// IMP=0x0000000000623da7
- (_Bool)isDelayedRenderQueueConsumptionSupported;	// IMP=0x0000000000623d91
- (void)prepareTargetsForPlatormsWithoutFramebufferFetch:(const void *)arg1 isDrawable:(_Bool)arg2;	// IMP=0x000000000062303c
- (void)prepareTargetsForPlatormsWithFramebufferFetch:(const void *)arg1;	// IMP=0x0000000000622c25
- (void)_prepareTexture:(const void *)arg1 isDrawable:(_Bool)arg2;	// IMP=0x0000000000622b6f
- (void)prepareTexture:(const void *)arg1;	// IMP=0x0000000000622b58
- (void)dealloc;	// IMP=0x00000000006229c7
- (id)initWithContentScale:(double)arg1 useMultisampling:(_Bool)arg2 extraColorFormats:(const void *)arg3 shouldRasterize:(_Bool)arg4 allowBlitToDrawable:(_Bool)arg5 taskContext:(const void *)arg6 device:(void *)arg7 sharedResources:(id)arg8 signpostId:(unsigned long long)arg9;	// IMP=0x000000000062226a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

