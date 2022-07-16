//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

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

+ (id)logCategory;	// IMP=0x00000000004a64a9
- (void).cxx_destruct;	// IMP=0x00000000004a5efd
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
- (id)logIdentifier;	// IMP=0x00000000004a5d0e
- (void)database:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x00000000004a5c5d
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x00000000004a5a6e
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x00000000004a587f
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;	// IMP=0x00000000004a57e8
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;	// IMP=0x00000000004a5750
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;	// IMP=0x00000000004a5697
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004a5247
- (void)_tearDownState;	// IMP=0x00000000004a5163
- (void)_sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;	// IMP=0x00000000004a4df5
- (_Bool)_handleFetchZonesResult:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000004a45a6
- (_Bool)_fetchSharedZonesWithConfiguration:(id)arg1;	// IMP=0x00000000004a3d52
- (_Bool)_fetchExistingPrivateZonesWithConfiguration:(id)arg1;	// IMP=0x00000000004a3a94
- (_Bool)_fetchPrivateZonesWithConfiguration:(id)arg1;	// IMP=0x00000000004a37c7
- (void)updateShareParticipants;	// IMP=0x00000000004a3753
- (id)remove;	// IMP=0x00000000004a3420
- (_Bool)startWithConfiguration:(id)arg1;	// IMP=0x00000000004a31d2
- (_Bool)start;	// IMP=0x00000000004a3156
- (void)configure;	// IMP=0x00000000004a30a4
@property(readonly, copy) NSString *containerIdentifier;
@property(readonly, copy) NSUUID *messageTargetUUID;
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;	// IMP=0x00000000004a2e19
- (id)initWithDatabase:(id)arg1 zoneName:(id)arg2 home:(id)arg3 messageTargetUUID:(id)arg4 zoneDelegate:(id)arg5 workQueue:(id)arg6;	// IMP=0x00000000004a2cf3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

