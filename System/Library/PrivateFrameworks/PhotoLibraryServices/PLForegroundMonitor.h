//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableSet;
@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;

@interface PLForegroundMonitor : NSObject
{
    NSMutableSet *_foregroundBundleIDs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_applicationStateMonitorQueue;	// 16 = 0x10
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 24 = 0x18
    id <PLForegroundMonitorDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000017da2c
@property(nonatomic) __weak id <PLForegroundMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg1;	// IMP=0x000000000017d93d
- (void)_locked_applicationDidMoveToBackground:(id)arg1;	// IMP=0x000000000017d7c3
- (void)_locked_applicationDidMoveToForeground:(id)arg1;	// IMP=0x000000000017d63a
- (void)_applicationChangeToBG:(id)arg1;	// IMP=0x000000000017d5ef
- (void)_applicationChangeToFG:(id)arg1;	// IMP=0x000000000017d5a4
- (void)dealloc;	// IMP=0x000000000017d309
- (id)init;	// IMP=0x000000000017d1b7

@end

