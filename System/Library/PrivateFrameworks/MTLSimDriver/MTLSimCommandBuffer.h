//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLCommandBuffer.h>

#import <MTLSimDriver/MTLCommandBufferSPI-Protocol.h>
#import <MTLSimDriver/MTLSerializerCommandStream-Protocol.h>

@class MTLResourceList, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol MTLCommandQueue, MTLDevice, MTLLogContainer;

__attribute__((visibility("hidden")))
@interface MTLSimCommandBuffer : _MTLCommandBuffer <MTLCommandBufferSPI, MTLSerializerCommandStream>
{
    struct StorageEntry *commandHead;	// 456 = 0x1c8
    struct BufferStorageEntry *bufferHead;	// 464 = 0x1d0
    unsigned long long segmentCount;	// 472 = 0x1d8
    struct StorageEntry *commandCurrentStorage;	// 480 = 0x1e0
    struct StorageEntry *commandTail;	// 488 = 0x1e8
    struct StorageEntry *commandPrevious;	// 496 = 0x1f0
    struct BufferStorageEntry *bufferCurrentStorage;	// 504 = 0x1f8
    unsigned long long currentStorageOffset;	// 512 = 0x200
    _Bool continuation;	// 520 = 0x208
    unsigned int _reference;	// 524 = 0x20c
    unsigned long long _protectionOptions;	// 528 = 0x210
    MTLResourceList *_resourceList;	// 536 = 0x218
    id <MTLDevice> device;	// 544 = 0x220
    CDUnknownBlockType splitHandler;	// 552 = 0x228
}

@property(copy) CDUnknownBlockType splitHandler; // @synthesize splitHandler;
@property(readonly) id <MTLDevice> device; // @synthesize device;
- (unsigned long long)protectionOptions;	// IMP=0x000000000000b695
- (void)setProtectionOptions:(unsigned long long)arg1;	// IMP=0x000000000000b649
- (void)addPurgedResource:(id)arg1;	// IMP=0x000000000000b643
- (void)addPurgedHeap:(id)arg1;	// IMP=0x000000000000b63d
- (void)beginContinuation;	// IMP=0x000000000000b624
- (void)merge:(id)arg1;	// IMP=0x000000000000b597
- (void *)getCommandBufferBytes:(unsigned long long)arg1;	// IMP=0x000000000000b485
- (void)endEncoding;	// IMP=0x000000000000b451
- (void)split;	// IMP=0x000000000000b3d5
- (void *)getBufferBytes:(unsigned long long)arg1 alignment:(unsigned long long)arg2 buffer:(id *)arg3 offset:(unsigned long long *)arg4;	// IMP=0x000000000000b255
- (_Bool)addStateReference:(id)arg1;	// IMP=0x000000000000b235
- (_Bool)addResourceReference:(id)arg1 isWrite:(_Bool)arg2;	// IMP=0x000000000000b215
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000000b181
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;	// IMP=0x000000000000b0df
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000000b04b
- (void *)getCommandBytes:(unsigned long long)arg1 forCommand:(unsigned int)arg2;	// IMP=0x000000000000b00e
- (id)renderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000afac
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000af4a
- (id)computeCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000aee8
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;	// IMP=0x000000000000ae5a
- (id)computeCommandEncoder;	// IMP=0x000000000000addc
- (id)blitCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000ad7a
- (id)blitCommandEncoder;	// IMP=0x000000000000acfc
- (_Bool)commitAndWaitUntilSubmitted;	// IMP=0x000000000000accb
@property(readonly) unsigned int commandBufferRef;
- (void)dealloc;	// IMP=0x000000000000abb2
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2;	// IMP=0x000000000000aae7

// Remaining properties
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSError *error;
@property(readonly) unsigned long long errorOptions;
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly) unsigned long long hash;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(readonly) id <MTLLogContainer> logs;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) NSDictionary *profilingResults;
@property(readonly) _Bool retainedReferences;
@property(readonly) unsigned long long status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;

@end
