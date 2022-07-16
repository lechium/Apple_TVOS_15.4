//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLVertexAttributeDescriptorArrayInternal, MTLVertexBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLVertexDescriptorInternal
{
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;	// 8 = 0x8
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;	// 16 = 0x10
}

+ (id)vertexDescriptor;	// IMP=0x000000000009c243
- (_Bool)validateWithVertexFunction:(id)arg1 error:(id *)arg2 renderPipelineDescriptor:(id)arg3;	// IMP=0x000000000009cb4c
- (id)newSerializedDescriptor;	// IMP=0x000000000009c621
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c450
- (unsigned long long)hash;	// IMP=0x000000000009c34e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c25c
- (void)reset;	// IMP=0x000000000009c1a4
- (id)description;	// IMP=0x000000000009c190
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000009bae5
- (void)dealloc;	// IMP=0x000000000009ba8d
- (id)attributes;	// IMP=0x000000000009ba7c
- (id)layouts;	// IMP=0x000000000009ba6b
- (id)init;	// IMP=0x000000000009ba01

@end

