//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLDeviceSPI, OS_dispatch_queue, OS_dispatch_semaphore, TXRBufferAllocator;

@interface MTKTextureLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_loadQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_uploadQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_loadSemaphore;	// 32 = 0x20
    id <MTLCommandQueue> _blitQueue;	// 40 = 0x28
    id <TXRBufferAllocator> _bufferAllocator;	// 48 = 0x30
    id <MTLDeviceSPI> _device;	// 56 = 0x38
}

- (id)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 error:(id *)arg6;	// IMP=0x000000000000d654
- (id)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000d48c
- (void)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000000d33f
- (void)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000d1fd
- (void)newTexturesWithNames:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000000d154
- (void)newTexturesWithNames:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000cff1
- (id)_newSyncTexturesFromTXRTextures:(id)arg1 labels:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000c091
- (id)newTextureFromTXRTexture:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000bfae
- (id)newTexturesFromTXRTextures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000bf43
- (void)_newAsyncTextureWithNames:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000000b7a8
- (id)newUploaderForOptions:(id)arg1;	// IMP=0x000000000000b6a7
- (_Bool)validateGenerateMipmapsForPixelFormat:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b619
- (void)_loadMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b356
- (void)_loadCGImage:(struct CGImage *)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b0a3
- (void)_loadData:(id)arg1 options:(id)arg2 uploader:(id)arg3 label:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000ab92
- (void)_loadData:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a94b
- (unsigned long long)_determineFileType:(id)arg1;	// IMP=0x000000000000a8d8
- (id)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000a723
- (id)newTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000a56e
- (id)newTextureWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000a3b9
- (id)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000a204
- (id)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000009fcc
- (void)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009f28
- (void)newTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009dd9
- (void)newTextureWithData:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009d35
- (void)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000090fa
- (void)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008f84
- (void)dealloc;	// IMP=0x0000000000008eec
@property(readonly, nonatomic) id <MTLDevice> device;
- (id)initWithDevice:(id)arg1;	// IMP=0x0000000000008db8

@end
