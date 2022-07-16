//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAnalyticsService-Protocol.h>
#import <AssistantServices/AFAnalyticsServiceDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsServiceDelegate, AFAnalyticsService>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_idleTimer;	// 24 = 0x18
    unsigned long long _numberOfEventsBeingSent;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_group;	// 40 = 0x28
    _Bool _needsCleanUpConnection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004ec2b
@property _Bool needsCleanUpConnection; // @synthesize needsCleanUpConnection=_needsCleanUpConnection;
- (void)_idleTimerFired;	// IMP=0x000000000004ebe9
- (void)_stopIdleTimer;	// IMP=0x000000000004ebb3
- (void)_startIdleTimer;	// IMP=0x000000000004ea9d
- (void)_cleanUpConnection;	// IMP=0x000000000004ea41
- (void)_cleanUpConnectionIfNeeded;	// IMP=0x000000000004ea0a
- (void)_connectionInvalidated;	// IMP=0x000000000004e995
- (void)_connectionInterrupted;	// IMP=0x000000000004e920
- (id)_connection;	// IMP=0x000000000004e6c9
- (void)_didFinishSendingEvents:(id)arg1;	// IMP=0x000000000004e68d
- (void)_willStartSendingEvents:(id)arg1;	// IMP=0x000000000004e651
- (void)_handleSuccessCallbackForEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e63b
- (void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 numberOfRetries:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004e3ca
- (void)_sendEvents:(id)arg1 numberOfRetries:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004e092
- (oneway void)boostQueuedEvents:(CDUnknownBlockType)arg1;	// IMP=0x000000000004dd8f
- (oneway void)flushStagedEventsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000004da4d
- (oneway void)stageUEIEventData:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000004d899
- (oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x000000000004d6ab
- (oneway void)endEventsGrouping;	// IMP=0x000000000004d616
- (oneway void)beginEventsGrouping;	// IMP=0x000000000004d581
- (oneway void)stageEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d321
- (void)dealloc;	// IMP=0x000000000004d2ce
- (id)init;	// IMP=0x000000000004d215

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
