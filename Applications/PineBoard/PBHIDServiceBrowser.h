//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBHIDServiceBrowser : NSObject
{
    struct os_unfair_lock_s _senderIDSetLock;	// 8 = 0x8
    CDUnknownBlockType _predicate;	// 16 = 0x10
    struct __CFRunLoop *_runLoop;	// 24 = 0x18
    struct __IOHIDEventSystemClient *_HIDSystemClient;	// 32 = 0x20
    struct __CFSet *_senderIDSet;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000023add0
@property(readonly, nonatomic) struct __CFSet *senderIDSet; // @synthesize senderIDSet=_senderIDSet;
@property(readonly, nonatomic) struct os_unfair_lock_s senderIDSetLock; // @synthesize senderIDSetLock=_senderIDSetLock;
@property(readonly, nonatomic) struct __IOHIDEventSystemClient *HIDSystemClient; // @synthesize HIDSystemClient=_HIDSystemClient;
@property(readonly, nonatomic) struct __CFRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
- (void)_addService:(struct __IOHIDServiceClient *)arg1;	// IMP=0x001000000023ac40
- (void)_copyInitialServices;	// IMP=0x001000000023ab90
- (void)_stopMonitoring;	// IMP=0x001000000023ab20
- (void)_startMonitoring;	// IMP=0x001000000023aab0
- (_Bool)eventSenderMatchesDiscoveredService:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000023aa40
- (void)dealloc;	// IMP=0x001000000023a9a0
- (id)init;	// IMP=0x001000000023a910
- (id)initWithDeviceMatching:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x001000000023a690

@end
