//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPAccessoryServerNotification-Protocol.h>
#import <CoreHAP/HAPPowerManagerProtocol-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAPPowerManager, HAPWACAccessoryBrowser, HMFTimer, NSArray, NSMutableSet, NSObject, NSString;
@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserIP <HMFTimerDelegate, HAPPowerManagerProtocol, HAPAccessoryServerNotification>
{
    struct BonjourBrowser *_bonjourBrowser;	// 16 = 0x10
    NSMutableSet *_discoveredAccessoryServers;	// 24 = 0x18
    id <HAPAccessoryServerBrowserDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    NSMutableSet *_pendingBonjourEvents;	// 48 = 0x30
    HMFTimer *_bonjourEventTimer;	// 56 = 0x38
    HAPWACAccessoryBrowser *_hapWACBrowser;	// 64 = 0x40
    HAPPowerManager *_powerManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000f9f4f
@property(retain, nonatomic) HAPPowerManager *powerManager; // @synthesize powerManager=_powerManager;
@property(retain, nonatomic) HAPWACAccessoryBrowser *hapWACBrowser; // @synthesize hapWACBrowser=_hapWACBrowser;
@property(retain, nonatomic) HMFTimer *bonjourEventTimer; // @synthesize bonjourEventTimer=_bonjourEventTimer;
@property(retain, nonatomic) NSMutableSet *pendingBonjourEvents; // @synthesize pendingBonjourEvents=_pendingBonjourEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServers; // @synthesize discoveredAccessoryServers=_discoveredAccessoryServers;
- (void)unitTest_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;	// IMP=0x00000000000f9e32
- (id)serverWithIdentifier:(id)arg1;	// IMP=0x00000000000f9c5f
- (void)_timerDidExpire:(id)arg1;	// IMP=0x00000000000f973b
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000000f969d
- (void)devicePowerStateChanged:(unsigned long long)arg1;	// IMP=0x00000000000f9602
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(_Bool)arg2;	// IMP=0x00000000000f90db
- (void)processPendingBonjourRemoveEventsForDeviceID:(id)arg1;	// IMP=0x00000000000f902a
- (int)_processPendingBonjourEvent:(id)arg1;	// IMP=0x00000000000f9013
- (void)_pendBonjourEvent:(id)arg1;	// IMP=0x00000000000f8f3d
- (void)_pendBonjourRemoveEvent:(id)arg1;	// IMP=0x00000000000f89eb
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;	// IMP=0x00000000000f893f
- (void)_setReachability:(_Bool)arg1 forServer:(id)arg2;	// IMP=0x00000000000f87fe
- (void)_invalidateAccessoryServers:(_Bool)arg1;	// IMP=0x00000000000f85e5
- (int)_server:(id *)arg1 forBonjourDevice:(id)arg2;	// IMP=0x00000000000f8300
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;	// IMP=0x00000000000f80d4
- (void)indicateNotificationFromServer:(id)arg1 notifyType:(unsigned long long)arg2 withDictionary:(id)arg3;	// IMP=0x00000000000f7fec
- (void)_doReachabilityUpdateForServer:(id)arg1 withDictionary:(id)arg2;	// IMP=0x00000000000f7d59
- (void)_invalidateAndRemoveAccessoryServer:(id)arg1;	// IMP=0x00000000000f7aa1
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;	// IMP=0x00000000000f765f
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;	// IMP=0x00000000000f7110
- (void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f6d75
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f6c6b
- (void)processPendingBonjourRemoveEvents:(id)arg1;	// IMP=0x00000000000f6bba
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;	// IMP=0x00000000000f6b09
- (void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00000000000f6b03
- (id)wacBrowser;	// IMP=0x00000000000f6af1
- (id)visible2Pt4Networks;	// IMP=0x00000000000f6aa1
- (void)stopDiscoveringWACAccessoryServersWithInvalidation:(_Bool)arg1;	// IMP=0x00000000000f6a9b
- (void)stopDiscoveringAccessoryServers;	// IMP=0x00000000000f6a2a
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1;	// IMP=0x00000000000f6a24
- (void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1;	// IMP=0x00000000000f6a1e
- (void)startDiscoveringWACAccessoryServers;	// IMP=0x00000000000f6a18
- (void)startDiscoveringAccessoryServers;	// IMP=0x00000000000f69a7
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000f68cb
- (int)_initializeAndStartBonjourBrowser;	// IMP=0x00000000000f67b6
- (long long)linkType;	// IMP=0x00000000000f67ab
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000f6680

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

