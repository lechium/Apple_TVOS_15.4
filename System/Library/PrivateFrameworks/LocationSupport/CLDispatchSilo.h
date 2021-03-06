//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo
{
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSOperationQueue *_operationQueue;	// 64 = 0x40
    _Bool _useCLPermissiveTimer;	// 72 = 0x48
    _Bool _isQueueSuspended;	// 73 = 0x49
}

- (void).cxx_destruct;	// IMP=0x0000000000013f8f
- (id)debugDescription;	// IMP=0x0000000000013f50
- (id)operationQueue;	// IMP=0x0000000000013e66
- (id)queue;	// IMP=0x0000000000013e51
- (void)heartBeat:(id)arg1;	// IMP=0x0000000000013cd4
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013bfb
- (void)sync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013b4a
- (void)async:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013a9b
- (id)newTimer;	// IMP=0x0000000000013a16
- (double)currentLatchedAbsoluteTimestamp;	// IMP=0x0000000000013a0b
- (void)_setLatchedAbsoluteTimestamp:(double)arg1;	// IMP=0x0000000000013990
- (_Bool)isSuspended;	// IMP=0x0000000000013980
- (void)resume;	// IMP=0x00000000000137be
- (void)suspend;	// IMP=0x0000000000013606
- (void)assertOutside;	// IMP=0x00000000000135f1
- (void)assertInside;	// IMP=0x00000000000135dc
- (_Bool)inPermissiveMode;	// IMP=0x00000000000135cc
- (id)getTimeCoercibleVariantInstance;	// IMP=0x000000000001358e
- (id)initMain;	// IMP=0x0000000000013526
- (id)initWithUnderlyingQueue:(id)arg1 bePermissive:(_Bool)arg2;	// IMP=0x00000000000134fb
- (id)initWithUnderlyingQueue:(id)arg1;	// IMP=0x000000000001344b
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000013078

@end

