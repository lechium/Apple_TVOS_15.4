//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWAttentionAwareService-Protocol.h>
#import <AttentionAwareness/AWSchedulerObserver-Protocol.h>
#import <AttentionAwareness/NSXPCListenerDelegate-Protocol.h>

@class AWScheduler, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionAwareService : NSObject <AWAttentionAwareService, AWSchedulerObserver, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AWScheduler *_unitTestScheduler;	// 16 = 0x10
    NSMutableArray *_schedulers;	// 24 = 0x18
    int _supportedEventsNotify;	// 32 = 0x20
    unsigned long long _supportedEvents;	// 40 = 0x28
    unsigned long long _clientCount;	// 48 = 0x30
}

+ (id)sharedAttentionService;	// IMP=0x0000000000007879
- (void).cxx_destruct;	// IMP=0x0000000000006dd5
@property unsigned long long clientCount; // @synthesize clientCount=_clientCount;
- (void)crashWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006b7a
- (void)getUnitTestSamplerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000069a7
- (void)_createUnitTestScheduler;	// IMP=0x0000000000006931
- (void)outputPowerLogWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006879
- (void)setDebugPreference:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006617
- (void)getDebugPreferences:(CDUnknownBlockType)arg1;	// IMP=0x00000000000065a8
- (void)getSupportedEventsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006595
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000006547
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x00000000000064ba
- (void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 unitTestMode:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000061bd
- (void)clientCountChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forScheduler:(id)arg3;	// IMP=0x0000000000005fd8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000005e86
- (void)dealloc;	// IMP=0x0000000000005e48
- (id)init;	// IMP=0x0000000000005c6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

