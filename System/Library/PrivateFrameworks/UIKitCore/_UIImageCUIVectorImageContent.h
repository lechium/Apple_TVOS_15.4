//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUINamedVectorImage;

__attribute__((visibility("hidden")))
@interface _UIImageCUIVectorImageContent
{
    CUINamedVectorImage *_vectorImage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000059f149
- (id)description;	// IMP=0x000000000059eff2
- (unsigned long long)hash;	// IMP=0x000000000059efd5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000059ef1e
- (double)vectorScale;	// IMP=0x000000000059ef01
- (struct CGSVGDocument *)CGSVGDocument;	// IMP=0x000000000059eec0
- (_Bool)isCGSVGDocument;	// IMP=0x000000000059ee8e
- (struct CGPDFPage *)CGPDFPage;	// IMP=0x000000000059edf0
- (_Bool)isCGPDFPage;	// IMP=0x000000000059edbe
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000059ed71
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x000000000059ec94
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x000000000059ec6d
- (id)contentWithCGImage:(struct CGImage *)arg1;	// IMP=0x000000000059ec02
- (_Bool)_canProvideCGImageDirectly;	// IMP=0x000000000059ebfa
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x000000000059ebf2
- (id)initWithScale:(double)arg1;	// IMP=0x000000000059eb6b
- (id)initWithCGImage:(struct CGImage *)arg1 CUIVectorImage:(id)arg2 scale:(double)arg3;	// IMP=0x000000000059ea7c

@end

