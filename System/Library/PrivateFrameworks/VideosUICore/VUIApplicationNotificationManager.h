//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIApplicationNotificationManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000000000250f7
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000000000255d9
- (void)_applicationWillTerminateNotification:(id)arg1;	// IMP=0x0000000000025532
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000000002548b
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000000253e4
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000000002533d
- (void)listenForApplicationNotifications;	// IMP=0x00000000000251c1
- (void)dealloc;	// IMP=0x000000000002514c

@end
