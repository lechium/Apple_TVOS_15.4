//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCRateControlAlgorithm-Protocol.h>

@class NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmBase : NSObject <VCRateControlAlgorithm>
{
    struct VCRateControlAlgorithmConfig _config;	// 8 = 0x8
    VCRateControlMediaController *_mediaController;	// 672 = 0x2a0
    _Atomic _Bool _paused;	// 680 = 0x2a8
    double _pauseStartTime;	// 688 = 0x2b0
    int _state;	// 696 = 0x2b8
    int _rampUpStatus;	// 700 = 0x2bc
    int _rampDownStatus;	// 704 = 0x2c0
    int _currentTierIndex;	// 708 = 0x2c4
    int _previousTierIndex;	// 712 = 0x2c8
    double _targetBitrateContinuous;	// 720 = 0x2d0
    unsigned int _targetBitrate;	// 728 = 0x2d8
    unsigned int _actualBitrate;	// 732 = 0x2dc
    unsigned int _rateChangeCounter;	// 736 = 0x2e0
    unsigned int _rateControlCounter;	// 740 = 0x2e4
    double _rateControlTime;	// 744 = 0x2e8
    double _rampUpFrozenTime;	// 752 = 0x2f0
    _Bool _isCongested;	// 760 = 0x2f8
    _Bool _isNewRateSentOut;	// 761 = 0x2f9
    _Bool _isSendBitrateLimited;	// 762 = 0x2fa
    _Bool _isFirstInitialRampUpDone;	// 763 = 0x2fb
    unsigned int _consecutiveRampDown;	// 764 = 0x2fc
    double _lastTimeStartRampingDown;	// 768 = 0x300
    double _lastCongestionTime;	// 776 = 0x308
    double _lastRampDownTimeDueToFeedback;	// 784 = 0x310
    double _lastRampDownTimeDueToBaseband;	// 792 = 0x318
    unsigned int _remoteBandwidthEstimation;	// 800 = 0x320
    unsigned int _localBandwidthEstimation;	// 804 = 0x324
    double _lastNoOvershootBWEstimationTime;	// 808 = 0x328
    double _firstBelowNoRampUpBandwidthTime;	// 816 = 0x330
    _Bool _belowNoRampUpBandwidth;	// 824 = 0x338
    _Bool _isOvershoot;	// 825 = 0x339
    CDStruct_55dce769 _owrdList;	// 832 = 0x340
    _Bool _isOWRDListReady;	// 2480 = 0x9b0
    _Bool _isOWRDConstant;	// 2481 = 0x9b1
    double _owrd;	// 2488 = 0x9b8
    double _nowrd;	// 2496 = 0x9c0
    double _nowrdShort;	// 2504 = 0x9c8
    double _nowrdAcc;	// 2512 = 0x9d0
    double _lastOWRDChangeTime;	// 2520 = 0x9d8
    struct {
        double time;
        double packetLossRate;
        double packetLossRateVideo;
        _Bool isLossIncreasing;
    } _lossEventBuffer[64];	// 2528 = 0x9e0
    unsigned int _lossEventBufferIndex;	// 4576 = 0x11e0
    double _lastLossEventRampDownTime;	// 4584 = 0x11e8
    double _firstLossEventRampDownTime;	// 4592 = 0x11f0
    int _packetLossRateBadTrendCount;	// 4600 = 0x11f8
    unsigned int _lossEventBandwidthLimit;	// 4604 = 0x11fc
    unsigned int _lossEventBandwidthConfidence;	// 4608 = 0x1200
    unsigned int _mostBurstLoss;	// 4612 = 0x1204
    double _packetLossRate;	// 4616 = 0x1208
    double _previousPacketLossRate;	// 4624 = 0x1210
    double _packetLossRateThreshold;	// 4632 = 0x1218
    double _packetLossRateAvgLong;	// 4640 = 0x1220
    double _packetLossRateAvgLongPrevious;	// 4648 = 0x1228
    double _packetLossRateAudio;	// 4656 = 0x1230
    double _packetLossRateVideo;	// 4664 = 0x1238
    double _roundTripTime;	// 4672 = 0x1240
    double _worstRecentRoundTripTime;	// 4680 = 0x1248
    unsigned int _worstRecentBurstLoss;	// 4688 = 0x1250
    unsigned int _totalPacketReceived;	// 4692 = 0x1254
    _Bool _shouldConsiderVideoInLossEvent;	// 4696 = 0x1258
    void *_logDump;	// 4704 = 0x1260
    void *_logBasebandDump;	// 4712 = 0x1268
    _Bool _isPeriodicLoggingEnabled;	// 4720 = 0x1270
    _Bool _didMBLRampDown;	// 4721 = 0x1271
}

@property(readonly, nonatomic) _Bool isFirstInitialRampUpDone; // @synthesize isFirstInitialRampUpDone=_isFirstInitialRampUpDone;
@property(readonly, nonatomic) _Bool isSendBitrateLimited; // @synthesize isSendBitrateLimited=_isSendBitrateLimited;
@property(nonatomic) _Bool didMBLRampDown; // @synthesize didMBLRampDown=_didMBLRampDown;
@property(readonly, nonatomic) unsigned int actualBitrate; // @synthesize actualBitrate=_actualBitrate;
@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
@property(nonatomic) unsigned int localBandwidthEstimation; // @synthesize localBandwidthEstimation=_localBandwidthEstimation;
@property(readonly, nonatomic) _Bool isNewRateSentOut; // @synthesize isNewRateSentOut=_isNewRateSentOut;
@property(readonly, nonatomic) unsigned int worstRecentBurstLoss; // @synthesize worstRecentBurstLoss=_worstRecentBurstLoss;
@property(readonly, nonatomic) double worstRecentRoundTripTime; // @synthesize worstRecentRoundTripTime=_worstRecentRoundTripTime;
@property(readonly, nonatomic) double roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property(readonly, nonatomic) unsigned int totalPacketReceived; // @synthesize totalPacketReceived=_totalPacketReceived;
@property(readonly, nonatomic) double packetLossRateVideo; // @synthesize packetLossRateVideo=_packetLossRateVideo;
@property(readonly, nonatomic) double packetLossRateAudio; // @synthesize packetLossRateAudio=_packetLossRateAudio;
@property(readonly, nonatomic) double packetLossRate; // @synthesize packetLossRate=_packetLossRate;
@property(readonly, nonatomic) unsigned int mostBurstLoss; // @synthesize mostBurstLoss=_mostBurstLoss;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(readonly, nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool isCongested; // @synthesize isCongested=_isCongested;
@property(readonly, nonatomic) struct VCRateControlAlgorithmConfig config; // @synthesize config=_config;
- (void)updateCongestionStatusWhenRampDown:(double)arg1;	// IMP=0x00000000001a8223
- (void)updateCongestionStatusWhenRampUp;	// IMP=0x00000000001a81a3
- (_Bool)shouldRampDownDueToLossThreshold;	// IMP=0x00000000001a7f9a
- (_Bool)shouldRampDownDueToConsecutiveLoss;	// IMP=0x00000000001a7f4a
- (_Bool)shouldRampDownDueToLossEvent;	// IMP=0x00000000001a7eee
- (_Bool)shouldBlockRampUpDueToLossEventThreshold;	// IMP=0x00000000001a7dd6
- (_Bool)allowRampUpWithContinuousTargetBitrate;	// IMP=0x00000000001a7d0b
- (double)rampUpTargetBitrateContinuousWithBandwidthDiff:(int)arg1;	// IMP=0x00000000001a7cbf
- (void)resetLossEventBandwidthLimit;	// IMP=0x00000000001a7cae
- (void)updateLossEventBandwidthLimit:(unsigned int)arg1;	// IMP=0x00000000001a7bbe
- (void)resetLossEventBuffer;	// IMP=0x00000000001a7b91
- (double)lossEventOverThresholdRatio;	// IMP=0x00000000001a7ae5
- (int)lossEventIncreasingCount;	// IMP=0x00000000001a7aa5
- (void)updateLossEvent;	// IMP=0x00000000001a7999
- (_Bool)recentlyGoAboveRampUpBandwidth;	// IMP=0x00000000001a7926
- (_Bool)keepOvershootingRampDownBandwidth;	// IMP=0x00000000001a78ef
- (void)checkBandwidthOvershootWithRemoteBandwidthEstimation:(unsigned int)arg1;	// IMP=0x00000000001a77ef
- (void)stateEnter;	// IMP=0x00000000001a77d0
- (void)stateExit;	// IMP=0x00000000001a77ac
- (void)stateChangeTo:(int)arg1;	// IMP=0x00000000001a7758
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;	// IMP=0x00000000001a767e
- (unsigned short)getTimestampFromMicroTime:(double)arg1;	// IMP=0x00000000001a7665
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;	// IMP=0x00000000001a7639
- (void)logToDumpFilesWithString:(id)arg1;	// IMP=0x00000000001a7579
- (void)enableBasebandDump:(void *)arg1;	// IMP=0x00000000001a7567
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(_Bool)arg2;	// IMP=0x00000000001a754f
- (_Bool)doRateControlWithStatistics:(CDStruct_87b99198)arg1;	// IMP=0x00000000001a74ee
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;	// IMP=0x00000000001a748d
- (void)checkPaused;	// IMP=0x00000000001a7240
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)dealloc;	// IMP=0x00000000001a71c5
- (id)init;	// IMP=0x00000000001a7159

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

