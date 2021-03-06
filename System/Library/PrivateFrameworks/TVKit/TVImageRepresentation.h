//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVImageRepresentation : NSObject
{
    _Bool _fixedFrame;	// 8 = 0x8
    struct CGRect _sourceRect;	// 16 = 0x10
    struct CGRect _destinationRect;	// 48 = 0x30
}

+ (id)_loadingQueue;	// IMP=0x00000000000087ba
+ (id)imageRepresentationWithNamedLayerImage:(id)arg1;	// IMP=0x00000000000083ff
+ (id)imageRepresentationWithImageProxy:(id)arg1;	// IMP=0x00000000000083b2
+ (id)imageRepresentationWithImage:(id)arg1;	// IMP=0x0000000000008365
+ (id)imageRepresentationWithURL:(id)arg1;	// IMP=0x00000000000082ae
+ (id)imageRepresentationWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x0000000000008219
@property(nonatomic, getter=isFixedFrame) _Bool fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (id)_originalImageCacheKey;	// IMP=0x00000000000087b2
- (struct CGImage *)_originalImage;	// IMP=0x00000000000087aa
- (struct CGImage *)_imageForOriginalImage:(struct CGImage *)arg1;	// IMP=0x00000000000086e2
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000085a0
- (struct CGImage *)newImage;	// IMP=0x0000000000008557
@property(readonly, nonatomic) NSString *cacheKey;

@end

