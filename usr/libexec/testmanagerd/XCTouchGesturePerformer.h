//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RCPPlayerPlaybackOptions;
@protocol OS_dispatch_queue, XCTDUserTestNotificationProviding;

@interface XCTouchGesturePerformer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __IOHIDEventSystemClient *_eventClient;	// 16 = 0x10
    _Bool _isSynthesizingEvent;	// 24 = 0x18
    unsigned long long _currentKeyboardModifierFlags;	// 32 = 0x20
    id <XCTDUserTestNotificationProviding> _userTestNotificationProvider;	// 40 = 0x28
    RCPPlayerPlaybackOptions *_playbackOptions;	// 48 = 0x30
}

+ (_Bool)validEventRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000024e46
+ (CDUnknownBlockType)_customizeHIDEventForWindowContextID:(int)arg1;	// IMP=0x0010000000024b50
+ (void)_attachContextEvent:(struct __IOHIDEvent *)arg1 toEvent:(struct __IOHIDEvent *)arg2;	// IMP=0x0010000000024aa3
+ (id)_senderForEventRecord:(id)arg1;	// IMP=0x00100000000247f2
+ (id)_senderForDeviceEvent:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002452d
- (void).cxx_destruct;	// IMP=0x00200000000287b1
@property(retain, nonatomic) RCPPlayerPlaybackOptions *playbackOptions; // @synthesize playbackOptions=_playbackOptions;
@property(readonly) id <XCTDUserTestNotificationProviding> userTestNotificationProvider; // @synthesize userTestNotificationProvider=_userTestNotificationProvider;
- (void)_queue_sendUnicodeEventWithString:(id)arg1;	// IMP=0x0010000000028656
- (void)_typeString:(id)arg1 keysPerSecond:(unsigned long long)arg2 implicitConfirmationInterval:(double)arg3 shouldRedact:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000027dee
- (void)typeString:(id)arg1 keysPerSecond:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027dcb
- (void)_handleModifierChanges:(unsigned long long)arg1 withComposer:(id)arg2;	// IMP=0x00100000000279fe
- (void)performDeviceEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000027893
- (void)_executeEventWithDescription:(id)arg1 implicitConfirmationInterval:(double)arg2 confirmationNotification:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000027507
- (void)_queue_performDigitalCrownRotation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000270de
- (void)_queue_performButtonEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026b56
- (void)_didAddActionForEventState:(id)arg1;	// IMP=0x0010000000026ab1
- (void)_synthesizeTouchEvent:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002571c
- (void)synthesizeEvent:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000025591
- (void)synthesizeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025577
- (void)_playEventStream:(id)arg1;	// IMP=0x00100000000253dc
- (void)_performEventActions:(id)arg1 withSender:(id)arg2;	// IMP=0x0010000000025177
- (void)dealloc;	// IMP=0x0010000000024d91
- (id)initWithUserTestingNotificationProvider:(id)arg1;	// IMP=0x0010000000024c31
@property(readonly) unsigned long long currentKeyboardModifierFlags;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
