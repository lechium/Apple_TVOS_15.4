//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKCircle, VKVectorOverlayCircle;

@interface MKCircleRenderer
{
    VKVectorOverlayCircle *_vectorData;	// 88 = 0x58
    double _strokeStart;	// 96 = 0x60
    double _strokeEnd;	// 104 = 0x68
}

+ (Class)_mapkitLeafClass;	// IMP=0x00000000001ccab6
- (void).cxx_destruct;	// IMP=0x00000000001cd7f7
- (void)_updateRenderColors;	// IMP=0x00000000001cd682
- (id)vectorDataForOverlay:(id)arg1;	// IMP=0x00000000001cd637
- (_Bool)overlayCanProvideVectorData:(id)arg1;	// IMP=0x00000000001cd625
- (id)_vectorData;	// IMP=0x00000000001cd481
- (_Bool)_canProvideVectorGeometry;	// IMP=0x00000000001cd29d
- (void)setAlpha:(double)arg1;	// IMP=0x00000000001cd1b3
- (void)setStrokeColor:(id)arg1;	// IMP=0x00000000001ccff8
- (void)setFillColor:(id)arg1;	// IMP=0x00000000001cce3d
- (void)setLineWidth:(double)arg1;	// IMP=0x00000000001ccd12
@property(nonatomic) double strokeEnd;
@property(nonatomic) double strokeStart;
- (void)_performInitialConfiguration;	// IMP=0x00000000001ccac7
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000001cc86d
- (void)createPath;	// IMP=0x00000000001cc74d
@property(readonly, nonatomic) MKCircle *circle;
- (id)initWithCircle:(id)arg1;	// IMP=0x00000000001cc70c

@end
