//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVSBackgroundTaskManager : NSObject
{
    _Bool _scheduledNotificationPost;	// 8 = 0x8
    int _enabledTaskTypesChangedNotificationToken;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00000000000146e7
@property(readonly, nonatomic) int enabledTaskTypesChangedNotificationToken; // @synthesize enabledTaskTypesChangedNotificationToken=_enabledTaskTypesChangedNotificationToken;
- (unsigned long long)_enabledTaskTypesMask;	// IMP=0x0000000000015510
- (void)_postEnabledTasksDidChangeNotification;	// IMP=0x00000000000153e4
- (void)_updateTasksForEnabledTaskTypesChangeWithToken:(int)arg1;	// IMP=0x0000000000015364
- (void)_configureDistributedNotifications;	// IMP=0x0000000000015222
- (void)performFinishedForTask:(id)arg1;	// IMP=0x0000000000015171
- (void)updateTasksForTimeChange;	// IMP=0x00000000000150d0
- (_Bool)tasksEnabledOfType:(long long)arg1;	// IMP=0x000000000001508c
- (void)disableBackgroundTasksOfType:(long long)arg1;	// IMP=0x0000000000014dd5
- (void)enableBackgroundTasksOfType:(long long)arg1;	// IMP=0x0000000000014b25
- (void)unregisterBackgroundTask:(id)arg1;	// IMP=0x00000000000149f3
- (void)registerBackgroundTask:(id)arg1;	// IMP=0x00000000000148d4
- (id)init;	// IMP=0x0000000000014899

@end

