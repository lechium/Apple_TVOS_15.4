//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FigMetalAllocator, FigMetalExecutionStatus, MTLVertexDescriptor;
@protocol MTLBuffer, MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLLibrary, MTLPipelineLibrarySPI;

@interface FigMetalContext : NSObject
{
    _Bool _allowCommandBufferCommitsOnlyByForceCommit;	// 8 = 0x8
    id <MTLDevice> _device;	// 16 = 0x10
    id <MTLCommandQueue> _commandQueue;	// 24 = 0x18
    id <MTLLibrary> _library;	// 32 = 0x20
    id <MTLCommandBuffer> _commandBuffer;	// 40 = 0x28
    id <MTLPipelineLibrarySPI> _pipelineLibrary;	// 48 = 0x30
    FigMetalAllocator *_allocator;	// 56 = 0x38
    id <MTLBuffer> _fullRangeVertexBuf;	// 64 = 0x40
    MTLVertexDescriptor *_fullRangeVertexDesc;	// 72 = 0x48
}

+ (id)createMetalDevice;	// IMP=0x0000000000003ed4
- (void).cxx_destruct;	// IMP=0x00000000000060ce
@property(retain, nonatomic) MTLVertexDescriptor *fullRangeVertexDesc; // @synthesize fullRangeVertexDesc=_fullRangeVertexDesc;
@property(retain, nonatomic) id <MTLBuffer> fullRangeVertexBuf; // @synthesize fullRangeVertexBuf=_fullRangeVertexBuf;
@property(nonatomic) _Bool allowCommandBufferCommitsOnlyByForceCommit; // @synthesize allowCommandBufferCommitsOnlyByForceCommit=_allowCommandBufferCommitsOnlyByForceCommit;
@property(retain, nonatomic) FigMetalAllocator *allocator; // @synthesize allocator=_allocator;
@property(retain, nonatomic) id <MTLPipelineLibrarySPI> pipelineLibrary; // @synthesize pipelineLibrary=_pipelineLibrary;
@property(retain, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(retain, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 usage:(unsigned long long)arg6;	// IMP=0x0000000000005e92
- (void)prewarmInternalMetalShadersForFormatsList:(id)arg1;	// IMP=0x000000000000581b
- (id)rebindTex:(id)arg1 format:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(int)arg4 xFactor:(int)arg5;	// IMP=0x0000000000005551
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 plane:(unsigned long long)arg6;	// IMP=0x0000000000005476
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 textureSize:(struct CGSize)arg4 plane:(unsigned long long)arg5;	// IMP=0x0000000000005303
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4;	// IMP=0x0000000000005258
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 alignmentFactor:(unsigned long long)arg5;	// IMP=0x0000000000004ff9
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1;	// IMP=0x0000000000004fd5
- (id)CreateMetalTextureFromFile:(const char *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;	// IMP=0x0000000000004d53
- (_Bool)ReadMetalTextureFromFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;	// IMP=0x0000000000004b95
- (_Bool)ReadMetalTextureFromFile:(const char *)arg1 texture:(id)arg2;	// IMP=0x0000000000004b80
- (_Bool)WriteMetalTextureToFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;	// IMP=0x00000000000049d7
- (_Bool)WriteMetalTextureToFile:(const char *)arg1 texture:(id)arg2;	// IMP=0x00000000000049c2
- (int)setQueuePriority:(int)arg1;	// IMP=0x0000000000004952
- (void)insertDebugCaptureBoundary;	// IMP=0x000000000000493c
- (id)computePipelineStateFor:(id)arg1 constants:(id)arg2;	// IMP=0x000000000000485a
- (void)waitForSchedule;	// IMP=0x00000000000047f0
- (void)waitForIdle;	// IMP=0x00000000000047a5
- (void)commitAndWait;	// IMP=0x0000000000004762
- (void)forceCommit;	// IMP=0x0000000000004724
- (void)commit;	// IMP=0x000000000000470a
- (int)initRangeVertex;	// IMP=0x0000000000004430
@property(retain, nonatomic) FigMetalExecutionStatus *executionStatus;
- (int)commonInitWithOptionalCommandQueue:(id)arg1;	// IMP=0x0000000000004268
- (id)initWithLibraryData:(char *)arg1 ofSize:(unsigned long long)arg2 andOptionalCommandQueue:(id)arg3;	// IMP=0x00000000000040f3
- (id)initWithbundle:(id)arg1 andOptionalCommandQueue:(id)arg2;	// IMP=0x0000000000003fc1
- (id)init;	// IMP=0x0000000000003f02

@end
