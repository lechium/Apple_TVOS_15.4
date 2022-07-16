//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SpringBoardUtility : NSObject
{
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDictionary *_enabledRemoteNotificationTypes;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    long long _observeAllIdentifiersCount;	// 40 = 0x28
    NSCountedSet *_observedApplicationIdentifiers;	// 48 = 0x30
    NSMutableArray *_pendingAlerts;	// 56 = 0x38
    SSXPCConnection *_pluginConnection;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_pluginConnectionTimeout;	// 72 = 0x48
    NSMutableArray *_pluginDeferredBlocks;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_springBoardQueue;	// 88 = 0x58
    NSMutableDictionary *_stateCache;	// 96 = 0x60
}

+ (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0040000000148857
+ (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x0010000000147f9a
+ (void)testPluginAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001472c8
+ (void)testLockscreenAccountSheetWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000147261
+ (void)testBadgingWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000014700c
+ (void)registerPluginConnectionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000146f9a
+ (void)restartApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000146e58
+ (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000146d7d
+ (void)dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000146cc2
+ (id)sharedInstance;	// IMP=0x00100000001439d2
- (void).cxx_destruct;	// IMP=0x00200000001490f0
- (void)_timeoutPluginConnection;	// IMP=0x0010000000148f3a
- (void)_setApplicationStatesWithDictionary:(id)arg1;	// IMP=0x0010000000148cbb
- (void)_setApplicationState:(unsigned int)arg1 forClientID:(id)arg2;	// IMP=0x0010000000148a8a
- (void)_requestPluginConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001483f3
- (void)_registerPluginConnectionWithMessage:(id)arg1;	// IMP=0x0010000000147fb1
- (_Bool)_getProcessID:(int *)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x0010000000147f21
- (id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2;	// IMP=0x0010000000147d07
- (void)_fireDeferredPluginBlocksWithConnection:(id)arg1;	// IMP=0x0010000000147b06
- (void)_disconnectPluginConnection:(id)arg1;	// IMP=0x0010000000147889
- (id)_applicationStateMonitor;	// IMP=0x00100000001476cb
- (void)sendPluginMessage:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000147529
- (void)sendPluginMessage:(id)arg1;	// IMP=0x001000000014747f
- (void)_dequeueAlertWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000146910
- (void)wakeAppUsingRequest:(id)arg1;	// IMP=0x0010000000145cf3
- (void)suspendFrontApplication;	// IMP=0x0010000000145ce9
- (void)setBadgeValue:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001459e8
- (void)resetEnabledRemoteNotificationTypes;	// IMP=0x0010000000145982
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)arg1;	// IMP=0x0010000000145647
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;	// IMP=0x0010000000145558
- (_Bool)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x001000000014531a
@property(readonly, getter=isScreenLocked) _Bool screenLocked;
@property(readonly) NSString *frontmostClientIdentifier;
- (void)endGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x0010000000144caf
- (void)endGeneratingStateChangeNotifications;	// IMP=0x0010000000144b20
- (id)copyBundleInfoValueForKey:(id)arg1 PID:(int)arg2;	// IMP=0x0010000000144964
- (void)beginGeneratingStateChangeNotificationsForIdentifiers:(id)arg1;	// IMP=0x00100000001445f2
- (void)beginGeneratingStateChangeNotificationsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000144285
- (unsigned int)applicationStateForIdentifier:(id)arg1;	// IMP=0x001000000014404b
- (void)activateAlertWithDescription:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000143a5f
- (void)dealloc;	// IMP=0x0010000000143957
- (id)init;	// IMP=0x0010000000143894

@end

