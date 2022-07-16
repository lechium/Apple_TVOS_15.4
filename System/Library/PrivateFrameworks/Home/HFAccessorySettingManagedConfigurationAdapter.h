//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>
#import <Home/MCProfileConnectionObserver-Protocol.h>

@class MCProfileConnection, NSHashTable, NSString;

@interface HFAccessorySettingManagedConfigurationAdapter <MCProfileConnectionObserver, HFAccessorySettingAdapterDisplayArbitrating>
{
    _Bool _isSettingUp;	// 8 = 0x8
    MCProfileConnection *_profileConnectionForSynchronization;	// 16 = 0x10
    NSHashTable *_profileObservers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000171ad9
@property(retain, nonatomic) NSHashTable *profileObservers; // @synthesize profileObservers=_profileObservers;
@property(nonatomic) _Bool isSettingUp; // @synthesize isSettingUp=_isSettingUp;
- (void)_setupDebugHandler;	// IMP=0x00000000001717b0
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;	// IMP=0x0000000000171682
- (_Bool)shouldShowSettingsEntity:(id)arg1;	// IMP=0x000000000017160b
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000017151d
- (void)_dispatchWasUpdated;	// IMP=0x00000000001713a5
- (void)_rebootForReason:(id)arg1;	// IMP=0x0000000000171279
- (id)_synchronizeHomeKitToManagedConfiguration;	// IMP=0x000000000017065a
- (id)_synchronizeManagedConfigurationToHomeKit;	// IMP=0x000000000016ff88
@property(readonly, nonatomic) MCProfileConnection *profileConnectionForSynchronization; // @synthesize profileConnectionForSynchronization=_profileConnectionForSynchronization;
- (id)_removeProfileFromProfileManager:(id)arg1;	// IMP=0x000000000016fcc9
- (id)_profilesSettingData;	// IMP=0x000000000016fa2f
- (id)_installedProfileData;	// IMP=0x000000000016f7ef
- (id)profilesSettingFuture;	// IMP=0x000000000016f61e
@property(readonly, nonatomic) unsigned long long numberOfProfiles;
- (void)removeProfileObserver:(id)arg1;	// IMP=0x000000000016f534
- (void)addProfileObserver:(id)arg1;	// IMP=0x000000000016f4c2
- (id)profiles;	// IMP=0x000000000016f15b
- (id)removeProfileDataFromHomeKit:(id)arg1;	// IMP=0x000000000016ef9d
- (id)removeProfileFromHomeKit:(id)arg1;	// IMP=0x000000000016e9f2
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;	// IMP=0x000000000016e7c4
- (void)dealloc;	// IMP=0x000000000016e756
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016e6a1
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000016e5ec
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x000000000016e431

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

