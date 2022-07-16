//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIImage, CUINamedVectorGlyph, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIImageContent : NSObject
{
    double _scale;	// 8 = 0x8
    _Bool _isDecompressing;	// 16 = 0x10
    struct CGSize _sizeInPixels;	// 24 = 0x18
}

+ (id)empty;	// IMP=0x000000000059b250
@property(nonatomic) _Bool isDecompressing; // @synthesize isDecompressing=_isDecompressing;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (id)debugQuickLookObject;	// IMP=0x000000000059c56b
- (id)debugDescription;	// IMP=0x000000000059c4bf
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 paletteColors:(id)arg3;	// IMP=0x000000000059c4ad
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 hierarchicalColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000059c49b
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 namedColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x000000000059c489
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000059c481
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x000000000059c47b
- (_Bool)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;	// IMP=0x000000000059c44d
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x000000000059c40f
- (id)renditionWithSize:(struct CGSize)arg1 scale:(double)arg2 applyingEffect:(id)arg3;	// IMP=0x000000000059b947
- (id)renditionApplyingEffect:(id)arg1;	// IMP=0x000000000059b8b6
- (id)contentWithCGImage:(struct CGImage *)arg1;	// IMP=0x000000000059b8ae
- (unsigned long long)hash;	// IMP=0x000000000059b884
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000059b870
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) UIBezierPath *outlinePath;
@property(readonly, nonatomic) double vectorScale;
@property(readonly, nonatomic) CUINamedVectorGlyph *vectorGlyph;
- (unsigned long long)numberOfHierarchyLayers;	// IMP=0x000000000059b75e
- (_Bool)containsNamedColorStyle:(id)arg1;	// IMP=0x000000000059b756
- (_Bool)containsNamedColorStyles;	// IMP=0x000000000059b74e
- (_Bool)isVectorGlyph;	// IMP=0x000000000059b746
- (struct CGSize)CGSVGDocumentSize;	// IMP=0x000000000059b69c
- (_Bool)isCGSVGDocument;	// IMP=0x000000000059b694
@property(readonly, nonatomic) struct CGSVGDocument *CGSVGDocument;
- (struct CGSize)CGPDFPageSize;	// IMP=0x000000000059b5e0
- (_Bool)isCGPDFPage;	// IMP=0x000000000059b5d8
@property(readonly, nonatomic) struct CGPDFPage *CGPDFPage;
- (_Bool)isIOSurface;	// IMP=0x000000000059b5c8
@property(readonly, nonatomic) struct __IOSurface *IOSurface;
- (_Bool)isCIImage;	// IMP=0x000000000059b5b8
@property(readonly, nonatomic) CIImage *CIImage;
- (_Bool)optimizeContentForImageSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000059b5a8
- (id)contentOptimizedForImageSize:(struct CGSize)arg1;	// IMP=0x000000000059b5a0
- (_Bool)prepareContentForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000059b598
- (id)contentPreparedForDisplay;	// IMP=0x000000000059b590
@property(readonly, nonatomic) struct CGImage *CGImage;
- (_Bool)_canProvideCGImageDirectly;	// IMP=0x000000000059b3ef
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x000000000059b3e7
- (_Bool)canDrawImage;	// IMP=0x000000000059b3df
- (_Bool)hasCGImage;	// IMP=0x000000000059b3d7
- (_Bool)isCGImage;	// IMP=0x000000000059b3cf
- (_Bool)isCGImageOnly;	// IMP=0x000000000059b3a8
- (id)initWithScale:(double)arg1;	// IMP=0x000000000059b344
- (id)init;	// IMP=0x000000000059b2bd

@end
