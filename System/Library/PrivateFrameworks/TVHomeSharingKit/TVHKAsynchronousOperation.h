//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface TVHKAsynchronousOperation : NSOperation
{
    int _state;	// 8 = 0x8
}

- (void)start;	// IMP=0x0000000000033de2
- (_Bool)isFinished;	// IMP=0x0000000000033dce
- (_Bool)isExecuting;	// IMP=0x0000000000033dba
- (_Bool)isAsynchronous;	// IMP=0x0000000000033db2
- (void)executionDidBegin;	// IMP=0x0000000000033dac
- (void)finishExecutionIfPossible;	// IMP=0x0000000000033d25

@end

