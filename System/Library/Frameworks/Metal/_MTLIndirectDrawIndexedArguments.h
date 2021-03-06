//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _MTLIndirectDrawIndexedArguments : NSObject
{
    unsigned long long _primitiveType;	// 8 = 0x8
    unsigned long long _indexCount;	// 16 = 0x10
    unsigned long long _indexType;	// 24 = 0x18
    void *_indexBufferVirtualAddress;	// 32 = 0x20
    unsigned long long _indexBufferOffset;	// 40 = 0x28
    unsigned long long _instanceCount;	// 48 = 0x30
    unsigned long long _baseVertex;	// 56 = 0x38
    unsigned long long _baseInstance;	// 64 = 0x40
}

@property(nonatomic) unsigned long long baseInstance; // @synthesize baseInstance=_baseInstance;
@property(nonatomic) unsigned long long baseVertex; // @synthesize baseVertex=_baseVertex;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) unsigned long long indexBufferOffset; // @synthesize indexBufferOffset=_indexBufferOffset;
@property(nonatomic) void *indexBufferVirtualAddress; // @synthesize indexBufferVirtualAddress=_indexBufferVirtualAddress;
@property(nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property(nonatomic) unsigned long long indexCount; // @synthesize indexCount=_indexCount;
@property(nonatomic) unsigned long long primitiveType; // @synthesize primitiveType=_primitiveType;

@end

