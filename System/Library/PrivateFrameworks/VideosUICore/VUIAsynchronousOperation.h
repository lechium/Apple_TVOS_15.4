//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface VUIAsynchronousOperation : NSOperation
{
    int _state;	// 8 = 0x8
}

- (void)start;	// IMP=0x000000000000afac
- (_Bool)isFinished;	// IMP=0x000000000000af98
- (_Bool)isExecuting;	// IMP=0x000000000000af84
- (_Bool)isAsynchronous;	// IMP=0x000000000000af7c
- (void)executionDidBegin;	// IMP=0x000000000000af76
- (void)finishExecutionIfPossible;	// IMP=0x000000000000aeef

@end

