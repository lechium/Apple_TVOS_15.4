//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/ASDNotification.h>

@interface ASDNotification (LibraryService)
+ (id)notificationForUnregisteredBundleIDs:(id)arg1;	// IMP=0x00100000000eb380
+ (id)notificationForUninstalls:(id)arg1 withDeviceID:(id)arg2;	// IMP=0x00100000000eb25c
+ (id)notificationForRegisteredApps:(id)arg1;	// IMP=0x00100000000eb164
+ (id)notificationForInstalls:(id)arg1 withDeviceID:(id)arg2;	// IMP=0x00100000000eb040
+ (id)notificationForFailedInstalls:(id)arg1;	// IMP=0x00100000000eaf48
+ (id)notificationForRefreshWithDeviceID:(id)arg1;	// IMP=0x00100000000eae50
+ (id)notificationForRefreshWithBundleIDs:(id)arg1;	// IMP=0x00100000000ead58
@end

