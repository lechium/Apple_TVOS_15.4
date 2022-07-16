//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;
@protocol CLAvengerScannerServiceProtocol;

@interface CLAvengerObservationReporterService : CLIntersiloService
{
    struct CLAvengerObservationReporterServiceStateContext _currentContext;	// 8 = 0x8
    long long _currentState;	// 16 = 0x10
    id <CLAvengerScannerServiceProtocol> _avengerScannerProxy;	// 24 = 0x18
    struct unique_ptr<CLAppMonitor_Type::Client, std::default_delete<CLAppMonitor_Type::Client>> _appMonitorClient;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x00200000005d0478
+ (id)getSilo;	// IMP=0x00100000005d041c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005d0403
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005d03a6
- (id).cxx_construct;	// IMP=0x00200000005d0dbb
- (void).cxx_destruct;	// IMP=0x00100000005d0d93
- (void)onAppMonitorNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00100000005d0b23
- (void)unregisterForAppMonitorNotification;	// IMP=0x00100000005d0a73
- (void)registerForAppMonitorNotification;	// IMP=0x00100000005d08ed
- (void)onAvengerAdvertisement:(id)arg1 address:(id)arg2 advertisementData:(id)arg3 status:(unsigned char)arg4 rssi:(long long)arg5 reserved:(id)arg6 channel:(id)arg7 reconciledInformation:(id)arg8;	// IMP=0x00100000005d08d0
- (void)didFetchCurrentScanParameters:(id)arg1;	// IMP=0x00100000005d08ca
- (void)onAggressiveScanStarted;	// IMP=0x00100000005d08c4
- (void)onAggressiveScanEnded;	// IMP=0x00100000005d08be
- (void)onAdvertisementBufferEmptied;	// IMP=0x00100000005d08b8
- (void)unregisterForAvengerScanner;	// IMP=0x00100000005d07cf
- (void)registerForAvengerScanner;	// IMP=0x00100000005d066c
- (long long)determineStateWithContext:(struct CLAvengerObservationReporterServiceStateContext)arg1;	// IMP=0x00100000005d065e
- (void)updateContext:(struct CLAvengerObservationReporterServiceStateContext)arg1;	// IMP=0x00100000005d0533
- (void)endService;	// IMP=0x00100000005d0505
- (void)beginService;	// IMP=0x00100000005d04bd
- (id)init;	// IMP=0x00100000005d0480

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

