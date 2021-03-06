//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HAPAccessoryServerBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HAPAccessoryServerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAccessoryBrowserHapProtocol-Protocol.h>
#import <HomeKitDaemon/HMDAccessoryBrowserProtocol-Protocol.h>
#import <HomeKitDaemon/HMDAuthServerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDMediaBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMDWACAccessoryConfigurationDelegate-Protocol.h>
#import <HomeKitDaemon/HMDWACBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMDWatchSystemStateDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HAPAccessoryServerBrowser, HAPAccessoryServerBrowserBTLE, HAPAccessoryServerBrowserIP, HMDAccessoryServerBrowserDemo, HMDAuthServer, HMDHAP2Storage, HMDHomeManager, HMDMediaBrowser, HMDUnassociatedWACAccessory, HMDWACBrowser, HMFMessageDispatcher, HMFTimer, HMFUnfairLock, NSArray, NSData, NSHashTable, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol HMDAccessoryBrowserManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMDAccessoryBrowser : HMFObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMFMessageReceiver, HMFTimerDelegate, HMDMediaBrowserDelegate, HMDWACBrowserDelegate, HMDWACAccessoryConfigurationDelegate, HMDWatchSystemStateDelegate, HMDAuthServerDelegate, HMFLogging, HMDAccessoryBrowserProtocol, HMDAccessoryBrowserHapProtocol>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSMutableSet *_unpairedHAPAccessories;	// 16 = 0x10
    NSMutableSet *_unassociatedMediaAccessories;	// 24 = 0x18
    NSMutableSet *_deviceSetupMediaAccessories;	// 32 = 0x20
    NSMutableSet *_unassociatedWACAccessories;	// 40 = 0x28
    NSMutableSet *_mediaAccessoryControlConnections;	// 48 = 0x30
    NSMutableSet *_browsingConnections;	// 56 = 0x38
    NSHashTable *_activeAssertions;	// 64 = 0x40
    _Bool _btlePowerState;	// 72 = 0x48
    _Bool _internalDiscoveryRequest;	// 73 = 0x49
    _Bool _remoteBrowsingEnabled;	// 74 = 0x4a
    _Bool _active;	// 75 = 0x4b
    HMDUnassociatedWACAccessory *_accessoryPerformingWAC;	// 80 = 0x50
    id <HMDAccessoryBrowserManagerDelegate> _managerDelegate;	// 88 = 0x58
    NSArray *_browseableLinkTypes;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_workQueue;	// 104 = 0x68
    NSUUID *_uuid;	// 112 = 0x70
    HMFMessageDispatcher *_messageDispatcher;	// 120 = 0x78
    unsigned long long _generationCounter;	// 128 = 0x80
    HMDHomeManager *_homeManager;	// 136 = 0x88
    NSMutableArray *_accessoryServerBrowsers;	// 144 = 0x90
    NSHashTable *_discoveringAccessoryServerBrowsers;	// 152 = 0x98
    HAPAccessoryServerBrowserIP *_ipAccessoryServerBrowser;	// 160 = 0xa0
    HAPAccessoryServerBrowserBTLE *_btleAccessoryServerBrowser;	// 168 = 0xa8
    HAPAccessoryServerBrowser *_hap2AccessoryServerBrowser;	// 176 = 0xb0
    HMDHAP2Storage *_hap2Storage;	// 184 = 0xb8
    HMDMediaBrowser *_mediaBrowser;	// 192 = 0xc0
    HMDWACBrowser *_wacBrowser;	// 200 = 0xc8
    HMDAuthServer *_authServer;	// 208 = 0xd0
    HMDAccessoryServerBrowserDemo *_demoAccessoryServerBrowser;	// 216 = 0xd8
    HMFTimer *_stopReprovisioningTimer;	// 224 = 0xe0
    HMFTimer *_stopBrowsingAccessoriesNeedingReprovisioningTimer;	// 232 = 0xe8
    NSString *_identifierOfAccessoryBeingReprovisioned;	// 240 = 0xf0
    NSData *_wiFiPSKForAccessoryReprovisioning;	// 248 = 0xf8
    NSString *_countrycodeForAccessoryReprovisioning;	// 256 = 0x100
    NSMutableArray *_pairedAccessories;	// 264 = 0x108
    NSObject<OS_dispatch_source> *_reachabilityTimerForBTLE;	// 272 = 0x110
    NSMutableArray *_currentlyPairingAccessories;	// 280 = 0x118
    NSMutableArray *_currentlyPairingProgressHandlers;	// 288 = 0x120
    NSHashTable *_tombstonedHAPAccessoryServers;	// 296 = 0x128
    NSHashTable *_discoveringBLEAccessoryServerIdentifiers;	// 304 = 0x130
    NSMutableSet *_discoveredAccessoryServerIdentifiers;	// 312 = 0x138
}

+ (id)logCategory;	// IMP=0x00000000008db4e1
- (void).cxx_destruct;	// IMP=0x00000000008d11c6
@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServerIdentifiers; // @synthesize discoveredAccessoryServerIdentifiers=_discoveredAccessoryServerIdentifiers;
@property(readonly, nonatomic) NSHashTable *discoveringBLEAccessoryServerIdentifiers; // @synthesize discoveringBLEAccessoryServerIdentifiers=_discoveringBLEAccessoryServerIdentifiers;
@property(readonly, nonatomic) NSHashTable *tombstonedHAPAccessoryServers; // @synthesize tombstonedHAPAccessoryServers=_tombstonedHAPAccessoryServers;
@property(retain, nonatomic) NSMutableArray *currentlyPairingProgressHandlers; // @synthesize currentlyPairingProgressHandlers=_currentlyPairingProgressHandlers;
@property(retain, nonatomic) NSMutableArray *currentlyPairingAccessories; // @synthesize currentlyPairingAccessories=_currentlyPairingAccessories;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE; // @synthesize reachabilityTimerForBTLE=_reachabilityTimerForBTLE;
@property(retain, nonatomic) NSMutableArray *pairedAccessories; // @synthesize pairedAccessories=_pairedAccessories;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *countrycodeForAccessoryReprovisioning; // @synthesize countrycodeForAccessoryReprovisioning=_countrycodeForAccessoryReprovisioning;
@property(retain, nonatomic) NSData *wiFiPSKForAccessoryReprovisioning; // @synthesize wiFiPSKForAccessoryReprovisioning=_wiFiPSKForAccessoryReprovisioning;
@property(retain, nonatomic) NSString *identifierOfAccessoryBeingReprovisioned; // @synthesize identifierOfAccessoryBeingReprovisioned=_identifierOfAccessoryBeingReprovisioned;
@property(readonly, nonatomic) HMFTimer *stopBrowsingAccessoriesNeedingReprovisioningTimer; // @synthesize stopBrowsingAccessoriesNeedingReprovisioningTimer=_stopBrowsingAccessoriesNeedingReprovisioningTimer;
@property(readonly, nonatomic) HMFTimer *stopReprovisioningTimer; // @synthesize stopReprovisioningTimer=_stopReprovisioningTimer;
@property(retain, nonatomic) HMDAccessoryServerBrowserDemo *demoAccessoryServerBrowser; // @synthesize demoAccessoryServerBrowser=_demoAccessoryServerBrowser;
@property(retain, nonatomic) HMDAuthServer *authServer; // @synthesize authServer=_authServer;
@property(retain, nonatomic) HMDWACBrowser *wacBrowser; // @synthesize wacBrowser=_wacBrowser;
@property(retain, nonatomic) HMDMediaBrowser *mediaBrowser; // @synthesize mediaBrowser=_mediaBrowser;
@property(retain, nonatomic) HMDHAP2Storage *hap2Storage; // @synthesize hap2Storage=_hap2Storage;
@property(retain, nonatomic) HAPAccessoryServerBrowser *hap2AccessoryServerBrowser; // @synthesize hap2AccessoryServerBrowser=_hap2AccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser; // @synthesize btleAccessoryServerBrowser=_btleAccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser; // @synthesize ipAccessoryServerBrowser=_ipAccessoryServerBrowser;
@property(retain, nonatomic) NSHashTable *discoveringAccessoryServerBrowsers; // @synthesize discoveringAccessoryServerBrowsers=_discoveringAccessoryServerBrowsers;
@property(retain, nonatomic) NSMutableArray *accessoryServerBrowsers; // @synthesize accessoryServerBrowsers=_accessoryServerBrowsers;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSArray *browseableLinkTypes; // @synthesize browseableLinkTypes=_browseableLinkTypes;
@property(nonatomic) __weak id <HMDAccessoryBrowserManagerDelegate> managerDelegate; // @synthesize managerDelegate=_managerDelegate;
@property(nonatomic) _Bool btlePowerState; // @synthesize btlePowerState=_btlePowerState;
- (id)dumpRegisteredPairedAccessories;	// IMP=0x00000000008d0b5b
- (id)dumpUnassociatedAccessories;	// IMP=0x00000000008d0879
- (void)vendorModel:(id *)arg1 vendorManufacturer:(id *)arg2 accessoryInfo:(id)arg3;	// IMP=0x00000000008d0644
- (void)handlePPIDInfoResponse:(id)arg1 context:(id)arg2 error:(id)arg3;	// IMP=0x00000000008d053c
- (void)handleActivationResponse:(id)arg1 context:(id)arg2;	// IMP=0x00000000008d0460
- (void)didFinishActivation:(id)arg1 context:(id)arg2;	// IMP=0x00000000008d0384
- (void)browser:(id)arg1 didUpdateEndpoints:(id)arg2;	// IMP=0x00000000008d02d3
- (void)browser:(id)arg1 didRemoveSessions:(id)arg2;	// IMP=0x00000000008d022a
- (void)browser:(id)arg1 didRemoveAdvertisements:(id)arg2;	// IMP=0x00000000008d0179
- (void)browser:(id)arg1 didAddAdvertisements:(id)arg2;	// IMP=0x00000000008d00c8
- (void)accessoryServer:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;	// IMP=0x00000000008d002e
- (void)accessoryServer:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;	// IMP=0x00000000008cff94
- (void)accessoryServer:(id)arg1 validateCert:(id)arg2 model:(id)arg3;	// IMP=0x00000000008cfeb0
- (void)accessoryServer:(id)arg1 validateUUID:(id)arg2 token:(id)arg3 model:(id)arg4;	// IMP=0x00000000008cfd8c
- (void)accessoryServerNeedsOwnershipToken:(id)arg1;	// IMP=0x00000000008cfab7
- (void)accessoryServer:(id)arg1 didFinishAuth:(id)arg2;	// IMP=0x00000000008cf6c2
- (void)accessoryServer:(id)arg1 didUpdateName:(id)arg2;	// IMP=0x00000000008cf4e1
- (void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2;	// IMP=0x00000000008cf435
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didUpdateCategory:(id)arg2;	// IMP=0x00000000008cf25f
- (void)accessoryServerDidUpdateStateNumber:(id)arg1;	// IMP=0x00000000008cf16f
- (void)accessoryServer:(id)arg1 didUpdateHasPairings:(_Bool)arg2;	// IMP=0x00000000008ceeb6
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didUpdateHasPairings:(_Bool)arg2;	// IMP=0x00000000008cecdc
- (void)accessoryServer:(id)arg1 didUpdateWakeNumber:(id)arg2;	// IMP=0x00000000008cec28
- (void)accessoryServer:(id)arg1 didDisconnectWithError:(id)arg2;	// IMP=0x00000000008ceb94
- (void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(_Bool)arg4;	// IMP=0x00000000008ceae7
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(_Bool)arg4;	// IMP=0x00000000008ce8b5
- (void)continueAddingAccessoryToHomeAfterUserConfirmation:(id)arg1 withError:(id)arg2;	// IMP=0x00000000008ce7d9
- (void)accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;	// IMP=0x00000000008cdfb1
- (void)accessoryServer:(id)arg1 updatePairingProgress:(long long)arg2;	// IMP=0x00000000008cdca4
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;	// IMP=0x00000000008cda8c
- (void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;	// IMP=0x00000000008ccf9a
- (void)_notifyDelegateOfAccessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;	// IMP=0x00000000008ccdd1
- (void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;	// IMP=0x00000000008ccc79
- (void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;	// IMP=0x00000000008cc830
- (void)accessoryServer:(id)arg1 requestUserPermission:(long long)arg2 accessoryInfo:(id)arg3 error:(id)arg4;	// IMP=0x00000000008cb7b9
- (void)accessoryServer:(id)arg1 promtDialog:(id)arg2 forNotCertifiedAccessory:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008cb589
- (void)_callProgressOrErrorOut:(id)arg1 pairingInfo:(id)arg2 accessoryInfo:(id)arg3 unpairedAccessory:(id)arg4 progress:(long long)arg5 certStatus:(unsigned long long)arg6;	// IMP=0x00000000008cb182
- (void)_continueAfterPPIDValidation:(_Bool)arg1 server:(id)arg2;	// IMP=0x00000000008cb16d
- (void)removeAccessoryCacheForIdentifier:(id)arg1;	// IMP=0x00000000008cb156
- (void)fetchAccessoryCacheForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008cb13c
- (void)saveAccessoryCache:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000008cb122
- (_Bool)isServerLinkTypeBrowseable:(long long)arg1;	// IMP=0x00000000008caed3
- (void)accessoryServerBrowser:(id)arg1 removeCacheForAccessoryWithIdentifier:(id)arg2;	// IMP=0x00000000008cae61
- (void)accessoryServerBrowser:(id)arg1 getCacheForAccessoryWithIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008cadb9
- (void)accessoryServerBrowser:(id)arg1 saveCache:(id)arg2 serverIdentifier:(id)arg3;	// IMP=0x00000000008cad27
- (void)_notifyDelegateOfReachabilityChangeChange:(_Bool)arg1 forBTLEAccessories:(id)arg2;	// IMP=0x00000000008cab6c
- (void)accessoryServerBrowser:(id)arg1 didChangeReachability:(_Bool)arg2 forAccessoryServerWithIdentifier:(id)arg3;	// IMP=0x00000000008cab55
- (void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;	// IMP=0x00000000008ca82a
- (void)_notifyDelegateOfDiscoveryFailure:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3;	// IMP=0x00000000008ca530
- (void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;	// IMP=0x00000000008ca24c
- (void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;	// IMP=0x00000000008ca12d
- (void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;	// IMP=0x00000000008c9c21
- (void)_addReconfirmTimer:(id)arg1 accessoryServer:(id)arg2;	// IMP=0x00000000008c97bb
- (void)_startPairingInterruptionTimer:(id)arg1;	// IMP=0x00000000008c946a
- (void)_stopReconfirmTimer:(id)arg1;	// IMP=0x00000000008c9275
- (void)_handlePairingInterruptedTimeout:(id)arg1 error:(id)arg2;	// IMP=0x00000000008c90c4
- (void)_notifyDelegateOfRemovedAccessoryServer:(id)arg1 error:(id)arg2;	// IMP=0x00000000008c8eee
- (void)accessoryServerBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x00000000008c8e38
- (void)_notifyDelegateOfAccessoryServerNeedingReprovisioning:(id)arg1 error:(id)arg2;	// IMP=0x00000000008c8c62
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerNeedingReprovisioning:(id)arg2 error:(id)arg3;	// IMP=0x00000000008c8c4a
- (void)_notifyDelegateOfWACCompletionForAccessoryServerWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00000000008c8ac0
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerForReprovisioning:(id)arg2;	// IMP=0x00000000008c880e
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(_Bool)arg3 stateNumber:(id)arg4;	// IMP=0x00000000008c848d
- (void)_checkIfPairingWithPairedAccessoryServer:(id)arg1 errorCode:(long long)arg2;	// IMP=0x00000000008c81bd
- (void)_removePairingInformation:(id)arg1 error:(id)arg2;	// IMP=0x00000000008c7fea
- (void)accessoryServerBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(_Bool)arg5;	// IMP=0x00000000008c7d88
- (void)_notifyDelegateOfNewPairedAccessoryServer:(id)arg1 stateChanged:(_Bool)arg2 stateNumber:(id)arg3;	// IMP=0x00000000008c7ae9
- (void)_resurrectAccessoryServer:(id)arg1;	// IMP=0x00000000008c7958
- (void)_discoverAccessories:(id)arg1;	// IMP=0x00000000008c75f4
- (id)_requiredCharacteristicsTypesToReadFromBTLEServer:(id)arg1;	// IMP=0x00000000008c7296
- (void)_tombstoneAccessoryServer:(id)arg1;	// IMP=0x00000000008c70cd
- (void)_notifyDelegateOfTombstonedAccessoryServer:(id)arg1;	// IMP=0x00000000008c6f07
- (_Bool)_shouldAccessoryServerBeTombstoned:(id)arg1;	// IMP=0x00000000008c6e53
- (id)_tombstonedAccessoryServerWithServerIdentifier:(id)arg1;	// IMP=0x00000000008c6c80
- (_Bool)_isAccessoryServerTombstoned:(id)arg1;	// IMP=0x00000000008c6c09
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)messageDestination;	// IMP=0x00000000008c6b7c
- (void)_sendPairingCompletionStatusForServer:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c69bc
- (void)_updatePairingRetryTimerForAccessory:(id)arg1 delay:(long long)arg2;	// IMP=0x00000000008c6749
- (void)_promptForPairingPasswordForServer:(id)arg1 reason:(id)arg2;	// IMP=0x00000000008c61e7
- (void)_pairAccessory:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008c5252
- (void)_pairAccessoryWithDescription:(id)arg1 configuration:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000008c3511
- (void)cancelPairingWithAccessoryDescription:(id)arg1 error:(id)arg2;	// IMP=0x00000000008c300f
- (id)findAccessoryServerForAccessoryDescription:(id)arg1;	// IMP=0x00000000008c2cb3
- (void)_cancelPairingWithAccessory:(id)arg1 error:(id)arg2;	// IMP=0x00000000008c2649
- (void)_handleSetupCodeAvailable:(id)arg1;	// IMP=0x00000000008c22d4
- (void)_notifyManagerOfNewAccessory;	// IMP=0x00000000008c21cb
- (id)unpairedAccessoryForServer:(id)arg1;	// IMP=0x00000000008c211f
- (id)unpairedAccessoryWithServerIdentifier:(id)arg1;	// IMP=0x00000000008c1f4c
- (void)_setBTLEPowerChangeCompletionHandler;	// IMP=0x00000000008c1eb6
- (void)handleXPCConnectionInvalidated:(id)arg1;	// IMP=0x00000000008c1e05
- (void)_handleRequestSearchForNewAccessories:(id)arg1;	// IMP=0x00000000008c175a
- (void)_handleRequestFetchNewAccessories:(id)arg1;	// IMP=0x00000000008c11c1
- (void)__handleProcessStateChange:(id)arg1;	// IMP=0x00000000008c107b
- (void)_cancelCurrentlyPairingAccessories:(long long)arg1;	// IMP=0x00000000008c0b8d
- (void)_registerForNotifications;	// IMP=0x00000000008c0ad9
- (void)_registerForMessages;	// IMP=0x00000000008c086b
- (void)resurrectAccessoryServer:(id)arg1;	// IMP=0x00000000008c06ef
- (void)tombstoneAccessoryServer:(id)arg1;	// IMP=0x00000000008c063e
- (void)discoverAccessories:(id)arg1;	// IMP=0x00000000008c058d
- (void)_startDiscoveringAccessoriesNeedingReprovisioning;	// IMP=0x00000000008c01a8
- (void)startDiscoveringAccessoriesNeedingReprovisioning;	// IMP=0x00000000008c0137
- (void)_stopDiscoveryForAccessoryServerBrowser:(id)arg1;	// IMP=0x00000000008c0059
- (void)_stopDiscoveringAccessoriesWithError:(id)arg1;	// IMP=0x00000000008c0040
- (void)_stopDiscoveringAccessoriesWithLinkType:(id)arg1 force:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000008bfc05
- (void)_stopDiscoveringMediaAccessories;	// IMP=0x00000000008bfa4a
- (void)_startDiscoveringMediaAccessories;	// IMP=0x00000000008bf9a7
- (void)_startDiscoveryForAccessoryServerBrowser:(id)arg1;	// IMP=0x00000000008bf8c9
- (void)_startDiscoveringAccessoriesWithLinkType:(id)arg1;	// IMP=0x00000000008bf599
- (void)handleStartDiscoveringAssociatedMediaAccessories:(_Bool)arg1 forTransport:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008bf4b4
- (void)_startDiscoveringPairedAccessories:(id)arg1;	// IMP=0x00000000008bf186
- (void)currentlyFoundHAPAccessoryServerWithIdentifier:(id)arg1 linkType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008bef5b
- (void)_discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008be9ea
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000008be1fe
- (void)_stopReprovisioningTimerHandler;	// IMP=0x00000000008bdf67
- (_Bool)_isBrowsingAllowed;	// IMP=0x00000000008bdf5f
- (void)_startOrStopAccessoryDiscovery;	// IMP=0x00000000008bdf59
- (void)_stopBtleAccessoryReachabilityProbeTimer;	// IMP=0x00000000008bddf8
- (void)_btleAccessoryReachabilityProbeTimer:(_Bool)arg1;	// IMP=0x00000000008bd7e4
- (void)cancelPairingWithAccessory:(id)arg1 error:(id)arg2;	// IMP=0x00000000008bd708
- (void)handleSetupCodeAvailable:(id)arg1;	// IMP=0x00000000008bd657
- (void)didReceiveUserConsentResponseForSetupAccessoryDetail:(id)arg1 consent:(_Bool)arg2;	// IMP=0x00000000008bd5a0
- (void)removePairingInformationForAccessoryServer:(id)arg1;	// IMP=0x00000000008bd559
- (id)unpairedHAPAccessoryWithAccessoryDescription:(id)arg1;	// IMP=0x00000000008bd4fa
- (void)pairAccessoryWithDescription:(id)arg1 configuration:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000008bd3bf
- (void)pairAccessory:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008bd2b5
- (void)registerProgressHandler:(CDUnknownBlockType)arg1 unpairedAccessoryUUID:(id)arg2;	// IMP=0x00000000008bd1d9
- (id)discoveredAccessoryServers;	// IMP=0x00000000008bd0e2
- (void)addUnpairedAccessoryServer:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000008bd006
- (void)deregisterPairedAccessory:(id)arg1;	// IMP=0x00000000008bcdd7
- (void)registerPairedAccessory:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000008bc7a4
- (void)_addUnpairedAccessoryForServer:(id)arg1;	// IMP=0x00000000008bb954
- (void)_handleWACAccessoryFound;	// IMP=0x00000000008bb73a
- (void)_removePairingInformationForUnpairedAccessory:(id)arg1;	// IMP=0x00000000008bb4fd
- (void)_handleRemovedUnpairedHAPAccessory:(id)arg1;	// IMP=0x00000000008bb4eb
- (void)removeUnpairedHAPAccessory:(id)arg1;	// IMP=0x00000000008bb410
- (void)addUnpairedHAPAccessory:(id)arg1;	// IMP=0x00000000008bb335
- (void)unassociatedWACAccessoryDidFinishAssociation:(id)arg1 withError:(id)arg2;	// IMP=0x00000000008bb187
- (void)unassociatedWACAccessoryDidStartAssociation:(id)arg1;	// IMP=0x00000000008bb07c
- (void)requestPermissionToAssociateWACAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008baeac
@property(retain, nonatomic, getter=getActiveWACSession, setter=setActiveWACSession:) HMDUnassociatedWACAccessory *accessoryPerformingWAC; // @synthesize accessoryPerformingWAC=_accessoryPerformingWAC;
- (void)updateUnassociatedWACAccessory:(id)arg1;	// IMP=0x00000000008bacaf
- (void)removeUnassociatedWACAccessory:(id)arg1;	// IMP=0x00000000008babd4
- (void)addUnassociatedWACAccessory:(id)arg1;	// IMP=0x00000000008baaf9
- (void)removeUnassociatedMediaAccessory:(id)arg1;	// IMP=0x00000000008baa1e
- (void)_associateMediaAccessoryForServer:(id)arg1;	// IMP=0x00000000008ba7cb
- (void)_associate:(_Bool)arg1 hapAccessoryWithAdvertisement:(id)arg2;	// IMP=0x00000000008ba6f9
- (void)addUnassociatedMediaAccessory:(id)arg1 forDeviceSetup:(_Bool)arg2;	// IMP=0x00000000008ba616
- (id)_progressHandlerForUnpairedAccessory:(id)arg1;	// IMP=0x00000000008ba443
- (id)_pairingInformationForAccessoryIdentifier:(id)arg1;	// IMP=0x00000000008ba203
- (id)_pairingInformationForUnpairedAccessory:(id)arg1;	// IMP=0x00000000008ba086
- (id)_unpairedAccessoryMatchingPairingInfo:(id)arg1;	// IMP=0x00000000008b9f09
- (id)unpairedAccessoryWithUUID:(id)arg1;	// IMP=0x00000000008b9e86
@property(readonly, nonatomic) NSArray *unpairedHAPAccessories;
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008b9c7e
- (_Bool)isBrowsingAllowed;	// IMP=0x00000000008b9bb4
- (id)acessoryBrowserHapProtocol;	// IMP=0x00000000008b9bab
- (void)handleNewlyPairedAccessory:(id)arg1 linkType:(long long)arg2;	// IMP=0x00000000008b9af4
- (void)homeLocationChangeNotification:(id)arg1;	// IMP=0x00000000008b9962
- (void)handleConnectionDeactivation:(id)arg1;	// IMP=0x00000000008b98b1
- (void)_reprovisionAccessoryWithIdentifier:(id)arg1 wiFiPSK:(id)arg2 countryCode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008b93ed
- (void)reprovisionAccessoryWithIdentifier:(id)arg1 wiFiPSK:(id)arg2 countryCode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008b92b2
- (void)activate:(_Bool)arg1;	// IMP=0x00000000008b9236
- (void)discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008b914e
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;	// IMP=0x00000000008b909d
- (void)btleAccessoryReachabilityProbeTimer:(_Bool)arg1;	// IMP=0x00000000008b9021
- (void)stopDiscoveringMediaAccessories;	// IMP=0x00000000008b8fb0
- (void)stopDiscoveringAccessoriesWithLinkType:(long long)arg1;	// IMP=0x00000000008b8f34
- (void)stopDiscoveringAccessories;	// IMP=0x00000000008b8ec3
- (void)startDiscoveringMediaAccessories;	// IMP=0x00000000008b8e52
- (void)startDiscoveringAccessoriesWithLinkType:(long long)arg1;	// IMP=0x00000000008b8dd6
- (void)startDiscoveringAccessories;	// IMP=0x00000000008b8d65
- (void)startDiscoveringPairedAccessoriesWithLinkType:(long long)arg1;	// IMP=0x00000000008b8ce9
- (void)startDiscoveringPairedAccessories;	// IMP=0x00000000008b8c78
- (_Bool)isDiscoveringAccessoriesWithLinkType:(long long)arg1;	// IMP=0x00000000008b8b7b
@property(nonatomic) _Bool remoteBrowsingEnabled; // @synthesize remoteBrowsingEnabled=_remoteBrowsingEnabled;
- (void)_updateBrowsersForDiscoveryRemoteChange;	// IMP=0x00000000008b88e8
- (void)resetConfiguration;	// IMP=0x00000000008b8877
- (void)_handleRemovedAccessoryAdvertisements:(id)arg1;	// IMP=0x00000000008b8326
- (void)_handleAddedAccessoryAdvertisements:(id)arg1;	// IMP=0x00000000008b769a
- (void)_notifyDelegateOfReachabilityChange:(_Bool)arg1 forAccessoryWithIdentifier:(id)arg2;	// IMP=0x00000000008b74fd
- (void)__inactivate;	// IMP=0x00000000008b748c
- (void)__activate;	// IMP=0x00000000008b741b
- (void)endActiveAssertion:(id)arg1;	// IMP=0x00000000008b71d7
- (id)beginActiveAssertionWithReason:(id)arg1;	// IMP=0x00000000008b7050
- (unsigned long long)numPairedIPAccessories;	// IMP=0x00000000008b7007
- (_Bool)areThereAnyAssociatedAirPlayAccessories;	// IMP=0x00000000008b6fbf
- (id)identifiersOfAssociatedMediaAccessories;	// IMP=0x00000000008b6fa8
- (_Bool)areThereAnyPairedBTLEAccessories;	// IMP=0x00000000008b6f60
- (id)identifiersOfPairedBTLEAccessories;	// IMP=0x00000000008b6f49
- (_Bool)areThereAnyPairedAccessories;	// IMP=0x00000000008b6f01
- (id)__identifiersOfPairedAccessoriesWithTransports:(unsigned long long)arg1;	// IMP=0x00000000008b6cd7
- (id)pairedHMDHAPAccessoryWithAccessoryServer:(id)arg1;	// IMP=0x00000000008b6bb1
- (id)pairedAccessoryInformationWithSetupID:(id)arg1;	// IMP=0x00000000008b69af
- (id)pairedAccessoryInformationWithIdentifier:(id)arg1;	// IMP=0x00000000008b67dc
- (void)removePairedAccessoryInfoWithIdentifier:(id)arg1;	// IMP=0x00000000008b6711
- (void)resetPairedAccessories;	// IMP=0x00000000008b666f
- (void)removePairedAccessory:(id)arg1;	// IMP=0x00000000008b6594
- (void)addPairedAccessory:(id)arg1;	// IMP=0x00000000008b64b9
- (void)_removeBrowsingConnection:(id)arg1 error:(id)arg2;	// IMP=0x00000000008b620f
- (void)__addBrowsingConnection:(id)arg1;	// IMP=0x00000000008b5a66
- (void)__removeBrowsingObserver:(id)arg1 error:(id)arg2;	// IMP=0x00000000008b559e
- (_Bool)__isMediaAccessoryBrowsingRequested;	// IMP=0x00000000008b53b0
- (_Bool)__isAccessoryBrowsingRequested;	// IMP=0x00000000008b5368
- (void)__resetBrowsingConnections;	// IMP=0x00000000008b52c6
- (id)browsingConnections;	// IMP=0x00000000008b519a
@property _Bool internalDiscoveryRequest; // @synthesize internalDiscoveryRequest=_internalDiscoveryRequest;
- (void)_removeMediaAccessoryControlObserverMatchingConnection:(id)arg1;	// IMP=0x00000000008b4ea1
- (void)__addMediaAccessoryControlObserver:(id)arg1;	// IMP=0x00000000008b4c69
- (void)__removeMediaAccessoryControlObserver:(id)arg1;	// IMP=0x00000000008b4a0e
- (_Bool)hasClientRequestedMediaAccessoryControl:(id)arg1;	// IMP=0x00000000008b4973
- (void)resetMediaAccessoryControlConnections;	// IMP=0x00000000008b48d1
- (id)mediaAccessoryControlConnections;	// IMP=0x00000000008b47a5
- (id)dumpBrowsingConnections;	// IMP=0x00000000008b4370
- (void)_sendNewAccessoryData:(id)arg1 messageName:(id)arg2;	// IMP=0x00000000008b3ffe
- (void)_handleRemovedAccessory:(id)arg1;	// IMP=0x00000000008b3ec8
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x00000000008b3e17
- (void)_handleAddedAccessory:(id)arg1;	// IMP=0x00000000008b3cd4
- (void)handleAddedAccessory:(id)arg1;	// IMP=0x00000000008b3c23
@property(readonly, nonatomic) NSArray *deviceSetupMediaAccessories;
@property(readonly, nonatomic) NSArray *unassociatedMediaAccessories;
- (id)_unassociatedMediaAccessoryWithIdentifier:(id)arg1;	// IMP=0x00000000008b37f8
- (id)unassociatedAccessoriesForClientRequest:(id)arg1;	// IMP=0x00000000008b34e5
@property(readonly, copy) NSArray *unassociatedAccessories;
- (void)removeUnassociatedAccessory:(id)arg1;	// IMP=0x00000000008b3179
- (void)removeUnassociatedAccessoryWithIdentifier:(id)arg1;	// IMP=0x00000000008b2ee4
- (void)addUnassociatedAccessory:(id)arg1 forDeviceSetup:(_Bool)arg2;	// IMP=0x00000000008b2d35
- (void)_handleTestModeConfigRequest:(id)arg1;	// IMP=0x00000000008b2739
- (void)configureDemoBrowserWithDemoAccessories:(id)arg1 finalized:(_Bool)arg2;	// IMP=0x00000000008b257d
- (void)validateLinkTypes:(id)arg1;	// IMP=0x00000000008b2377
- (void)dealloc;	// IMP=0x00000000008b22cf
- (void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;	// IMP=0x00000000008b21b8
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;	// IMP=0x00000000008b20dc
- (void)retrieveCurrentStateForIdentifer:(id)arg1 stateNumber:(id *)arg2 isReachable:(_Bool *)arg3 linkQuality:(unsigned long long *)arg4 lastSeen:(id *)arg5;	// IMP=0x00000000008b204c
- (void)setQOS:(long long)arg1;	// IMP=0x00000000008b1fd0
- (void)configureAccessory:(id)arg1 trackState:(_Bool)arg2 connectionPriority:(_Bool)arg3;	// IMP=0x00000000008b1f11
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x00000000008b1e60
- (id)initWithMessageDispatcher:(id)arg1 injectedSettings:(id)arg2;	// IMP=0x00000000008b1660
- (id)initWithMessageDispatcher:(id)arg1;	// IMP=0x00000000008b15fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

