//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmSparseNOWRD
{
    double _pauseStartTime;	// 4728 = 0x1278
    unsigned short _previousTimestamp;	// 4736 = 0x1280
    unsigned int _timestampWrapAroundCounter;	// 4740 = 0x1284
    double _statisticsArrivalTime;	// 4744 = 0x1288
    double _previousStatisticsArrivalTime;	// 4752 = 0x1290
    double _lastCongestionTime;	// 4760 = 0x1298
    double _lastRampUpTime;	// 4768 = 0x12a0
    double _lastAllowRampUpTime;	// 4776 = 0x12a8
    _Bool _isFirstTimestampArrived;	// 4784 = 0x12b0
    unsigned int _actualSendBitrate;	// 4788 = 0x12b4
    unsigned int _instantBitrate;	// 4792 = 0x12b8
    unsigned int _expectedBitrate;	// 4796 = 0x12bc
    int _recentTierWindow[256];	// 4800 = 0x12c0
    unsigned int _recentTierWindowSize;	// 5824 = 0x16c0
    unsigned int _recentTierWindowIndex;	// 5828 = 0x16c4
    unsigned int _totalTierNumbersInWindow;	// 5832 = 0x16c8
    double _recentAverageTier;	// 5840 = 0x16d0
    double _lastTimeDetectNoOscillation;	// 5848 = 0x16d8
    _Bool _isTargetBitrateOscillating;	// 5856 = 0x16e0
    int _deviationChangeCount;	// 5860 = 0x16e4
    unsigned int _totalPacketSent;	// 5864 = 0x16e8
    unsigned int _roundTripTimeTick;	// 5868 = 0x16ec
    double _averageRoundTripTime;	// 5872 = 0x16f0
    double _basebandNotificationArrivalTime;	// 5880 = 0x16f8
    unsigned int _basebandAverageBitrate;	// 5888 = 0x1700
    unsigned int _basebandTotalQueueDepth;	// 5892 = 0x1704
    double _basebandExpectedQueuingDelay;	// 5896 = 0x1708
    double _basebandNormalizedBDCD;	// 5904 = 0x1710
    double _basebandNormalizedQueuingDelay;	// 5912 = 0x1718
    _Bool _isWaitingForBasebandRampDown;	// 5920 = 0x1720
    double _lastBasebandRampDownTime;	// 5928 = 0x1728
    double _lastHighNBDCDTime;	// 5936 = 0x1730
    double _lastEmergencyBasebandRampDownTime;	// 5944 = 0x1738
    int _basebandAdditionalTiersForRampUp;	// 5952 = 0x1740
    _Bool _basebandAdaptationEnabled;	// 5956 = 0x1744
}

- (void)printRateControlInfoToLogDump;	// IMP=0x0000000000055007
- (void)resetRampingStatus;	// IMP=0x0000000000054fe5
- (void)resetOscillationDetection;	// IMP=0x0000000000054fa4
- (int)countDeviationChangeInTierWindow;	// IMP=0x0000000000054ef6
- (_Bool)updateRecentTierWindow;	// IMP=0x0000000000054e5a
- (void)checkTargetBitrateOscillation;	// IMP=0x0000000000054de0
- (void)checkActualBitrates;	// IMP=0x0000000000054d69
- (void)updateLastEmergencyBasebandRampDownTimeWithTierIndex:(int)arg1;	// IMP=0x0000000000054d38
- (int)rampDownTierDueToBaseband;	// IMP=0x0000000000054c1d
- (int)rampDownTier;	// IMP=0x0000000000054b1f
- (int)rampUpTier;	// IMP=0x0000000000054994
- (_Bool)shouldRampUpDueToBaseband;	// IMP=0x000000000005492b
- (_Bool)shouldUnblockRampUpAfterTimeOut;	// IMP=0x00000000000548b2
- (_Bool)shouldRampDownDueToBaseband;	// IMP=0x00000000000547c5
- (_Bool)shouldRampDown;	// IMP=0x000000000005457a
- (_Bool)shouldRampUp;	// IMP=0x00000000000542d9
- (_Bool)shouldBlockRampUpDueToRecentLossEvent;	// IMP=0x000000000005422d
- (void)checkCongestionStatus;	// IMP=0x00000000000541d8
- (_Bool)noServerStatsActivityDetected;	// IMP=0x0000000000054170
- (_Bool)doRateControlWithBasebandStatistics:(CDStruct_87b99198)arg1;	// IMP=0x0000000000053ef4
- (_Bool)doRateControlWithVCRCStatistics:(CDStruct_87b99198)arg1;	// IMP=0x00000000000537ca
- (_Bool)doRateControlWithStatistics:(CDStruct_87b99198)arg1;	// IMP=0x0000000000053735
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;	// IMP=0x00000000000534b4
- (id)init;	// IMP=0x0000000000053434

@end

