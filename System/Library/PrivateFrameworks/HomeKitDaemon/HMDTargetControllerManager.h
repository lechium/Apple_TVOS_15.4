//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHAPAccessory, NSArray, NSMutableSet, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDTargetControllerManager : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    unsigned char _maximumTargets;	// 16 = 0x10
    _Bool _configurationRefreshed;	// 17 = 0x11
    HMDHAPAccessory *_controller;	// 24 = 0x18
    NSMutableSet *_configuredTargets;	// 32 = 0x20
    unsigned long long _ticksPerSecond;	// 40 = 0x28
    NSArray *_buttonConfiguration;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    NSString *_logID;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00000000004390b0
- (void).cxx_destruct;	// IMP=0x0000000000432a3c
@property(nonatomic) _Bool configurationRefreshed; // @synthesize configurationRefreshed=_configurationRefreshed;
@property(nonatomic) unsigned char maximumTargets; // @synthesize maximumTargets=_maximumTargets;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableSet *configuredTargets; // @synthesize configuredTargets=_configuredTargets;
@property(readonly, nonatomic) __weak HMDHAPAccessory *controller; // @synthesize controller=_controller;
- (void)_configureTargetAccessories:(id)arg1 reason:(id)arg2 targetAccessories:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000004327ac
- (void)_handleConfigureTargets:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004319d2
- (void)handleConfigureTargets:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004318f6
- (id)targetConfigurationMatchingAccessory:(id)arg1;	// IMP=0x00000000004315d4
- (id)targetConfigurationMatchingIdentifier:(id)arg1;	// IMP=0x00000000004313ec
- (void)updateTargets:(id)arg1;	// IMP=0x000000000043133b
- (void)autoConfigureTargets;	// IMP=0x00000000004312ca
- (void)_saveTargetUUIDs;	// IMP=0x0000000000431028
- (void)__characteristicEventsReceived:(id)arg1;	// IMP=0x0000000000430b7c
- (void)registerForActiveIdentifierNotifications;	// IMP=0x0000000000430b0b
- (void)_registerForActiveIdentifierNotifications;	// IMP=0x0000000000430413
- (void)_handleActiveIdentifierReadResponses:(id)arg1;	// IMP=0x000000000042ff7a
- (void)__handleActiveIdentifierChange:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x000000000042fbfb
- (void)acknowledgeTargetControlService:(id)arg1 active:(_Bool)arg2;	// IMP=0x000000000042fb44
- (void)_resetTargets;	// IMP=0x000000000042f8be
- (id)_dataForResetTargetsWithOutError:(id *)arg1;	// IMP=0x000000000042f71e
- (void)removeTargetAccessory:(id)arg1;	// IMP=0x000000000042f4ee
- (void)_removeTargets:(id)arg1;	// IMP=0x000000000042ee98
- (id)_dataForRemoveTargets:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000042ea05
- (void)addTargetAccessory:(id)arg1 buttonConfiguration:(id)arg2;	// IMP=0x000000000042e923
- (void)_addTargets:(id)arg1;	// IMP=0x000000000042e17a
- (void)_postSelectionChangeNotification:(_Bool)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000042e040
- (id)_dataForAddTargets:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000042d98b
- (void)updateTargetAccessory:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3;	// IMP=0x000000000042d881
- (void)_updateName:(id)arg1 buttonConfiguration:(id)arg2 target:(id)arg3;	// IMP=0x000000000042d16b
- (id)_dataForUpdateTarget:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3 outError:(id *)arg4;	// IMP=0x000000000042cbb4
- (void)updateButtonConfigurationForTarget:(id)arg1;	// IMP=0x000000000042cb03
- (void)_auditTargets:(id)arg1;	// IMP=0x000000000042c30e
- (void)_listTargetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042bf8b
- (id)_dataForListTargetsWithOutError:(id *)arg1;	// IMP=0x000000000042bdeb
- (void)_refreshConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000042ba28
- (void)_readSupportedConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000042b744
- (void)refreshConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000042b693
- (void)_notifyConfigurationRefresh:(id)arg1;	// IMP=0x000000000042b5c1
- (id)__refreshedConfiguration:(id)arg1;	// IMP=0x000000000042b3dc
- (int)_parseSupportedTargetConfiguration:(id)arg1;	// IMP=0x000000000042b07e
- (void)__accessoryRemoved:(id)arg1;	// IMP=0x000000000042afcd
- (void)__accessoryNameUpdated:(id)arg1;	// IMP=0x000000000042af1c
- (void)__accessoryConnected:(id)arg1;	// IMP=0x000000000042ae6b
- (void)__accessoryDisconnected:(id)arg1;	// IMP=0x000000000042adba
@property(retain, nonatomic) NSArray *buttonConfiguration; // @synthesize buttonConfiguration=_buttonConfiguration;
@property(nonatomic) unsigned long long ticksPerSecond; // @synthesize ticksPerSecond=_ticksPerSecond;
@property(readonly, nonatomic) NSArray *targetUUIDs;
- (void)resetConfiguredTargets;	// IMP=0x000000000042a5ec
- (void)removeConfiguredTarget:(id)arg1;	// IMP=0x000000000042a521
- (void)addConfiguredTarget:(id)arg1;	// IMP=0x000000000042a456
- (id)logIdentifier;	// IMP=0x000000000042a318
- (void)invalidate;	// IMP=0x000000000042a214
- (id)initWithTargetControllerAccessory:(id)arg1 targets:(id)arg2;	// IMP=0x0000000000429747
- (id)init;	// IMP=0x000000000042969f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
