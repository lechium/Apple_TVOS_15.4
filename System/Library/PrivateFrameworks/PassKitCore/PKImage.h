//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKImage : NSObject <NSSecureCoding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _shouldTile;	// 12 = 0xc
    _Bool _shouldStretch;	// 13 = 0xd
    struct PKEdgeInsets _capInsets;	// 16 = 0x10
    NSData *_imageData;	// 48 = 0x30
    struct CGImage *_imageRef;	// 56 = 0x38
    double _scale;	// 64 = 0x40
    long long _orientation;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007420c
+ (id)passesImageNamed:(id)arg1;	// IMP=0x0000000000072bb5
+ (id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000000072928
+ (id)newImageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;	// IMP=0x00000000000727e9
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;	// IMP=0x00000000000727cf
+ (id)newImageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x00000000000727b7
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x000000000007279d
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double *)arg3 preferredScreenScale:(double)arg4 suffix:(id)arg5;	// IMP=0x0000000000071d1f
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double *)arg3;	// IMP=0x0000000000071d04
- (void).cxx_destruct;	// IMP=0x00000000000745c9
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;	// IMP=0x000000000007453f
- (void)_queue_createImageRefIfNecessary;	// IMP=0x000000000007438d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000074214
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000074098
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withBlendMode:(int)arg3 alpha:(double)arg4;	// IMP=0x0000000000073a08
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000000739ec
- (id)resizableImageByTilingCenterPixel;	// IMP=0x0000000000073963
- (id)resizableImageByStretchingWithCapInsets:(struct PKEdgeInsets)arg1;	// IMP=0x00000000000738bf
- (id)resizableImageByTilingWithCapInsets:(struct PKEdgeInsets)arg1;	// IMP=0x000000000007381b
- (id)resizedImageWithConstraints:(id)arg1;	// IMP=0x0000000000073800
- (id)imageWithoutCapInsets;	// IMP=0x0000000000073765
- (id)croppedImageWithInsets:(struct PKEdgeInsets)arg1;	// IMP=0x00000000000735e7
- (id)blurredImageWithRadius:(unsigned long long)arg1 constraints:(id)arg2;	// IMP=0x000000000007323f
@property(readonly, nonatomic) struct PKEdgeInsets capInsets;
@property(readonly, nonatomic) _Bool stretches;
@property(readonly, nonatomic) _Bool tiles;
- (void)preheatBitmapData;	// IMP=0x000000000007319c
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (struct CGSize)downscaleSizeMatchingScale:(double)arg1;	// IMP=0x0000000000072e91
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;	// IMP=0x0000000000072d22
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0000000000072cc7
- (id)initWithData:(id)arg1 scale:(double)arg2;	// IMP=0x0000000000072c5e
- (id)init;	// IMP=0x0000000000072c23
- (_Bool)isEqualToImage:(id)arg1;	// IMP=0x0000000000072b24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000072abc
- (id)imageHash;	// IMP=0x0000000000072970

@end
