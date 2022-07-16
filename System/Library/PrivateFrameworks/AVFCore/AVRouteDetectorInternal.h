//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVRouteDetectorInternal : NSObject
{
    _Bool multipleRoutesDetected;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 16 = 0x10
    AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;	// 24 = 0x18
    id outputDevicesChangeNotificationToken;	// 32 = 0x20
}

@end

