//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInvocation;
@protocol OS_dispatch_group, PHAServiceOperationListener;

@interface PHAServiceCancelableOperation : NSObject
{
    NSInvocation *_invocation;	// 8 = 0x8
    long long _operationId;	// 16 = 0x10
    _Bool _cancelRequested;	// 24 = 0x18
    CDUnknownBlockType _cancellationBlock;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_completionGroup;	// 40 = 0x28
    id <PHAServiceOperationListener> _delegate;	// 48 = 0x30
}

+ (id)operationNotFoundError:(long long)arg1;	// IMP=0x000000000009f3b0
- (void).cxx_destruct;	// IMP=0x000000000009f35e
@property __weak id <PHAServiceOperationListener> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)waitForCompletion;	// IMP=0x000000000009f30e
- (id)description;	// IMP=0x000000000009f205
- (id)operationCanceledError:(_Bool)arg1;	// IMP=0x000000000009f10a
- (void)enqueueOnQueue:(id)arg1;	// IMP=0x000000000009f0b8
- (void)_startWork;	// IMP=0x000000000009efc1
- (void)runOperation;	// IMP=0x000000000009efaf
@property(readonly) _Bool isCancelled;
- (_Bool)cancel;	// IMP=0x000000000009eef6
- (void)setCancellationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009ee6d
@property(readonly) long long operationId;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009ede6
- (id)initWithOperationId:(long long)arg1 invocation:(id)arg2;	// IMP=0x000000000009ed54

@end
