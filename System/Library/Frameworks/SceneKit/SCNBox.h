//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCNBox
{
    double _boxwidth;	// 8 = 0x8
    double _boxheight;	// 16 = 0x10
    double _boxlength;	// 24 = 0x18
    double _boxchamferRadius;	// 32 = 0x20
    long long _boxwidthSegmentCount;	// 40 = 0x28
    long long _boxheightSegmentCount;	// 48 = 0x30
    long long _boxlengthSegmentCount;	// 56 = 0x38
    long long _boxchamferSegmentCount;	// 64 = 0x40
    long long _boxprimitiveType;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000218766
+ (id)box;	// IMP=0x0000000000218180
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;	// IMP=0x00000000002180fa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002185ab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000218427
- (id)copy;	// IMP=0x0000000000218413
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002183c1
- (void)_setupObjCModelFrom:(id)arg1;	// IMP=0x000000000021824d
- (id)description;	// IMP=0x00000000002181a3
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;	// IMP=0x0000000000217f92
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x0000000000217e1f
@property(nonatomic) long long widthSegmentCount;
@property(nonatomic) double width;
- (void)setPrimitiveType:(long long)arg1;	// IMP=0x0000000000217a03
- (long long)primitiveType;	// IMP=0x000000000021798a
@property(nonatomic) long long lengthSegmentCount;
@property(nonatomic) double length;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
@property(nonatomic) long long chamferSegmentCount;
@property(nonatomic) double chamferRadius;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;	// IMP=0x0000000000216f3e
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x0000000000216f31
- (id)presentationGeometry;	// IMP=0x0000000000216f1f
- (id)presentationBox;	// IMP=0x0000000000216ecd
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x0000000000216e9e
- (struct __C3DGeometry *)__createCFObject;	// IMP=0x0000000000216e8b
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x0000000000216e09
- (id)init;	// IMP=0x0000000000216d67

@end
