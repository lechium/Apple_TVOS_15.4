//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIJSNotificationCenter-Protocol.h>
#import <VideosUI/WLKNotificationCenterDelegate-Protocol.h>

@class NSString, WLKNotificationCenter;

@interface VUIJSNotificationCenter <WLKNotificationCenterDelegate, VUIJSNotificationCenter>
{
    WLKNotificationCenter *_center;	// 8 = 0x8
}

+ (void)showAppInstallCompletePushNotificationWithAppContext:(id)arg1 appName:(id)arg2 contentName:(id)arg3 punchoutURL:(id)arg4;	// IMP=0x00000000000f6350
+ (void)showSignupAlertPushNotificationWithAppContext:(id)arg1;	// IMP=0x00000000000f619f
- (void).cxx_destruct;	// IMP=0x00000000000f662d
- (void)handleAction:(id)arg1;	// IMP=0x00000000000f5f58
- (void)clearBadgeData;	// IMP=0x00000000000f5f3f
- (id)badgeData;	// IMP=0x00000000000f5f26
- (void)setBadgeString:(id)arg1;	// IMP=0x00000000000f5f07
- (void)setBadgeNumber:(id)arg1;	// IMP=0x00000000000f5ee8
- (void)post:(id)arg1:(id)arg2:(id)arg3:(id)arg4;	// IMP=0x00000000000f5d67
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000000000f5cf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
