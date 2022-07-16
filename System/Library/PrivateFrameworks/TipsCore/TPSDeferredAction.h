//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, TPSDeferredActionDelegate;

@interface TPSDeferredAction : NSObject
{
    _Bool _scheduled;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <TPSDeferredActionDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000019b1a
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool scheduled; // @synthesize scheduled=_scheduled;
@property(nonatomic) __weak id <TPSDeferredActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scheduleNextRunLoop;	// IMP=0x000000000001991a
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000019882
- (id)init;	// IMP=0x000000000001986e

@end
