//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSUserNotificationStrategy-Protocol.h>

__attribute__((visibility("hidden")))
@interface AMSUNUserNotificationStrategy : NSObject <AMSUserNotificationStrategy>
{
}

+ (id)_centerForBundleId:(id)arg1;	// IMP=0x000000000021e714
+ (id)_removeNotification:(id)arg1 centerBundleId:(id)arg2;	// IMP=0x000000000021e6b3
+ (id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(_Bool)arg4;	// IMP=0x000000000021e443
+ (id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;	// IMP=0x000000000021dc19
+ (_Bool)_badgeBundleId:(id)arg1 increment:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000021da22
+ (id)_activeNotificationsWithCenterBundleId:(id)arg1;	// IMP=0x000000000021d6c3

@end

