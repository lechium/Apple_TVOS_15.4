//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXCoreUtilities/AXAccessQueueTimer-Protocol.h>

@class AXAccessQueue, NSString;
@protocol OS_dispatch_source;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer>
{
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;	// 8 = 0x8
    _Bool _active;	// 9 = 0x9
    _Bool _accessQueueIsExternal;	// 10 = 0xa
    int _state;	// 12 = 0xc
    NSString *_label;	// 16 = 0x10
    AXAccessQueue *_accessQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_dispatchTimer;	// 32 = 0x20
}

+ (id)timerTargettingMainAccessQueue;	// IMP=0x000000000000131c
- (void).cxx_destruct;	// IMP=0x0000000000002511
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(nonatomic) _Bool accessQueueIsExternal; // @synthesize accessQueueIsExternal=_accessQueueIsExternal;
@property(retain, nonatomic) AXAccessQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *description;
- (void)_warnAboutAsynchronousCancelling;	// IMP=0x000000000000227f
- (void)_reallyCancel;	// IMP=0x000000000000210b
- (void)cancel;	// IMP=0x00000000000020a2
- (void)_warnAboutAsynchronousScheduling;	// IMP=0x000000000000204d
- (void)_didFinishProcessingBlock;	// IMP=0x0000000000001f1d
- (void)_afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 shouldTreatAsWritingBlock:(_Bool)arg3;	// IMP=0x000000000000167c
- (void)afterDelay:(double)arg1 processWritingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001665
- (void)afterDelay:(double)arg1 processReadingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001651
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000163f
- (void)_performEnqueuedWritingBlock:(CDUnknownBlockType)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;	// IMP=0x0000000000001583
@property(readonly, nonatomic, getter=isPending) _Bool pending;
- (void)dealloc;	// IMP=0x000000000000149a
- (id)initWithTargetAccessQueue:(id)arg1;	// IMP=0x0000000000001393
- (id)init;	// IMP=0x000000000000137f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

