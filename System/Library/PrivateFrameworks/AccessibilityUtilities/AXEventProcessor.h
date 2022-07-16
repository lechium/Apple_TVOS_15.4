//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSThread;

@interface AXEventProcessor : NSObject
{
    _Bool _shouldRunHIDReceiveThreadRunloop;	// 8 = 0x8
    _Bool _shouldNotifyUserEventOccurred;	// 9 = 0x9
    _Bool _handlingHIDEvents;	// 10 = 0xa
    _Bool _ignoreAllSystemEvents;	// 11 = 0xb
    _Bool _handlingSystemEvents;	// 12 = 0xc
    int _HIDEventTapPriority;	// 16 = 0x10
    int _systemEventTapPriority;	// 20 = 0x14
    NSString *_HIDEventTapIdentifier;	// 24 = 0x18
    NSThread *_HIDEventReceiveThread;	// 32 = 0x20
    CDUnknownBlockType _HIDEventHandler;	// 40 = 0x28
    unsigned long long _HIDEventFilterMask;	// 48 = 0x30
    CDUnknownBlockType _failedToHandleEventInTime;	// 56 = 0x38
    NSString *_systemEventTapIdentifier;	// 64 = 0x40
    CDUnknownBlockType _systemEventHandler;	// 72 = 0x48
    NSMutableArray *_hidActualEventTapEnabledReasons;	// 80 = 0x50
    NSMutableArray *_systemActualEventTapEnabledReasons;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000a0ab4
@property(retain, nonatomic) NSMutableArray *systemActualEventTapEnabledReasons; // @synthesize systemActualEventTapEnabledReasons=_systemActualEventTapEnabledReasons;
@property(nonatomic, getter=isHandlingSystemEvents) _Bool handlingSystemEvents; // @synthesize handlingSystemEvents=_handlingSystemEvents;
@property(retain, nonatomic) NSMutableArray *hidActualEventTapEnabledReasons; // @synthesize hidActualEventTapEnabledReasons=_hidActualEventTapEnabledReasons;
@property(nonatomic) _Bool ignoreAllSystemEvents; // @synthesize ignoreAllSystemEvents=_ignoreAllSystemEvents;
@property(copy, nonatomic) CDUnknownBlockType systemEventHandler; // @synthesize systemEventHandler=_systemEventHandler;
@property(nonatomic) int systemEventTapPriority; // @synthesize systemEventTapPriority=_systemEventTapPriority;
@property(retain, nonatomic) NSString *systemEventTapIdentifier; // @synthesize systemEventTapIdentifier=_systemEventTapIdentifier;
@property(copy, nonatomic) CDUnknownBlockType failedToHandleEventInTime; // @synthesize failedToHandleEventInTime=_failedToHandleEventInTime;
@property(nonatomic) unsigned long long HIDEventFilterMask; // @synthesize HIDEventFilterMask=_HIDEventFilterMask;
@property(copy, nonatomic) CDUnknownBlockType HIDEventHandler; // @synthesize HIDEventHandler=_HIDEventHandler;
@property(nonatomic, getter=isHandlingHIDEvents) _Bool handlingHIDEvents; // @synthesize handlingHIDEvents=_handlingHIDEvents;
@property(retain, nonatomic) NSThread *HIDEventReceiveThread; // @synthesize HIDEventReceiveThread=_HIDEventReceiveThread;
@property(nonatomic) int HIDEventTapPriority; // @synthesize HIDEventTapPriority=_HIDEventTapPriority;
@property(retain, nonatomic) NSString *HIDEventTapIdentifier; // @synthesize HIDEventTapIdentifier=_HIDEventTapIdentifier;
@property(nonatomic) _Bool shouldNotifyUserEventOccurred; // @synthesize shouldNotifyUserEventOccurred=_shouldNotifyUserEventOccurred;
- (void)_uninstallSystemEventFilter;	// IMP=0x00000000000a08ec
- (void)_installSystemEventFilter;	// IMP=0x00000000000a05e7
- (void)_uninstallHIDEventFilter;	// IMP=0x00000000000a0571
- (void)_installHIDEventFilter;	// IMP=0x00000000000a007e
- (void)_runHIDEventReceiveThread;	// IMP=0x000000000009ff57
- (void)restoreSystemEventTapPriorityToDefault;	// IMP=0x000000000009fe4c
- (void)raiseSystemEventTapPriorityToMaximum;	// IMP=0x000000000009fd4b
- (void)endHandlingSystemEventsForReason:(id)arg1;	// IMP=0x000000000009fb54
- (void)beginHandlingSystemEventsForReason:(id)arg1;	// IMP=0x000000000009f955
@property(readonly, nonatomic) __weak NSArray *systemEventTapEnabledReasons;
- (void)restoreHIDEventTapPriorityToDefault;	// IMP=0x000000000009f838
- (void)raiseHIDEventTapPriorityToMaximum;	// IMP=0x000000000009f737
- (void)endHandlingHIDEventsForReason:(id)arg1;	// IMP=0x000000000009f571
- (void)beginHandlingHIDEventsForReason:(id)arg1;	// IMP=0x000000000009f39f
- (void)cleanup;	// IMP=0x000000000009f348
- (void)_threadStop;	// IMP=0x000000000009f342
- (void)dealloc;	// IMP=0x000000000009f2e8
@property(readonly, nonatomic) NSArray *hidEventTapEnabledReasons;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;	// IMP=0x000000000009f006
- (id)init;	// IMP=0x000000000009efb7

@end
