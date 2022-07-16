//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBLocalZoneModelObserver-Protocol.h>
#import <HomeKitDaemon/HMDActiveXPCClientConnectionsPeriodicTimerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMDActiveXPCClientConnectionsPeriodicTimer, HMDCameraClipFeedbackManager, HMDCameraClipsQuotaManager, HMDCameraSignificantEventFaceClassificationResolver, HMDDatabaseZoneManager, HMDFeaturesDataSource, HMFMessageDispatcher, NSDate, NSObject, NSString, NSUUID;
@protocol HMDCameraClipManagerDelegate, HMDFileManager, OS_dispatch_queue;

@interface HMDCameraClipManager : HMFObject <HMBLocalZoneModelObserver, HMFLogging, HMFMessageReceiver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDActiveXPCClientConnectionsPeriodicTimerDelegate>
{
    _Bool _hasWriteAccess;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    id <HMDCameraClipManagerDelegate> _delegate;	// 24 = 0x18
    HMBLocalZone *_localZone;	// 32 = 0x20
    HMBCloudZone *_cloudZone;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMDDatabaseZoneManager *_zoneManager;	// 56 = 0x38
    HMDCameraClipsQuotaManager *_quotaManager;	// 64 = 0x40
    HMDCameraSignificantEventFaceClassificationResolver *_faceClassificationResolver;	// 72 = 0x48
    HMDActiveXPCClientConnectionsPeriodicTimer *_clientConnectionsTimer;	// 80 = 0x50
    HMFMessageDispatcher *_messageDispatcher;	// 88 = 0x58
    NSUUID *_cameraProfileUUID;	// 96 = 0x60
    id <HMDFileManager> _fileManager;	// 104 = 0x68
    HMDFeaturesDataSource *_featuresDataSource;	// 112 = 0x70
    HMDCameraClipFeedbackManager *_feedbackManager;	// 120 = 0x78
    NSDate *_suppressNotificationsBeforeDate;	// 128 = 0x80
    unsigned long long _fetchBatchLimit;	// 136 = 0x88
    CDUnknownBlockType _fetchServerFactory;	// 144 = 0x90
}

+ (id)logCategory;	// IMP=0x00000000008ae3e4
+ (double)maximumClipDuration;	// IMP=0x00000000008ae33d
- (void).cxx_destruct;	// IMP=0x00000000008a9de4
@property(copy) CDUnknownBlockType fetchServerFactory; // @synthesize fetchServerFactory=_fetchServerFactory;
@property unsigned long long fetchBatchLimit; // @synthesize fetchBatchLimit=_fetchBatchLimit;
@property(copy) NSDate *suppressNotificationsBeforeDate; // @synthesize suppressNotificationsBeforeDate=_suppressNotificationsBeforeDate;
@property(retain) HMDCameraClipFeedbackManager *feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(readonly) HMDFeaturesDataSource *featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy) NSUUID *cameraProfileUUID; // @synthesize cameraProfileUUID=_cameraProfileUUID;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer; // @synthesize clientConnectionsTimer=_clientConnectionsTimer;
@property(readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // @synthesize faceClassificationResolver=_faceClassificationResolver;
@property(readonly) HMDCameraClipsQuotaManager *quotaManager; // @synthesize quotaManager=_quotaManager;
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool hasWriteAccess; // @synthesize hasWriteAccess=_hasWriteAccess;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property __weak id <HMDCameraClipManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000008a9b5c
- (void)clientConnectionsTimerDidFire:(id)arg1;	// IMP=0x00000000008a9b02
- (void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x00000000008a99a7
- (void)zoneManagerDidStop:(id)arg1;	// IMP=0x00000000008a984b
- (void)zoneManagerDidStart:(id)arg1;	// IMP=0x00000000008a9218
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;	// IMP=0x00000000008a9203
- (_Bool)areShareModificationsEnabledForManager:(id)arg1;	// IMP=0x00000000008a91b0
- (_Bool)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;	// IMP=0x00000000008a9136
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000008a90bc
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x00000000008a9009
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x00000000008a8f56
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x00000000008a8ea3
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000008a8dd0
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;	// IMP=0x00000000008a8d5f
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;	// IMP=0x00000000008a8cee
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;	// IMP=0x00000000008a8c7d
- (void)handleImportClipsMessage:(id)arg1;	// IMP=0x00000000008a8607
- (void)handleRemoteHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000008a80e2
- (void)handleHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000008a7771
- (void)handleDeleteAllClipsMessage:(id)arg1;	// IMP=0x00000000008a7435
- (void)handleDeleteClipMessage:(id)arg1;	// IMP=0x00000000008a6ffa
- (void)handleFetchSignificantEventsMessage:(id)arg1;	// IMP=0x00000000008a6749
- (void)handleFetchFaceCropURLMessage:(id)arg1;	// IMP=0x00000000008a611c
- (void)handleFetchFaceCropDataRepresentationMessage:(id)arg1;	// IMP=0x00000000008a5a9b
- (void)handleFetchHeroFrameURLMessage:(id)arg1;	// IMP=0x00000000008a54d4
- (void)handleFetchHeroFrameDataRepresentationMessage:(id)arg1;	// IMP=0x00000000008a4e86
- (void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1;	// IMP=0x00000000008a4d16
- (void)handleFetchCountOfClipsMessage:(id)arg1;	// IMP=0x00000000008a459b
- (void)handleFetchClipForSignificantEventMessage:(id)arg1;	// IMP=0x00000000008a3a59
- (void)handleFetchClipsMessage:(id)arg1;	// IMP=0x00000000008a3260
- (void)handleFetchClipMessage:(id)arg1;	// IMP=0x00000000008a2c82
- (void)handlePerformCloudPullMessage:(id)arg1;	// IMP=0x00000000008a2a76
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x00000000008a279e
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x00000000008a24c6
- (void)_removeAllFaceClassificationModels;	// IMP=0x00000000008a23b3
- (id)_removeClipsWithUUIDs:(id)arg1 options:(id)arg2;	// IMP=0x00000000008a22f0
- (void)_notifyPrimaryResidentAboutFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3;	// IMP=0x00000000008a1dbe
- (id)_handleFaceMisclassificationForFaceCropURL:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3 significantEventModel:(id)arg4;	// IMP=0x00000000008a18d1
- (void)_notifyForChangedSignificantEventModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000008a165f
- (void)_handleChangedFaceClassificationModel:(id)arg1;	// IMP=0x00000000008a142b
- (void)_handleChangedSignificantEventNotificationModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000008a123b
- (void)_handleChangedClipModel:(id)arg1 wasCreated:(_Bool)arg2 mirrorOutputFuture:(id)arg3;	// IMP=0x00000000008a0dbf
- (void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2;	// IMP=0x00000000008a0a09
- (void)_notifyTransportsOfUpdatedSignificantEvents:(id)arg1 removedSignificantEventUUIDs:(id)arg2;	// IMP=0x00000000008a03c8
- (void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2;	// IMP=0x000000000089fd87
- (void)_cleanUpExpiredClips;	// IMP=0x000000000089fa54
- (void)_cleanUpIncompleteClipsForInitialStartup:(_Bool)arg1;	// IMP=0x000000000089f637
- (void)_cleanUpClipsForInitialStartup:(_Bool)arg1;	// IMP=0x000000000089f58e
- (id)_performCloudPull;	// IMP=0x000000000089f2d7
- (id)_fetchFaceCropURLForSignificantEventModel:(id)arg1;	// IMP=0x000000000089efb1
- (id)_fetchHeroFrameURLForSignificantEventModel:(id)arg1;	// IMP=0x000000000089ec00
- (id)_fetchCanonicalHeroFrameURLForClipModel:(id)arg1;	// IMP=0x000000000089e6ed
- (_Bool)_fetchClipsWithDateInterval:(id)arg1 quality:(long long)arg2 isAscending:(_Bool)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000089e245
- (_Bool)_fetchSignificantEventsWithDateInterval:(id)arg1 isAscending:(_Bool)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000089df3f
- (id)_faceClassificationsForSignificantEventWithUUID:(id)arg1;	// IMP=0x000000000089dd69
- (id)_significantEventsWithUUIDs:(id)arg1;	// IMP=0x000000000089dcd9
- (id)_significantEventFromSignificantEventModel:(id)arg1;	// IMP=0x000000000089dbbf
- (id)_significantEventModelsForClipWithUUID:(id)arg1;	// IMP=0x000000000089da13
- (id)_significantEventModelsWithUUIDs:(id)arg1;	// IMP=0x000000000089d6ad
- (id)home;	// IMP=0x000000000089d65d
- (id)significantEventsForClipContainingDate:(id)arg1;	// IMP=0x000000000089d17c
- (id)performCloudPull;	// IMP=0x000000000089d0bc
- (void)cleanUpClips;	// IMP=0x000000000089d067
- (id)disableCloudStorage;	// IMP=0x000000000089cd37
- (id)enableCloudStorage;	// IMP=0x000000000089ca71
- (id)remove;	// IMP=0x000000000089c937
- (id)fetchHeroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x000000000089c706
- (id)heroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x000000000089c50c
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000089bc2c
@property(readonly) _Bool hasStartedUpCloudZone;
- (id)significantEventsWithDateInterval:(id)arg1;	// IMP=0x000000000089b918
- (id)significantEventsForClipWithUUID:(id)arg1;	// IMP=0x000000000089b888
- (id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 faceClassificationResolver:(id)arg3 clientConnectionsTimer:(id)arg4 messageDispatcher:(id)arg5 workQueue:(id)arg6 cameraProfileUUID:(id)arg7 fileManager:(id)arg8 featuresDataSource:(id)arg9;	// IMP=0x000000000089b4e6
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x000000000089b1bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

