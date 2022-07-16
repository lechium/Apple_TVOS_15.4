//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBezierPath, UIFont;

@interface SCNText
{
    float _flatness;	// 8 = 0x8
    float _chamferRadius;	// 12 = 0xc
    float _extrusionDepth;	// 16 = 0x10
    float _discretizedStraightLineMaxLength;	// 20 = 0x14
    UIBezierPath *_chamferProfile;	// 24 = 0x18
    long long _primitiveType;	// 32 = 0x20
    id _string;	// 40 = 0x28
    UIFont *_font;	// 48 = 0x30
    _Bool _wrapped;	// 56 = 0x38
    int _alignmentMode;	// 60 = 0x3c
    int _truncationMode;	// 64 = 0x40
    _Bool _useCustomContainerFrame;	// 68 = 0x44
    struct CGRect _customContainerFrame;	// 72 = 0x48
    _Bool __wantsSeparateGeometryElements;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002ed92f
+ (id)textWithString:(id)arg1 extrusionDepth:(double)arg2;	// IMP=0x00000000002eb48b
+ (id)text;	// IMP=0x00000000002eb474
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ed711
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002ed553
- (void)_customEncodingOfSCNText:(id)arg1;	// IMP=0x00000000002ed4a6
- (void)_customDecodingOfSCNText:(id)arg1;	// IMP=0x00000000002ed318
- (void)dealloc;	// IMP=0x00000000002ed2b2
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;	// IMP=0x00000000002ed167
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x00000000002ed00a
- (CDStruct_8bd95810)params;	// IMP=0x00000000002ece7d
@property(copy, nonatomic) UIBezierPath *chamferProfile;
@property(copy, nonatomic) NSString *alignmentMode;
@property(copy, nonatomic) NSString *truncationMode;
@property(nonatomic) struct CGRect containerFrame;
@property(retain, nonatomic) UIFont *font;
- (id)patchFont:(id)arg1;	// IMP=0x00000000002ec2b6
@property(nonatomic, getter=isWrapped) _Bool wrapped;
@property(copy, nonatomic) id string;
- (void)setPrimitiveType:(long long)arg1;	// IMP=0x00000000002ebe9e
- (long long)primitiveType;	// IMP=0x00000000002ebe25
@property(nonatomic) double flatness;
@property(nonatomic) double extrusionDepth;
- (void)setDiscretizedStraightLineMaxLength:(double)arg1;	// IMP=0x00000000002eb996
- (double)discretizedStraightLineMaxLength;	// IMP=0x00000000002eb911
@property(nonatomic) double chamferRadius;
- (void)set_wantsSeparateGeometryElements:(_Bool)arg1;	// IMP=0x00000000002eb654
- (_Bool)_wantsSeparateGeometryElements;	// IMP=0x00000000002eb5df
- (id)copy;	// IMP=0x00000000002eb5cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002eb55a
- (id)description;	// IMP=0x00000000002eb4e4
- (id)copyAnimationPathForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x00000000002eb467
- (id)presentationGeometry;	// IMP=0x00000000002eb415
- (struct __C3DGeometry *)__createCFObject;	// IMP=0x00000000002eb40b
- (id)initPresentationTextGeometryWithTextGeometryRef:(struct __C3DTextGeometry *)arg1;	// IMP=0x00000000002eb3dc
- (id)initWithTextGeometryRef:(struct __C3DTextGeometry *)arg1;	// IMP=0x00000000002eb378
- (id)init;	// IMP=0x00000000002eb2fd
- (void)_syncObjCModel:(struct __C3DTextGeometry *)arg1;	// IMP=0x00000000002eb148

@end
