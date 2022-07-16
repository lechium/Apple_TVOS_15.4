//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBatchLocationDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class CLLocation, CLRegion, HMDHome, HMDHomeLocationData, HMFMessageDispatcher, HMFTimer, HMFUnfairLock, NSDate, NSObject, NSSet, NSString, NSTimeZone, NSUUID, _HMDPendingRegionUpdate;
@protocol OS_dispatch_queue;

@interface HMDHomeLocationHandler : HMFObject <HMDBatchLocationDelegate, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding>
{
    CLLocation *_location;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
    NSString *_isoCountryCode;	// 24 = 0x18
    long long _regionStateAtHome;	// 32 = 0x20
    long long _regionStateNearbyHome;	// 40 = 0x28
    CLLocation *_homeLocationUsingHomeKitAlgorithm;	// 48 = 0x30
    CLLocation *_homeLocationUsingCoreRoutineLOI;	// 56 = 0x38
    NSDate *_locationUpdateTimestamp;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    HMFMessageDispatcher *_msgDispatcher;	// 80 = 0x50
    HMDHome *_home;	// 88 = 0x58
    long long _locationAuthorization;	// 96 = 0x60
    CLRegion *_regionAtHome;	// 104 = 0x68
    CLRegion *_regionNearbyHome;	// 112 = 0x70
    HMFTimer *_homeRegionUpdateTimer;	// 120 = 0x78
    HMFUnfairLock *_lock;	// 128 = 0x80
    _HMDPendingRegionUpdate *_pendingAtHomeRegionUpdate;	// 136 = 0x88
    _HMDPendingRegionUpdate *_pendingNearbyHomeRegionUpdate;	// 144 = 0x90
    double _coalesceRegionUpdateIntervalInSeconds;	// 152 = 0x98
}

+ (id)logCategory;	// IMP=0x000000000091b8c2
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000091b8ba
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x000000000091b8b2
- (void).cxx_destruct;	// IMP=0x000000000091acac
@property(nonatomic) double coalesceRegionUpdateIntervalInSeconds; // @synthesize coalesceRegionUpdateIntervalInSeconds=_coalesceRegionUpdateIntervalInSeconds;
@property(retain, nonatomic) _HMDPendingRegionUpdate *pendingNearbyHomeRegionUpdate; // @synthesize pendingNearbyHomeRegionUpdate=_pendingNearbyHomeRegionUpdate;
@property(retain, nonatomic) _HMDPendingRegionUpdate *pendingAtHomeRegionUpdate; // @synthesize pendingAtHomeRegionUpdate=_pendingAtHomeRegionUpdate;
@property(retain, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) HMFTimer *homeRegionUpdateTimer; // @synthesize homeRegionUpdateTimer=_homeRegionUpdateTimer;
@property(retain, nonatomic) CLRegion *regionNearbyHome; // @synthesize regionNearbyHome=_regionNearbyHome;
@property(retain, nonatomic) CLRegion *regionAtHome; // @synthesize regionAtHome=_regionAtHome;
@property(nonatomic) long long locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;
@property(retain, nonatomic) CLLocation *homeLocationUsingCoreRoutineLOI; // @synthesize homeLocationUsingCoreRoutineLOI=_homeLocationUsingCoreRoutineLOI;
@property(retain, nonatomic) CLLocation *homeLocationUsingHomeKitAlgorithm; // @synthesize homeLocationUsingHomeKitAlgorithm=_homeLocationUsingHomeKitAlgorithm;
@property(nonatomic) long long regionStateNearbyHome; // @synthesize regionStateNearbyHome=_regionStateNearbyHome;
@property(nonatomic) long long regionStateAtHome; // @synthesize regionStateAtHome=_regionStateAtHome;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (long long)__getNearByHomeCalculatedState;	// IMP=0x000000000091a9dd
- (long long)__getAtHomeCalculatedState;	// IMP=0x000000000091a9cb
- (void)__simulateNearByHomeRegionState:(long long)arg1;	// IMP=0x000000000091a97a
- (void)__simulateAtHomeRegionState:(long long)arg1;	// IMP=0x000000000091a929
- (id)__initForUnitTesting:(double)arg1 home:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 location:(id)arg5;	// IMP=0x000000000091a82a
- (id)logIdentifier;	// IMP=0x000000000091a773
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000091a65b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000091a4fb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x000000000091a480
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_processPendingRegionStateUpdates;	// IMP=0x0000000000919ab5
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000009199cd
- (void)coalesceRegionUpdateState:(long long)arg1 forRegion:(id)arg2;	// IMP=0x00000000009194a6
- (_Bool)updateRegionStateFromLocation:(id)arg1;	// IMP=0x000000000091905a
- (_Bool)calculateAndUpdateRegionState:(long long)arg1;	// IMP=0x0000000000918e7d
- (void)getReachableIPAccessory:(unsigned long long *)arg1 btleAccessory:(unsigned long long *)arg2 mediaAccessory:(unsigned long long *)arg3;	// IMP=0x0000000000918e1d
- (void)didDetermineState:(long long)arg1 forRegion:(id)arg2;	// IMP=0x0000000000918d66
- (void)didDetermineBatchLocation:(id)arg1;	// IMP=0x0000000000918cb5
- (void)didDetermineLocation:(id)arg1;	// IMP=0x0000000000918c04
- (void)updateHomeLocationFromCoreRoutine;	// IMP=0x0000000000918bfe
- (_Bool)isDate:(id)arg1 laterThanDate:(id)arg2;	// IMP=0x0000000000918a6f
- (_Bool)isLocation:(id)arg1 closeToLocation:(id)arg2;	// IMP=0x0000000000918762
@property(readonly, nonatomic) HMDHomeLocationData *locationData;
- (void)_sendLocationUpdate;	// IMP=0x00000000009184e3
- (_Bool)isNewHomeLocationTooCloseToPreviousLocation:(id)arg1 newLocation:(id)arg2;	// IMP=0x000000000091838a
- (void)runTransactionWithLocation:(id)arg1 updatedTime:(id)arg2 source:(long long)arg3;	// IMP=0x0000000000917a4a
- (_Bool)shouldUpdateLocationFromLocationData:(id)arg1;	// IMP=0x0000000000917883
- (id)_handleHomeLocationDataForHH2:(id)arg1 fromMessage:(id)arg2;	// IMP=0x0000000000917421
- (id)_handleHomeLocationData:(id)arg1 message:(id)arg2;	// IMP=0x000000000091683c
- (void)_updateTimeZone:(id)arg1;	// IMP=0x0000000000916743
- (void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)arg1;	// IMP=0x00000000009162fd
- (_Bool)_needToExtractBatchLocations;	// IMP=0x0000000000916026
- (_Bool)_canExtractBatchLocations;	// IMP=0x0000000000915e65
- (void)accessoriesBecomeUnreachable;	// IMP=0x0000000000915d9e
- (void)accessoriesBecomeReachable;	// IMP=0x0000000000915cd7
- (void)updateHomeLocation;	// IMP=0x0000000000915b7c
- (void)_handleRetrieveLocation:(id)arg1;	// IMP=0x0000000000915855
- (void)_handleLocationAuthorization:(long long)arg1;	// IMP=0x00000000009156e5
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;	// IMP=0x00000000009155c1
- (void)_registerForRegionUpdate;	// IMP=0x00000000009155bb
- (void)_registerForMessages;	// IMP=0x000000000091548a
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x000000000091524b
- (void)dealloc;	// IMP=0x00000000009151dd
- (id)init;	// IMP=0x0000000000915185
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

