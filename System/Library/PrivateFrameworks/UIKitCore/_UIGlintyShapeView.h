//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface _UIGlintyShapeView
{
    UIBezierPath *_path;	// 112 = 0x70
    UIColor *_fillColor;	// 120 = 0x78
    UIColor *_strokeColor;	// 128 = 0x80
}

+ (Class)layerClass;	// IMP=0x0000000001090f48
- (void).cxx_destruct;	// IMP=0x0000000001091172
@property(readonly, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void)setStrokeColor:(id)arg1;	// IMP=0x00000000010910a3
- (void)setFillColor:(id)arg1;	// IMP=0x0000000001091007
- (void)setPath:(id)arg1;	// IMP=0x0000000001090f6b
@property(readonly, nonatomic) CAShapeLayer *shapeLayer;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001090e2d

@end

