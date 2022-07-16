//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDAccessCodeManagerContext-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDAccessCodeDemoDataMocker, HMDBulletinBoard, HMDDevice, HMDHome, HMDHomeAdministratorHandler, HMDRemoteMessageForwarder, HMFMessageDispatcher, NSArray, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAccessCodeManagerContext : NSObject <HMFLogging, HMDAccessCodeManagerContext>
{
    HMDHome *_home;	// 8 = 0x8
    HMFMessageDispatcher *_messageDispatcher;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSUUID *_UUID;	// 32 = 0x20
    HMDBulletinBoard *_bulletinBoard;	// 40 = 0x28
    HMDRemoteMessageForwarder *_remoteMessageForwarder;	// 48 = 0x30
    HMDAccessCodeDemoDataMocker *_demoDataMocker;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000003e57f
- (void).cxx_destruct;	// IMP=0x000000000003e3ee
@property(readonly) HMDAccessCodeDemoDataMocker *demoDataMocker; // @synthesize demoDataMocker=_demoDataMocker;
@property(readonly) HMDRemoteMessageForwarder *remoteMessageForwarder; // @synthesize remoteMessageForwarder=_remoteMessageForwarder;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)generateAccessCodeValueFromConstraints:(id)arg1 accessoryAccessCodes:(id)arg2 homeAccessCodes:(id)arg3;	// IMP=0x000000000003e35b
- (id)hapAccessoryWithUUID:(id)arg1;	// IMP=0x000000000003e27a
@property(readonly) NSArray *UUIDsOfUsersWithoutAccessCodes;
@property(readonly) NSArray *UUIDsOfAccessoriesSupportingAccessCodes;
@property(readonly) NSArray *accessoriesSupportingAccessCodes;
- (id)userWithUUID:(id)arg1;	// IMP=0x000000000003e040
- (id)userForMessage:(id)arg1;	// IMP=0x000000000003dfbd
- (void)redispatchToResidentMessage:(id)arg1;	// IMP=0x000000000003df09
- (id)_performMockedReadRequests:(id)arg1;	// IMP=0x000000000003dd58
- (id)performReadRequests:(id)arg1 withRetries:(long long)arg2 timeInterval:(double)arg3 loggingObject:(id)arg4;	// IMP=0x000000000003dbae
- (id)performWriteRequests:(id)arg1 withRetries:(long long)arg2 timeInterval:(double)arg3 loggingObject:(id)arg4;	// IMP=0x000000000003da04
- (id)_performMockedWriteRequests:(id)arg1;	// IMP=0x000000000003d853
@property(readonly) HMDDevice *residentCommunicationHandlerPreferredDevice;
@property(readonly, getter=hasHomeOnboardedForAccessCodes) _Bool homeOnboardedForAccessCodes;
@property(readonly, getter=isHomeAppForegrounded) _Bool homeAppForegrounded;
@property(readonly, getter=isResidentSupported) _Bool residentSupported;
@property(readonly, getter=isCurrentDeviceWatch) _Bool currentDeviceWatch;
@property(readonly, getter=isCurrentDeviceOwnerController) _Bool currentDeviceOwnerController;
@property(readonly, getter=isCurrentDeviceOwnerUser) _Bool currentDeviceOwnerUser;
@property(readonly, getter=isCurrentDeviceResidentCapable) _Bool currentDeviceResidentCapable;
@property(readonly) double residentDataSyncVerificationRetryTimeInterval;
@property(readonly) long long residentDataSyncVerificationRetries;
@property(readonly) double dataCleanUpCheckTimerInterval;
@property(readonly) double removedUserAccessCodeTimeToLive;
@property(readonly) double accessoryReadWriteRetryTimeInterval;
@property(readonly) long long accessoryReadWriteRetries;
@property(readonly, getter=isDemoDataMockerEnabled) _Bool demoDataMockerEnabled;
@property(readonly) _Bool primaryResidentSupportsAccessCodes;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
@property(readonly) HMDHomeAdministratorHandler *administratorHandler;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly, getter=isFeatureEnabled) _Bool featureEnabled;
- (void)configure;	// IMP=0x000000000003cf65
- (id)initWithHome:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 UUID:(id)arg4;	// IMP=0x000000000003cdc7
- (id)initWithHome:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3;	// IMP=0x000000000003cce8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

