//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetPixelBufferSource-Protocol.h>

@class NSString, PXGSpriteReference, PXVideoSession;

@interface _PXCuratedLibraryVideoAssetRecord <PXChangeObserver, PXGDisplayAssetPixelBufferSource>
{
    double _videoTranformScale;	// 8 = 0x8
    PXVideoSession *_videoSession;	// 16 = 0x10
    NSString *_bufferRequestIdentifier;	// 24 = 0x18
    long long _desiredPlayState;	// 32 = 0x20
    CDUnknownBlockType _pixelBufferDidChangeHandler;	// 40 = 0x28
    CDUnknownBlockType _providePlaceholderHandler;	// 48 = 0x30
}

+ (id)videoSessionQueue;	// IMP=0x000000000053c71f
- (void).cxx_destruct;	// IMP=0x000000000053c58f
@property(copy, nonatomic) CDUnknownBlockType providePlaceholderHandler; // @synthesize providePlaceholderHandler=_providePlaceholderHandler;
@property(copy, nonatomic) CDUnknownBlockType pixelBufferDidChangeHandler; // @synthesize pixelBufferDidChangeHandler=_pixelBufferDidChangeHandler;
- (long long)desiredPlayState;	// IMP=0x000000000053c53a
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property(readonly, nonatomic) struct __CVBuffer *currentPixelBuffer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000053c39e
- (void)_configureVideoSession:(id)arg1;	// IMP=0x000000000053c247
- (void)_videoQueue_relinquishVideoSession;	// IMP=0x000000000053c15d
- (void)_videoQueue_ensureVideoSession;	// IMP=0x000000000053beff
- (void)prepareForInvisible;	// IMP=0x000000000053be86
- (void)prepareForVisible;	// IMP=0x000000000053be0d
- (_Bool)isPlaying;	// IMP=0x000000000053bde9
- (void)setDesiredPlayState:(long long)arg1;	// IMP=0x000000000053bd5a
@property(readonly, nonatomic) NSString *videoStatusDescription;
- (void)dealloc;	// IMP=0x000000000053bc85
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;	// IMP=0x000000000053bb0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PXGSpriteReference *geometryReference; // @dynamic geometryReference;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

