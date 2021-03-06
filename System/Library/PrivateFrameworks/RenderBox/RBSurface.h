//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RBDisplayList;

@interface RBSurface : NSObject
{
    struct objc_ptr<RBDisplayList *> _displayList;	// 8 = 0x8
    struct refcounted_ptr<RB::Drawable> _drawable;	// 16 = 0x10
    struct objc_ptr<id<MTLDevice>> _device;	// 24 = 0x18
    struct refcounted_ptr<RB::Texture> _texture;	// 32 = 0x20
    void *_lastItem;	// 40 = 0x28
    struct Bounds _dirty;	// 48 = 0x30
    _Bool _clearsBackground;	// 64 = 0x40
    _Bool _opaque;	// 65 = 0x41
    int _colorMode;	// 68 = 0x44
    double _scale;	// 72 = 0x48
    struct CGSize _size;	// 80 = 0x50
    CDStruct_0b1c536a _clearColor;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x000000000006a70a
- (void).cxx_destruct;	// IMP=0x000000000006a6be
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) CDStruct_0b1c536a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) _Bool clearsBackground; // @synthesize clearsBackground=_clearsBackground;
@property(nonatomic) int colorMode; // @synthesize colorMode=_colorMode;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)invalidate;	// IMP=0x000000000006a5d4
- (void)updateUsingDevice:(id)arg1;	// IMP=0x000000000006a4e1
- (struct CGImage *)copyCGImageUsingDevice:(id)arg1;	// IMP=0x0000000000069ca2
- (void)setDisplayList:(id)arg1 dirtyRect:(struct CGRect)arg2;	// IMP=0x0000000000069b6d
@property(retain, nonatomic) RBDisplayList *displayList;
- (void)dealloc;	// IMP=0x0000000000069a11
- (id)init;	// IMP=0x00000000000699bb

@end

