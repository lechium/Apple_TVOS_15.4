//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLToolsObject, NSMutableSet, _MTLCommandEncoder;

@interface MTLDebugCommandBuffer
{
    _MTLCommandEncoder *_currentEncoder;	// 48 = 0x30
    struct unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> _attachmentSet;	// 56 = 0x38
    struct array<AttachmentDescriptorSimple, 8UL> _prevAttachments;	// 96 = 0x60
    struct array<AttachmentDescriptorSimple, 8UL> _currAttachments;	// 544 = 0x220
    struct os_unfair_lock_s _purgeableObjectsLock;	// 992 = 0x3e0
    struct unordered_set<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>> _referencedPurgeableObjects;	// 1000 = 0x3e8
    struct os_unfair_lock_s _retainedObjectsLock;	// 1040 = 0x410
    struct unordered_set<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> _externallyRetainedObjects;	// 1048 = 0x418
    struct unordered_set<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> _internallyRetainedObjects;	// 1088 = 0x440
    MTLToolsObject *_referencedDeadObject;	// 1128 = 0x468
    struct os_unfair_lock_s _renderTargetAttachmentLock;	// 1136 = 0x470
    NSMutableSet *_renderTargetAttachments;	// 1144 = 0x478
}

- (id).cxx_construct;	// IMP=0x000000000004937a
- (void).cxx_destruct;	// IMP=0x000000000004932f
- (_Bool)renderTargetInActiveRenderTargets:(id)arg1;	// IMP=0x00000000000492d9
- (void)addActiveRenderTarget:(id)arg1;	// IMP=0x000000000004928a
- (void)addActiveRenderTargets:(id)arg1;	// IMP=0x000000000004923b
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 values:(const unsigned long long *)arg3 indices:(const unsigned long long *)arg4 count:(unsigned long long)arg5;	// IMP=0x0000000000049127
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 value:(unsigned long long)arg3 forIndex:(unsigned long long)arg4;	// IMP=0x0000000000049022
- (void)encodeDashboardTagForResourceGroup:(id)arg1;	// IMP=0x0000000000048f5f
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;	// IMP=0x0000000000048f2e
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id *)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000048edc
- (void)executeSynchronizationNotifications:(int)arg1;	// IMP=0x0000000000048ead
- (void)addSynchronizationNotification:(CDUnknownBlockType)arg1;	// IMP=0x0000000000048e7c
- (void)unlockPurgeableObjects;	// IMP=0x0000000000048e1b
- (void)lockPurgeableObjects;	// IMP=0x0000000000048d33
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x0000000000048b9f
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000048a10
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x0000000000048816
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x00000000000485f8
- (void)postCompletionHandlers;	// IMP=0x0000000000048575
- (void)preCompletionHandlers;	// IMP=0x00000000000482cf
- (void)preCommit;	// IMP=0x0000000000047faa
- (_Bool)testObjectReferenced:(id)arg1 wasInternallyRetained:(_Bool *)arg2;	// IMP=0x0000000000047ec7
- (void)removeAllReferencedObjects:(_Bool)arg1;	// IMP=0x0000000000047e20
- (void)addReferencedObject:(id)arg1 internallyRetained:(_Bool)arg2;	// IMP=0x0000000000047d9f
- (void)addObject:(id)arg1 retained:(_Bool)arg2 purgeable:(_Bool)arg3;	// IMP=0x0000000000047d11
- (void)addPurgeableObject:(id)arg1;	// IMP=0x0000000000047c0a
- (void)validateStoreLoadTransition:(id)arg1 atIndex:(unsigned long long)arg2 renderTargetArrayLength:(unsigned long long)arg3;	// IMP=0x0000000000047998
- (void)onParallelRenderCommanderEndEncoding;	// IMP=0x0000000000047984
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000047768
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;	// IMP=0x00000000000475e9
- (id)blitCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x00000000000471d0
- (id)computeCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000046da6
- (id)computeCommandEncoder;	// IMP=0x0000000000046c2d
- (id)renderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000044f3a
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;	// IMP=0x0000000000044c33
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044bd2
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044b71
- (id)blitCommandEncoder;	// IMP=0x0000000000044170
- (void)waitUntilCompleted;	// IMP=0x00000000000440f9
- (void)waitUntilScheduled;	// IMP=0x0000000000044082
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000043fcf
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;	// IMP=0x0000000000043f15
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000043e62
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;	// IMP=0x0000000000043d9d
- (void)dealloc;	// IMP=0x0000000000043c50

@end

