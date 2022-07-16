//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDXPCEventListener-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener>
{
    int _circleChangeToken;	// 8 = 0x8
    _Bool _isObserving;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_eventQueue;	// 16 = 0x10
    NSMutableArray *_circleObservers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000028b5
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;	// IMP=0x00000000000027a7
- (void)registerListener:(id)arg1;	// IMP=0x0000000000002791
- (void)stopObservingCircleStatusChange;	// IMP=0x0000000000002775
- (void)observeChangeToState:(unsigned long long)arg1 circleProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000026bd
- (void)observeCircleStateWithCircleProxy:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000246d
- (const char *)_notificationName;	// IMP=0x000000000000245d
- (void)dealloc;	// IMP=0x00000000000023f1
- (id)init;	// IMP=0x0000000000002343

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

