//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUICore/NSCopying-Protocol.h>

@class VUIImageDecorator, _VUIDecoratorRequest;
@protocol VUINetworkRequestLoader;

@interface VUIImageProxy : NSObject <NSCopying>
{
    _Bool _cacheOnLoad;	// 8 = 0x8
    _Bool _allowsSubstitutionForOriginal;	// 9 = 0x9
    _Bool _isLoading;	// 10 = 0xa
    _Bool _loadSynchronouslyIfCached;	// 11 = 0xb
    _Bool _writeToAssetLibrary;	// 12 = 0xc
    _Bool _optimizedImageRendering;	// 13 = 0xd
    id _object;	// 16 = 0x10
    id _imageLoader;	// 24 = 0x18
    VUIImageDecorator *_decorator;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    CDUnknownBlockType _writeCompletionHandler;	// 48 = 0x30
    long long _imageDirection;	// 56 = 0x38
    id <VUINetworkRequestLoader> _requestLoader;	// 64 = 0x40
    long long _groupType;	// 72 = 0x48
    id _requestToken;	// 80 = 0x50
    _VUIDecoratorRequest *_decoratorRequestToken;	// 88 = 0x58
    id _imageDidWriteObserver;	// 96 = 0x60
}

+ (id)_imageDecoratorQueue;	// IMP=0x00000000000295fb
- (void).cxx_destruct;	// IMP=0x000000000002af3a
@property(retain, nonatomic) id imageDidWriteObserver; // @synthesize imageDidWriteObserver=_imageDidWriteObserver;
@property(retain, nonatomic) _VUIDecoratorRequest *decoratorRequestToken; // @synthesize decoratorRequestToken=_decoratorRequestToken;
@property(retain, nonatomic) id requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(nonatomic) _Bool optimizedImageRendering; // @synthesize optimizedImageRendering=_optimizedImageRendering;
@property(nonatomic) _Bool writeToAssetLibrary; // @synthesize writeToAssetLibrary=_writeToAssetLibrary;
@property(nonatomic) _Bool loadSynchronouslyIfCached; // @synthesize loadSynchronouslyIfCached=_loadSynchronouslyIfCached;
@property(nonatomic) __weak id <VUINetworkRequestLoader> requestLoader; // @synthesize requestLoader=_requestLoader;
@property(nonatomic) long long imageDirection; // @synthesize imageDirection=_imageDirection;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy) CDUnknownBlockType writeCompletionHandler; // @synthesize writeCompletionHandler=_writeCompletionHandler;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) VUIImageDecorator *decorator; // @synthesize decorator=_decorator;
@property(nonatomic) _Bool allowsSubstitutionForOriginal; // @synthesize allowsSubstitutionForOriginal=_allowsSubstitutionForOriginal;
@property(nonatomic) _Bool cacheOnLoad; // @synthesize cacheOnLoad=_cacheOnLoad;
@property(retain, nonatomic) id imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void)_callWriteCompletionHandlerWithPath:(id)arg1 error:(id)arg2 finished:(_Bool)arg3;	// IMP=0x000000000002ad0d
- (void)_callCompletionHandlerWithImage:(id)arg1 error:(id)arg2 finished:(_Bool)arg3;	// IMP=0x000000000002ac50
- (void)cancel;	// IMP=0x000000000002aa91
- (id)_imageAssetPathWithAssetKey:(id)arg1;	// IMP=0x000000000002a9ee
- (id)_originalImageAssetPath;	// IMP=0x000000000002a98f
- (id)_decoratedImageAssetPath;	// IMP=0x000000000002a930
- (id)_decoratedImageAssetKey;	// IMP=0x000000000002a8ad
- (id)_originalImageAssetKey;	// IMP=0x000000000002a75c
- (id)_imageLoaderKey;	// IMP=0x000000000002a6dc
- (id)_assetKeyWithImageLoaderKey:(id)arg1 decoratorIdentifier:(id)arg2;	// IMP=0x000000000002a5e8
- (id)_decoratorIdentifier;	// IMP=0x000000000002a598
- (void)_imageDidWriteHandler:(id)arg1;	// IMP=0x000000000002a4ab
- (void)_completeImageLoadWithImage:(id)arg1 imagePath:(id)arg2 error:(id)arg3 assetKey:(id)arg4 expiryDate:(id)arg5 tags:(id)arg6 requestRecord:(id)arg7;	// IMP=0x0000000000029fbe
- (void)_decorateAndWriteImage:(id)arg1 imagePath:(id)arg2 scaleToSize:(struct CGSize)arg3 cropToFit:(_Bool)arg4 scalingResult:(unsigned long long)arg5 assetKey:(id)arg6 expiryDate:(id)arg7 tags:(id)arg8 requestRecord:(id)arg9;	// IMP=0x0000000000029652
- (void)load;	// IMP=0x00000000000285c0
- (_Bool)isImageAvailable;	// IMP=0x0000000000028578
@property(readonly, nonatomic) struct CGSize expectedSize;
- (_Bool)isOfSameOriginAs:(id)arg1;	// IMP=0x000000000002840d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000282c6
- (unsigned long long)hash;	// IMP=0x0000000000028227
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027f33
- (id)description;	// IMP=0x0000000000027e5e
- (void)dealloc;	// IMP=0x0000000000027de1
- (id)initWithObject:(id)arg1 imageLoader:(id)arg2 groupType:(long long)arg3;	// IMP=0x0000000000027d2f

@end

