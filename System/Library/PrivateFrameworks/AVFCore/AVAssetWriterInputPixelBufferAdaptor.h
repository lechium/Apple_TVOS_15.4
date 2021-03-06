//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVKeyPathDependencyHost-Protocol.h>
#import <AVFCore/AVWeakObservable-Protocol.h>

@class AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptorInternal, NSDictionary, NSString;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject <AVWeakObservable, AVKeyPathDependencyHost>
{
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;	// 8 = 0x8
}

+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;	// IMP=0x00000000000a6b38
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000a6fd5
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;	// IMP=0x00000000000a6f70
@property(readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property(readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000a6e3d
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;	// IMP=0x00000000000a6e23
- (id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2;	// IMP=0x00000000000a6b8a
- (id)init;	// IMP=0x00000000000a6b74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

