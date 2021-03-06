//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, HMDNaturalLightingCurve, NSNotificationCenter, NSObject, NSString;
@protocol HMDLightProfileDataSource, OS_dispatch_queue;

@interface HMDHomeNaturalLightingContextUpdater : HMFObject <HMFLogging>
{
    _Bool _demoModeEnabled;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    id <HMDLightProfileDataSource> _dataSource;	// 40 = 0x28
    long long _curveMinimumBrightness;	// 48 = 0x30
    long long _curveMaximumBrightness;	// 56 = 0x38
    NSNotificationCenter *_notificationCenter;	// 64 = 0x40
    HMDNaturalLightingCurve *_curve;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0000000000a7f560
- (void).cxx_destruct;	// IMP=0x0000000000a7edd2
@property(readonly, getter=isDemoModeEnabled) _Bool demoModeEnabled; // @synthesize demoModeEnabled=_demoModeEnabled;
@property(copy) HMDNaturalLightingCurve *curve; // @synthesize curve=_curve;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property long long curveMaximumBrightness; // @synthesize curveMaximumBrightness=_curveMaximumBrightness;
@property long long curveMinimumBrightness; // @synthesize curveMinimumBrightness=_curveMinimumBrightness;
@property(readonly) id <HMDLightProfileDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)updateNaturalLightingContext;	// IMP=0x0000000000a7e776
- (long long)colorTemperatureForTransitionPoint:(id)arg1;	// IMP=0x0000000000a7e5c1
- (long long)timeOfDayForMinimumBrightnessTransitionPoint:(id)arg1 maximumBrighnessTransitionPoint:(id)arg2;	// IMP=0x0000000000a7e269
- (id)colorTemperatureTransitionPointsForMinimumBrightnessWithEncodeNaturalLightingCurve:(id)arg1;	// IMP=0x0000000000a7deca
- (id)colorTemperatureTransitionPointsForMaximumBrightnessWithEncodeNaturalLightingCurve:(id)arg1;	// IMP=0x0000000000a7db2b
- (_Bool)areEncodedBrightnessLevelTransitionPointsValid:(id)arg1;	// IMP=0x0000000000a7d782
- (void)initalizeCurve;	// IMP=0x0000000000a7c9bd
- (void)handleResidentDeviceUpdated:(id)arg1;	// IMP=0x0000000000a7c94c
- (void)configure;	// IMP=0x0000000000a7c80c
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 demoModeEnabled:(_Bool)arg3 logIdentifier:(id)arg4 notificationCenter:(id)arg5 dataSource:(id)arg6;	// IMP=0x0000000000a7c6de
- (id)initWithHome:(id)arg1 demoModeEnabled:(_Bool)arg2;	// IMP=0x0000000000a7c5ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

