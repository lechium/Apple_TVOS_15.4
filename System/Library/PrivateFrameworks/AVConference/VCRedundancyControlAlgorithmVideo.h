//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControlAlgorithm-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideo : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;	// 8 = 0x8
    double _redundancyInterval;	// 16 = 0x10
    double _packetLossPercentage;	// 24 = 0x18
    double _packetLossPercentageVideo;	// 32 = 0x20
    double _plrEnvelope;	// 40 = 0x28
    _Bool _isNetworkCongested;	// 48 = 0x30
    unsigned int _maxAllowedRedundancyPercentage;	// 52 = 0x34
    unsigned int _burstyLoss[8];	// 56 = 0x38
    unsigned int _burstyLossArraySize;	// 88 = 0x58
    unsigned int _burstyLossArrayIndex;	// 92 = 0x5c
    unsigned int _redundancyMode;	// 96 = 0x60
    unsigned char _mediaControlInfoFECFeedbackVersion;	// 100 = 0x64
    _Atomic _Bool _isRedundancyStrategyResetPending;	// 101 = 0x65
    struct OpaqueVCFECFeedbackAnalyzer *_feedbackAnalyzer;	// 104 = 0x68
    float _offChannelTimeRatio;	// 112 = 0x70
    _Bool _isNWConnectionEnabled;	// 116 = 0x74
    int _freezeReason;	// 120 = 0x78
    int _state;	// 124 = 0x7c
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
@property(nonatomic) _Bool isRedundancyStrategyResetPending;
- (CDStruct_d7e2e0ee)getFecLevelPerFrameSizeVector;	// IMP=0x0000000000046007
- (unsigned int)computeRedundancyWithBurstyLoss;	// IMP=0x0000000000045fbf
- (unsigned int)computeRedundancyWithLossPercentage;	// IMP=0x0000000000045d6d
- (void)updateBurstyLoss:(unsigned int)arg1;	// IMP=0x0000000000045ca5
- (void)processRCNetworkStatistics:(CDStruct_87b99198)arg1;	// IMP=0x000000000004591d
- (void)processNWConnectionStatistics:(CDStruct_87b99198)arg1;	// IMP=0x00000000000458a8
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_87b99198)arg1;	// IMP=0x000000000004587b
- (void)reset;	// IMP=0x00000000000457a6
- (void)checkForRedundancyFreeze:(CDStruct_87b99198)arg1;	// IMP=0x000000000004577a
- (void)stateFrozen:(CDStruct_87b99198)arg1;	// IMP=0x000000000004562e
- (void)stateRunning:(CDStruct_87b99198)arg1;	// IMP=0x00000000000454d6
- (CDStruct_9650830d)setupFeedbackAnalyzerConfig;	// IMP=0x00000000000452f5
- (void)dealloc;	// IMP=0x000000000004528b
- (id)initWithRedundancyControllerMode:(unsigned int)arg1 maxAllowedRedundancyPercentage:(unsigned int)arg2 mediaControlInfoFECFeedbackVersion:(unsigned char)arg3;	// IMP=0x000000000004510f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

