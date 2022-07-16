//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNImageBuffer, VNObservationsCache, VNRequestPerformer, VNSession;

@interface VNImageRequestHandler : NSObject
{
    VNSession *_session;	// 8 = 0x8
    VNImageBuffer *_imageBuffer;	// 16 = 0x10
    VNRequestPerformer *_requestPerformer;	// 24 = 0x18
    VNObservationsCache *_observationsCache;	// 32 = 0x20
}

+ (void)forcedCleanupWithOptions:(id)arg1;	// IMP=0x0000000000257409
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000257377
+ (void)requestForcedCleanupWithOptions:(id)arg1;	// IMP=0x0000000000257301
+ (void)forcedCleanup;	// IMP=0x00000000002572bd
+ (void)requestForcedCleanup;	// IMP=0x0000000000257279
- (void).cxx_destruct;	// IMP=0x000000000025723b
- (_Bool)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000257225
- (_Bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;	// IMP=0x000000000025720f
- (void)cancelAllRequests;	// IMP=0x00000000002571f9
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000257125
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x000000000025710b
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000257027
- (id)initWithData:(id)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x000000000025700d
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000256f29
- (id)initWithURL:(id)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x0000000000256f0f
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000256e2b
- (id)initWithCIImage:(id)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x0000000000256e11
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000256d3d
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x0000000000256d23
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3 session:(id)arg4;	// IMP=0x0000000000256c4f
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 session:(id)arg3;	// IMP=0x0000000000256c35
- (_Bool)performRequests:(id)arg1 gatheredForensics:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000256b0b
- (_Bool)performRequests:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000256af4
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000256a6a
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2;	// IMP=0x0000000000256a53
- (id)initWithData:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000002569b4
- (id)initWithData:(id)arg1 options:(id)arg2;	// IMP=0x000000000025699d
- (id)initWithURL:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000002568fe
- (id)initWithURL:(id)arg1 options:(id)arg2;	// IMP=0x00000000002568e7
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000256848
- (id)initWithCIImage:(id)arg1 options:(id)arg2;	// IMP=0x0000000000256831
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x00000000002567a7
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;	// IMP=0x0000000000256790
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000256706
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;	// IMP=0x00000000002566ef
- (id)initWithSession:(id)arg1 imageBuffer:(id)arg2;	// IMP=0x0000000000256621

@end

