//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ICNanoPairedDeviceStatusMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callBackQueue;	// 16 = 0x10
    NSMapTable *_observers;	// 24 = 0x18
    NSString *_pairingIDPropertyName;	// 32 = 0x20
    NSString *_pairedDeviceGUID;	// 40 = 0x28
    NSString *_pairedDeviceMediaGUID;	// 48 = 0x30
}

+ (id)sharedMonitor;	// IMP=0x000000000006bcbe
- (void).cxx_destruct;	// IMP=0x000000000006b9cd
- (id)_activePairedDevice;	// IMP=0x000000000006b91a
- (id)_allObservers;	// IMP=0x000000000006b861
@property(readonly, nonatomic, getter=isMediaSyncingSupported) _Bool mediaSyncingSupported;
@property(readonly, nonatomic) _Bool isInitialSyncComplete;
@property(readonly, copy, nonatomic) NSString *pairedDeviceMediaGUID;
@property(readonly, copy, nonatomic) NSString *pairedDeviceGUID;
@property(readonly, copy, nonatomic) NSArray *allPairedDevicePairingIDs;
@property(readonly, copy, nonatomic) NSUUID *pairedDevicePairingID;
@property(readonly, copy, nonatomic) NSUUID *activePairedDevicePairingID;
- (void)removeObserver:(id)arg1;	// IMP=0x000000000006b2f1
- (void)addObserver:(id)arg1;	// IMP=0x000000000006b266
- (void)dealloc;	// IMP=0x000000000006b237
- (id)_init;	// IMP=0x000000000006b140

@end

