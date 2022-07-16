//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHVideoRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedVideoRequest
{
    PLPhotoEditRenderer *_renderer;	// 80 = 0x50
    PHVideoRequestOptions *_options;	// 88 = 0x58
    CDUnknownBlockType _resultHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000c8176
@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, nonatomic) PHVideoRequestOptions *options; // @synthesize options=_options;
- (void)_handlePlayerItem:(id)arg1 error:(id)arg2;	// IMP=0x00000000000c8065
- (void)_renderIfNeeded;	// IMP=0x00000000000c7dc8
- (void)progressDidChange;	// IMP=0x00000000000c7cb3
- (void)editSourceDidChange;	// IMP=0x00000000000c7ca1
- (void)start;	// IMP=0x00000000000c7c8f
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c7bc6

@end

