//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGTextureConverter-Protocol.h>

@class NSString, PXGImageTexture;
@protocol OS_dispatch_queue;

@interface PXGViewTextureConverter : NSObject <PXGTextureConverter>
{
    _Bool _lowMemoryMode;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_requestQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_processingQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000081c10
@property(nonatomic) _Bool lowMemoryMode; // @synthesize lowMemoryMode=_lowMemoryMode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (id)createAtlasForTextureAtlasManager:(id)arg1;	// IMP=0x0000000000081b4c
- (id)createTextureAtlasManagerForImageDataSpec:(CDStruct_6c943d2a)arg1;	// IMP=0x0000000000081ad9
@property(readonly, nonatomic) PXGImageTexture *transparentTexture;
@property(readonly, nonatomic) unsigned long long supportedContentTypes;
- (id)createPayloadTextureFromPayload:(id)arg1;	// IMP=0x0000000000081a3c
- (id)applyAdjustment:(id)arg1 toTexture:(id)arg2 options:(CDStruct_6238c8e0)arg3;	// IMP=0x00000000000819b3
- (id)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg1 transform:(CDStruct_6238c8e0)arg2 options:(id *)arg3 error: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000081940
- (id)createTextureFromCGImage:(struct CGImage *)arg1 transform:(CDStruct_6238c8e0)arg2 options: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000081891
@property(readonly, nonatomic) int presentationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
