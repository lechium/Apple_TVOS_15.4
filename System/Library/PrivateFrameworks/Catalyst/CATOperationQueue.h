//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;

@interface CATOperationQueue : NSOperationQueue
{
    id <CATOperationQueueDelegate> _delegate;	// 8 = 0x8
}

+ (id)mainQueue;	// IMP=0x0000000000013aa9
+ (id)currentQueue;	// IMP=0x0000000000013a30
+ (id)backgroundQueue;	// IMP=0x00000000000139c0
- (void).cxx_destruct;	// IMP=0x0000000000014196
@property(nonatomic) __weak id <CATOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopObserving:(id)arg1;	// IMP=0x0000000000014140
- (void)startObserving:(id)arg1;	// IMP=0x0000000000014111
- (void)delegateWillAddOperation:(id)arg1;	// IMP=0x0000000000014097
- (void)delegateOperationDidFinish:(id)arg1;	// IMP=0x000000000001401d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000013eb4
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x0000000000013c94
- (void)addOperation:(id)arg1;	// IMP=0x0000000000013bf3
- (id)description;	// IMP=0x0000000000013b22
- (void)setUnderlyingQueue:(id)arg1;	// IMP=0x00000000000138b1

@end

