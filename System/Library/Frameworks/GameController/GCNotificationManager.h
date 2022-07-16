//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNUserNotificationCenter;

@interface GCNotificationManager : NSObject
{
    UNUserNotificationCenter *_userNotificationCenter;	// 8 = 0x8
    _Bool _isPermissionGranted;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000083236
- (void).cxx_destruct;	// IMP=0x00000000000837aa
- (void)requestNotification:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000835b9
- (void)requestNotificationImpl:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000083323
- (id)init;	// IMP=0x000000000008328b

@end
