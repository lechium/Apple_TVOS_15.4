//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent
{
    CIImage *_ciImage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000059e0e9
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x000000000059dea7
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x000000000059de80
- (id)description;	// IMP=0x000000000059de50
- (unsigned long long)hash;	// IMP=0x000000000059de33
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000059ddc7
- (struct CGSize)sizeInPixels;	// IMP=0x000000000059dd77
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x000000000059dd6f
- (_Bool)isCIImage;	// IMP=0x000000000059dd67
- (id)CIImage;	// IMP=0x000000000059dd52
- (id)initWithScale:(double)arg1;	// IMP=0x000000000059dccb
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;	// IMP=0x000000000059dbe3

@end
