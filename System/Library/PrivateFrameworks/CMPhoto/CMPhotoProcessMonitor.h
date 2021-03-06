//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMPhotoProcessMonitor : NSObject
{
}

+ (_Bool)isForegroundApp;	// IMP=0x0000000000075f0f
+ (id)getShared;	// IMP=0x0000000000075f07
- (int)unregisterBackgroundNotificationForContext:(void *)arg1;	// IMP=0x0000000000075f87
- (int)registerBackgroundNotificationHandlerForContext:(void *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000075f7c
- (int)releaseAssertionForContext:(void *)arg1;	// IMP=0x0000000000075f71
- (int)takeAssertionUntilTime:(unsigned long long)arg1 forContext:(void *)arg2;	// IMP=0x0000000000075f66
- (void)_takeOSTransactionForContext:(void *)arg1;	// IMP=0x0000000000075f60
- (void)_takeRBSAssertionForContext:(void *)arg1 until:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x0000000000075f5a
- (void)waitForPendingNotifications;	// IMP=0x0000000000075f54
- (void)dealloc;	// IMP=0x0000000000075f25
- (id)init;	// IMP=0x0000000000075f17

@end

