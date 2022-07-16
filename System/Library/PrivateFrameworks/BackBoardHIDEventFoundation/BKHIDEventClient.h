//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BSDescriptionProviding-Protocol.h>

@class BSMachPortSendRight, BSPortDeathSentinel, BSProcessDeathWatcher, NSString;
@protocol BKHIDEventClientDelegate, OS_dispatch_queue;

@interface BKHIDEventClient : NSObject <BSDescriptionProviding>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <BKHIDEventClientDelegate> _queue_delegate;	// 16 = 0x10
    BSMachPortSendRight *_queue_sendRight;	// 24 = 0x18
    BSProcessDeathWatcher *_queue_pidWatcher;	// 32 = 0x20
    BSPortDeathSentinel *_queue_portSentinel;	// 40 = 0x28
    NSString *_queue_procName;	// 48 = 0x30
    int _queue_pid;	// 56 = 0x38
    _Bool _queue_invalidated;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x000000000001346c
@property(readonly, nonatomic) BSMachPortSendRight *sendRight; // @synthesize sendRight=_queue_sendRight;
@property(readonly, nonatomic) int pid; // @synthesize pid=_queue_pid;
- (void)_queue_performDelegateCallout:(CDUnknownBlockType)arg1;	// IMP=0x00000000000133ac
- (void)_queue_invalidate;	// IMP=0x0000000000013325
- (_Bool)_deathBySendRight;	// IMP=0x000000000001331d
- (_Bool)_deathByPid;	// IMP=0x0000000000013315
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000013231
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000131e1
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000131c5
- (id)succinctDescription;	// IMP=0x0000000000013175
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0000000000013116
@property(nonatomic) __weak id <BKHIDEventClientDelegate> delegate;
- (void)dealloc;	// IMP=0x0000000000012cc6
- (id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3 processName:(id)arg4;	// IMP=0x00000000000129ed
- (id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3;	// IMP=0x0000000000012966
- (id)initWithPid:(int)arg1 sendRight:(id)arg2;	// IMP=0x0000000000012951
- (id)init;	// IMP=0x0000000000012823

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
