//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBundle, NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _TVPNamedImageRepresentation
{
    NSBundle *_bundle;	// 80 = 0x50
    NSString *_imageName;	// 88 = 0x58
    UITraitCollection *_traitCollection;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000099b6e
- (id)_originalImageCacheKey;	// IMP=0x0000000000099acc
- (struct CGImage *)_originalImage;	// IMP=0x0000000000099a4d
- (id)initWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x0000000000099976

@end

