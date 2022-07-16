//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AMSUserNotificationStrategy;

@interface AMSUserNotificationCenter : NSObject
{
    id <AMSUserNotificationStrategy> _strategy;	// 8 = 0x8
}

+ (Class)_determineStrategyForBundleId:(id)arg1;	// IMP=0x000000000024064e
+ (id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(_Bool)arg4;	// IMP=0x00000000002405a6
+ (id)removeNotification:(id)arg1 centerBundleId:(id)arg2;	// IMP=0x0000000000240518
+ (id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;	// IMP=0x0000000000240478
+ (_Bool)badgeBundleId:(id)arg1 badgeId:(id)arg2 enabled:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000240059
+ (id)activeNotificationsWithCenterBundleId:(id)arg1;	// IMP=0x000000000023fff1
- (void).cxx_destruct;	// IMP=0x0000000000240693
@property(readonly, nonatomic) id <AMSUserNotificationStrategy> strategy; // @synthesize strategy=_strategy;

@end

