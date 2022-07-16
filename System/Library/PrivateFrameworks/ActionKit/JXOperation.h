//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation
{
    _Bool _isExecuting;	// 8 = 0x8
    _Bool _isFinished;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_stateQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000322d39
@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
- (void)startAndWaitUntilFinished;	// IMP=0x0000000000322c7b
- (void)finish;	// IMP=0x0000000000322c0a
- (void)willFinish;	// IMP=0x0000000000322c04
- (void)cancel;	// IMP=0x0000000000322bc3
- (_Bool)isConcurrent;	// IMP=0x0000000000322bbb
- (void)start;	// IMP=0x0000000000322acf
- (id)init;	// IMP=0x00000000003229c1
- (void)dealloc;	// IMP=0x0000000000322992

@end
