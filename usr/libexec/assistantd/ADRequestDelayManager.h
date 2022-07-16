//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADOpportuneSpeakingModuleEdgeDetector, AFQueue, AFWatchdogTimer, NSString;
@protocol ADRequestDelayManagerDelegate, OS_dispatch_queue;

@interface ADRequestDelayManager : NSObject
{
    AFQueue *_delayedCommandHandlers;	// 8 = 0x8
    AFQueue *_delayedcontextCommandHandlers;	// 16 = 0x10
    long long _delayType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    ADOpportuneSpeakingModuleEdgeDetector *_detector;	// 40 = 0x28
    CDUnknownBlockType _stopListeningCompletion;	// 48 = 0x30
    AFWatchdogTimer *_currentContextCommandsTimer;	// 56 = 0x38
    _Bool _isDelaying;	// 64 = 0x40
    id <ADRequestDelayManagerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000e9e3b
@property _Bool isDelaying; // @synthesize isDelaying=_isDelaying;
@property(nonatomic) __weak id <ADRequestDelayManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)interceptCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9a5d
- (_Bool)isInterceptingCommands;	// IMP=0x00100000000e9a4b
- (void)_delayForADOSMEDWithDelayType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9576
- (float)_bargeInTimeThresholdForDelayType:(long long)arg1;	// IMP=0x00100000000e952d
- (void)_beginTimerForContextCommands;	// IMP=0x00100000000e9282
- (void)beginTimerForContextCommands;	// IMP=0x00100000000e9221
- (void)releaseStoredContextCommandsAndSendCommands:(_Bool)arg1;	// IMP=0x00100000000e903f
- (void)dequeueDelayedCommandsAndSend:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8f0b
- (void)_resetDetector;	// IMP=0x00100000000e8d99
- (void)stopDelayingAndSendCommands:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8b82
- (void)sendMockInterruptedWithTypeSignal;	// IMP=0x00100000000e8b48
- (void)startDelayingWithType:(long long)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8877
- (id)_detector;	// IMP=0x00100000000e87cd
- (id)_delayedcontextCommandHandlers;	// IMP=0x00100000000e8792
- (id)_delayedCommandHandlers;	// IMP=0x00100000000e8757
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000e86ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

