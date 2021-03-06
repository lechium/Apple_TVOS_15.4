//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, NSMutableArray, NSMutableSet, NSString, WPAirPlaySolo;

@interface CLATVAirplayMonitor : CLIntersiloService
{
    _Bool _power;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    WPAirPlaySolo *_airplaySolo;	// 24 = 0x18
    CLTimer *_scanDeliveryDelayTimer;	// 32 = 0x20
    NSMutableArray *_bufferedDevices;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x0020000000307775
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000030775c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003076ff
@property(retain, nonatomic) NSMutableArray *bufferedDevices; // @synthesize bufferedDevices=_bufferedDevices;
@property(retain, nonatomic) CLTimer *scanDeliveryDelayTimer; // @synthesize scanDeliveryDelayTimer=_scanDeliveryDelayTimer;
@property(nonatomic) _Bool power; // @synthesize power=_power;
@property(retain, nonatomic) WPAirPlaySolo *airplaySolo; // @synthesize airplaySolo=_airplaySolo;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;	// IMP=0x001000000030876e
- (void)airPlaySoloStoppedScanning:(id)arg1;	// IMP=0x00100000003086bf
- (void)airPlaySoloStartedScanning:(id)arg1;	// IMP=0x0010000000308610
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;	// IMP=0x0010000000308123
- (void)airPlaySoloDidUpdateState:(id)arg1;	// IMP=0x00100000003080e9
- (void)sendBufferedScanNotifications;	// IMP=0x0010000000307fed
- (void)stopScan;	// IMP=0x0010000000307fba
- (void)startScan;	// IMP=0x0010000000307dc7
- (void)withClients:(CDUnknownBlockType)arg1;	// IMP=0x0010000000307caa
- (id)init;	// IMP=0x0010000000307c6d
- (void)getPowerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000307c45
- (void)stopMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x0010000000307bca
- (void)startMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x0010000000307b80
- (void)removeClient:(byref id)arg1;	// IMP=0x0010000000307b29
- (void)addClient:(byref id)arg1;	// IMP=0x0010000000307ad2
- (void)dealloc;	// IMP=0x0010000000307a94
- (void)releaseData;	// IMP=0x0010000000307a2a
- (void)endService;	// IMP=0x00100000003079ef
- (void)beginServiceWithAirPlaySolo:(id)arg1;	// IMP=0x0010000000307823
- (void)beginService;	// IMP=0x00100000003077d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

