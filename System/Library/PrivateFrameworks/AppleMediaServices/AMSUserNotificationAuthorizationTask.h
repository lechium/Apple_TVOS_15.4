//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUserNotificationAuthorizationOptions, NSString, UNUserNotificationCenter;
@protocol AMSUserNotificationAuthorizationDelegate;

@interface AMSUserNotificationAuthorizationTask
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    id <AMSUserNotificationAuthorizationDelegate> _delegate;	// 16 = 0x10
    AMSUserNotificationAuthorizationOptions *_options;	// 24 = 0x18
    UNUserNotificationCenter *_notificationCenter;	// 32 = 0x20
}

+ (id)recordEngagementEventWithBundleIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x000000000023e72c
+ (id)_findEngagementRequestInResponse:(id)arg1;	// IMP=0x000000000023e5af
+ (id)engagementRequestForFullSheet;	// IMP=0x000000000023dca5
- (void).cxx_destruct;	// IMP=0x000000000023ffa0
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) AMSUserNotificationAuthorizationOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <AMSUserNotificationAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)_startEngagementAuthorizationWithResult:(id)arg1;	// IMP=0x000000000023f62c
- (id)_presentDialogForUserInitiatedWithCompletion;	// IMP=0x000000000023f2e9
- (id)requestAuthorization;	// IMP=0x000000000023ea95
- (id)initWithBundleIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x000000000023dbcf

@end
