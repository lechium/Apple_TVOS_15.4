//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class HMDAccessoryTransportReachabilityReport, NSDictionary, NSNumber, NSString;

@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    _Bool _accessoryBatteryPowered;	// 8 = 0x8
    _Bool _accessoryBridged;	// 9 = 0x9
    _Bool _batteryLow;	// 10 = 0xa
    _Bool _changed;	// 11 = 0xb
    _Bool _reachable;	// 12 = 0xc
    NSString *_accessoryCategory;	// 16 = 0x10
    NSString *_accessoryFirmwareVersion;	// 24 = 0x18
    NSString *_accessoryManufacturer;	// 32 = 0x20
    NSString *_accessoryModel;	// 40 = 0x28
    NSNumber *_accessoryNumber;	// 48 = 0x30
    long long _duration;	// 56 = 0x38
    HMDAccessoryTransportReachabilityReport *_transportReport;	// 64 = 0x40
}

+ (_Bool)submitEventWithHistogrammedCommonConfigurationDimensions;	// IMP=0x0000000000329fab
+ (id)eventWithReachable:(_Bool)arg1 changed:(_Bool)arg2 duration:(double)arg3 accessory:(id)arg4 transportReport:(id)arg5;	// IMP=0x0000000000329f1d
- (void).cxx_destruct;	// IMP=0x0000000000329ea8
@property(readonly, copy, nonatomic) HMDAccessoryTransportReachabilityReport *transportReport; // @synthesize transportReport=_transportReport;
@property(readonly, nonatomic) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(readonly, nonatomic) _Bool batteryLow; // @synthesize batteryLow=_batteryLow;
@property(readonly, copy, nonatomic) NSNumber *accessoryNumber; // @synthesize accessoryNumber=_accessoryNumber;
@property(readonly, copy, nonatomic) NSString *accessoryModel; // @synthesize accessoryModel=_accessoryModel;
@property(readonly, copy, nonatomic) NSString *accessoryManufacturer; // @synthesize accessoryManufacturer=_accessoryManufacturer;
@property(readonly, copy, nonatomic) NSString *accessoryFirmwareVersion; // @synthesize accessoryFirmwareVersion=_accessoryFirmwareVersion;
@property(readonly, copy, nonatomic) NSString *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(readonly, nonatomic) _Bool accessoryBridged; // @synthesize accessoryBridged=_accessoryBridged;
@property(readonly, nonatomic) _Bool accessoryBatteryPowered; // @synthesize accessoryBatteryPowered=_accessoryBatteryPowered;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)__initWithReachable:(_Bool)arg1 changed:(_Bool)arg2 duration:(double)arg3 accessory:(id)arg4 transportReport:(id)arg5;	// IMP=0x0000000000329647
- (id)init;	// IMP=0x000000000032959f

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
