//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCNPyramid
{
    double _pyramidwidth;	// 8 = 0x8
    double _pyramidheight;	// 16 = 0x10
    double _pyramidlength;	// 24 = 0x18
    long long _pyramidwidthSegmentCount;	// 32 = 0x20
    long long _pyramidheightSegmentCount;	// 40 = 0x28
    long long _pyramidlengthSegmentCount;	// 48 = 0x30
    long long _pyramidprimitiveType;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000219d20
+ (id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3;	// IMP=0x00000000002197b0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000219ba2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000219a55
- (id)copy;	// IMP=0x0000000000219a41
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002199ef
- (void)_setupObjCModelFrom:(id)arg1;	// IMP=0x00000000002198b2
- (id)description;	// IMP=0x000000000021981f
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;	// IMP=0x0000000000219648
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x00000000002194d5
@property(nonatomic) long long widthSegmentCount;
@property(nonatomic) double width;
- (void)setPrimitiveType:(long long)arg1;	// IMP=0x00000000002190b9
- (long long)primitiveType;	// IMP=0x0000000000219040
@property(nonatomic) long long lengthSegmentCount;
@property(nonatomic) double length;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;	// IMP=0x0000000000218945
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x0000000000218938
- (id)presentationGeometry;	// IMP=0x0000000000218926
- (id)presentationPyramid;	// IMP=0x00000000002188d4
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x00000000002188a5
- (struct __C3DGeometry *)__createCFObject;	// IMP=0x0000000000218892
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x0000000000218810
- (id)init;	// IMP=0x000000000021876e

@end
