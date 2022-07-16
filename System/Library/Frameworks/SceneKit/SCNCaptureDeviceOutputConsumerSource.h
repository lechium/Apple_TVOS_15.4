//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/SCNCaptureDeviceOutputConsumer-Protocol.h>

@class NSString;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNCaptureDeviceOutputConsumerSource <SCNCaptureDeviceOutputConsumer>
{
    struct __CVMetalTextureCache *_textureCache;	// 8 = 0x8
    struct __CVBuffer *_pixelBuffer;	// 16 = 0x10
    id <MTLTexture> _mtlTexture;	// 24 = 0x18
    _Bool _containsAlpha;	// 32 = 0x20
    _Bool _isFront;	// 33 = 0x21
    unsigned long long _width;	// 40 = 0x28
    unsigned long long _height;	// 48 = 0x30
}

- (void)setPixelBuffer:(struct __CVBuffer *)arg1 fromDevice:(id)arg2;	// IMP=0x00000000002dfcc2
- (void)setPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000002dfcae
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromDevice:(id)arg2;	// IMP=0x00000000002dfb8c
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000002dfb78
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x00000000002df90e
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x00000000002df908
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;	// IMP=0x00000000002df883
- (void)dealloc;	// IMP=0x00000000002df821
- (void)discardVideoData;	// IMP=0x00000000002df7be
- (_Bool)containsAlpha;	// IMP=0x00000000002df7ae
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000002df735
- (id)init;	// IMP=0x00000000002df721

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

