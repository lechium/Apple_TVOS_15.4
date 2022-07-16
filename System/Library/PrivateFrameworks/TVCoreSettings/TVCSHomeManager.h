//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVCoreSettings/HMAccessoryBrowserPrivateDelegate-Protocol.h>
#import <TVCoreSettings/HMAccessoryDelegatePrivate-Protocol.h>
#import <TVCoreSettings/HMHomeManagerDelegatePrivate-Protocol.h>

@class HMAccessory, HMAccessoryBrowser, HMHomeManager, NSArray, NSMutableArray, NSString, TVCSAccessory, TVCSHome;
@protocol OS_dispatch_queue;

@interface TVCSHomeManager : NSObject <HMHomeManagerDelegatePrivate, HMAccessoryBrowserPrivateDelegate, HMAccessoryDelegatePrivate>
{
    _Bool _needsOSUpdateToRunHH2;	// 8 = 0x8
    _Bool _hasOptedToHH2;	// 9 = 0x9
    _Bool _advertising;	// 10 = 0xa
    _Bool _configurationInProgress;	// 11 = 0xb
    _Bool _browsingForAccessory;	// 12 = 0xc
    long long _homeConfigurationState;	// 16 = 0x10
    TVCSAccessory *_localAccessory;	// 24 = 0x18
    HMAccessory *_browsedCurrentHMAccessory;	// 32 = 0x20
    HMHomeManager *_homeManager;	// 40 = 0x28
    HMAccessoryBrowser *_accessoryBrowser;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_homeManagerQueue;	// 56 = 0x38
    NSArray *_cachedOwnedHomes;	// 64 = 0x40
    NSMutableArray *_updateAudioDestinationRequests;	// 72 = 0x48
}

+ (void)_applyCurrentAirPlaySettingsToHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034520
+ (id)keyPathsForValuesAffectingLocalAccessory;	// IMP=0x0000000000032f70
+ (id)sharedInstance;	// IMP=0x00000000000306d0
- (void).cxx_destruct;	// IMP=0x000000000003b140
@property(retain, nonatomic) NSMutableArray *updateAudioDestinationRequests; // @synthesize updateAudioDestinationRequests=_updateAudioDestinationRequests;
@property(copy, nonatomic, getter=_cachedOwnedHomes, setter=_setCachedOwnedHomes:) NSArray *cachedOwnedHomes; // @synthesize cachedOwnedHomes=_cachedOwnedHomes;
@property(readonly, getter=_homeManagerQueue) NSObject<OS_dispatch_queue> *homeManagerQueue; // @synthesize homeManagerQueue=_homeManagerQueue;
@property(retain) HMAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
@property(retain) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMAccessory *browsedCurrentHMAccessory; // @synthesize browsedCurrentHMAccessory=_browsedCurrentHMAccessory;
@property(nonatomic, getter=isBrowsingForAccessory) _Bool browsingForAccessory; // @synthesize browsingForAccessory=_browsingForAccessory;
@property(retain, nonatomic) TVCSAccessory *localAccessory; // @synthesize localAccessory=_localAccessory;
@property(nonatomic, getter=isConfigurationInProgress) _Bool configurationInProgress; // @synthesize configurationInProgress=_configurationInProgress;
@property(nonatomic, getter=isAdvertising) _Bool advertising; // @synthesize advertising=_advertising;
@property(nonatomic) long long homeConfigurationState; // @synthesize homeConfigurationState=_homeConfigurationState;
@property(readonly, nonatomic) _Bool hasOptedToHH2; // @synthesize hasOptedToHH2=_hasOptedToHH2;
@property(readonly, nonatomic) _Bool needsOSUpdateToRunHH2; // @synthesize needsOSUpdateToRunHH2=_needsOSUpdateToRunHH2;
- (void)_endActiveAssertion:(id)arg1;	// IMP=0x000000000003ad20
- (id)_beginActiveAssertionWithReason:(id)arg1;	// IMP=0x000000000003ac80
- (void)_updateAudioDestinationController:(id)arg1 withAudioDestination:(id)arg2 forceUpdateWithUnavailableDestination:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a810
- (void)updateLocalAccessoryAudioDestination:(id)arg1 forceUpdateWithUnavailableDestination:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039a90
- (void)updateLocalAccessoryAudioDestinationWithRouteUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038ef0
- (void)createDefaultHomeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000385a0
- (void)createRoomNamed:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000037ee0
- (void)moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000377a0
- (void)_addLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000036900
- (void)_moveLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000360c0
- (void)_updateOptedToHH2;	// IMP=0x0000000000035ed0
- (void)_updateNeedsOSUpdate;	// IMP=0x0000000000035ce0
- (void)_setLocalAccessory:(id)arg1 homeConfigurationState:(long long)arg2;	// IMP=0x0000000000035240
- (void)_updateAccessoryState;	// IMP=0x0000000000034370
- (void)_queueCalculateCurrentStateAndFindLocalAccessory;	// IMP=0x00000000000338a0
- (void)_calculateCurrentStateAndFindLocalAccessory;	// IMP=0x0000000000033730
- (id)_currentHMAccessory;	// IMP=0x0000000000032fb0
- (void)accessoryAudioDestinationControllerUpdated;	// IMP=0x0000000000032aa0
- (void)accessoryStateChanged;	// IMP=0x0000000000032a70
- (void)recomputeCurrentAccessoryState;	// IMP=0x0000000000032a40
- (void)homeManager:(id)arg1 didUpdateHH2State:(_Bool)arg2;	// IMP=0x00000000000328a0
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;	// IMP=0x0000000000032790
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x0000000000032610
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x0000000000032490
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0000000000032340
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;	// IMP=0x0000000000032230
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x00000000000320d0
- (id)_nextAvailableDefaultHomeName;	// IMP=0x0000000000031a50
@property(readonly, nonatomic) TVCSHome *ownedCurrentHome;
- (void)_updateCachedOwnedHomes;	// IMP=0x00000000000318a0
- (id)homes;	// IMP=0x0000000000031870
@property(readonly, nonatomic) NSArray *allOwnedHomes;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;	// IMP=0x0000000000031150
- (void)_queueStopBrowsingForLocalAccessory;	// IMP=0x0000000000031060
- (void)stopBrowsingForLocalAccessory;	// IMP=0x0000000000030f90
- (void)startBrowsingForLocalAccessory;	// IMP=0x0000000000030dc0
- (void)stopAdvertisingForProximityKeyTransfer;	// IMP=0x0000000000030db0
- (void)startAdvertisingForProximityKeyTransferWithType:(long long)arg1;	// IMP=0x0000000000030d90
- (void)forgetHomeConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x00000000000307d0
- (void)reloadHomeConfiguration;	// IMP=0x00000000000307a0
- (id)_init;	// IMP=0x0000000000030480

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

