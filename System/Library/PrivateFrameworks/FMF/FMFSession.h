//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/FMFXPCInternalClientProtocol-Protocol.h>

@class FMFuture, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;
@protocol FMFSessionDelegate, OS_dispatch_queue;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol>
{
    _Bool _isModelInitialized;	// 8 = 0x8
    id <FMFSessionDelegate> _delegate;	// 16 = 0x10
    NSOperationQueue *_delegateQueue;	// 24 = 0x18
    NSMutableSet *_internalHandles;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
    NSSet *_cachedGetHandlesSharingLocationsWithMe;	// 48 = 0x30
    NSSet *_cachedGetHandlesFollowingMyLocation;	// 56 = 0x38
    NSMutableDictionary *_cachedLocationForHandleByHandle;	// 64 = 0x40
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;	// 72 = 0x48
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_handlesQueue;	// 96 = 0x60
    FMFuture *_sessionInvalidationFuture;	// 104 = 0x68
    FMFuture *_sessionInterruptionFuture;	// 112 = 0x70
}

+ (_Bool)isAnyAccountManaged;	// IMP=0x0000000000022676
+ (_Bool)isProvisionedForLocationSharing;	// IMP=0x00000000000225f9
+ (_Bool)FMFRestricted;	// IMP=0x0000000000022594
+ (_Bool)FMFAllowed;	// IMP=0x000000000002253d
+ (id)sharedInstance;	// IMP=0x000000000001dbf0
- (void).cxx_destruct;	// IMP=0x00000000000229c9
@property(retain, nonatomic) FMFuture *sessionInterruptionFuture; // @synthesize sessionInterruptionFuture=_sessionInterruptionFuture;
@property(retain, nonatomic) FMFuture *sessionInvalidationFuture; // @synthesize sessionInvalidationFuture=_sessionInvalidationFuture;
@property(nonatomic) _Bool isModelInitialized; // @synthesize isModelInitialized=_isModelInitialized;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlesQueue; // @synthesize handlesQueue=_handlesQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle; // @synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedOfferExpirationForHandleByHandle; // @synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedLocationForHandleByHandle; // @synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle;
@property(retain, nonatomic) NSSet *cachedGetHandlesFollowingMyLocation; // @synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation;
@property(retain, nonatomic) NSSet *cachedGetHandlesSharingLocationsWithMe; // @synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableSet *internalHandles; // @synthesize internalHandles=_internalHandles;
@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <FMFSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleIncomingAirDropURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002228d
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;	// IMP=0x000000000002222b
- (void)receivedMappingPacket:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022153
- (void)removeHandles:(id)arg1;	// IMP=0x0000000000021f84
- (void)addHandles:(id)arg1;	// IMP=0x0000000000021d9f
@property(copy, nonatomic) NSSet *handles;
- (oneway void)modelDidLoad;	// IMP=0x0000000000021b81
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;	// IMP=0x0000000000021a40
- (oneway void)didUpdatePreferences:(id)arg1;	// IMP=0x00000000000218d0
- (oneway void)didUpdateFences:(id)arg1;	// IMP=0x000000000002172d
- (oneway void)didUpdateLocations:(id)arg1;	// IMP=0x0000000000021508
- (oneway void)didUpdateFollowing:(id)arg1;	// IMP=0x0000000000021426
- (oneway void)didUpdateFollowers:(id)arg1;	// IMP=0x0000000000021344
- (oneway void)abPreferencesDidChange;	// IMP=0x00000000000212a6
- (oneway void)abDidChange;	// IMP=0x0000000000021208
- (oneway void)didReceiveServerError:(id)arg1;	// IMP=0x0000000000021095
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x0000000000020ef2
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;	// IMP=0x0000000000020d7f
- (void)didReceiveFriendshipRequest:(id)arg1;	// IMP=0x0000000000020c0c
- (oneway void)didUpdateActiveDeviceList:(id)arg1;	// IMP=0x0000000000020a99
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;	// IMP=0x0000000000020901
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;	// IMP=0x00000000000207cc
- (oneway void)didUpdateFavorites:(id)arg1;	// IMP=0x0000000000020659
- (oneway void)didStopFollowingHandle:(id)arg1;	// IMP=0x00000000000204e6
- (oneway void)didStartFollowingHandle:(id)arg1;	// IMP=0x0000000000020373
- (oneway void)didRemoveFollowerHandle:(id)arg1;	// IMP=0x0000000000020200
- (oneway void)didAddFollowerHandle:(id)arg1;	// IMP=0x000000000002008d
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;	// IMP=0x000000000001ff6c
- (oneway void)setLocations:(id)arg1;	// IMP=0x000000000001fd4f
- (void)forceRefresh;	// IMP=0x000000000001fd12
- (_Bool)hasModelInitialized;	// IMP=0x000000000001fd00
- (void)invalidate;	// IMP=0x000000000001fb0f
- (void)dispatchOnDelegateQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fa11
- (id)serverProxy;	// IMP=0x000000000001f958
- (id)__connection;	// IMP=0x000000000001e847
- (void)addInvalidationHander:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e51e
- (void)addInterruptionHander:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e34f
- (void)dealloc;	// IMP=0x000000000001e133
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000001e11f
- (void)locatingInProgressChanged:(id)arg1;	// IMP=0x000000000001df51
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x000000000001dcee
- (id)init;	// IMP=0x000000000001dcda
- (void)_registerForFMFDLaunchedNotification;	// IMP=0x000000000001d960
- (void)applicationWillEnterForeground;	// IMP=0x000000000001d94e
- (void)applicationDidEnterBackground;	// IMP=0x000000000001d93c
- (void)_registerForApplicationLifecycleEvents;	// IMP=0x000000000001d888
- (void)restoreClientConnection;	// IMP=0x000000000001d5a3
- (void)_daemonDidLaunch;	// IMP=0x000000000001d49c
- (void)includeDeviceInAutomations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001f94
- (void)showMeDeviceAlert;	// IMP=0x0000000000003398
- (void)showShareMyLocationRestrictedAlert;	// IMP=0x00000000000032f4
- (void)showShareMyLocationiCloudSettingsOffAlert;	// IMP=0x00000000000032b7
- (void)getDataForPerformanceRequest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003245
- (void)sessionHandleReport:(CDUnknownBlockType)arg1;	// IMP=0x000000000000317b
- (void)dumpStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000030b1
- (void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003017
- (void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x0000000000002f91
- (void)isIn5XXGracePeriodWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002ec7
- (void)exit5XXGracePeriod;	// IMP=0x0000000000002e8a
- (void)crashDaemon;	// IMP=0x0000000000002e4d
- (_Bool)shouldHandleErrorInFWK:(id)arg1;	// IMP=0x0000000000002d44
- (_Bool)is5XXError:(id)arg1;	// IMP=0x0000000000002ce3
- (void)setExpiredInitTimestamp;	// IMP=0x0000000000002ca6
- (id)verifyRestrictionsAndShowDialogIfRequired;	// IMP=0x0000000000002c14
- (void)getRecordIdForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002b8e
- (void)getPrettyNameForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002b08
- (void)removeDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002a82
- (void)getAllDevices:(CDUnknownBlockType)arg1;	// IMP=0x00000000000029b8
- (double)maxLocatingInterval;	// IMP=0x0000000000002823
- (id)getAllDevices;	// IMP=0x0000000000002643
- (id)getActiveLocationSharingDevice;	// IMP=0x00000000000023e7
- (oneway void)iCloudAccountNameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000022f7
- (void)locationForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000038c3
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000036c9
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000343c
- (void)canOfferToHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008647
- (void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;	// IMP=0x000000000000848f
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008287
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007fe8
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007d82
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007b1c
- (void)getAccountEmailAddress:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007964
- (void)isAllowFriendRequestsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000000000077ce
- (void)setAllowFriendRequestsEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000763e
- (void)isMyLocationEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000000000074a8
- (void)setHideMyLocationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000725b
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006fc4
- (void)getHandlesFollowingMyLocation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006d96
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006abb
- (void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;	// IMP=0x000000000000688d
- (void)setActiveDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000061bd
- (void)getThisDeviceAndCompanion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005e46
- (void)getActiveLocationSharingDevice:(CDUnknownBlockType)arg1;	// IMP=0x00000000000059e0
- (void)encryptPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a708
- (void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a3fa
- (void)dataForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a0fd
- (void)handleAndLocationForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009eaf
- (void)contactForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009c9e
- (void)nearbyLocationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cdba
- (void)favoritesForMaxCount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cba9
- (void)getAllLocations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010f16
- (void)removeFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001153a
- (void)addFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011299
- (void)getFavoritesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010fd0
- (void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013efd
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000013926
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000135af
- (void)declineFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013282
- (void)approveFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012fe5
- (void)sendNotNowToHandle:(id)arg1 callerId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012d2b
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000012a40
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000012698
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000125b3
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000121bc
- (void)_checkAndDisplayMeDeviceSwitchAlert;	// IMP=0x0000000000011e65
- (void)_sendAutoSwitchMeDevice;	// IMP=0x0000000000011ceb
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000001195f
- (_Bool)_isNoMappingPacketReturnedError:(id)arg1;	// IMP=0x0000000000011938
- (void)muteFencesForHandle:(id)arg1 untilDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c75f
- (void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 triggerLocation:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000001c49c
- (void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000001c1e6
- (void)fencesForHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bf11
- (void)getFences:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bc62
- (void)deleteFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b9cc
- (void)addFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b6f7
- (void)reloadDataIfNotLoaded;	// IMP=0x0000000000029b3d
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;	// IMP=0x00000000000299fe
- (id)cachedLocationForHandle:(id)arg1;	// IMP=0x00000000000298fc
- (_Bool)isMyLocationEnabled;	// IMP=0x000000000002976b
- (id)getHandlesWithPendingOffers;	// IMP=0x000000000002958b
- (_Bool)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;	// IMP=0x000000000002941e
- (_Bool)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;	// IMP=0x00000000000292b1
- (id)getFavoritesSharingLocationWithMe;	// IMP=0x0000000000029028
- (id)getHandlesFollowingMyLocation;	// IMP=0x0000000000028f3b
- (id)getHandlesSharingLocationsWithMe;	// IMP=0x0000000000028e4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

