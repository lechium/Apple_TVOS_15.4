//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface RadioImageCache : NSObject
{
    NSOperationQueue *_imageRequestQueue;	// 8 = 0x8
}

+ (struct __CFURLStorageSession *)_newSharedCacheStorageSession;	// IMP=0x000000000000d7ca
+ (struct _CFURLCache *)_sharedCFURLCache;	// IMP=0x000000000000d76b
+ (id)sharedCache;	// IMP=0x000000000000d708
- (void).cxx_destruct;	// IMP=0x000000000000ce67
- (id)_requestForRadioArtwork:(id)arg1;	// IMP=0x000000000000cdaf
- (id)_cachedResponseForRequest:(id)arg1;	// IMP=0x000000000000cd16
- (void)_removeAllCachedImages;	// IMP=0x000000000000cced
- (void)loadImageForStation:(id)arg1 withSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000cc3e
- (void)loadImageForRadioArtwork:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ca4c
- (id)cachedImageDataForStation:(id)arg1 withExactSize:(struct CGSize)arg2 MIMEType:(id *)arg3;	// IMP=0x000000000000c980
- (id)cachedImageDataForRadioArtwork:(id)arg1 MIMEType:(id *)arg2;	// IMP=0x000000000000c88c
- (void)dealloc;	// IMP=0x000000000000c84a
- (id)_init;	// IMP=0x000000000000c7c1
- (id)init;	// IMP=0x000000000000c782

@end
