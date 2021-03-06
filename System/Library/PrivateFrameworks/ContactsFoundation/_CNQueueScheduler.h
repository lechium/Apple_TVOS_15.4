//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _CNQueueScheduler : NSObject <CNScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004eec2
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x000000000004ebba
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004eba6
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000004e9c5
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004e9b1
- (id)_queueForQualityOfService:(unsigned long long)arg1;	// IMP=0x000000000004e928
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000004e7f2
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004e7de
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000004e760

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

