//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsSettings/UNUserNotificationSettingsClientProtocol-Protocol.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNUserNotificationSettingsServiceConnection : NSObject <UNUserNotificationSettingsClientProtocol>
{
    NSMutableArray *_observers;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000003981
- (void).cxx_destruct;	// IMP=0x0000000000005df3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)updateNotificationSystemSettings:(id)arg1;	// IMP=0x0000000000005c43
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)arg1;	// IMP=0x0000000000005ae4
- (void)_queue_invalidatedConnection;	// IMP=0x0000000000005abc
- (void)_queue_interruptedConnection;	// IMP=0x0000000000005aae
- (id)_queue_ensureConnection;	// IMP=0x0000000000005648
- (void)_invalidate;	// IMP=0x00000000000055e4
- (void)_queue_removeObserver:(id)arg1;	// IMP=0x00000000000055ce
- (void)_queue_addObserver:(id)arg1;	// IMP=0x00000000000055b8
- (void)resetScheduledDeliverySetting;	// IMP=0x0000000000005469
- (void)setNotificationSystemSettings:(id)arg1;	// IMP=0x00000000000052d8
- (id)notificationSystemSettings;	// IMP=0x0000000000005024
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;	// IMP=0x0000000000004d87
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;	// IMP=0x0000000000004b5f
- (void)authorizationWithOptions:(unsigned long long)arg1 forNotificationSourceIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004763
- (id)allNotificationSources;	// IMP=0x0000000000004458
- (id)notificationSourcesWithIdentifiers:(id)arg1;	// IMP=0x00000000000040e0
- (id)notificationSourceWithIdentifier:(id)arg1;	// IMP=0x0000000000003ca2
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000003bf8
- (void)addObserver:(id)arg1;	// IMP=0x0000000000003b04
- (id)init;	// IMP=0x00000000000039d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

