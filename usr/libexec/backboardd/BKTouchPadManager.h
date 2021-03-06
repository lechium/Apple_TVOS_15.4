//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKIOHIDServiceMatcher, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchPadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_touchPadQueue;	// 8 = 0x8
    NSMutableDictionary *_queue_currentTouchPads;	// 16 = 0x10
    BKIOHIDServiceMatcher *_touchPadMatcher;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000008323
- (void).cxx_destruct;	// IMP=0x0020000000007e42
- (void)_queue_sendCancelEventForTouchPad:(id)arg1;	// IMP=0x0010000000007b1f
- (void)_queue_handleEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 dispatcher:(id)arg3;	// IMP=0x00100000000074e3
- (void)_queue_sendEvent:(struct __IOHIDEvent *)arg1 fromTouchPad:(id)arg2 toDestination:(id)arg3 dispatcher:(id)arg4;	// IMP=0x001000000000723c
- (void)_queue_touchPadsDetected:(id)arg1;	// IMP=0x0010000000007198
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x00100000000070c7
- (void)_queue_touchPadRemoved:(id)arg1;	// IMP=0x0010000000006fa4
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x0010000000006f59
- (void)sendCancelEventForAllDisplays;	// IMP=0x0010000000006f0e
- (void)sendCancelEventForDisplay:(id)arg1;	// IMP=0x0010000000006e83
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0010000000006dba
- (void)dealloc;	// IMP=0x0010000000006d78
- (id)init;	// IMP=0x0010000000006b90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

