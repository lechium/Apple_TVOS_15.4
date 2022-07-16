//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDHome, HMDHomeManager, HMFTimer, NSDate, NSString;
@protocol HMDDeviceSetupTrackingInfo, HMMLogEventSubmitting;

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFTimerDelegate, HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _submitted;	// 12 = 0xc
    id <HMDDeviceSetupTrackingInfo> _trackingInfo;	// 16 = 0x10
    HMFTimer *_timer;	// 24 = 0x18
    id <HMMLogEventSubmitting> _dispatcher;	// 32 = 0x20
    HMDHomeManager *_homeManager;	// 40 = 0x28
    HMDHome *_home;	// 48 = 0x30
    NSDate *_firstSettingTime;	// 56 = 0x38
    NSDate *_languageSettingTime;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0000000000a476d4
- (void).cxx_destruct;	// IMP=0x0000000000a46e0a
@property(readonly) NSDate *languageSettingTime; // @synthesize languageSettingTime=_languageSettingTime;
@property(readonly) NSDate *firstSettingTime; // @synthesize firstSettingTime=_firstSettingTime;
@property(readonly) _Bool submitted;
@property(readonly) id <HMDDeviceSetupTrackingInfo> trackingInfo; // @synthesize trackingInfo=_trackingInfo;
- (id)logIdentifier;	// IMP=0x0000000000a46d3c
- (void)addHome:(id)arg1;	// IMP=0x0000000000a46d22
- (void)markLanguageSettingObserved;	// IMP=0x0000000000a46ca4
- (void)markFirstSettingObserved;	// IMP=0x0000000000a46c26
- (void)submit;	// IMP=0x0000000000a46c1a
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a46999
- (id)initWithTrackingInfo:(id)arg1 homeManager:(id)arg2;	// IMP=0x0000000000a468fb
- (id)initWithTrackingInfo:(id)arg1 homeManager:(id)arg2 logEventDispatcher:(id)arg3 timerFactory:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a467e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
