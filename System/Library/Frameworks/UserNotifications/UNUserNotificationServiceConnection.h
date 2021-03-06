//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/UNUserNotificationClientProtocol-Protocol.h>
#import <UserNotifications/UNUserNotificationServerProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNUserNotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol>
{
    NSMutableDictionary *_observersByBundleIdentifier;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000026583
- (void).cxx_destruct;	// IMP=0x000000000002f8d2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableDictionary *observersByBundleIdentifier; // @synthesize observersByBundleIdentifier=_observersByBundleIdentifier;
- (void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002f760
- (void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002f617
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002f472
- (void)_queue_invalidatedConnection;	// IMP=0x000000000002f44a
- (void)_queue_interruptedConnection;	// IMP=0x000000000002f43c
- (id)_queue_ensureConnection;	// IMP=0x000000000002efd6
- (void)_invalidate;	// IMP=0x000000000002ef72
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002ee2a
- (void)performBlockOnConnectionQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ed92
- (id)clearedInfoForBundleIdentifier:(id)arg1;	// IMP=0x000000000002ea1e
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;	// IMP=0x000000000002e66f
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e1e0
- (id)notificationTopicsForBundleIdentifier:(id)arg1;	// IMP=0x000000000002de31
- (void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d9a2
- (void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d48e
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002cf7a
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ca66
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c5cc
- (id)badgeNumberForBundleIdentifier:(id)arg1;	// IMP=0x000000000002c241
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002be1c
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b933
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b471
- (id)deliveredNotificationsForBundleIdentifier:(id)arg1;	// IMP=0x000000000002b0c2
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ac9d
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a809
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a320
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029e06
- (id)pendingNotificationRequestsForBundleIdentifier:(id)arg1;	// IMP=0x0000000000029a57
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000295ab
- (void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000028f11
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028870
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000283ae
- (id)notificationCategoriesForBundleIdentifier:(id)arg1;	// IMP=0x0000000000027fff
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000027c1f
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002777d
- (id)notificationSettingsForBundleIdentifier:(id)arg1;	// IMP=0x00000000000273d1
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026eec
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002696d
- (void)setObservingUserNotifications:(_Bool)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000002685f
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000026785
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000266ac
- (id)init;	// IMP=0x00000000000265d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

