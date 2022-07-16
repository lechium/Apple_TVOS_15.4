//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNNotification;

@interface SKIAnnounceNotificationDirectInvocationPayload : NSObject
{
    _Bool _isSameTypeAsLastAnnouncement;	// 8 = 0x8
    UNNotification *_notification;	// 16 = 0x10
    NSString *_appBundleId;	// 24 = 0x18
    NSString *_appBundleIdOfLastAnnouncement;	// 32 = 0x20
    unsigned long long _synchronousBurstIndex;	// 40 = 0x28
    double _timeSinceLastAnnouncement;	// 48 = 0x30
    long long _announcementPlatform;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000004ebd
@property(nonatomic) long long announcementPlatform; // @synthesize announcementPlatform=_announcementPlatform;
@property(nonatomic) double timeSinceLastAnnouncement; // @synthesize timeSinceLastAnnouncement=_timeSinceLastAnnouncement;
@property(nonatomic) _Bool isSameTypeAsLastAnnouncement; // @synthesize isSameTypeAsLastAnnouncement=_isSameTypeAsLastAnnouncement;
@property(nonatomic) unsigned long long synchronousBurstIndex; // @synthesize synchronousBurstIndex=_synchronousBurstIndex;
@property(copy, nonatomic) NSString *appBundleIdOfLastAnnouncement; // @synthesize appBundleIdOfLastAnnouncement=_appBundleIdOfLastAnnouncement;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(copy, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
- (id)notificationIdentifier;	// IMP=0x0000000000004dce
- (id)initWithNotification:(id)arg1 appBundleId:(id)arg2 appBundleIdOfLastAnnouncement:(id)arg3 synchronousBurstIndex:(unsigned long long)arg4 isSameTypeAsLastAnnouncement:(_Bool)arg5 timeSinceLastAnnouncement:(double)arg6 announcementPlatform:(long long)arg7;	// IMP=0x0000000000004cbf

@end

