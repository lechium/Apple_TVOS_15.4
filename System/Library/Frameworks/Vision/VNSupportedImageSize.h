//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class VNSizeRange;

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _cachedCalculatedHash;	// 8 = 0x8
    _Bool _orientationAgnostic;	// 16 = 0x10
    unsigned int _idealImageFormat;	// 20 = 0x14
    unsigned int _idealOrientation;	// 24 = 0x18
    VNSizeRange *_pixelsWideRange;	// 32 = 0x20
    VNSizeRange *_pixelsHighRange;	// 40 = 0x28
    unsigned long long _aspectRatioHandling;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000098d6a
- (void).cxx_destruct;	// IMP=0x0000000000098d42
@property(readonly, nonatomic, getter=isOrientationAgnostic) _Bool orientationAgnostic; // @synthesize orientationAgnostic=_orientationAgnostic;
@property(readonly, nonatomic) unsigned int idealOrientation; // @synthesize idealOrientation=_idealOrientation;
@property(readonly, nonatomic) unsigned int idealImageFormat; // @synthesize idealImageFormat=_idealImageFormat;
@property(readonly, nonatomic) unsigned long long aspectRatioHandling; // @synthesize aspectRatioHandling=_aspectRatioHandling;
@property(readonly, nonatomic) VNSizeRange *pixelsHighRange; // @synthesize pixelsHighRange=_pixelsHighRange;
@property(readonly, nonatomic) VNSizeRange *pixelsWideRange; // @synthesize pixelsWideRange=_pixelsWideRange;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000098b7b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000098a9b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000098a90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000098826
- (unsigned long long)hash;	// IMP=0x00000000000986f9
- (_Bool)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2;	// IMP=0x0000000000098638
- (id)initWithIdealFormat:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 orientation:(unsigned int)arg4 aspectRatioHandling:(unsigned long long)arg5 orientationAgnostic:(_Bool)arg6;	// IMP=0x000000000009852f
- (id)initWithIdealFormat:(unsigned int)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned int)arg5 orientationAgnostic:(_Bool)arg6;	// IMP=0x000000000009841d

@end

