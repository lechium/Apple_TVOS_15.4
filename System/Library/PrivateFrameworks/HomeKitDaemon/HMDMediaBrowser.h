//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHomeManager, HMDUnassociatedMediaAccessory, HMFTimer, NSArray, NSMutableSet, NSObject, NSString;
@protocol HMDMediaBrowserDataSource, HMDMediaBrowserDelegate, HMFLocking, OS_dispatch_queue;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSMutableSet *_accessoryAdvertisements;	// 16 = 0x10
    _Bool _discoverUnassociatedAccessories;	// 24 = 0x18
    _Bool _discoverAssociatedAccessories;	// 25 = 0x19
    _Bool _updateAvailableOutputDevices;	// 26 = 0x1a
    id <HMDMediaBrowserDelegate> _delegate;	// 32 = 0x20
    HMDHomeManager *_homeManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_clientQueue;	// 48 = 0x30
    void *_discoverySession;	// 56 = 0x38
    void *_discoverySessionCallbackToken;	// 64 = 0x40
    HMFTimer *_discoveryPollTimer;	// 72 = 0x48
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;	// 80 = 0x50
    NSMutableSet *_mediaEndpoints;	// 88 = 0x58
    id <HMDMediaBrowserDataSource> _dataSource;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x0000000000ab3b6a
+ (id)advertisementsFromOutputDevices:(struct __CFArray *)arg1;	// IMP=0x0000000000ab38d7
+ (id)shortDescription;	// IMP=0x0000000000ab38c5
- (void).cxx_destruct;	// IMP=0x0000000000ab01a5
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property __weak id <HMDMediaBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000ab00b8
- (void)deregisterAccessories:(id)arg1;	// IMP=0x0000000000ab0021
- (void)updateSessionsForAccessories:(id)arg1;	// IMP=0x0000000000aaff8a
- (void)registerAccessories:(id)arg1;	// IMP=0x0000000000aafef3
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;	// IMP=0x0000000000aafae1
- (id)dumpDescription;	// IMP=0x0000000000aaf8ba
- (void)stopDiscoveringUnassociatedAccessories;	// IMP=0x0000000000aaf85f
- (void)startDiscoveringUnassociatedAccessories;	// IMP=0x0000000000aaf804
- (void)stopDiscoveringAssociatedAccessories;	// IMP=0x0000000000aaf7a9
- (void)startDiscoveringAssociatedAccessories;	// IMP=0x0000000000aaf74e
@property(readonly, copy) NSArray *accessoryAdvertisements;
@property(readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)shortDescription;	// IMP=0x0000000000aaf04a
- (void)dealloc;	// IMP=0x0000000000aaee84
- (id)initWithHomeManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000aaec6c
- (id)initWithHomeManager:(id)arg1;	// IMP=0x0000000000aaec08

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
