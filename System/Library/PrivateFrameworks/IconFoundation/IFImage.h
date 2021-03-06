//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconFoundation/NSCopying-Protocol.h>
#import <IconFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface IFImage : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _largest;	// 8 = 0x8
}

+ (struct CGImage *)escapingCGImageWithCGImage:(struct CGImage *)arg1;	// IMP=0x000000000000b463
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000adfe
+ (id)imageWithContentsOfURL:(id)arg1;	// IMP=0x000000000000ab45
+ (struct CGColorSpace *)defaultCGColorSpace;	// IMP=0x000000000000ab07
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000aaff
+ (struct CGImage *)createCGImageWithBitmapData:(id)arg1 imageHeader:(CDStruct_0adfc866 *)arg2;	// IMP=0x000000000000c033
@property _Bool largest; // @synthesize largest=_largest;
@property(readonly) double dimension; // @dynamic dimension;
@property(readonly) struct CGImage *cgImage;
@property _Bool placeholder; // @dynamic placeholder;
@property(readonly) struct CGSize pixelSize; // @dynamic pixelSize;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;	// IMP=0x000000000000b44f
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 placeholder:(_Bool)arg3;	// IMP=0x000000000000b3f6
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x000000000000b123
- (id)initWithContentsOfURL:(id)arg1 scale:(double)arg2;	// IMP=0x000000000000b079
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b000
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000af24
- (id)_init;	// IMP=0x000000000000aef5
- (id)digest;	// IMP=0x000000000000c620
@property(readonly) NSData *bitmapData;
@property(readonly) NSData *validationToken; // @dynamic validationToken;
@property(readonly) NSUUID *uuid; // @dynamic uuid;
- (_Bool)writeToURL:(id)arg1;	// IMP=0x000000000000c348
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 minimumSize:(struct CGSize)arg3 placeholder:(_Bool)arg4;	// IMP=0x000000000000c2d8
- (id)initWithData:(id)arg1 uuid:(id)arg2 validationToken:(id)arg3;	// IMP=0x000000000000c248
- (id)initWithData:(id)arg1 uuid:(id)arg2;	// IMP=0x000000000000c233

// Remaining properties
@property(readonly) struct CGImage *CGImage; // @dynamic CGImage;
@property struct CGSize minimumSize; // @dynamic minimumSize;
@property(readonly) double scale; // @dynamic scale;
@property(readonly) struct CGSize size; // @dynamic size;
@property unsigned long long validationFlags; // @dynamic validationFlags;

@end

