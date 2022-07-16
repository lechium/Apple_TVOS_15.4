//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PLCloudTaskManager : NSObject
{
    NSMutableDictionary *_pendingTaskForTaskIdentifier;	// 8 = 0x8
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;	// 16 = 0x10
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000111972
- (void)_removeTaskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(_Bool)arg2;	// IMP=0x000000000011191e
- (void)_setTaskIdentifiers:(id)arg1 forResourceIdentifier:(id)arg2 highPriority:(_Bool)arg3;	// IMP=0x00000000001118a0
- (id)_taskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(_Bool)arg2;	// IMP=0x0000000000111839
- (id)_taskForResourceIdentifier:(id)arg1 highPriority:(_Bool)arg2;	// IMP=0x000000000011167c
- (void)reset;	// IMP=0x0000000000111631
- (void)cancelTaskWithTaskIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000111579
- (id)getPendingTaskForTaskIdentifier:(id)arg1;	// IMP=0x0000000000111468
- (void)reportCompletionForResourceIdentifier:(id)arg1 highPriority:(_Bool)arg2 withError:(id)arg3;	// IMP=0x00000000001113a8
- (void)reportProgress:(float)arg1 forResourceIdentifier:(id)arg2 highPriority:(_Bool)arg3;	// IMP=0x0000000000111302
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;	// IMP=0x0000000000111243
- (_Bool)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forResourceIdentifier:(id)arg3 highPriority:(_Bool)arg4 withTaskIdentifier:(id)arg5;	// IMP=0x00000000001110b5
- (id)init;	// IMP=0x0000000000110fdf

@end

