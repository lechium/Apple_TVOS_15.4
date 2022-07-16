//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/UNUserNotificationCenterDelegate-Protocol.h>

@class NSString, UNUserNotificationCenter;
@protocol HMDUserNotificationCenterDelegate;

@interface HMDUserNotificationCenter : HMFObject <UNUserNotificationCenterDelegate>
{
    id <HMDUserNotificationCenterDelegate> _delegate;	// 8 = 0x8
    UNUserNotificationCenter *_userNotificationCenter;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000a80425
- (void).cxx_destruct;	// IMP=0x0000000000a80030
@property(readonly) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property __weak id <HMDUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a7ff64
- (void)_showNotification:(id)arg1;	// IMP=0x0000000000a7fea6
- (void)fetchAreUserNotificationsEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a7fdeb
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1;	// IMP=0x0000000000a7fd4b
- (id)showNotificationWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 categoryIdentifier:(id)arg4 requestIdentifier:(id)arg5 date:(id)arg6 attachments:(id)arg7 userInfo:(id)arg8 shouldIgnoreDoNotDisturb:(_Bool)arg9 interruptionLevel:(unsigned long long)arg10;	// IMP=0x0000000000a7f9d4
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;	// IMP=0x0000000000a7f830
- (void)setBadgeNumber:(id)arg1;	// IMP=0x0000000000a7f7bc
- (id)configureWithNotificationCategories:(id)arg1;	// IMP=0x0000000000a7f66d
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000a7f5c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

