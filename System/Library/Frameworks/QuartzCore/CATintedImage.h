//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface CATintedImage : NSObject <NSSecureCoding>
{
    struct CGImage *_image;	// 8 = 0x8
    struct CGColor *_tint;	// 16 = 0x10
    unsigned int _copy_flags;	// 24 = 0x18
}

+ (void)CAMLParserStartElement:(id)arg1;	// IMP=0x000000000010aba5
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010ab9d
+ (id)tintedImageWithCABackingStore:(struct CABackingStore *)arg1;	// IMP=0x000000000010ab67
+ (id)tintedImageWithCGImage:(struct CGImage *)arg1 tint:(struct CGColor *)arg2;	// IMP=0x000000000010ab52
+ (id)tintedImageWithCGImage:(struct CGImage *)arg1 tint:(struct CGColor *)arg2 copyFlags:(unsigned int)arg3;	// IMP=0x000000000010ab0a
@property(retain) struct CGColor *tint; // @synthesize tint=_tint;
@property(retain) struct CGImage *image; // @synthesize image=_image;
- (void *)CA_copyRenderValue;	// IMP=0x000000000010aa23
- (void)CA_prepareRenderValue;	// IMP=0x000000000010a9f1
- (id)CAMLTypeForKey:(id)arg1;	// IMP=0x000000000010a997
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x000000000010a8f0
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000010a87a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010a740
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010a6d6
- (void)dealloc;	// IMP=0x000000000010a670

@end
