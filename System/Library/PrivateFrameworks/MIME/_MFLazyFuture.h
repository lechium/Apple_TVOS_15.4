//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFPromise, NSConditionLock;

@interface _MFLazyFuture
{
    NSConditionLock *_stateLock;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    MFPromise *_promise;	// 24 = 0x18
}

- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003eb46
- (void)onScheduler:(id)arg1 addFailureBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003eaef
- (void)addFailureBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003eaa8
- (void)onScheduler:(id)arg1 addSuccessBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ea51
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ea0a
- (_Bool)tryCancel;	// IMP=0x000000000003e951
- (_Bool)isCancelled;	// IMP=0x000000000003e91b
- (_Bool)isFinished;	// IMP=0x000000000003e8e5
- (_Bool)run;	// IMP=0x000000000003e7f4
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e73d
- (void)dealloc;	// IMP=0x000000000003e6d7

@end

