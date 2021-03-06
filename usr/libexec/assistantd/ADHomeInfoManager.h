//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADHomeInfo, ADPreferredMediaUserInfo, AFHomeAccessoryInfo, AFInstanceContext, HMAccessory, HMHome, HMHomeManager, MISSING_TYPE, NSHashTable, NSMutableDictionary, NSString, NSUUID, SASetHomeContext;
@protocol OS_dispatch_queue;

@interface ADHomeInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    HMHomeManager *_homeManager;	// 16 = 0x10
    HMAccessory *_currentAccessory;	// 24 = 0x18
    AFHomeAccessoryInfo *_currentAccessoryInfo;	// 32 = 0x20
    NSUUID *_accessoryLoggingSalt;	// 40 = 0x28
    HMHome *_currentHome;	// 48 = 0x30
    ADHomeInfo *_currentHomeInfo;	// 56 = 0x38
    NSMutableDictionary *_homeUserSettings;	// 64 = 0x40
    _Bool _assistantRequestedToTurnOffVoiceID;	// 72 = 0x48
    NSMutableDictionary *_homeSharingStates;	// 80 = 0x50
    AFInstanceContext *_instanceContext;	// 88 = 0x58
    NSHashTable *_listeners;	// 96 = 0x60
    SASetHomeContext *_homeContext;	// 104 = 0x68
    ADPreferredMediaUserInfo *_preferredMediaUserInfo;	// 112 = 0x70
}

+ (id)sharedInfoManager;	// IMP=0x0020000000189aa2
- (void).cxx_destruct;	// IMP=0x0020000000195c8e
- (id)_activityNotificationsForHomes:(id)arg1;	// IMP=0x0010000000195a09
- (id)updatedHomeInfoForRootInfo:(id)arg1;	// IMP=0x001000000019588d
- (id)_getAccessoryCategoryForExecutionInfo:(id)arg1;	// IMP=0x00100000001956bd
- (void)getAccessoryCategoryForExecutionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000019550b
- (void)getLocalizedAccessoryCategoryForExecutionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001953d8
- (_Bool)_hasSiriCapableDeviceInHome:(id)arg1;	// IMP=0x001000000019519b
- (void)getHomeManagerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001950cd
- (id)_homesWithSiriCapableDevices;	// IMP=0x0010000000194f00
- (_Bool)areActivityNotificationsOffForAllHomes;	// IMP=0x0010000000194d67
- (id)rootAfHomeInfoForThisDevice;	// IMP=0x0010000000194ce1
- (void)accessoryDidUpdateSupportsThirdPartyMusic:(id)arg1;	// IMP=0x0010000000194c0b
- (void)accessory:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x0010000000194c05
- (void)accessoryDidUpdatePreferredMediaUser:(id)arg1;	// IMP=0x0010000000194bc6
- (void)accessoryDidUpdateName:(id)arg1;	// IMP=0x00100000001949f1
- (void)homeDidEnableMultiUser:(id)arg1;	// IMP=0x00100000001949eb
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;	// IMP=0x00100000001947f2
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x001000000019472c
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x0010000000194683
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x001000000019467d
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x00100000001944ff
- (void)homeDidUpdateName:(id)arg1;	// IMP=0x00100000001942e6
- (void)shareManager:(id)arg1 didReceiveShareInvitation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000194251
- (void)_propagateSiriDataSharingOptInStatus:(long long)arg1 toAccessory:(id)arg2;	// IMP=0x0010000000193c83
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;	// IMP=0x0010000000193aa8
- (void)settingsWillUpdate:(id)arg1;	// IMP=0x0010000000193a23
- (void)settingsDidUpdate:(id)arg1;	// IMP=0x00100000001933fd
- (void)homeManagerDidUpdateAssistantIdentifiers:(id)arg1;	// IMP=0x00100000001932cb
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;	// IMP=0x0010000000193157
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;	// IMP=0x0010000000193025
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x0010000000192dff
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x0010000000192d56
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x0010000000192a0a
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0010000000192891
- (void)_homeManagerUpdatedHomes:(id)arg1 homesToDelete:(id)arg2;	// IMP=0x001000000019276f
- (void)_homeManagerUpdatedHomes:(id)arg1;	// IMP=0x001000000019275b
- (void)_checkAndDisableVoiceIDIfRequired;	// IMP=0x001000000019273b
- (void)_startCloudKitActivityForHomes:(id)arg1 homesToDelete:(id)arg2;	// IMP=0x0010000000192735
- (void)fetchMultiUserMetricsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000192408
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001922d9
- (void)removeListener:(id)arg1;	// IMP=0x001000000019222b
- (void)addListener:(id)arg1;	// IMP=0x001000000019217d
- (void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001920af
@property(readonly, nonatomic) AFHomeAccessoryInfo *currentAccessoryInfo;
@property(readonly, nonatomic) NSUUID *accessoryLoggingSalt;
- (id)_accessoryLoggingSalt;	// IMP=0x0010000000191e37
- (void)_updateCurrentAccessoryInfoWithAccessory:(id)arg1;	// IMP=0x00100000001914c7
- (id)_currentAccessoryInfo;	// IMP=0x001000000019147e
- (id)_currentAccessory;	// IMP=0x0010000000191359
- (id)_accessoryForIdentifier:(id)arg1 inHome:(id *)arg2;	// IMP=0x0010000000190a80
- (id)getCurrentASRLanguages;	// IMP=0x0010000000190937
- (void)getHomeContext:(CDUnknownBlockType)arg1;	// IMP=0x001000000019088d
- (void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x0010000000190244
- (void)restartShareDeletion;	// IMP=0x001000000019023e
- (void)restartSharing;	// IMP=0x00100000001901d7
- (void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000190161
- (void)getCurrentAccessoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000190093
- (void)_onceSiriDataSharingAdjustment:(id)arg1;	// IMP=0x001000000018f5cc
- (void)_siriDataSharingAdjustment:(id)arg1;	// IMP=0x001000000018f511
- (void)setAllowHeySiriHomeKitSetting:(_Bool)arg1;	// IMP=0x001000000018f50b
- (void)getHomeIdForAccessoryId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018f3a8
- (void)getVoiceSettingsForHomeMembers:(CDUnknownBlockType)arg1;	// IMP=0x001000000018f0fa
- (void)settingsForMultiUserWithRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018efaa
- (void)getCurrentHomeMemberIds:(CDUnknownBlockType)arg1;	// IMP=0x001000000018eb17
- (void)_setPreferredMediaUserForAccessory:(id)arg1;	// IMP=0x001000000018e380
- (void)_setPreferredMediaUserForAccessories:(id)arg1;	// IMP=0x001000000018e005
- (id)preferredMediaUserInfo;	// IMP=0x001000000018df12
- (id)infoForThisDevice;	// IMP=0x001000000018ddcf
- (id)_homesWithMultiUserEnabled;	// IMP=0x001000000018da57
- (_Bool)_updateHomeUserSettings;	// IMP=0x001000000018c5dc
- (id)_settingsForHomeUser:(id)arg1 forHome:(id)arg2;	// IMP=0x001000000018c2c0
- (_Bool)_allowExplicitContentSettingForUser:(id)arg1 forHome:(id)arg2;	// IMP=0x001000000018c267
- (void)_resolveSiriDataSharingStatusMismatch:(id)arg1;	// IMP=0x001000000018bb5c
- (void)_siriDataSharingOptInStatusDidChange:(id)arg1;	// IMP=0x001000000018b5e3
- (void)_logRelevantAnalyticsOnHomeUserSettingsUpdateForCurrentSettings:(id)arg1 allowVoiceIdSettingValue:(long long)arg2 isPrimaryUser:(_Bool)arg3;	// IMP=0x001000000018b426
- (id)_currentHomeInfo;	// IMP=0x001000000018ae2b
- (id)_currentHome;	// IMP=0x001000000018a89e
- (void)currentHomeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000018a7d0
- (void)_updateHomeContext:(id)arg1;	// IMP=0x001000000018a204
- (void)dealloc;	// IMP=0x001000000018a11a
- (MISSING_TYPE *)_homeManager;	// IMP=0x001000000018a026
- (void)startAcceptingCloudSharesForMultiUserService;	// IMP=0x001000000018a020
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000189ee5
- (id)_initWithContext:(id)arg1;	// IMP=0x0010000000189ba2
- (id)_init;	// IMP=0x0010000000189b48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

