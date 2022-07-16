//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLItemStoreDecorator;
@protocol NotificationProvider;

@interface NotificationController : NSObject
{
    FLItemStoreDecorator *_itemStoreDecorator;	// 8 = 0x8
    id <NotificationProvider> _notificationProvider;	// 16 = 0x10
}

+ (id)sharedController;	// IMP=0x002000000000a529
- (void).cxx_destruct;	// IMP=0x002000000000d4d4
@property(retain, nonatomic) id <NotificationProvider> notificationProvider; // @synthesize notificationProvider=_notificationProvider;
- (id)xpcConnectionForClientWithMachServiceName:(id)arg1;	// IMP=0x001000000000d40b
- (void)didActivateHSA2LoginNotificationNotification:(id)arg1;	// IMP=0x001000000000d2dd
- (void)updateNotificationDeliveryDateForItem:(id)arg1;	// IMP=0x001000000000d1c1
- (void)_processFollowUpItemNotificationWithExtension:(id)arg1 activatedAction:(id)arg2;	// IMP=0x001000000000d0f2
- (void)_handleExtensionAction:(id)arg1 forItem:(id)arg2;	// IMP=0x001000000000cd88
- (void)_handleNotificationAction:(id)arg1 forItem:(id)arg2 activationSource:(unsigned long long)arg3;	// IMP=0x001000000000c84b
- (void)provider:(id)arg1 didDismissNotificationForFollowUpItemWithIdentifier:(id)arg2 activationSource:(unsigned long long)arg3;	// IMP=0x001000000000c64d
- (void)provider:(id)arg1 didClearNotificationsForFollowUpItemsWithIdentifiers:(id)arg2 activationSource:(unsigned long long)arg3;	// IMP=0x001000000000c44f
- (void)_handleActivateActionFromSource:(unsigned long long)arg1 item:(id)arg2;	// IMP=0x001000000000c2fa
- (void)provider:(id)arg1 didActivateNotificationForFollowUpItemWithIdentifier:(id)arg2 activationSource:(unsigned long long)arg3;	// IMP=0x001000000000c151
- (void)provider:(id)arg1 didActivateNotification:(id)arg2 forFollowUpItemWithIdentifier:(id)arg3 activationSource:(unsigned long long)arg4;	// IMP=0x001000000000bd61
- (id)providerForFollowUpItem:(id)arg1;	// IMP=0x001000000000bd53
- (void)tearDownNotificationForItem:(id)arg1;	// IMP=0x001000000000bce7
- (void)_deliverNotificationsForItem:(id)arg1 forceDelivery:(_Bool)arg2;	// IMP=0x001000000000ba57
- (void)deliverNotificationsForItem:(id)arg1;	// IMP=0x001000000000ba43
- (void)_processPendingItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b8de
- (void)_processPendingNotifications:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b865
- (id)_activityCriteriaWithFrequency:(double)arg1;	// IMP=0x001000000000b744
- (void)_registerActivityForItems:(id)arg1;	// IMP=0x001000000000b2a0
- (double)_timeTilNextActivityForItems:(id)arg1;	// IMP=0x001000000000ab57
- (id)_itemsWithEligibleNotifications;	// IMP=0x001000000000a9c0
- (void)updateRepeatingActivityState;	// IMP=0x001000000000a8f2
- (void)_monitorUnlockEvents;	// IMP=0x001000000000a72a
- (void)start;	// IMP=0x001000000000a5a8

@end
