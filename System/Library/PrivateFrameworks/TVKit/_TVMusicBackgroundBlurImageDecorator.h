//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVImageDecorator.h>

@class _UIBackdropViewSettings;

@interface _TVMusicBackgroundBlurImageDecorator : TVImageDecorator
{
    _Bool _lightStyle;	// 8 = 0x8
    _UIBackdropViewSettings *_backdropSettings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000102f0
@property(retain, nonatomic) _UIBackdropViewSettings *backdropSettings; // @synthesize backdropSettings=_backdropSettings;
@property(nonatomic) _Bool lightStyle; // @synthesize lightStyle=_lightStyle;
- (id)decoratorIdentifier;	// IMP=0x0000000000010225
- (id)resizeImage:(struct CGImage *)arg1 targetSize:(struct CGSize)arg2 shouldDither:(_Bool)arg3;	// IMP=0x000000000001007f
- (id)blurImageWithImage:(id)arg1 targetSize:(struct CGSize)arg2 scaleSize:(struct CGSize)arg3;	// IMP=0x000000000000fd77
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x000000000000fbd3

@end
