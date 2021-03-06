//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMediaStream/MSMediaStreamDaemon.h>

@class APSConnection, MISSING_TYPE, MSPowerAssertionManager, NSMutableDictionary, NSString, NSXPCListener;

@interface MSIOSMediaStreamDaemon : MSMediaStreamDaemon
{
    NSXPCListener *_center;	// 8 = 0x8
    APSConnection *_prodAPSConnection;	// 16 = 0x10
    APSConnection *_devAPSConnection;	// 24 = 0x18
    MSPowerAssertionManager *_powerAssertionManager;	// 32 = 0x20
    NSMutableDictionary *_personIDToPowerBudgetPersistedValuesMap;	// 40 = 0x28
    NSMutableDictionary *_personIDToPowerBudgetMap;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000005c32
@property(retain, nonatomic) NSMutableDictionary *personIDToPowerBudgetMap; // @synthesize personIDToPowerBudgetMap=_personIDToPowerBudgetMap;
@property(retain, nonatomic) NSMutableDictionary *personIDToPowerBudgetPersistedValuesMap; // @synthesize personIDToPowerBudgetPersistedValuesMap=_personIDToPowerBudgetPersistedValuesMap;
- (_Bool)mayDownloadPersonID:(id)arg1;	// IMP=0x0010000000005bc6
- (void)didReceivePushNotificationForPersonID:(id)arg1;	// IMP=0x0010000000005b89
- (void)didEndForegroundFocusForPersonID:(id)arg1;	// IMP=0x0010000000005b4c
- (void)didBeginForegroundFocusForPersonID:(id)arg1;	// IMP=0x0010000000005b0f
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;	// IMP=0x0010000000005ad2
- (void)_serverSideConfigurationDidChange:(id)arg1;	// IMP=0x001000000000591c
- (void)MSPowerBudgetGotSignificantEvent:(id)arg1;	// IMP=0x00100000000058bd
- (void)MSPowerBudget:(id)arg1 didRequestStorageOfPersistedValues:(id)arg2;	// IMP=0x00100000000054fc
- (id)MSPowerBudgetDidRequestPersistedValues:(id)arg1;	// IMP=0x00100000000052d9
- (MISSING_TYPE *)_powerBudgetForPersonID: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000050af
- (void)_readPowerBudgetParametersForPersonID:(id)arg1;	// IMP=0x0010000000004fb6
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;	// IMP=0x0010000000004c6f
- (void)pauseManagerDidUnpause:(id)arg1;	// IMP=0x0010000000004c11
- (void)pauseManagerDidPause:(id)arg1;	// IMP=0x0010000000004bb3
- (_Bool)isWaitingForAuth;	// IMP=0x0010000000004b68
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;	// IMP=0x0010000000004af2
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;	// IMP=0x0010000000004a7c
- (void)forgetEverythingForPersonID:(id)arg1;	// IMP=0x001000000000495b
- (void)unpauseForUUID:(id)arg1;	// IMP=0x00100000000048cb
- (void)pauseForUUID:(id)arg1;	// IMP=0x001000000000483b
- (void)resetServerStateForPersonID:(id)arg1;	// IMP=0x0010000000004753
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1;	// IMP=0x001000000000473f
- (void)serverSideConfigurationForPersonID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004666
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000044b5
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000043df
- (void)_updatePushNotificationTopicsOutListenToProduction:(_Bool *)arg1 outListenToDevelopment:(_Bool *)arg2;	// IMP=0x00100000000041db
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;	// IMP=0x0010000000004159
- (void)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004004
- (void)enqueueAssetCollections:(id)arg1 personID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003eaf
- (void)stop;	// IMP=0x0010000000003e3a
- (void)start;	// IMP=0x0010000000003760
- (void)didUnidle;	// IMP=0x00100000000036ee
- (void)didIdle;	// IMP=0x001000000000366f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000341b
- (void)dealloc;	// IMP=0x00100000000033a7
- (id)init;	// IMP=0x00100000000031ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

