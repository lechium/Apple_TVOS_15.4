//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPModelLibraryTransientStateController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSMutableArray *_registeredTransientState;	// 32 = 0x20
}

+ (id)sharedDeviceLibraryController;	// IMP=0x0000000000197ee1
- (void).cxx_destruct;	// IMP=0x0000000000196ef4
- (void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196cd4
- (void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;	// IMP=0x0000000000196cbf
- (void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196b27
- (void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;	// IMP=0x0000000000196b12
- (void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196941
- (void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2;	// IMP=0x000000000019692c
- (long long)transientKeepLocalStateForModelObject:(id)arg1;	// IMP=0x0000000000196845
- (long long)transientAddStateForModelObject:(id)arg1;	// IMP=0x000000000019675e
- (void)unregisterTransientState:(id)arg1;	// IMP=0x0000000000196699
- (id)registerTransientKeepLocalState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3;	// IMP=0x0000000000196527
- (id)registerTransientAddState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3;	// IMP=0x00000000001963b5
- (void)addOperation:(id)arg1;	// IMP=0x000000000019639f
- (id)init;	// IMP=0x00000000001962c4

@end
