//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RenderBox/RBDisplayListContents-Protocol.h>

@class NSString;

@interface RBDisplayList : NSObject <RBDisplayListContents>
{
    struct DisplayList _list;	// 16 = 0x10
    struct unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>> _xml_document;	// 208 = 0xd0
    struct vector<std::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1UL, unsigned long> _contexts;	// 216 = 0xd8
    unsigned long long _active_contexts;	// 256 = 0x100
    unsigned long long _active_states;	// 264 = 0x108
    double _deviceScale;	// 272 = 0x110
    struct CGRect _contentRect;	// 280 = 0x118
}

+ (id)decodedObjectWithData:(id)arg1 delegate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017d1a
- (id).cxx_construct;	// IMP=0x0000000000018070
- (void).cxx_destruct;	// IMP=0x0000000000017fef
@property(nonatomic) double deviceScale; // @synthesize deviceScale=_deviceScale;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (void)beginRecordingXML;	// IMP=0x0000000000017f4b
- (id)encodedDataForDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017f38
- (void)addLuminanceCurveFilterWithCurve:(float [4])arg1 color:(CDStruct_0b1c536a)arg2 colorSpace:(int)arg3 flags:(unsigned int)arg4;	// IMP=0x0000000000017d01
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(CDStruct_0b1c536a)arg2 bias:(float)arg3;	// IMP=0x0000000000017ba0
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(CDStruct_0b1c536a)arg2 colorSpace:(int)arg3 bias:(float)arg4 flags:(unsigned int)arg5;	// IMP=0x0000000000017b8b
- (void)addGrayscaleFilterWithAmount:(float)arg1;	// IMP=0x000000000001798b
- (void)addGrayscaleFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;	// IMP=0x0000000000017978
- (void)addColorInvertFilter;	// IMP=0x000000000001782d
- (void)addColorInvertFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;	// IMP=0x000000000001781a
- (void)addLuminanceToAlphaFilter;	// IMP=0x00000000000176e1
- (void)addLuminanceToAlphaFilterWithFlags:(unsigned int)arg1;	// IMP=0x00000000000176ce
- (void)addContrastFilterWithAmount:(float)arg1;	// IMP=0x00000000000175c1
- (void)addContrastFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;	// IMP=0x00000000000175ae
- (void)addBrightnessFilterWithAmount:(float)arg1;	// IMP=0x000000000001746c
- (void)addBrightnessFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;	// IMP=0x0000000000017459
- (void)addSaturationFilterWithAmount:(float)arg1;	// IMP=0x0000000000017320
- (void)addSaturationFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;	// IMP=0x000000000001730d
- (void)addHueRotationFilterWithAngle:(double)arg1;	// IMP=0x00000000000171cb
- (void)addHueRotationFilterWithAngle:(double)arg1 flags:(unsigned int)arg2;	// IMP=0x00000000000171b8
- (void)addAlphaMultiplyFilterWithColor:(CDStruct_0b1c536a)arg1;	// IMP=0x000000000001706a
- (void)addAlphaMultiplyFilterWithColor:(CDStruct_0b1c536a)arg1 colorSpace:(int)arg2 flags:(unsigned int)arg3;	// IMP=0x0000000000017055
- (void)addColorMultiplyFilterWithColor:(CDStruct_0b1c536a)arg1;	// IMP=0x0000000000016ec1
- (void)addColorMultiplyFilterWithColor:(CDStruct_0b1c536a)arg1 colorSpace:(int)arg2 flags:(unsigned int)arg3;	// IMP=0x0000000000016eac
- (void)addColorMatrixFilterWithArray:(float [20])arg1;	// IMP=0x0000000000016c98
- (void)addColorMatrixFilterWithArray:(float [20])arg1 flags:(unsigned int)arg2;	// IMP=0x0000000000016c82
- (void)addAlphaGradientFilterWithStopCount:(long long)arg1 colors:(const CDStruct_0b1c536a *)arg2 colorSpace:(int)arg3 locations:(const double *)arg4 flags:(unsigned int)arg5;	// IMP=0x0000000000016b33
- (void)addAlphaThresholdFilterWithAlpha:(float)arg1 color:(CDStruct_0b1c536a)arg2 colorSpace:(int)arg3;	// IMP=0x0000000000016a5e
- (void)addAlphaThresholdFilterWithMinAlpha:(float)arg1 maxAlpha:(float)arg2 color:(CDStruct_0b1c536a)arg3 colorSpace:(int)arg4;	// IMP=0x0000000000016a4b
- (void)addBlurFilterWithRadius:(double)arg1;	// IMP=0x000000000001694c
- (void)addBlurFilterWithRadius:(double)arg1 opaque:(_Bool)arg2;	// IMP=0x0000000000016919
- (void)addBlurFilterWithRadius:(double)arg1 flags:(unsigned int)arg2;	// IMP=0x00000000000168e6
- (void)addBlurFilterWithRadius:(double)arg1 bounds:(struct CGRect)arg2 flags:(unsigned int)arg3;	// IMP=0x00000000000168d3
- (void)addProjectionStyleWithArray:(float [9])arg1;	// IMP=0x0000000000016732
- (void)addShadowStyleWithRadius:(double)arg1 offset:(struct CGSize)arg2 color:(CDStruct_0b1c536a)arg3 mode:(unsigned int)arg4;	// IMP=0x00000000000166bb
- (void)addShadowStyleWithRadius:(double)arg1 offset:(struct CGSize)arg2 color:(CDStruct_0b1c536a)arg3 colorSpace:(int)arg4 blendMode:(int)arg5 flags:(unsigned int)arg6;	// IMP=0x00000000000166a3
- (void)addTransformStyle:(id)arg1;	// IMP=0x00000000000164e8
- (void)addPredicateStyle:(id)arg1;	// IMP=0x000000000001646c
- (void)drawInRect:(struct CGRect)arg1 alpha:(float)arg2 blendMode:(int)arg3 flags:(unsigned int)arg4 operation:(CDUnknownBlockType)arg5;	// IMP=0x00000000000163e8
- (void)drawDisplayList:(id)arg1;	// IMP=0x00000000000162f7
- (void)drawInState:(struct _RBDrawingState *)arg1;	// IMP=0x000000000001625e
- (void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4;	// IMP=0x0000000000016244
- (void)clipShape:(id)arg1 mode:(int)arg2;	// IMP=0x0000000000016040
- (void)concat:(struct CGAffineTransform)arg1;	// IMP=0x0000000000015e6b
- (void)rotateBy:(double)arg1;	// IMP=0x0000000000015de2
- (void)translateByX:(double)arg1 Y:(double)arg2;	// IMP=0x0000000000015d67
- (void)scaleByX:(double)arg1 Y:(double)arg2;	// IMP=0x0000000000015d06
@property(readonly, nonatomic) struct CGRect clipBoundingBox;
@property(nonatomic) struct CGAffineTransform CTM;
- (const void *)_rbXmlDocument;	// IMP=0x0000000000015840
- (const void *)_rbPredicate;	// IMP=0x0000000000015838
- (const void *)_rbContents;	// IMP=0x000000000001582e
@property(readonly, copy, nonatomic) NSString *xmlDescription;
- (void)renderInContext:(struct CGContext *)arg1 options:(id)arg2;	// IMP=0x000000000001566b
- (void)endCGContext;	// IMP=0x000000000001565a
- (struct CGContext *)beginCGContextWithAlpha:(float)arg1 flags:(unsigned int)arg2;	// IMP=0x00000000000155d6
- (struct CGContext *)beginCGContextWithAlpha:(float)arg1;	// IMP=0x000000000001559f
- (void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2;	// IMP=0x00000000000152d5
- (void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2;	// IMP=0x000000000001522e
- (void)beginLayer;	// IMP=0x000000000001521a
- (void)beginLayerWithFlags:(unsigned int)arg1;	// IMP=0x0000000000015186
- (void)restore;	// IMP=0x0000000000014f56
- (void)save;	// IMP=0x0000000000014f2a
- (id)moveContents;	// IMP=0x0000000000014c61
- (void)clear;	// IMP=0x0000000000014b8b
- (void)clearCaches;	// IMP=0x0000000000014af8
@property(nonatomic) _Bool linearColors;
@property(nonatomic) int defaultColorSpace;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) struct CGRect boundingRect;
- (void)dealloc;	// IMP=0x000000000001489d
- (id)init;	// IMP=0x0000000000014810

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
