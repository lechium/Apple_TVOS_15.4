//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVImageProxy;

__attribute__((visibility("hidden")))
@interface _TVPImageProxyRepresentation
{
    TVImageProxy *_imageProxy;	// 80 = 0x50
    struct CGImage *_originalImage;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000009a251
- (id)_originalImageCacheKey;	// IMP=0x000000000009a1e0
- (struct CGImage *)_originalImage;	// IMP=0x000000000009a017
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099d6f
- (void)dealloc;	// IMP=0x0000000000099d11
- (id)initWithImageProxy:(id)arg1;	// IMP=0x0000000000099c86

@end

