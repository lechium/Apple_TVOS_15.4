//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject
{
    _PASCoalescingTimer *_timer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003e079
- (void)cancelPendingOperations;	// IMP=0x000000000003e063
- (void)runAfterStrictDelaySeconds:(double)arg1;	// IMP=0x000000000003e04b
- (void)runImmediately;	// IMP=0x000000000003e033
- (void)runAfterDelaySeconds:(double)arg1 coalescingBehavior:(unsigned char)arg2;	// IMP=0x000000000003e019
- (id)initWithQueue:(id)arg1 operation:(CDUnknownBlockType)arg2;	// IMP=0x000000000003dfff
- (id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 operation:(CDUnknownBlockType)arg3;	// IMP=0x000000000003def6

@end

