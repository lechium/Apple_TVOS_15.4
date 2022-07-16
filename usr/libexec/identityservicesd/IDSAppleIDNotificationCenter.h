//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDSAppleIDNotificationCenter : NSObject
{
    NSMutableArray *_availableNotifications;	// 8 = 0x8
    NSMutableArray *_usageNotifications;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000002694d0
- (void).cxx_destruct;	// IMP=0x002000000026dad0
- (void)addUsageNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 hardwareVersion:(id)arg5 deviceCapabilities:(id)arg6 serviceType:(id)arg7;	// IMP=0x001000000026d410
- (void)addAvailableNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000026cd90
- (void)_noteNewUsageNotification:(id)arg1;	// IMP=0x001000000026cca0
- (void)_noteNewAvailableNotification:(id)arg1;	// IMP=0x001000000026cbb0
- (void)_processUsageNotifications;	// IMP=0x001000000026c790
- (void)_processAvailableNotifications;	// IMP=0x001000000026c3b0
- (id)_localizedServicesUsageStringForDevice:(id)arg1 useSingular:(_Bool)arg2;	// IMP=0x001000000026c210
- (void)_postUsageNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 deviceModel:(id)arg5 deviceCapabilities:(id)arg6 serviceTypes:(id)arg7;	// IMP=0x001000000026adf0
- (void)_postAvailableNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5 blockMap:(id)arg6;	// IMP=0x0010000000269660
- (id)init;	// IMP=0x0010000000269590

@end
