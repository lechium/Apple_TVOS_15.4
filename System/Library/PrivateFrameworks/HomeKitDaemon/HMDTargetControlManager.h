//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDSiriServer, NSMutableArray, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDTargetControlManager : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    HMDAccessory *_targetAccessory;	// 16 = 0x10
    NSMutableArray *_configuredControllers;	// 24 = 0x18
    NSMutableArray *_activeControlServices;	// 32 = 0x20
    NSMutableArray *_eventReceivers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSString *_logID;	// 56 = 0x38
    HMDSiriServer *_siriServer;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00000000005fd913
- (void).cxx_destruct;	// IMP=0x00000000005fab79
@property(retain, nonatomic) HMDSiriServer *siriServer; // @synthesize siriServer=_siriServer;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDAccessory *targetAccessory; // @synthesize targetAccessory=_targetAccessory;
- (void)__activeSelectionReset:(id)arg1;	// IMP=0x00000000005fa6d4
- (void)__activeSelectionChanged:(id)arg1;	// IMP=0x00000000005f9eb0
- (void)_handleTargetControlServiceDeselection:(id)arg1;	// IMP=0x00000000005f9c41
- (void)_handleTargetControlServiceSelection:(id)arg1;	// IMP=0x00000000005f9a63
- (void)_handleControllerDisconnected:(id)arg1;	// IMP=0x00000000005f96e4
- (void)_targetAccessoryUnconfiguredWithController:(id)arg1;	// IMP=0x00000000005f902c
- (void)_targetAccessoryConfiguredWithController:(id)arg1;	// IMP=0x00000000005f8d79
- (void)__characteristicsEventsReceived:(id)arg1;	// IMP=0x00000000005f8684
- (void)_handleButtonEvent:(id)arg1 fromControlService:(id)arg2;	// IMP=0x00000000005f7636
- (id)__getOrCreateEventReceiver:(id)arg1;	// IMP=0x00000000005f7027
- (void)__serviceRemoved:(id)arg1;	// IMP=0x00000000005f6f76
- (void)__accessoryRemoved:(id)arg1;	// IMP=0x00000000005f6ec5
- (void)__accessoryAdded:(id)arg1;	// IMP=0x00000000005f6e14
- (void)__accessoryDisconnected:(id)arg1;	// IMP=0x00000000005f6d63
- (void)__accessoryConnected:(id)arg1;	// IMP=0x00000000005f6cb2
- (void)__accessoryNameUpdated:(id)arg1;	// IMP=0x00000000005f6c01
- (void)__controllerRefreshedConfiguration:(id)arg1;	// IMP=0x00000000005f6b50
- (void)_targetAccessoryRefreshConfigurationWithController:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000005f60a4
- (id)__selectButtonConfiguration:(id)arg1 receiver:(id)arg2;	// IMP=0x00000000005f57a6
- (void)__targetAccessoryUnconfiguredForControl:(id)arg1;	// IMP=0x00000000005f56f5
- (void)__targetAccessoryConfiguredForControl:(id)arg1;	// IMP=0x00000000005f5644
- (void)addTargetControllers:(id)arg1;	// IMP=0x00000000005f4f7d
- (void)removeReceiver:(id)arg1;	// IMP=0x00000000005f4eb2
- (void)addReceiver:(id)arg1;	// IMP=0x00000000005f4de7
@property(readonly, nonatomic) NSMutableArray *eventReceivers; // @synthesize eventReceivers=_eventReceivers;
- (void)removeControlService:(id)arg1;	// IMP=0x00000000005f4bf0
- (void)addControlService:(id)arg1;	// IMP=0x00000000005f4b25
@property(readonly, nonatomic) NSMutableArray *activeControlServices; // @synthesize activeControlServices=_activeControlServices;
- (void)_removeController:(id)arg1;	// IMP=0x00000000005f488b
- (void)_addController:(id)arg1;	// IMP=0x00000000005f46c3
@property(readonly, nonatomic) NSMutableArray *configuredControllers; // @synthesize configuredControllers=_configuredControllers;
- (id)logIdentifier;	// IMP=0x00000000005f4585
- (void)invalidate;	// IMP=0x00000000005f4218
- (id)initWithTargetAccessory:(id)arg1 controllers:(id)arg2;	// IMP=0x00000000005f37fc
- (id)init;	// IMP=0x00000000005f3754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

