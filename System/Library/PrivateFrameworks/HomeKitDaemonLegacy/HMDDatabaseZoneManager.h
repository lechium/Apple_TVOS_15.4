//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMDDatabaseZoneManagerConfiguration, HMDHome, NSObject, NSString, NSUUID;
@protocol HMBLocalZoneDelegate><HMBCloudZoneDelegate, HMDDatabase, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, OS_dispatch_queue;

@interface HMDDatabaseZoneManager : HMFObject <HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate>
{
    id <HMDDatabaseZoneManagerDataSource> _dataSource;	// 8 = 0x8
    id <HMDDatabaseZoneManagerDelegate> _delegate;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
    HMDHome *_home;	// 32 = 0x20
    HMBLocalZone *_localZone;	// 40 = 0x28
    HMBCloudZone *_cloudZone;	// 48 = 0x30
    HMDDatabaseZoneManagerConfiguration *_defaultConfiguration;	// 56 = 0x38
    long long _state;	// 64 = 0x40
    id <HMDDatabase> _database;	// 72 = 0x48
    HMDCloudShareMessenger *_shareMessenger;	// 80 = 0x50
    id <HMBLocalZoneDelegate><HMBCloudZoneDelegate> _zoneDelegate;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_workQueue;	// 96 = 0x60
    HMDCloudShareParticipantsManager *_participantsManager;	// 104 = 0x68
    CDUnknownBlockType _participantsManagerFactory;	// 112 = 0x70
}

+ (id)logCategory;	// IMP=0x000000000045b54e
- (void).cxx_destruct;	// IMP=0x000000000045afa2
@property(copy) CDUnknownBlockType participantsManagerFactory; // @synthesize participantsManagerFactory=_participantsManagerFactory;
@property(retain) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMBLocalZoneDelegate><HMBCloudZoneDelegate> zoneDelegate; // @synthesize zoneDelegate=_zoneDelegate;
@property(readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property long long state; // @synthesize state=_state;
@property(copy) HMDDatabaseZoneManagerConfiguration *defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property __weak id <HMDDatabaseZoneManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDDatabaseZoneManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x000000000045adb3
- (void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x000000000045ad02
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000045ab13
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000045a924
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;	// IMP=0x000000000045a88d
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;	// IMP=0x000000000045a7f5
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000045a73c
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000045a2ec
- (void)_tearDownState;	// IMP=0x000000000045a208
- (void)_sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;	// IMP=0x0000000000459e9a
- (_Bool)_handleFetchZonesResult:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000045964b
- (_Bool)_fetchSharedZonesWithConfiguration:(id)arg1;	// IMP=0x0000000000458df7
- (_Bool)_fetchExistingPrivateZonesWithConfiguration:(id)arg1;	// IMP=0x0000000000458b39
- (_Bool)_fetchPrivateZonesWithConfiguration:(id)arg1;	// IMP=0x000000000045886c
- (void)updateShareParticipants;	// IMP=0x00000000004587f8
- (id)remove;	// IMP=0x00000000004584c5
- (_Bool)startWithConfiguration:(id)arg1;	// IMP=0x0000000000458277
- (_Bool)start;	// IMP=0x00000000004581fb
- (void)configure;	// IMP=0x0000000000458149
@property(readonly, copy) NSString *containerIdentifier;
@property(readonly, copy) NSUUID *messageTargetUUID;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;	// IMP=0x0000000000457ebe
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 messageTargetUUID:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;	// IMP=0x0000000000457d98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
