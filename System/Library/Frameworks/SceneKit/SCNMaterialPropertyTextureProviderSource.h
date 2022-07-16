//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/SCNMaterialPropertyTextureProviderHelper-Protocol.h>

@class NSString;
@protocol MTLTexture, SCNMaterialPropertyTextureProvider;

__attribute__((visibility("hidden")))
@interface SCNMaterialPropertyTextureProviderSource <SCNMaterialPropertyTextureProviderHelper>
{
    id <MTLTexture> _texture;	// 8 = 0x8
    struct __C3DEngineContext *_engineContext;	// 16 = 0x10
    id <SCNMaterialPropertyTextureProvider> _textureProvider;	// 24 = 0x18
}

- (id)cachedTextureWithURL:(id)arg1 token:(id *)arg2;	// IMP=0x00000000001c9621
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x00000000001c957e
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x00000000001c948a
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x00000000001c9484
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;	// IMP=0x00000000001c93d5
@property(retain, nonatomic) id <SCNMaterialPropertyTextureProvider> textureProvider;
- (void)dealloc;	// IMP=0x00000000001c930b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

