//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSError;

@interface TPSAsyncOperation : NSOperation
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _executing;	// 12 = 0xc
    _Bool _finished;	// 13 = 0xd
    _Bool _cancelled;	// 14 = 0xe
    CDUnknownBlockType _preCompletionBlock;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003586a
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType preCompletionBlock; // @synthesize preCompletionBlock=_preCompletionBlock;
- (void)start;	// IMP=0x0000000000035750
- (_Bool)isCancelled;	// IMP=0x0000000000035692
- (_Bool)isFinished;	// IMP=0x00000000000355d4
- (_Bool)isExecuting;	// IMP=0x0000000000035516
- (_Bool)isAsynchronous;	// IMP=0x000000000003550e
- (void)cancel;	// IMP=0x000000000003540a
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000035285
- (void)lockExec:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035245
- (id)init;	// IMP=0x0000000000035203

@end

