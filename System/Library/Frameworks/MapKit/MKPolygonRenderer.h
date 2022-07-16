//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKPolygon, VKVectorOverlayPolygonGroup;

@interface MKPolygonRenderer
{
    VKVectorOverlayPolygonGroup *_vectorData;	// 88 = 0x58
    double _strokeStart;	// 96 = 0x60
    double _strokeEnd;	// 104 = 0x68
}

+ (Class)_mapkitLeafClass;	// IMP=0x00000000001e2b95
- (void).cxx_destruct;	// IMP=0x00000000001e3a87
- (void)_updateRenderColors;	// IMP=0x00000000001e3912
- (id)vectorDataForOverlay:(id)arg1;	// IMP=0x00000000001e38c7
- (_Bool)overlayCanProvideVectorData:(id)arg1;	// IMP=0x00000000001e38b5
- (id)_vectorGeometry;	// IMP=0x00000000001e35fe
- (_Bool)_canProvideVectorGeometry;	// IMP=0x00000000001e343a
- (void)setAlpha:(double)arg1;	// IMP=0x00000000001e3350
- (void)setStrokeColor:(id)arg1;	// IMP=0x00000000001e3195
- (void)setFillColor:(id)arg1;	// IMP=0x00000000001e2fda
- (void)setMiterLimit:(double)arg1;	// IMP=0x00000000001e2f84
- (void)setLineJoin:(int)arg1;	// IMP=0x00000000001e2f1c
- (void)setLineWidth:(double)arg1;	// IMP=0x00000000001e2df1
@property(nonatomic) double strokeEnd;
@property(nonatomic) double strokeStart;
- (void)_performInitialConfiguration;	// IMP=0x00000000001e2ba6
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000001e24b8
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000001e2448
- (void)createPath;	// IMP=0x00000000001e215c
@property(readonly, nonatomic) MKPolygon *polygon;
- (id)initWithPolygon:(id)arg1;	// IMP=0x00000000001e211b

@end
