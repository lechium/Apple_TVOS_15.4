//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface TVCKAsynchronousOperation : NSOperation
{
    _Atomic int _state;	// 8 = 0x8
}

- (void)start;	// IMP=0x00000000000954d5
- (_Bool)isFinished;	// IMP=0x00000000000954bf
- (_Bool)isExecuting;	// IMP=0x00000000000954a9
- (_Bool)isAsynchronous;	// IMP=0x00000000000954a1
- (void)executionDidBegin;	// IMP=0x000000000009549b
- (void)finishExecutionIfPossible;	// IMP=0x0000000000095414

@end

