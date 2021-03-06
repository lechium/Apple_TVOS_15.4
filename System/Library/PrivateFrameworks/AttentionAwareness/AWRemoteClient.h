//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWRemoteClient-Protocol.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWScheduler, NSArray, NSSet, NSString, NSXPCConnection;
@protocol AWFrameworkClient, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWRemoteClient : NSObject <AWRemoteClient>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AWScheduler *_scheduler;	// 16 = 0x10
    id <AWFrameworkClient> _proxy;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    unsigned long long _tagIndex;	// 40 = 0x28
    unsigned long long _notificationMask;	// 48 = 0x30
    unsigned long long _eventMask;	// 56 = 0x38
    unsigned long long _attentionLostEventMask;	// 64 = 0x40
    _Bool _sampleWhileAbsent;	// 72 = 0x48
    _Bool _retroactiveTimeoutMode;	// 73 = 0x49
    NSArray *_attentionLostTimeoutsSec;	// 80 = 0x50
    NSSet *_allowedHIDEventsForRemoteEvent;	// 88 = 0x58
    int _clientIndex;	// 96 = 0x60
    CDStruct_264b1ab3 *_clientState;	// 104 = 0x68
    AWAttentionEvent *_lastEvent;	// 112 = 0x70
    AWAttentionAwarenessConfiguration *_lastConfig;	// 120 = 0x78
    _Bool _invalid;	// 128 = 0x80
    NSString *_identifier;	// 136 = 0x88
    unsigned long long _samplingInterval;	// 144 = 0x90
    unsigned long long _samplingDelay;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000000bef5
@property(readonly, nonatomic) int clientIndex; // @synthesize clientIndex=_clientIndex;
@property(readonly, nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) unsigned long long samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property(readonly, nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)pingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000be1d
- (unsigned long long)nextTimerForTime:(unsigned long long)arg1;	// IMP=0x000000000000ba0e
- (void)updateDeadlinesForTime:(unsigned long long)arg1;	// IMP=0x000000000000adad
- (unsigned long long)nextSampleTime;	// IMP=0x000000000000ab70
- (unsigned long long)nextAttentionLostTime:(_Bool *)arg1;	// IMP=0x000000000000a6ad
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a5bb
- (void)resetAttentionLostTimerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a546
- (void)_resetAttentionLostTimer;	// IMP=0x000000000000a3af
- (void)getLastEvent:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a322
- (_Bool)_interestedInHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 metadata:(CDUnion_4b9e79fd *)arg3;	// IMP=0x0000000000009f3c
- (void)notifyHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x0000000000009ed8
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000009ec3
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 metadata:(CDUnion_4b9e79fd *)arg3;	// IMP=0x0000000000009716
- (void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000096a7
- (void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2;	// IMP=0x0000000000009486
- (void)deliverEvent:(id)arg1;	// IMP=0x0000000000009280
- (void)deliverNotification:(unsigned long long)arg1;	// IMP=0x00000000000090f0
- (void)setClientConfig:(id)arg1 shouldReset:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008fbe
- (void)reevaluateConfig;	// IMP=0x0000000000008e2b
- (_Bool)_setClientConfig:(id)arg1 shouldReset:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000852a
- (_Bool)_isSamplingClient;	// IMP=0x0000000000008514
- (unsigned long long)_activeEventMask;	// IMP=0x00000000000084e9
- (void)invalidate;	// IMP=0x000000000000849e
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008260
- (id)connection;	// IMP=0x0000000000008252
- (id)description;	// IMP=0x0000000000008082
- (void)initializeClientState;	// IMP=0x0000000000007bda
- (id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3 clientIndex:(int)arg4 scheduler:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000078ce

@end

