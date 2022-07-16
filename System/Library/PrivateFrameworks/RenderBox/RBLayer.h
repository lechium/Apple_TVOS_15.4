//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <RenderBox/RBDrawableStatistics-Protocol.h>
#import <RenderBox/_RBDrawableDelegate-Protocol.h>

@class NSDictionary, NSString, NSTimer, RBDevice;

@interface RBLayer : CALayer <_RBDrawableDelegate, RBDrawableStatistics>
{
    struct spin_lock _lock;	// 8 = 0x8
    struct objc_ptr<RBDevice *> _device;	// 16 = 0x10
    NSTimer *_collectionTimer;	// 24 = 0x18
    struct refcounted_ptr<RB::Drawable> _drawable;	// 32 = 0x20
    struct objc_ptr<RBImageQueueLayer *> _queueLayer;	// 40 = 0x28
    unsigned long long _statistics_mask;	// 48 = 0x30
    double _statistics_alpha;	// 56 = 0x38
    struct objc_ptr<void (^)(id<RBDrawableStatistics>)> _statistics_handler;	// 64 = 0x40
    struct atomic<bool> _deallocating;	// 72 = 0x48
    _Bool _visible;	// 73 = 0x49
    _Bool _needs_display_on_visible;	// 74 = 0x4a
    _Bool _pending_visible_callback;	// 75 = 0x4b
    _Bool _rendersAsynchronously;	// 76 = 0x4c
    _Bool _needsSynchronousUpdate;	// 77 = 0x4d
    _Bool _promotesFramebuffer;	// 78 = 0x4e
    _Bool _clearsBackground;	// 79 = 0x4f
    int _colorMode;	// 80 = 0x50
    unsigned long long _pixelFormat;	// 88 = 0x58
    long long _maxDrawableCount;	// 96 = 0x60
    CDStruct_0b1c536a _clearColor;	// 104 = 0x68
}

+ (id)defaultValueForKey:(id)arg1;	// IMP=0x000000000003b820
- (id).cxx_construct;	// IMP=0x000000000003ebf0
- (void).cxx_destruct;	// IMP=0x000000000003eb91
@property(nonatomic) long long maxDrawableCount; // @synthesize maxDrawableCount=_maxDrawableCount;
@property(nonatomic) CDStruct_0b1c536a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) _Bool clearsBackground; // @synthesize clearsBackground=_clearsBackground;
@property(nonatomic) _Bool promotesFramebuffer; // @synthesize promotesFramebuffer=_promotesFramebuffer;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) int colorMode; // @synthesize colorMode=_colorMode;
@property(nonatomic) _Bool needsSynchronousUpdate; // @synthesize needsSynchronousUpdate=_needsSynchronousUpdate;
@property(nonatomic) _Bool rendersAsynchronously; // @synthesize rendersAsynchronously=_rendersAsynchronously;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;	// IMP=0x000000000003e835
- (void)copyImageInRect:(struct CGRect)arg1 options:(id)arg2 completionQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003d6d2
- (void)_RBDrawableStatisticsDidChange;	// IMP=0x000000000003d634
@property(copy, nonatomic) CDUnknownBlockType statisticsHandler;
@property(readonly, copy, nonatomic) NSDictionary *statistics;
- (void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2;	// IMP=0x000000000003d376
- (void)layerDidBecomeVisible:(_Bool)arg1;	// IMP=0x000000000003d1a5
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000003d082
- (void)setContents:(id)arg1;	// IMP=0x000000000003cfd9
- (void)waitUntilAsyncRenderingCompleted;	// IMP=0x000000000003cf67
- (void)drawInDisplayList:(id)arg1;	// IMP=0x000000000003cf0d
- (_Bool)displayWithBounds:(struct CGRect)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c4b1
- (void)display;	// IMP=0x000000000003badb
@property(readonly, nonatomic, getter=isDrawableAvailable) _Bool drawableAvailable;
@property(retain, nonatomic) RBDevice *device;
- (void)dealloc;	// IMP=0x000000000003b8a5
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000003b744
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003b6a1
- (id)init;	// IMP=0x000000000003b5fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
