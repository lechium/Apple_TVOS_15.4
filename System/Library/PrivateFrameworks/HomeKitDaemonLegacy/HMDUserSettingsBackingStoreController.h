//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMBLocalZoneModelObserver-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCloudShareParticipantsManagerDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDSettingsBackingStoreController-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, NSString, NSUUID;
@protocol HMDAssistantAccessControlModelUpdateReceiver, HMDDatabase, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSettingTransactionReceiverProtocol, HMDSharedUserDataModelUpdateReceiver, HMDUserSettingsBackingStoreControllerDelegate, HMMLogEventSubmitting, OS_dispatch_queue, OS_os_log;

@interface HMDUserSettingsBackingStoreController : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareMessengerDelegate, HMDDatabaseDelegate, HMDSettingsBackingStoreController>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    unsigned long long _startupSignPost;	// 16 = 0x10
    id <HMDUserSettingsBackingStoreControllerDelegate> _delegate;	// 24 = 0x18
    HMBLocalZone *_localZone;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    NSString *_zoneName;	// 48 = 0x30
    id <HMDDatabase> _database;	// 56 = 0x38
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 64 = 0x40
    HMDCloudShareMessenger *_shareMessenger;	// 72 = 0x48
    HMDCloudShareParticipantsManager *_participantsManager;	// 80 = 0x50
    HMBCloudZone *_cloudZone;	// 88 = 0x58
    long long _runState;	// 96 = 0x60
    long long _logEventRunState;	// 104 = 0x68
    id <HMDSettingTransactionReceiverProtocol> _transactionReceiver;	// 112 = 0x70
    id <HMDAssistantAccessControlModelUpdateReceiver> _assistantAccessControlModelUpdateReceiver;	// 120 = 0x78
    NSUUID *_assistantAccessControlModelID;	// 128 = 0x80
    id <HMDMediaContentProfileAccessControlModelUpdateReceiver> _mediaContentProfileAccessControlModelUpdateReceiver;	// 136 = 0x88
    NSUUID *_mediaContentProfileAccessControlModelID;	// 144 = 0x90
    NSUUID *_sharedUserDataModelUpdateModelID;	// 152 = 0x98
    id <HMDSharedUserDataModelUpdateReceiver> _sharedUserDataModelUpdateReceiver;	// 160 = 0xa0
}

+ (id)logCategory;	// IMP=0x00000000001bf92a
- (void).cxx_destruct;	// IMP=0x00000000001bdf35
@property __weak id <HMDSharedUserDataModelUpdateReceiver> sharedUserDataModelUpdateReceiver; // @synthesize sharedUserDataModelUpdateReceiver=_sharedUserDataModelUpdateReceiver;
@property(copy) NSUUID *sharedUserDataModelUpdateModelID; // @synthesize sharedUserDataModelUpdateModelID=_sharedUserDataModelUpdateModelID;
@property(copy) NSUUID *mediaContentProfileAccessControlModelID; // @synthesize mediaContentProfileAccessControlModelID=_mediaContentProfileAccessControlModelID;
@property __weak id <HMDMediaContentProfileAccessControlModelUpdateReceiver> mediaContentProfileAccessControlModelUpdateReceiver; // @synthesize mediaContentProfileAccessControlModelUpdateReceiver=_mediaContentProfileAccessControlModelUpdateReceiver;
@property(copy) NSUUID *assistantAccessControlModelID; // @synthesize assistantAccessControlModelID=_assistantAccessControlModelID;
@property __weak id <HMDAssistantAccessControlModelUpdateReceiver> assistantAccessControlModelUpdateReceiver; // @synthesize assistantAccessControlModelUpdateReceiver=_assistantAccessControlModelUpdateReceiver;
@property __weak id <HMDSettingTransactionReceiverProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
@property long long logEventRunState; // @synthesize logEventRunState=_logEventRunState;
@property long long runState; // @synthesize runState=_runState;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property(readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property(readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) __weak id <HMDUserSettingsBackingStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000001bdd07
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x00000000001bdbd8
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x00000000001bdaa9
- (void)runTransaction:(id)arg1 waitForCloudPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bd4e5
- (id)settingTransactionWithName:(id)arg1;	// IMP=0x00000000001bd498
- (void)runSettingTransaction:(id)arg1 waitForCloudPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bd486
- (void)runSettingTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001bd46f
- (void)registerForSettingsTransactions:(id)arg1;	// IMP=0x00000000001bd36d
- (void)_localZone:(id)arg1 updatedModel:(id)arg2 previousModel:(id)arg3 options:(id)arg4 result:(id)arg5;	// IMP=0x00000000001bca4d
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x00000000001bc927
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x00000000001bc7c2
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x00000000001bc69c
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;	// IMP=0x00000000001bc4ca
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bc0fe
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;	// IMP=0x00000000001bc067
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;	// IMP=0x00000000001bbfcf
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000001bbf55
- (void)_sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;	// IMP=0x00000000001bbaa4
- (void)_updateLogEventRunState:(long long)arg1;	// IMP=0x00000000001bb888
- (void)_updateRunState:(long long)arg1;	// IMP=0x00000000001bb733
- (id)loadUserSettings;	// IMP=0x00000000001bb484
- (void)_didFetchZonesWithResult:(id)arg1 isOwnedZone:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001ba88f
- (void)_startWithSharedZone;	// IMP=0x00000000001ba445
- (void)_startWithOwnedZone;	// IMP=0x00000000001ba31d
- (void)updateParticipants;	// IMP=0x00000000001ba224
- (void)clearParticipants;	// IMP=0x00000000001ba12b
- (id)queryPushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x00000000001b9ea9
- (void)deregisterObserverDeviceIdentifier:(id)arg1;	// IMP=0x00000000001b9cac
- (void)deregisterObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;	// IMP=0x00000000001b9616
- (void)updateObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2;	// IMP=0x00000000001b91f6
- (void)registerObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;	// IMP=0x00000000001b8a53
- (void)destroyZone;	// IMP=0x00000000001b88ae
- (void)_invalidate;	// IMP=0x00000000001b877d
- (void)registerForSharedUserDataModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000001b871c
- (void)registerForMediaContentAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000001b867a
- (id)loadMediaContentAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b85c1
- (void)registerForAssistantAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000001b851f
- (id)loadAssistantAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b834f
- (id)loadSharedUserDataModelWithError:(id *)arg1;	// IMP=0x00000000001b829e
- (id)loadPrivateUserDataModelWithError:(id *)arg1;	// IMP=0x00000000001b81ed
- (void)start;	// IMP=0x00000000001b7d22
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 database:(id)arg4 shareMessenger:(id)arg5;	// IMP=0x00000000001b7b8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

