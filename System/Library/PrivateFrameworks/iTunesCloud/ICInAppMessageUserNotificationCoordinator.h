//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICInAppMessageUserNotificationCoordinator : NSObject
{
}

+ (id)_centerForBundleIdentifier:(id)arg1;	// IMP=0x00000000000c3b09
+ (void)removeNotificationWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000c3a00
+ (_Bool)scheduleNotificationWithPayload:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000c397e
+ (void)removeBadgeIconForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3853
+ (void)addBadgeIconForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3648
+ (id)_amsPushHandler;	// IMP=0x00000000000c3618
+ (id)_musicCenter;	// IMP=0x00000000000c35e8

@end
