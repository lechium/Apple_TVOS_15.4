//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker, NSString;
@protocol OS_dispatch_queue;

@interface ASDUpdatesService : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    _Bool _hasUpdatesEntitlement;	// 32 = 0x20
    int _storeChangedNotificationToken;	// 36 = 0x24
}

+ (id)badgeCount;	// IMP=0x000000000002de6f
+ (id)registerBadgeCountNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002dd35
+ (id)defaultService;	// IMP=0x000000000002dc45
+ (id)interface;	// IMP=0x0000000000030ef2
- (void).cxx_destruct;	// IMP=0x0000000000030ebf
- (void)updateAllWithJobResultsCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030ea3
- (void)updateAllWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030e8e
- (void)showApplicationBadgeForPendingUpdates;	// IMP=0x0000000000030e88
- (void)reloadForSettingsFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030e71
- (void)hideApplicationBadgeForPendingUpdates;	// IMP=0x0000000000030e6b
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030e56
- (void)getMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030d80
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030ab6
- (id)_failedJobResultsForBundleIDs:(id)arg1;	// IMP=0x0000000000030820
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000301ac
- (void)setAutoUpdateEnabled:(_Bool)arg1;	// IMP=0x0000000000030087
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fb4b
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f619
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f095
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002eb83
- (_Bool)hasEntitlement;	// IMP=0x000000000002eb7a
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e6f5
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e266
- (_Bool)confirmAgentRequestedUpdateAll;	// IMP=0x000000000002e09f
- (_Bool)autoUpdateEnabled;	// IMP=0x000000000002deb3
- (id)_initWithServiceBroker:(id)arg1;	// IMP=0x000000000002dcca
- (void)dealloc;	// IMP=0x000000000002dc07
- (id)init;	// IMP=0x000000000002da34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

