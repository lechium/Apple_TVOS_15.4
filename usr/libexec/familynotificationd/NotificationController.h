//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAUserNotificationProvider, NSString;

@interface NotificationController : NSObject
{
    FAUserNotificationProvider *_notificationProvider;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x0020000000001db5
- (void).cxx_destruct;	// IMP=0x0020000000002caf
- (id)xpcConnectionForClientWithMachServiceName:(id)arg1;	// IMP=0x0010000000002bfe
- (void)provider:(id)arg1 didDismissNotification:(id)arg2;	// IMP=0x0010000000002913
- (void)provider:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x001000000000254a
- (void)_allPendingNotificationsSortedByDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000000023c3
- (void)allPendingNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000232c
- (void)pendingNotificationsForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000020c9
- (void)removeAllNotificationsFromClient:(id)arg1;	// IMP=0x0010000000001f1d
- (void)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000001e5d
- (void)deliverNotification:(id)arg1;	// IMP=0x0010000000001e47
- (void)start;	// IMP=0x0010000000001e0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

