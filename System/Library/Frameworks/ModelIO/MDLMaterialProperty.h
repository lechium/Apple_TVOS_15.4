//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLBufferView, MDLMaterialPropertyNode, MDLTextureSampler, MISSING_TYPE, NSString, NSURL;

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying>
{
    NSString *_string;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    MDLTextureSampler *_textureSampler;	// 32 = 0x20
    MISSING_TYPE *_float;	// 48 = 0x30
    CDStruct_14d5dc5e _matrix;	// 64 = 0x40
    struct CGColor *_color;	// 128 = 0x80
    MDLBufferView *_buffer;	// 136 = 0x88
    unsigned long long _stride;	// 144 = 0x90
    unsigned long long _semantic;	// 152 = 0x98
    MDLMaterialPropertyNode *_node;	// 160 = 0xa0
    MDLMaterialProperty *_overrider;	// 168 = 0xa8
    MDLMaterialProperty *_overridee;	// 176 = 0xb0
    _Bool _isDefaultValue;	// 184 = 0xb8
    unsigned long long _type;	// 192 = 0xc0
    CDStruct_14d5dc5e _matrix4x4;	// 208 = 0xd0
}

+ (id)decodeMaterialPropertyWithCoder:(id)arg1 forKey:(id)arg2 allocator:(id)arg3;	// IMP=0x00000000002dd777
+ (CDStruct_14d5dc5e)_decodeMatrixPropertyWithCoder:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002dd2f6
+ (MISSING_TYPE *)_decodeVectorWithCoder:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002dd0f5
- (void).cxx_destruct;	// IMP=0x00000000002ddb3e
@property(nonatomic) _Bool isDefaultValue; // @synthesize isDefaultValue=_isDefaultValue;
@property(nonatomic) CDStruct_14d5dc5e matrix4x4; // @synthesize matrix4x4=_matrix4x4;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeMaterialPropertyWithCoder:(id)arg1 forKey:(id)arg2 allocator:(id)arg3;	// IMP=0x00000000002dd495
- (void)_encodeMatrixPropertyWithCoder:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002dd13a
- (void)_encodeVector:(id)arg1 withCoder:(id)arg2 forKey: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002dd0c8
- (void)setMatrix4x4Value:(CDStruct_14d5dc5e)arg1;	// IMP=0x00000000002dd090
@property(nonatomic) MISSING_TYPE *float4Value;
@property(nonatomic) MISSING_TYPE *float3Value;
@property(nonatomic) MISSING_TYPE *float2Value;
@property(nonatomic) float luminance;
@property(nonatomic) float floatValue;
@property(retain, nonatomic) MDLTextureSampler *textureSamplerValue;
@property(copy, nonatomic) NSURL *URLValue;
@property(copy, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) unsigned long long stride;
@property(readonly, nonatomic) MDLBufferView *bufferData;
@property(nonatomic) struct CGColor *color;
- (void)setProperties:(id)arg1;	// IMP=0x00000000002dc75b
- (void)dealloc;	// IMP=0x00000000002dc6c0
- (id)initWithName:(id)arg1 buffer:(id)arg2;	// IMP=0x00000000002dc4f9
- (id)initWithName:(id)arg1 buffer:(id)arg2 stride:(unsigned long long)arg3;	// IMP=0x00000000002dc427
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(struct CGColor *)arg3;	// IMP=0x00000000002dc37d
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float4WithSRGBA: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002dc2dd
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3;	// IMP=0x00000000002dc21b
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3;	// IMP=0x00000000002dc148
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3;	// IMP=0x00000000002dc086
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 matrix4x4:(CDStruct_14d5dc5e)arg3;	// IMP=0x00000000002dbfd7
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float4: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002dbf37
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float3: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002dbe8c
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float2: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002dbdeb
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3;	// IMP=0x00000000002dbd44
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2;	// IMP=0x00000000002dbbcb
@property(nonatomic) unsigned long long semantic;
@property(copy, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002db9f5
- (void)clear;	// IMP=0x00000000002db952

@end
