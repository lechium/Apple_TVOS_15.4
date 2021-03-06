//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _CNSynchronousQueueScheduler : NSObject <CNScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006439
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x0000000000006275
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006261
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000006084
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006070
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000005f62
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005f4e
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000005ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

