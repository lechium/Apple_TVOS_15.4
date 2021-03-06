//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface VCPImageManager : NSObject
{
    struct CMPhotoCompressionSession *_encodeSession;	// 8 = 0x8
    struct CMPhotoDecompressionSession *_decodeSession;	// 16 = 0x10
    struct OpaqueVTPixelTransferSession *_transferSession;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_transcodeQueue;	// 32 = 0x20
}

+ (_Bool)_exportReencodedJPEG;	// IMP=0x00000000000823e5
+ (_Bool)loggingEnabled;	// IMP=0x00000000000801c0
+ (_Bool)allowFastPathDecodeWithUniformType:(id)arg1 pixelWidth:(unsigned long long)arg2 andPixelHeight:(unsigned long long)arg3;	// IMP=0x0000000000080185
+ (_Bool)canDecodeAcceleratedUniformTypeIdentifier:(id)arg1;	// IMP=0x00000000000800ed
+ (id)sharedImageManager;	// IMP=0x000000000008005b
- (void).cxx_destruct;	// IMP=0x0000000000082fa0
- (int)compressCVPixelBuffer:(struct __CVBuffer *)arg1 toJPEGData:(id *)arg2 targetBitStreamLength:(unsigned long long)arg3 padding:(_Bool)arg4;	// IMP=0x00000000000823ed
- (void)flushCache;	// IMP=0x00000000000823d0
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3 orientation:(unsigned int *)arg4;	// IMP=0x00000000000821db
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3;	// IMP=0x00000000000821c5
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(_Bool)arg3 orientation:(unsigned int *)arg4;	// IMP=0x0000000000081f7f
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(_Bool)arg3;	// IMP=0x0000000000081f69
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3;	// IMP=0x0000000000081e57
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2;	// IMP=0x0000000000081d5f
- (struct __CVBuffer *)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromData:(id)arg3 withUniformTypeIdentifier:(id)arg4 flushCache:(_Bool)arg5 orientation:(unsigned int *)arg6;	// IMP=0x0000000000081aba
- (int)decodeImageSource:(struct CGImageSource *)arg1 withUniformTypeIdentifier:(id)arg2 pixelFormat:(int)arg3 maxDimension:(unsigned long long)arg4 orientation:(unsigned int *)arg5 pixelBuffer:(struct __CVBuffer **)arg6;	// IMP=0x00000000000813d5
- (int)drawImage:(struct CGImage *)arg1 pixelFormat:(int)arg2 withOrientation:(unsigned int)arg3 maxDimension:(unsigned long long)arg4 pixelBuffer:(struct __CVBuffer **)arg5;	// IMP=0x0000000000080ac4
- (int)acceleratedDecodeImageData:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer **)arg4 orientation:(unsigned int *)arg5 flushCache:(_Bool)arg6;	// IMP=0x00000000000806a2
- (int)convertPixelBuffer:(struct __CVBuffer **)arg1 toPixelFormat:(int)arg2;	// IMP=0x00000000000805d4
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;	// IMP=0x00000000000804f2
- (id)dataForResource:(id)arg1;	// IMP=0x00000000000801c8
- (void)dealloc;	// IMP=0x000000000007ff93
- (id)init;	// IMP=0x000000000007fef0

@end

