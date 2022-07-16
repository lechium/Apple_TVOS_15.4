//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/TVImageLoader-Protocol.h>

@class NSLock, NSMutableDictionary, NSOperationQueue, NSString;

@interface TVHKImageLoader : NSObject <TVImageLoader>
{
    NSLock *_lock;	// 8 = 0x8
    NSOperationQueue *_imageLoadOperationQueue;	// 16 = 0x10
    NSMutableDictionary *_imageLoadContextsByImageIdentifier;	// 24 = 0x18
}

+ (id)_scaledImageIdentifierWithImageIdentifier:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x000000000007d661
- (void).cxx_destruct;	// IMP=0x000000000007d7e4
@property(retain, nonatomic) NSMutableDictionary *imageLoadContextsByImageIdentifier; // @synthesize imageLoadContextsByImageIdentifier=_imageLoadContextsByImageIdentifier;
@property(readonly, nonatomic) NSOperationQueue *imageLoadOperationQueue; // @synthesize imageLoadOperationQueue=_imageLoadOperationQueue;
@property(readonly, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (id)_imageIdentifierWithImageLoadParams:(id)arg1;	// IMP=0x000000000007d5ce
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x000000000007d59f
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;	// IMP=0x000000000007d570
- (id)_imageLoaderIdentifier;	// IMP=0x000000000007d541
- (void)_cancelAllImageLoads;	// IMP=0x000000000007d504
- (void)cancelLoad:(id)arg1;	// IMP=0x000000000007d483
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000007cbca
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000000007cb62
- (void)dealloc;	// IMP=0x000000000007cb24
- (id)init;	// IMP=0x000000000007ca99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

