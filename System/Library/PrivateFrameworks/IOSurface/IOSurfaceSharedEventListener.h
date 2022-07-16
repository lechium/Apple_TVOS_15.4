//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IOSurfaceSharedEventListener : NSObject
{
    struct IONotificationPort *_notificationPort;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x000000000000214c
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x0000000000002144
- (id)init;	// IMP=0x000000000000213c

@end
