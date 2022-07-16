//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNMTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMeshElement : NSObject
{
    unsigned long long _primitiveType;	// 8 = 0x8
    long long _indexCount;	// 16 = 0x10
    unsigned long long _instanceCount;	// 24 = 0x18
    long long _sharedIndexBufferOffset;	// 32 = 0x20
    SCNMTLBuffer *_indexBuffer;	// 40 = 0x28
    unsigned long long _indexType;	// 48 = 0x30
    long long _effectiveIndexOffset;	// 56 = 0x38
    long long _effectiveIndexCount;	// 64 = 0x40
}

@property(readonly, nonatomic) long long effectiveIndexCount; // @synthesize effectiveIndexCount=_effectiveIndexCount;
@property(readonly, nonatomic) long long effectiveIndexOffset; // @synthesize effectiveIndexOffset=_effectiveIndexOffset;
@property(nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property(retain, nonatomic) SCNMTLBuffer *indexBuffer; // @synthesize indexBuffer=_indexBuffer;
@property(nonatomic) long long sharedIndexBufferOffset; // @synthesize sharedIndexBufferOffset=_sharedIndexBufferOffset;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) long long indexCount; // @synthesize indexCount=_indexCount;
@property(nonatomic) unsigned long long primitiveType; // @synthesize primitiveType=_primitiveType;
- (void)setPrimitiveRange:(CDStruct_912cb5d2)arg1;	// IMP=0x0000000000115aa0
@property(readonly, nonatomic) long long effectivePrimitiveCount;
@property(readonly, nonatomic) long long primitiveCount;
- (void)setupWithElement:(struct __C3DMeshElement *)arg1;	// IMP=0x00000000001158b7
- (id)description;	// IMP=0x000000000011582b
- (void)dealloc;	// IMP=0x00000000001157eb

@end

