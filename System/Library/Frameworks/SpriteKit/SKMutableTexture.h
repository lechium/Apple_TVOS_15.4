//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SKMutableTexture
{
    void *_ioSurface;	// 8 = 0x8
    _Bool _ioSurfaceBacked;	// 16 = 0x10
    struct CGSize _textureSize;	// 24 = 0x18
    void *_pixelData;	// 40 = 0x28
    unsigned long long _pixelDataLength;	// 48 = 0x30
    int _pixelFormat;	// 56 = 0x38
}

+ (id)mutableTextureWithSize:(struct CGSize)arg1;	// IMP=0x000000000008c12f
- (void)dealloc;	// IMP=0x000000000008c6bd
- (id)description;	// IMP=0x000000000008c654
- (shared_ptr_bb77cfd9)_backingTexture;	// IMP=0x000000000008c282
- (void)modifyPixelDataWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008c174
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(int)arg2;	// IMP=0x000000000008c115
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x000000000008c0f8
- (id)initWithSize:(struct CGSize)arg1 ioSurfaceBacked:(_Bool)arg2 pixelFormat:(int)arg3;	// IMP=0x000000000008bea6

@end
