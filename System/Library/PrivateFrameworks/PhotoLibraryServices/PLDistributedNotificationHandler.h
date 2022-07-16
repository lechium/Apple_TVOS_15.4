//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryBundleController;
@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 8 = 0x8
    PLPhotoLibraryBundleController *_libraryBundleController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000293030
- (void)_openSystemPhotoLibrary;	// IMP=0x0000000000292e08
- (void)_handleCloudPhotoNotification;	// IMP=0x0000000000292df6
- (void)_handleNotification:(id)arg1;	// IMP=0x0000000000292c0b
- (void)registerForNotifications;	// IMP=0x0000000000292b64
- (id)initWithLibraryBundleController:(id)arg1;	// IMP=0x0000000000292a71

@end

