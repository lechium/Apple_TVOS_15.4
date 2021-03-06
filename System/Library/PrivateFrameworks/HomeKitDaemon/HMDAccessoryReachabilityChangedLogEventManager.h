//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventDailyProvider-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, NSArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDAccessoryReachabilityChangedLogEventManager : HMFObject <HMFLogging, HMDLogEventDailyProvider>
{
    NSMutableDictionary *_transportReachabilityChangeDatesByUUID;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000028f2dd
- (void).cxx_destruct;	// IMP=0x000000000028ed6f
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x000000000028ecf0
@property(readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;	// IMP=0x000000000028ebd1
- (void)_disable;	// IMP=0x000000000028eba2
- (void)_enable;	// IMP=0x000000000028eb73
- (void)_submit;	// IMP=0x000000000028eac0
- (void)_reset;	// IMP=0x000000000028e96b
- (void)_submitForAccessory:(id)arg1;	// IMP=0x000000000028e8ab
- (void)_submitDailyUpdateForAccessory:(id)arg1 withTransportReport:(id)arg2;	// IMP=0x000000000028e82c
- (void)_submitForAccessory:(id)arg1 withTransportReport:(id)arg2 reachable:(_Bool)arg3 changed:(_Bool)arg4;	// IMP=0x000000000028e507
- (void)submitForAccessory:(id)arg1 withTransportReport:(id)arg2 reachable:(_Bool)arg3;	// IMP=0x000000000028e421
- (id)initWithHome:(id)arg1;	// IMP=0x000000000028e2de
- (id)logEventDispatcher;	// IMP=0x000000000028e2c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

