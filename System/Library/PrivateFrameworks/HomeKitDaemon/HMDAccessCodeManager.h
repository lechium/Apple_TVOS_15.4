//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDAccessCodeDataManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDAccessCodeDataManager, HMDAccessoryAccessCodeReaderWriter, NSHashTable, NSObject, NSString, NSUUID;
@protocol HMDAccessCodeManagerContext, OS_dispatch_queue;

@interface HMDAccessCodeManager : HMFObject <HMFLogging, HMFMessageReceiver, HMDAccessCodeDataManagerDelegate>
{
    _Bool _homeAppForegrounded;	// 8 = 0x8
    HMDAccessCodeDataManager *_dataManager;	// 16 = 0x10
    id <HMDAccessCodeManagerContext> _context;	// 24 = 0x18
    Class _utilities;	// 32 = 0x20
    HMDAccessoryAccessCodeReaderWriter *_accessoryReaderWriter;	// 40 = 0x28
    NSHashTable *_subscribedClientConnections;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000050289
- (void).cxx_destruct;	// IMP=0x000000000004b8bb
@property(readonly) NSHashTable *subscribedClientConnections; // @synthesize subscribedClientConnections=_subscribedClientConnections;
@property(getter=isHomeAppForegrounded) _Bool homeAppForegrounded; // @synthesize homeAppForegrounded=_homeAppForegrounded;
@property(readonly) HMDAccessoryAccessCodeReaderWriter *accessoryReaderWriter; // @synthesize accessoryReaderWriter=_accessoryReaderWriter;
@property(readonly) Class utilities; // @synthesize utilities=_utilities;
@property(readonly) id <HMDAccessCodeManagerContext> context; // @synthesize context=_context;
@property(readonly) HMDAccessCodeDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000004b711
- (void)accessCodeDataManager:(id)arg1 didRemoveAccessoryAccessCodes:(id)arg2;	// IMP=0x000000000004b5dd
- (void)accessCodeDataManager:(id)arg1 didUpdateAccessoryAccessCodes:(id)arg2;	// IMP=0x000000000004b4a9
- (void)accessCodeDataManager:(id)arg1 didAddAccessoryAccessCodes:(id)arg2;	// IMP=0x000000000004b375
- (void)accessCodeDataManager:(id)arg1 didRemoveHomeAccessCodes:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x000000000004b277
- (void)accessCodeDataManager:(id)arg1 didUpdateHomeAccessCodes:(id)arg2 changedByUserUUID:(id)arg3;	// IMP=0x000000000004b179
- (void)accessCodeDataManager:(id)arg1 didAddHomeAccessCodes:(id)arg2 addedByUserUUID:(id)arg3;	// IMP=0x000000000004b07b
- (id)_waitUntilDataHasSyncedToResidentForAccessoryUUIDs:(id)arg1;	// IMP=0x000000000004af13
- (id)_waitUntilDataHasSyncedToResidentIfNecessaryForAccessoryUUIDs:(id)arg1;	// IMP=0x000000000004adb2
- (void)_updateAccessoryAccessCodeCache;	// IMP=0x000000000004ac1b
- (id)_accessCodeForUserWithUUID:(id)arg1 inHome:(id)arg2;	// IMP=0x000000000004aaad
- (void)_generateNewAccessCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a909
- (id)_addNewAccessCode:(id)arg1 toAccessoriesWithUUIDs:(id)arg2 withRetries:(_Bool)arg3;	// IMP=0x000000000004a740
- (id)_updateAccessCode:(id)arg1 toNewValue:(id)arg2 onAccessoriesWithFetchResponses:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x000000000004a5c3
- (id)_resetAccessCodesForHomeAccessCode:(id)arg1;	// IMP=0x000000000004a434
- (id)_createNewAccessCodeForUserWithUUID:(id)arg1;	// IMP=0x000000000004a2a8
- (void)_notifySubscribersOfMessageWithName:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000049e6e
- (void)_generateNewUserAccessCodeForMessage:(id)arg1;	// IMP=0x0000000000049a8a
- (void)_resetAccessoryAccessCodesForMessage:(id)arg1;	// IMP=0x00000000000497d7
- (id)_removeAccessCode:(id)arg1 forUser:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x00000000000495f8
- (id)_removeAccessCode:(id)arg1 forUserWithUUID:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x0000000000049312
- (void)_setAccessCodeForUserForMessage:(id)arg1;	// IMP=0x0000000000048b58
- (id)_removeAccessCodeFromAccessoriesKeepingiCloudDataUponFailure:(id)arg1;	// IMP=0x0000000000048a31
- (void)_removeSimpleLabelAccessCodeMessage:(id)arg1;	// IMP=0x00000000000485ba
- (void)_submitAccessCodeModificationRequestsForMessage:(id)arg1;	// IMP=0x0000000000047f2d
- (void)_fetchAccessCodeConstraintsForMessage:(id)arg1;	// IMP=0x0000000000047b19
- (void)_fetchAccessCodesForMessage:(id)arg1;	// IMP=0x0000000000047705
- (_Bool)_redispatchToResidentIfNeccesaryForMessage:(id)arg1 withNewResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047346
- (void)_updateCacheWithModificationRespponses:(id)arg1;	// IMP=0x0000000000047193
- (_Bool)hasCurrentUserAccessCodeChangedWithChangedAccessCodes:(id)arg1 home:(id)arg2;	// IMP=0x0000000000047097
- (void)handleHomeDidDisableCharacteristicNotification:(id)arg1;	// IMP=0x0000000000046ffe
- (void)handleHomeDidEnableCharacteristicNotification:(id)arg1;	// IMP=0x0000000000046f65
- (void)handleAccessorySupportsAccessCodeDidChangeNotification:(id)arg1;	// IMP=0x0000000000046cef
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x0000000000046c1f
- (void)handleConfirmDataHasSyncedToResidentMessage:(id)arg1;	// IMP=0x00000000000468ca
- (void)handleGenerateNewUserAccessCodeMessage:(id)arg1;	// IMP=0x0000000000046722
- (void)handleResetAccessoryAccessCodesMessage:(id)arg1;	// IMP=0x0000000000046572
- (void)handleFetchCachedAccessCodesMessage:(id)arg1;	// IMP=0x0000000000046289
- (void)handleFetchHomeAccessCodesMessage:(id)arg1;	// IMP=0x0000000000045ffd
- (void)handleFetchAccessCodeConstraintsMessage:(id)arg1;	// IMP=0x0000000000045be0
- (void)handleFetchAccessCodesMessage:(id)arg1;	// IMP=0x00000000000457c3
- (void)handleRemoveHomeAccessCodeMessage:(id)arg1;	// IMP=0x0000000000045482
- (void)handleSetUserInformationMessage:(id)arg1;	// IMP=0x000000000004507b
- (void)handleRemoveSimpleLabelAccessCodeMessage:(id)arg1;	// IMP=0x0000000000044ecb
- (void)handleSetAccessCodeForUserMessage:(id)arg1;	// IMP=0x0000000000044d1b
- (void)handleSubmitAccessCodeModificationRequestsMessage:(id)arg1;	// IMP=0x0000000000044b6b
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x00000000000447eb
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x000000000004446b
- (void)fetchAccessCodeForIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044107
- (void)configure;	// IMP=0x0000000000043542
- (id)initWithContext:(id)arg1 utilities:(Class)arg2 accessoryReaderWriter:(id)arg3 dataManager:(id)arg4;	// IMP=0x0000000000043430
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000043375

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
