//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAEAGLLayer.h>

#import <VectorKit/GGLLayer-Protocol.h>

@protocol GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface GGLOpenGLESLayer : CAEAGLLayer <GGLLayer>
{
    id <GGLLayerDelegate> _delegate;	// 16 = 0x10
    shared_ptr_2063da68 _device;	// 24 = 0x18
    struct unique_ptr<ggl::OESContext, std::default_delete<ggl::OESContext>> _context;	// 40 = 0x28
    struct shared_ptr<ggl::RenderBuffer> _texture;	// 48 = 0x30
    struct CGSize _backingSize;	// 64 = 0x40
}

- (id).cxx_construct;	// IMP=0x00000000008740b1
- (void).cxx_destruct;	// IMP=0x0000000000874047
@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property id <GGLLayerDelegate> renderDelegate; // @synthesize renderDelegate=_delegate;
- (void)didEnterBackground;	// IMP=0x0000000000873fe2
- (void)setContentsScale:(double)arg1;	// IMP=0x0000000000873f90
- (void)onTimerFired:(double)arg1;	// IMP=0x0000000000873e58
- (void)_deleteLayerRenderBuffer;	// IMP=0x0000000000873da3
- (_Bool)_createLayerRenderBuffer;	// IMP=0x0000000000873c6d
- (void)_createTexture;	// IMP=0x0000000000873a7e
- (void)layoutSublayers;	// IMP=0x0000000000873a78
- (void)dealloc;	// IMP=0x00000000008739b4
- (id)initWithDevice:(shared_ptr_2063da68)arg1;	// IMP=0x000000000087372c
@property(readonly, nonatomic) void *texture;
@property(readonly) int backingFormat;

@end
