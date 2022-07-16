//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraBulletinBoard-Protocol.h>
#import <HomeKitDaemon/HMDUserNotificationCenterDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHomeManager, HMDUserNotificationCenter, NAFuture, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol HMDFileManager, HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDBulletinBoard : HMFObject <HMFLogging, HMDUserNotificationCenterDelegate, NSSecureCoding, HMDCameraBulletinBoard>
{
    id <HMDFileManager> _fileManager;	// 8 = 0x8
    NSSet *_notificationCategories;	// 16 = 0x10
    NAFuture *_isConfiguredFuture;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDUserNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSMutableDictionary *_notificationRequests;	// 48 = 0x30
    NSMutableDictionary *_characteristicTuples;	// 56 = 0x38
    HMDHomeManager *_homeManager;	// 64 = 0x40
    Class _persistentStoreClass;	// 72 = 0x48
    Class _doorbellBulletinUtilitiesClass;	// 80 = 0x50
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x000000000028d7bb
+ (_Bool)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2;	// IMP=0x000000000028d67d
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;	// IMP=0x000000000028d655
+ (unsigned long long)interruptionLevelForChangedCharacteristic:(id)arg1;	// IMP=0x000000000028d3d0
+ (id)createImageAttachmentByHardLinkingFile:(id)arg1 fileManager:(id)arg2;	// IMP=0x000000000028cf3b
+ (id)attachmentsWithFileURL:(id)arg1;	// IMP=0x000000000028cd30
+ (id)bulletinSupportedCharacteristicsForService:(id)arg1;	// IMP=0x000000000028c994
+ (_Bool)isCriticalNonSecureServiceType:(id)arg1;	// IMP=0x000000000028c936
+ (_Bool)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x000000000028c872
+ (_Bool)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x000000000028c798
+ (id)_supportedNonSecureServices;	// IMP=0x000000000028c768
+ (id)_supportedSecureServices;	// IMP=0x000000000028c738
+ (id)notificationCategories;	// IMP=0x000000000028c2ed
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000028c2e5
+ (id)sharedBulletinBoard;	// IMP=0x000000000028c2b5
- (void).cxx_destruct;	// IMP=0x0000000000284684
@property(retain) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain) Class doorbellBulletinUtilitiesClass; // @synthesize doorbellBulletinUtilitiesClass=_doorbellBulletinUtilitiesClass;
@property(retain) Class persistentStoreClass; // @synthesize persistentStoreClass=_persistentStoreClass;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) NSMutableDictionary *characteristicTuples; // @synthesize characteristicTuples=_characteristicTuples;
@property(retain) NSMutableDictionary *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property(readonly) HMDUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NAFuture *isConfiguredFuture; // @synthesize isConfiguredFuture=_isConfiguredFuture;
@property(readonly, copy) NSSet *notificationCategories; // @synthesize notificationCategories=_notificationCategories;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
- (void)notificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000028445b
- (void)_handleDidReceiveNotificationResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000283d27
- (void)_updateDoorbellUserInfo:(id)arg1 withSignificantEventUserInfo:(id)arg2;	// IMP=0x0000000000283a97
- (void)_submitLogEventForSignificantEventBulletin:(id)arg1;	// IMP=0x00000000002838f3
- (void)_submitLogEventForDoorbellPressedBulletinWithDate:(id)arg1 significantEvents:(id)arg2;	// IMP=0x0000000000283675
- (id)_copyItemAtURL:(id)arg1 toDirectory:(id)arg2;	// IMP=0x000000000028329e
- (id)_doorbellPressNotificationsNearDate:(id)arg1 forCameraProfile:(id)arg2;	// IMP=0x000000000028315b
- (id)notificationRequestsForCameraClipUUIDs:(id)arg1;	// IMP=0x000000000028304a
- (void)updateMessageForDoorbellPressNotificationRequestWithIdentifier:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x0000000000282af6
- (_Bool)_updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1;	// IMP=0x0000000000281d02
- (_Bool)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1;	// IMP=0x0000000000280fbb
- (void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(_Bool)arg3;	// IMP=0x0000000000280a62
- (_Bool)_hasDuplicateBulletinForSnapshotCharacteristic:(id)arg1;	// IMP=0x0000000000280792
- (_Bool)_hasDuplicateBulletinForCharacteristic:(id)arg1;	// IMP=0x0000000000280260
- (id)_insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 date:(id)arg5 bulletinType:(unsigned long long)arg6 actionURL:(id)arg7 bulletinContext:(id)arg8 actionContext:(id)arg9 interruptionLevel:(unsigned long long)arg10;	// IMP=0x000000000027fa2e
- (void)removeImageFilesForNotificationRequests:(id)arg1;	// IMP=0x000000000027f6ca
- (void)_insertLockBulletinForChangedCharacteristic:(id)arg1;	// IMP=0x000000000027ef13
- (void)_insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000027d25e
- (id)removeRedundantSignificantEventNotificationsForSignificantEvents:(id)arg1;	// IMP=0x000000000027d065
- (id)titleNameForChangedCharacteristic:(id)arg1;	// IMP=0x000000000027ceb6
- (id)messageForLockCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x000000000027cb6e
- (id)messageForChangedCharacteristic:(id)arg1 withSignificantEvents:(id)arg2;	// IMP=0x000000000027c7a4
- (void)addNotificationRequest:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000027c606
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1 shouldDeleteAttachments:(_Bool)arg2;	// IMP=0x000000000027c05a
- (void)removeBulletinsUsingPredicate:(id)arg1;	// IMP=0x000000000027bf44
- (void)cullBulletinsToCount:(unsigned long long)arg1;	// IMP=0x000000000027bbff
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;	// IMP=0x000000000027b98b
- (id)notificationRequestsSortedByDate;	// IMP=0x000000000027b884
- (void)removeAllBulletins;	// IMP=0x000000000027b813
- (void)removeBulletinWithRecordID:(id)arg1;	// IMP=0x000000000027b762
- (void)removeCameraClipBulletinsForCameraProfile:(id)arg1;	// IMP=0x000000000027b6b1
- (void)removeBulletinsForTrigger:(id)arg1;	// IMP=0x000000000027b600
- (void)removeBulletinsForService:(id)arg1;	// IMP=0x000000000027b54f
- (void)removeBulletinsForAccessory:(id)arg1;	// IMP=0x000000000027b49e
- (void)removeBulletinsForHome:(id)arg1;	// IMP=0x000000000027b3ed
- (void)refreshHomeBadgeNumber;	// IMP=0x000000000027b37c
- (void)insertNewRMVLanguageBulletinForHome:(id)arg1 language:(id)arg2;	// IMP=0x000000000027b20f
- (void)fetchAreUserNotificationsEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000027b15e
- (void)updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000027b082
- (id)updateBulletinForFirmwareUpdateInHome:(id)arg1;	// IMP=0x000000000027af36
- (void)insertCameraAccessModeChangedBulletin:(id)arg1;	// IMP=0x000000000027ae85
- (void)insertCameraClipSignificantEventBulletin:(id)arg1;	// IMP=0x000000000027add4
- (void)removeWalletKeyOnboardingBulletinForHome:(id)arg1;	// IMP=0x000000000027ad23
- (void)insertWalletKeyExpressModeSetUpBulletinForHome:(id)arg1;	// IMP=0x000000000027ac72
- (void)insertWalletKeySupportAddedBulletinForAccessory:(id)arg1;	// IMP=0x000000000027abc1
- (void)insertLockOnboardingBulletinForHome:(id)arg1 serviceType:(id)arg2;	// IMP=0x000000000027aae5
- (void)insertAccessCodeRemovedBulletinForHome:(id)arg1;	// IMP=0x000000000027aa34
- (void)insertAccessCodeChangedBulletinForHome:(id)arg1;	// IMP=0x000000000027a983
- (void)insertAccessCodeAddedBulletinForHome:(id)arg1;	// IMP=0x000000000027a8d2
- (void)insertHomeHubReachabilityBulletinForHome:(id)arg1 reachable:(_Bool)arg2 hasMultipleResidentsSupportingCameraRecording:(_Bool)arg3;	// IMP=0x000000000027a813
- (void)insertReachabilityEventBulletinForAccessory:(id)arg1 reachable:(_Bool)arg2 date:(id)arg3;	// IMP=0x000000000027a72e
- (id)insertBulletinForSecureTrigger:(id)arg1;	// IMP=0x000000000027a612
- (id)insertBulletinForIncomingInvitation:(id)arg1;	// IMP=0x000000000027a399
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 changedByThisDevice:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000027a29a
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000027a190
- (void)archive;	// IMP=0x000000000027a15f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000027a0e6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000279ea3
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x0000000000279df2
- (id)initWithNotificationCenter:(id)arg1 fileManager:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000279c2d
- (id)init;	// IMP=0x0000000000279b5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
