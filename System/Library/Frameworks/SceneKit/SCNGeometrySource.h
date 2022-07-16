//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;
@protocol MTLBuffer;

@interface SCNGeometrySource : NSObject <NSSecureCoding>
{
    struct __C3DMeshSource *_meshSource;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSString *_semantic;	// 24 = 0x18
    long long _vectorCount;	// 32 = 0x20
    short _componentType;	// 40 = 0x28
    unsigned short _componentCount;	// 42 = 0x2a
    struct CGColorSpace *_colorSpace;	// 48 = 0x30
    long long _dataOffset;	// 56 = 0x38
    long long _dataStride;	// 64 = 0x40
    unsigned char _mkSemantic;	// 72 = 0x48
    id <MTLBuffer> _mtlBuffer;	// 80 = 0x50
    long long _mtlVertexFormat;	// 88 = 0x58
    _Bool _encodeDataAsHalf;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000281fca
+ (id)_geometrySourceWithSource:(id)arg1 vertexFormat:(unsigned long long)arg2;	// IMP=0x0000000000280f8e
+ (id)geometrySourceWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;	// IMP=0x0000000000280eef
+ (id)geometrySourceWithColorData:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 vectorCount:(long long)arg3 floatComponents:(_Bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;	// IMP=0x0000000000280e76
+ (id)geometrySourceWithColorComponents:(const float *)arg1 count:(long long)arg2 hasAlpha:(_Bool)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x0000000000280ce2
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint *)arg1 count:(long long)arg2;	// IMP=0x0000000000280add
+ (id)geometrySourceWithNormals:(const struct SCNVector3 *)arg1 count:(long long)arg2;	// IMP=0x0000000000280a6b
+ (id)geometrySourceWithVertices:(const struct SCNVector3 *)arg1 count:(long long)arg2;	// IMP=0x00000000002809f9
+ (id)_geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;	// IMP=0x000000000028098c
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(_Bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;	// IMP=0x0000000000280917
+ (id)dataWithPointArray:(const struct CGPoint *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;	// IMP=0x000000000028057f
+ (id)dataWithVector3Array:(const struct SCNVector3 *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;	// IMP=0x0000000000280552
+ (id)dataByConvertingDoublesToFloats:(const double *)arg1 count:(long long)arg2;	// IMP=0x00000000002804eb
+ (id)geometrySourceWithMeshSourceRef:(struct __C3DMeshSource *)arg1;	// IMP=0x0000000000280196
+ (id)geometrySourceWithMDLVertexAttribute:(id)arg1 mesh:(id)arg2;	// IMP=0x000000000001f221
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002819be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000281512
- (id)_uninterleaveData:(id)arg1 count:(unsigned long long)arg2 srcOffset:(unsigned long long)arg3 srcStride:(unsigned long long)arg4 dstStride:(unsigned long long)arg5;	// IMP=0x0000000000281459
- (const struct __C3DMeshSource *)meshSource;	// IMP=0x000000000028138f
- (const void *)__CFObject;	// IMP=0x000000000028137d
- (id)scene;	// IMP=0x000000000028135a
- (struct __C3DScene *)sceneRef;	// IMP=0x0000000000281340
- (void)_clearC3DCache;	// IMP=0x00000000002812f1
- (short)_componentType;	// IMP=0x00000000002812e7
@property(readonly, nonatomic) long long dataStride;
@property(readonly, nonatomic) long long dataOffset;
@property(readonly, nonatomic) long long bytesPerComponent;
@property(readonly, nonatomic) long long componentsPerVector;
@property(readonly, nonatomic) _Bool floatComponents;
@property(readonly, nonatomic) long long vectorCount;
@property(readonly, nonatomic) NSString *semantic;
- (void)_printData;	// IMP=0x000000000028126a
@property(readonly, nonatomic) NSData *data;
- (void)setMkSemantic:(id)arg1;	// IMP=0x0000000000281082
- (id)mkSemantic;	// IMP=0x000000000028105a
- (void)set_encodeDataAsHalf:(_Bool)arg1;	// IMP=0x0000000000281051
- (_Bool)_encodeDataAsHalf;	// IMP=0x0000000000281048
- (id)dataByConvertingColorData:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 newColorSpace:(struct CGColorSpace **)arg3 vectorCount:(long long)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8 newDataOffset:(long long *)arg9 newDataStride:(long long *)arg10;	// IMP=0x0000000000280b4f
- (id)initWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;	// IMP=0x0000000000280865
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;	// IMP=0x00000000002807c2
- (id)initWithData:(id)arg1 semantic:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 vectorCount:(long long)arg4 floatComponents:(_Bool)arg5 componentsPerVector:(long long)arg6 bytesPerComponent:(long long)arg7 dataOffset:(long long)arg8 dataStride:(long long)arg9;	// IMP=0x0000000000280606
- (id)description;	// IMP=0x000000000028043e
- (void)dealloc;	// IMP=0x000000000028036c
- (id)init;	// IMP=0x0000000000280358
- (id)initWithMeshSource:(struct __C3DMeshSource *)arg1;	// IMP=0x00000000002801dc

@end

