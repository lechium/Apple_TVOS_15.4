//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface TVSAsynchronousOperation : NSOperation
{
    int _state;	// 8 = 0x8
}

- (void)start;	// IMP=0x000000000002502c
- (_Bool)isFinished;	// IMP=0x0000000000025018
- (_Bool)isExecuting;	// IMP=0x0000000000025004
- (_Bool)isAsynchronous;	// IMP=0x0000000000024ffc
- (void)_executionDidBegin;	// IMP=0x0000000000024ff6
- (void)_finishExecutionIfPossible;	// IMP=0x0000000000024f6f

@end

