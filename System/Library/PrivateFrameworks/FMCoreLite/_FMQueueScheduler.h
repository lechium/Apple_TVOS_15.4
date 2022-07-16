//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _FMQueueScheduler : NSObject <FMScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001060e
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001042c
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001030c
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000102ac
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000001022e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

