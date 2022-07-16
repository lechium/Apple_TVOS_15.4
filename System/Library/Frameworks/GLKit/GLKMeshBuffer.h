//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GLKit/MDLMeshBuffer-Protocol.h>

@class GLKMeshBufferAllocator, GLKMeshBufferZone, NSString;
@protocol MDLMeshBufferZone;

@interface GLKMeshBuffer : NSObject <MDLMeshBuffer>
{
    unsigned int _mapCount;	// 8 = 0x8
    void *_mapPtr;	// 16 = 0x10
    unsigned int _target;	// 24 = 0x18
    GLKMeshBufferZone *_zone;	// 32 = 0x20
    unsigned int _glBufferName;	// 40 = 0x28
    unsigned long long _length;	// 48 = 0x30
    GLKMeshBufferAllocator *_allocator;	// 56 = 0x38
    unsigned long long _offset;	// 64 = 0x40
    unsigned long long _type;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000007a7c
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int glBufferName; // @synthesize glBufferName=_glBufferName;
@property(readonly, nonatomic) GLKMeshBufferAllocator *allocator; // @synthesize allocator=_allocator;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) id <MDLMeshBufferZone> zone; // @synthesize zone=_zone;
- (void)dealloc;	// IMP=0x00000000000079e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000078f9
- (id)map;	// IMP=0x00000000000077eb
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000007737
- (id)_initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6;	// IMP=0x00000000000075f2
- (id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x000000000000753a
- (id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000000007512
- (id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4;	// IMP=0x000000000000747d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
