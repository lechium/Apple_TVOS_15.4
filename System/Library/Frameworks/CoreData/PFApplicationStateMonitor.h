//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFCloudKitThrottledNotificationObserver;
@protocol PFApplicationStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface PFApplicationStateMonitor : NSObject
{
    PFCloudKitThrottledNotificationObserver *_appActivateLifecycleObserver;	// 8 = 0x8
    PFCloudKitThrottledNotificationObserver *_appDeactivateLifecycleObserver;	// 16 = 0x10
    _Atomic int _transitionCounter;	// 24 = 0x18
    long long _backgroundTimeout;	// 32 = 0x20
    unsigned long long _applicationState;	// 40 = 0x28
    NSObject<PFApplicationStateMonitorDelegate> *_delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000257d3b
- (void)applicationWillDeactivate:(id)arg1;	// IMP=0x0000000000257cd9
- (void)applicationDidActivate:(id)arg1;	// IMP=0x0000000000257ccb
- (void)dealloc;	// IMP=0x0000000000257c4a
- (id)init;	// IMP=0x00000000002574ba

@end

