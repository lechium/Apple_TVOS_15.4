//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@class NSArray, NSOrderedSet;

@interface MLImageSizeConstraint : NSObject <NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    NSOrderedSet *_imageSizeSet;	// 16 = 0x10
    struct _NSRange _pixelsWideRange;	// 24 = 0x18
    struct _NSRange _pixelsHighRange;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001616f8
+ (id)closestImageSizeInArray:(id)arg1 toImageSize:(id)arg2 preferDownScaling:(_Bool)arg3;	// IMP=0x0000000000161a44
+ (id)closestImageSizeInPixelsWideRange:(struct _NSRange)arg1 pixelsHighRange:(struct _NSRange)arg2 toImageSize:(id)arg3 preferInputAspectRatio:(_Bool)arg4;	// IMP=0x000000000016188b
+ (unsigned long long)locationClosestTo:(unsigned long long)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000016186d
- (void).cxx_destruct;	// IMP=0x00000000001616e8
@property(readonly, nonatomic) NSOrderedSet *imageSizeSet; // @synthesize imageSizeSet=_imageSizeSet;
@property(readonly, nonatomic) struct _NSRange pixelsHighRange; // @synthesize pixelsHighRange=_pixelsHighRange;
@property(readonly, nonatomic) struct _NSRange pixelsWideRange; // @synthesize pixelsWideRange=_pixelsWideRange;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000161366
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000161146
- (_Bool)isAllowedImageSize:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000160dc2
@property(readonly, nonatomic) NSArray *enumeratedImageSizes;
- (id)initWithEnumeratedImageSizes:(id)arg1;	// IMP=0x00000000001609de
- (id)initWithPixelsWideRange:(struct _NSRange)arg1 pixelsHighRange:(struct _NSRange)arg2;	// IMP=0x0000000000160935
- (id)initUnspecified;	// IMP=0x00000000001608aa
- (id)allowedImageSizeClosestToPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 preferDownScaling:(_Bool)arg3 preferInputAspectRatio:(_Bool)arg4;	// IMP=0x0000000000161700

@end

