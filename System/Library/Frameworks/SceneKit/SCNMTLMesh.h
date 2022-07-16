//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLStageInputOutputDescriptor, MTLVertexDescriptor, NSArray;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMesh : NSObject
{
    long long _mutabilityTimestamp;	// 8 = 0x8
    MTLVertexDescriptor *_vertexDescriptor;	// 16 = 0x10
    MTLVertexDescriptor *_tessellationVertexDescriptor;	// 24 = 0x18
    unsigned long long _vertexDescriptorHash;	// 32 = 0x20
    unsigned long long _tessellationVertexDescriptorHash;	// 40 = 0x28
    NSArray *_buffers;	// 48 = 0x30
    NSArray *_elements;	// 56 = 0x38
    MTLStageInputOutputDescriptor *_stageDescriptor;	// 64 = 0x40
    id <MTLBuffer> _volatileBuffer;	// 72 = 0x48
    unsigned long long volatileOffset;	// 80 = 0x50
    unsigned long long volatileStride;	// 88 = 0x58
    unsigned long long volatileSize;	// 96 = 0x60
    long long verticesCount;	// 104 = 0x68
}

@property(nonatomic) long long mutabilityTimestamp; // @synthesize mutabilityTimestamp=_mutabilityTimestamp;
@property(nonatomic) long long verticesCount; // @synthesize verticesCount;
@property(nonatomic) unsigned long long volatileSize; // @synthesize volatileSize;
@property(nonatomic) unsigned long long volatileStride; // @synthesize volatileStride;
@property(nonatomic) unsigned long long volatileOffset; // @synthesize volatileOffset;
@property(retain, nonatomic) id <MTLBuffer> volatileBuffer; // @synthesize volatileBuffer=_volatileBuffer;
@property(retain, nonatomic) MTLStageInputOutputDescriptor *stageDescriptor; // @synthesize stageDescriptor=_stageDescriptor;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(copy, nonatomic) NSArray *buffers; // @synthesize buffers=_buffers;
- (id)bufferForAttribute:(long long)arg1;	// IMP=0x00000000001156ba
- (void)dealloc;	// IMP=0x0000000000115654
- (id)description;	// IMP=0x00000000001153ea
@property(readonly, nonatomic) unsigned long long tessellationVertexDescriptorHash;
@property(readonly, nonatomic) MTLVertexDescriptor *tessellationVertexDescriptor; // @synthesize tessellationVertexDescriptor=_tessellationVertexDescriptor;
- (void)buildTessellationVertexDescriptorIfNeeded;	// IMP=0x0000000000114ff4
@property(readonly, nonatomic) unsigned long long vertexDescriptorHash;
@property(copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;

@end

