//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, AFContextDonationService, AFNotifyObserver, AFWatchdogTimer, NSArray, NSDate, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ADDeviceProximityManager : NSObject
{
    NSMutableDictionary *_proximityObservations;	// 8 = 0x8
    NSMutableDictionary *_timersByDeviceIDPair;	// 16 = 0x10
    NSArray *_cachedAFProximityRelativeToLocalDevice;	// 24 = 0x18
    _Bool _localIsCollector;	// 32 = 0x20
    NSString *_localDeviceIDSIdentifier;	// 40 = 0x28
    AFContextDonationService *_donationService;	// 48 = 0x30
    ADDeviceCircleManager *_deviceCircleManager;	// 56 = 0x38
    AFWatchdogTimer *_proximityScanningTimer;	// 64 = 0x40
    NSDate *_lastProximityScan;	// 72 = 0x48
    AFNotifyObserver *_heardVoiceTriggerObserver;	// 80 = 0x50
    AFNotifyObserver *_voiceTriggerFirstPassObserver;	// 88 = 0x58
    NSDate *_currentVoiceTriggerExpirationDate;	// 96 = 0x60
    NSUUID *_currentRequestInfoUUID;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
}

+ (id)sharedManager;	// IMP=0x002000000013bbbb
- (void).cxx_destruct;	// IMP=0x002000000013dd6b
- (id)_queue;	// IMP=0x001000000013dd5d
- (void)getRedactedContextForContextSnapshot:(id)arg1 metadata:(id)arg2 privacyPolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000013dd49
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;	// IMP=0x001000000013d7e1
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000013d731
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000013d72b
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000013d666
- (void)contextCollectorChangedToDevicesWithIdentifiers:(id)arg1 localDeviceIsCollector:(_Bool)arg2;	// IMP=0x001000000013d608
- (void)_getAggregatedProximityObservationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000013d47c
- (void)getDeviceProximityRelativeToLocalDeviceWithDeviceContexts:(id)arg1 includesAllReachableDevices:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013c2ef
- (void)getDeviceProximityRelativeToLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000013c16b
- (void)_stopScanning;	// IMP=0x001000000013c121
- (void)performProximityScan;	// IMP=0x001000000013c0c7
- (id)_initWithQueue:(id)arg1 donationService:(id)arg2 deviceCircleManager:(id)arg3;	// IMP=0x001000000013bcc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

