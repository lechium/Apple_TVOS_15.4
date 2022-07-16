//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDBulletinBoardNotification, HMFMessageDispatcher, NSArray, NSHashTable, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDBulletinBoardNotificationServiceGroup : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSSet *_cameraProfileUUIDs;	// 16 = 0x10
    NSSet *_associatedServiceUUIDs;	// 24 = 0x18
    NSHashTable *_cameraProfilesTable;	// 32 = 0x20
    NSHashTable *_associatedServicesTable;	// 40 = 0x28
    HMDBulletinBoardNotification *_bulletinBoardNotification;	// 48 = 0x30
    NSUUID *_messageTargetUUID;	// 56 = 0x38
    NSArray *_associatedServices;	// 64 = 0x40
    NSArray *_cameraProfiles;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
    HMFMessageDispatcher *_msgDispatcher;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009a82f
+ (id)logCategory;	// IMP=0x000000000009a7ff
- (void).cxx_destruct;	// IMP=0x000000000009a16c
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(retain, nonatomic) NSArray *associatedServices; // @synthesize associatedServices=_associatedServices;
@property __weak HMDBulletinBoardNotification *bulletinBoardNotification; // @synthesize bulletinBoardNotification=_bulletinBoardNotification;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000099f9e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000099c4f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000099a14
- (id)actionContextForCameraProfileID:(id)arg1;	// IMP=0x0000000000098c33
- (id)_cameraProfileWithID:(id)arg1;	// IMP=0x0000000000098a7e
- (id)dumpState;	// IMP=0x000000000009864d
- (void)setAssociatedServicesTable:(id)arg1;	// IMP=0x000000000009832a
@property(readonly, copy, nonatomic) NSHashTable *associatedServicesTable; // @synthesize associatedServicesTable=_associatedServicesTable;
- (void)setCameraProfilesTable:(id)arg1;	// IMP=0x0000000000098133
@property(readonly, copy, nonatomic) NSHashTable *cameraProfilesTable; // @synthesize cameraProfilesTable=_cameraProfilesTable;
@property(retain, nonatomic) NSSet *associatedServiceUUIDs; // @synthesize associatedServiceUUIDs=_associatedServiceUUIDs;
@property(retain, nonatomic) NSSet *cameraProfileUUIDs; // @synthesize cameraProfileUUIDs=_cameraProfileUUIDs;
- (void)_sendNotification:(id)arg1;	// IMP=0x0000000000097a0d
- (id)_prepareServiceGroupPayload;	// IMP=0x00000000000978f7
- (void)_updateAssociatedServicesTable:(id)arg1;	// IMP=0x0000000000097758
- (void)_updateAssociatedServices:(id)arg1 associatedCameras:(id)arg2;	// IMP=0x0000000000097066
- (void)_configureServices;	// IMP=0x00000000000962b6
- (id)_cameraNotificationGeneratingServicesForAccessory:(id)arg1;	// IMP=0x0000000000095e2a
- (id)_accessoriesInRoom:(id)arg1 ofHome:(id)arg2;	// IMP=0x0000000000095b75
- (_Bool)_isDefaultRoom:(id)arg1 ofHome:(id)arg2;	// IMP=0x0000000000095ac2
- (void)configureBulletinNotification;	// IMP=0x0000000000095a3f
- (_Bool)_isNotificationGeneratingService:(id)arg1;	// IMP=0x0000000000095959
- (_Bool)_isAlarmService:(id)arg1;	// IMP=0x0000000000095918
- (_Bool)_isSupportedAssociationService:(id)arg1;	// IMP=0x0000000000095812
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg1;	// IMP=0x00000000000956a3
- (void)_registerNotificationHandlers;	// IMP=0x00000000000955b3
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000095516
- (void)dealloc;	// IMP=0x00000000000954a8
- (id)initWithBulletinBoardNotification:(id)arg1;	// IMP=0x000000000009534e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
