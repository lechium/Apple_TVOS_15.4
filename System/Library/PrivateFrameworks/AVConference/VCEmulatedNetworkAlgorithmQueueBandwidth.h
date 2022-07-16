//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCEmulatedNetworkAlgorithm-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject <VCEmulatedNetworkAlgorithm>
{
    NSDictionary *_policies;	// 8 = 0x8
    double _expectedProcessEndTime;	// 16 = 0x10
    unsigned int _packetCountInNetworkQueue;	// 24 = 0x18
    unsigned int _networkQueueServiceRate;	// 28 = 0x1c
    unsigned int _networkQueueServiceRateMean;	// 32 = 0x20
    unsigned int _networkQueueServiceRateStdDev;	// 36 = 0x24
    int _currentIndexForServiceRate;	// 40 = 0x28
    int _currentIndexForServiceRateDistribution;	// 44 = 0x2c
    double _lastNetworkQueueServiceRateLoadTime;	// 48 = 0x30
    double _lastNetworkQueueServiceRateDistributionLoadTime;	// 56 = 0x38
}

@property unsigned int packetCountInNetworkQueue; // @synthesize packetCountInNetworkQueue=_packetCountInNetworkQueue;
@property(readonly, nonatomic) double expectedProcessEndTime; // @synthesize expectedProcessEndTime=_expectedProcessEndTime;
- (void)process:(id)arg1;	// IMP=0x000000000005266e
- (double)computeNetworkServiceRate;	// IMP=0x0000000000052596
- (void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;	// IMP=0x0000000000052322
- (id)init;	// IMP=0x00000000000522c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

