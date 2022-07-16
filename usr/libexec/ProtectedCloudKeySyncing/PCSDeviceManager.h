//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, PCSDevice;
@protocol OS_dispatch_queue, PCSDeviceManagerDelegate;

@interface PCSDeviceManager : NSObject
{
    id <PCSDeviceManagerDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_devices;	// 16 = 0x10
    PCSDevice *_activePairedDevice;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x0020000000003e0f
- (void).cxx_destruct;	// IMP=0x0020000000004b2a
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain) PCSDevice *activePairedDevice; // @synthesize activePairedDevice=_activePairedDevice;
@property(readonly) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property __weak id <PCSDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSimulatedDevices:(id)arg1;	// IMP=0x00100000000047b1
@property(readonly) NSArray *allDevices;
- (id)deviceForPairingID:(id)arg1;	// IMP=0x00100000000042aa
- (id)deviceForIDSIdentifier:(id)arg1;	// IMP=0x0010000000004085
- (id)currentActivePairedDevice;	// IMP=0x0010000000003edb
- (id)init;	// IMP=0x0010000000003e64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
