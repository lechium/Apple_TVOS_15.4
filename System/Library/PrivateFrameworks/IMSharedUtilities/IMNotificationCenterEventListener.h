//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IMNotificationCenterEventListener
{
    NSString *_registeredNotificationName;	// 104 = 0x68
    NSString *_notificationName;	// 112 = 0x70
    id _notificationObject;	// 120 = 0x78
}

+ (id)eventListenerForNotificationName:(id)arg1 object:(id)arg2;	// IMP=0x0000000000005ffa
+ (id)eventListenerForNotificationName:(id)arg1;	// IMP=0x0000000000005fa0
- (void).cxx_destruct;	// IMP=0x00000000000062c9
@property(readonly) __weak id notificationObject; // @synthesize notificationObject=_notificationObject;
@property(readonly, copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly, nonatomic) NSString *registeredNotificationName; // @synthesize registeredNotificationName=_registeredNotificationName;
- (void)willReset;	// IMP=0x0000000000006268
- (void)willStopListening;	// IMP=0x00000000000061ea
- (void)willStartListening;	// IMP=0x0000000000006126
- (_Bool)isListening;	// IMP=0x00000000000060e5
- (void)dealloc;	// IMP=0x0000000000006070
- (void)registerForNotificationName:(id)arg1 object:(id)arg2;	// IMP=0x0000000000005eda
- (void)registerForNotificationName:(id)arg1;	// IMP=0x0000000000005ec6
- (void)_notification:(id)arg1;	// IMP=0x0000000000005e6f
@property(readonly) _Bool isRegisteredForNotification;

@end

