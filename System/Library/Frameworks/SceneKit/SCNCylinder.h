//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCNCylinder
{
    double _cylinderradius;	// 8 = 0x8
    double _cylinderheight;	// 16 = 0x10
    double _cylinderradialSpan;	// 24 = 0x18
    long long _cylinderheightSegmentCount;	// 32 = 0x20
    long long _cylinderradialSegmentCount;	// 40 = 0x28
    long long _cylinderprimitiveType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021c34f
+ (id)cylinderWithRadius:(double)arg1 height:(double)arg2;	// IMP=0x000000000021be65
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021c1f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021c0bf
- (id)copy;	// IMP=0x000000000021c0ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021c059
- (void)_setupObjCModelFrom:(id)arg1;	// IMP=0x000000000021bf39
- (id)description;	// IMP=0x000000000021bebd
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;	// IMP=0x000000000021bd1b
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x000000000021bbbf
@property(nonatomic) double radius;
- (void)setRadialSpan:(double)arg1;	// IMP=0x000000000021b900
- (double)radialSpan;	// IMP=0x000000000021b877
@property(nonatomic) long long radialSegmentCount;
- (void)setPrimitiveType:(long long)arg1;	// IMP=0x000000000021b5ff
- (long long)primitiveType;	// IMP=0x000000000021b586
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000021b1bf
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x000000000021b1b2
- (id)presentationGeometry;	// IMP=0x000000000021b1a0
- (id)presentationCylinder;	// IMP=0x000000000021b14e
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000021b11f
- (struct __C3DGeometry *)__createCFObject;	// IMP=0x000000000021b10c
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000021b08a
- (id)init;	// IMP=0x000000000021afe8

@end
