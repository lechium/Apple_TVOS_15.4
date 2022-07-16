//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber, SiriCoreWiFiManagerClient;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface SiriCoreNetworkManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;	// 24 = 0x18
    int _pathStatus;	// 32 = 0x20
    _Bool _pathUsesCellular;	// 36 = 0x24
    SiriCoreWiFiManagerClient *_wiFiManagerClient;	// 40 = 0x28
    _Bool _hasSymptomsBasedInstantCellQuality;	// 48 = 0x30
    _Bool _symptomsBasedInstantCellQualityIsGood;	// 49 = 0x31
    _Bool _hasSymptomsBasedInstantWiFiQuality;	// 50 = 0x32
    _Bool _symptomsBasedInstantWiFiQualityIsGood;	// 51 = 0x33
    _Bool _hasSymptomsBasedHistoricalCellQuality;	// 52 = 0x34
    _Bool _symptomsBasedHistoricalCellQualityIsGood;	// 53 = 0x35
    _Bool _hasSymptomsBasedHistoricalWiFiQuality;	// 54 = 0x36
    _Bool _symptomsBasedHistoricalWiFiQualityIsGood;	// 55 = 0x37
    _Bool _lastFetchInProgress;	// 56 = 0x38
    double _lastSuccessfulSymptomsFetch;	// 64 = 0x40
    NSNumber *_lastSignalStrength;	// 72 = 0x48
    unsigned long long _subscriptionCount;	// 80 = 0x50
}

+ (void)releaseDormancySuspendAssertion:(void *)arg1;	// IMP=0x00000000000035d1
+ (void)acquireDormancySuspendAssertion:(const void **)arg1;	// IMP=0x0000000000003323
+ (long long)connectionTypeForInterface:(id)arg1;	// IMP=0x00000000000030a9
+ (id)connectionTypeForInterfaceName:(id)arg1 isCellular:(_Bool)arg2;	// IMP=0x0000000000002fdb
+ (void)getCarrierName:(id *)arg1 signalStrength:(id *)arg2 subscriptionCount:(id *)arg3;	// IMP=0x0000000000002e99
+ (long long)connectionSubTypeForCellularInterface;	// IMP=0x0000000000002c6d
+ (void)_ifnameTypeForName:(char *)arg1 isWiFi:(_Bool *)arg2 isCellular:(_Bool *)arg3;	// IMP=0x0000000000002b47
+ (id)sharedInstance;	// IMP=0x0000000000001628
- (void).cxx_destruct;	// IMP=0x0000000000003691
- (_Bool)_getConnectionSuccessRate:(id)arg1 hasMetric:(_Bool *)arg2;	// IMP=0x0000000000003681
- (_Bool)_defaultWiFiLinkRecommendation;	// IMP=0x0000000000003674
- (_Bool)_defaultBTLinkRecommendation;	// IMP=0x000000000000366a
- (void)acquireWiFiAssertion:(long long)arg1;	// IMP=0x0000000000003283
- (void)releaseWiFiAssertion;	// IMP=0x000000000000321e
- (void)forceFastDormancy;	// IMP=0x000000000000313a
- (void)getSignalStrength:(id *)arg1 subscriptionCount:(unsigned long long *)arg2;	// IMP=0x0000000000002966
- (long long)_reportWiFiHistoricalQuality;	// IMP=0x0000000000002949
- (long long)_reportWiFiInstantQuality;	// IMP=0x000000000000292c
- (long long)_reportCellularHistoricalQuality;	// IMP=0x000000000000290f
- (long long)_reportCellularInstantQuality;	// IMP=0x00000000000028f2
- (void)getQualityReport:(CDUnknownBlockType)arg1;	// IMP=0x00000000000027af
- (long long)anyNetworkQuality;	// IMP=0x00000000000026da
- (long long)wifiNetworkQuality;	// IMP=0x000000000000262a
- (long long)cellularNetworkQuality;	// IMP=0x0000000000002523
- (void)getNetworkPerformanceFeed;	// IMP=0x0000000000002372
- (void)_getNetworkPerformanceFeed;	// IMP=0x000000000000236c
- (void)stopMonitoringNetwork;	// IMP=0x000000000000230b
- (void)_stopMonitoringNetwork;	// IMP=0x00000000000022d5
- (void)startMonitoringNetworkForHost:(id)arg1;	// IMP=0x0000000000001d20
- (void)_pathUpdated:(id)arg1;	// IMP=0x00000000000019e0
- (id)_wiFiManagerClient;	// IMP=0x00000000000019d8
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000018f5
- (void)addObserver:(id)arg1;	// IMP=0x0000000000001827
- (void)dealloc;	// IMP=0x000000000000176f
- (id)_init;	// IMP=0x000000000000168d

@end

