//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCNTorus
{
    double _torusringRadius;	// 8 = 0x8
    double _toruspipeRadius;	// 16 = 0x10
    double _torusradialSpan;	// 24 = 0x18
    long long _torusringSegmentCount;	// 32 = 0x20
    long long _toruspipeSegmentCount;	// 40 = 0x28
    long long _torusprimitiveType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000221381
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2;	// IMP=0x0000000000220e97
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000221223
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002210f1
- (id)copy;	// IMP=0x00000000002210dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022108b
- (void)_setupObjCModelFrom:(id)arg1;	// IMP=0x0000000000220f6b
- (id)description;	// IMP=0x0000000000220eef
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;	// IMP=0x0000000000220d4d
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x0000000000220bf1
@property(nonatomic) long long ringSegmentCount;
@property(nonatomic) double ringRadius;
- (void)setRadialSpan:(double)arg1;	// IMP=0x00000000002207b7
- (double)radialSpan;	// IMP=0x000000000022072e
- (void)setPrimitiveType:(long long)arg1;	// IMP=0x0000000000220631
- (long long)primitiveType;	// IMP=0x00000000002205b8
@property(nonatomic) long long pipeSegmentCount;
@property(nonatomic) double pipeRadius;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;	// IMP=0x00000000002201f7
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x00000000002201ea
- (id)presentationGeometry;	// IMP=0x00000000002201d8
- (id)presentationTorus;	// IMP=0x0000000000220186
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x0000000000220157
- (struct __C3DGeometry *)__createCFObject;	// IMP=0x0000000000220144
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x00000000002200c2
- (id)init;	// IMP=0x0000000000220020

@end
