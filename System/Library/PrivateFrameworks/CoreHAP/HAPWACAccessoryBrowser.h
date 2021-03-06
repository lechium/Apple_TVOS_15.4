//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HMFLogging-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class CUWiFiScanner, HMFTimer, NSDate, NSMutableSet, NSString;
@protocol HAPAirPlayAccessoryBrowserDelegate, HAPWACAccessoryBrowserDelegate;

@interface HAPWACAccessoryBrowser <HMFTimerDelegate, HMFLogging>
{
    NSString *_browsingIdentifier;	// 8 = 0x8
    NSDate *_browsingStartTime;	// 16 = 0x10
    id <HAPAirPlayAccessoryBrowserDelegate> _airplayDelegate;	// 24 = 0x18
    NSString *_scanning2Pt4SSID;	// 32 = 0x20
    CDUnknownBlockType _found2Pt4Completion;	// 40 = 0x28
    id <HAPWACAccessoryBrowserDelegate> _delegate;	// 48 = 0x30
    NSMutableSet *_foundUnconfiguredUnpairedAccessories;	// 56 = 0x38
    NSMutableSet *_foundUnconfiguredPairedAccessories;	// 64 = 0x40
    NSMutableSet *_found2Pt4Networks;	// 72 = 0x48
    CUWiFiScanner *_cuWiFiScanner;	// 80 = 0x50
    unsigned long long _state;	// 88 = 0x58
    HMFTimer *_backoffTimer;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00000000001b42df
- (void).cxx_destruct;	// IMP=0x00000000001b35dd
@property(readonly, nonatomic) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) CUWiFiScanner *cuWiFiScanner; // @synthesize cuWiFiScanner=_cuWiFiScanner;
@property(retain, nonatomic) NSMutableSet *found2Pt4Networks; // @synthesize found2Pt4Networks=_found2Pt4Networks;
@property(retain, nonatomic) NSMutableSet *foundUnconfiguredPairedAccessories; // @synthesize foundUnconfiguredPairedAccessories=_foundUnconfiguredPairedAccessories;
@property(retain, nonatomic) NSMutableSet *foundUnconfiguredUnpairedAccessories; // @synthesize foundUnconfiguredUnpairedAccessories=_foundUnconfiguredUnpairedAccessories;
@property(readonly, nonatomic) __weak id <HAPWACAccessoryBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType found2Pt4Completion; // @synthesize found2Pt4Completion=_found2Pt4Completion;
@property(retain, nonatomic) NSString *scanning2Pt4SSID; // @synthesize scanning2Pt4SSID=_scanning2Pt4SSID;
@property(nonatomic) __weak id <HAPAirPlayAccessoryBrowserDelegate> airplayDelegate; // @synthesize airplayDelegate=_airplayDelegate;
@property(retain, nonatomic) NSDate *browsingStartTime; // @synthesize browsingStartTime=_browsingStartTime;
@property(retain, nonatomic) NSString *browsingIdentifier; // @synthesize browsingIdentifier=_browsingIdentifier;
- (void)_reportFound2Pt4Network:(id)arg1;	// IMP=0x00000000001b317f
- (void)scan2Pt4APWithSSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b2fea
- (id)visible2Pt4Networks;	// IMP=0x00000000001b2fa2
- (id)_removeUnconfiguredWACDevice:(id)arg1;	// IMP=0x00000000001b2bcf
- (void)handleRemovedUnconfiguredWACDevice:(id)arg1;	// IMP=0x00000000001b2b1e
- (void)_handleChangeUnconfiguredPairedWACAccessory:(id)arg1;	// IMP=0x00000000001b27d6
- (void)_handleChangeUnconfiguredUnpairedWACAccessory:(id)arg1;	// IMP=0x00000000001b2330
- (void)handleChangeUnconfiguredWACDevice:(id)arg1;	// IMP=0x00000000001b227f
- (void)_handleUnconfiguredPairedWACDevice:(id)arg1;	// IMP=0x00000000001b2095
- (void)handleFoundUnconfiguredPairedWACDevice:(id)arg1;	// IMP=0x00000000001b1fe4
- (void)_handleNewUnconfiguredUnpairedWACDevice:(id)arg1;	// IMP=0x00000000001b1de7
- (void)handleFoundAPDevice:(id)arg1;	// IMP=0x00000000001b1d36
- (void)_addFoundUnconfiguredUnpairedWACDevice:(id)arg1;	// IMP=0x00000000001b1b8f
- (void)handleFoundUnconfiguredUnpairedWACDevice:(id)arg1;	// IMP=0x00000000001b1ade
- (void)_stopBrowsingForWACAccessories;	// IMP=0x00000000001b19df
- (void)stopDiscoveringAccessoryServers;	// IMP=0x00000000001b188d
- (void)_startBrowsingForWACAccessories;	// IMP=0x00000000001b1115
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;	// IMP=0x00000000001b0fae
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1;	// IMP=0x00000000001b0e52
- (void)startDiscoveringAccessoryServers;	// IMP=0x00000000001b0d00
- (void)_restartBrowsingWithAllNetworks;	// IMP=0x00000000001b0b97
- (void)_handleBrowsingBackOffTimerExpiry;	// IMP=0x00000000001b091b
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000001b05c4
- (void)_initWiFiScannerWithScanner:(id)arg1;	// IMP=0x00000000001b03e4
- (void)initWiFiScannerWithScanner:(id)arg1;	// IMP=0x00000000001b0333
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001b00b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

