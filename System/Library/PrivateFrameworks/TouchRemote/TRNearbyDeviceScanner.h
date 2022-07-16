//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFDeviceDiscovery;
@protocol OS_dispatch_queue, TRNearbyDeviceScannerDelegate;

@interface TRNearbyDeviceScanner : NSObject
{
    id <TRNearbyDeviceScannerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_scannerQ;	// 32 = 0x20
    unsigned long long _requestedService;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00000000000182b2
- (void).cxx_destruct;	// IMP=0x00000000000197a2
@property unsigned long long requestedService; // @synthesize requestedService=_requestedService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *scannerQ; // @synthesize scannerQ=_scannerQ;
@property(retain, nonatomic) SFDeviceDiscovery *deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property __weak id <TRNearbyDeviceScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openSession:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001947c
- (void)_deviceChanged:(id)arg1;	// IMP=0x000000000001946a
- (void)_deviceFound:(id)arg1;	// IMP=0x000000000001921b
- (void)_handleInterruption;	// IMP=0x000000000001916a
- (void)_handleInvalidation;	// IMP=0x0000000000018fb6
- (void)_handleActivationWithError:(id)arg1;	// IMP=0x0000000000018cd7
- (void)stopScanning;	// IMP=0x000000000001893a
- (void)startScanningForDevicesWithService:(unsigned long long)arg1;	// IMP=0x000000000001832f
- (id)init;	// IMP=0x00000000000182cf

@end

