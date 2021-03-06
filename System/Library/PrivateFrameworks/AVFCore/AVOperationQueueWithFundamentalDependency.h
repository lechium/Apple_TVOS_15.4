//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@class NSOperation;

@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue
{
    NSOperation *_fundamentalOperation;	// 8 = 0x8
}

- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x00000000000dd8b5
- (void)addOperation:(id)arg1;	// IMP=0x00000000000dd85a
- (void)dealloc;	// IMP=0x00000000000dd818
- (id)initWithFundamentalOperation:(id)arg1;	// IMP=0x00000000000dd79b

@end

