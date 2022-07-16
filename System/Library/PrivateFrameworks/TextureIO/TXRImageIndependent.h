//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface TXRImageIndependent
{
    unsigned long long _pixelFormat;	// 80 = 0x50
    unsigned long long _alphaInfo;	// 88 = 0x58
    MISSING_TYPE *_dimensions;	// 96 = 0x60
}

@property(readonly, nonatomic) MISSING_TYPE *dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) unsigned long long alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (struct CGImage *)newCGImageWithColorSpace:(struct CGColorSpace *)arg1 error:(id *)arg2;	// IMP=0x00000000000ce19a
- (_Bool)exportToURL:(id)arg1 uttype:(const struct __CFString *)arg2 error:(id *)arg3;	// IMP=0x00000000000ce16a
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(id)arg3 bufferAllocator: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000ce057
- (id)initWithCGImage:(struct CGImage *)arg1 pixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000cdf11
- (id)initWithCGImage:(struct CGImage *)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000cde6c
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bytesPerImage:(id)arg5 buffer:(unsigned long long)arg6 offset: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000cdd7e
- (id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 pixelFormat: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000cdd69
- (id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 alphaInfo: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000cdc54

@end

