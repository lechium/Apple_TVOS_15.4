//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAMetalLayer.h>

#import <VectorKit/GGLLayer-Protocol.h>

@protocol GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface MetalLayer : CAMetalLayer <GGLLayer>
{
    id <GGLLayerDelegate> _delegate;	// 16 = 0x10
    shared_ptr_94286ce0 _device;	// 24 = 0x18
    shared_ptr_479d1306 _texture;	// 40 = 0x28
    struct shared_ptr<ggl::SamplerState> _samplerState;	// 56 = 0x38
    _Bool _sRGB;	// 72 = 0x48
    struct CGSize _backingSize;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x000000000088920f
- (void).cxx_destruct;	// IMP=0x00000000008891a7
@property(readonly, nonatomic) _Bool sRGB; // @synthesize sRGB=_sRGB;
@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property id <GGLLayerDelegate> renderDelegate; // @synthesize renderDelegate=_delegate;
- (void)display;	// IMP=0x0000000000889157
- (void)didEnterBackground;	// IMP=0x0000000000889151
- (void)onTimerFired:(double)arg1 presentAtTime:(double)arg2;	// IMP=0x00000000008890e7
- (void)onTimerFired:(double)arg1;	// IMP=0x00000000008890b9
- (void)_onTimerFired:(double)arg1 withPresent:(CDUnknownBlockType)arg2;	// IMP=0x0000000000888e3b
- (id)_updateDrawable;	// IMP=0x0000000000888db3
- (void)_createTexture;	// IMP=0x0000000000888af9
- (void)layoutSublayers;	// IMP=0x0000000000888af3
- (id)initWithDevice:(shared_ptr_94286ce0)arg1 sRGB:(_Bool)arg2;	// IMP=0x00000000008888ae
@property(readonly) int backingFormat;

@end

