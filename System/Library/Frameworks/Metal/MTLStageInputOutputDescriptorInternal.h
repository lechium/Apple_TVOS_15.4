//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLStageInputOutputDescriptorInternal
{
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;	// 8 = 0x8
    MTLAttributeDescriptorArrayInternal *_attributeArray;	// 16 = 0x10
    unsigned long long _indexBufferIndex;	// 24 = 0x18
    unsigned long long _indexType;	// 32 = 0x20
}

+ (id)vertexDescriptor;	// IMP=0x0000000000004b93
- (_Bool)validateWithVertexFunction:(id)arg1 error:(id *)arg2 renderPipelineDescriptor:(id)arg3;	// IMP=0x00000000000054ac
- (id)newSerializedDescriptor;	// IMP=0x0000000000004fdd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004de7
- (unsigned long long)hash;	// IMP=0x0000000000004cbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004bac
- (void)reset;	// IMP=0x0000000000004af4
- (id)description;	// IMP=0x0000000000004ae0
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000004359
- (void)dealloc;	// IMP=0x0000000000004301
- (void)setIndexBufferIndex:(unsigned long long)arg1;	// IMP=0x00000000000042f0
- (unsigned long long)indexBufferIndex;	// IMP=0x00000000000042df
- (void)setIndexType:(unsigned long long)arg1;	// IMP=0x00000000000042ce
- (unsigned long long)indexType;	// IMP=0x00000000000042bd
- (id)attributes;	// IMP=0x00000000000042ac
- (id)layouts;	// IMP=0x000000000000429b
- (id)init;	// IMP=0x0000000000004231

@end
