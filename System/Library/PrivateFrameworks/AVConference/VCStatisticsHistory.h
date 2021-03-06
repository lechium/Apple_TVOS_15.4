//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatisticsHistory : NSObject
{
    struct VCStatisticsStatsHistoryElement _statsHistory[500];	// 8 = 0x8
    int _statsHistorySize;	// 32008 = 0x7d08
    int _currentStatsHistoryIndex;	// 32012 = 0x7d0c
    struct VCStatisticsStatsHistoryElement _lastStats;	// 32016 = 0x7d10
    unsigned char _currentLinkID;	// 32080 = 0x7d50
    double _lastHistoryNotEnoughLogTime;	// 32088 = 0x7d58
    struct VCStatisticsSendHistoryElement *_sendHistory;	// 32096 = 0x7d60
}

- (void)clearSendHistory;	// IMP=0x0000000000353dec
- (void)resetHistory;	// IMP=0x0000000000353d07
- (_Bool)handleWrappedAroundByteCountForStats:(struct VCStatisticsStatsHistoryElement *)arg1;	// IMP=0x0000000000353b28
- (_Bool)getStatsHistoryElementIndex:(int *)arg1 time:(double)arg2 inMostRecentDuration:(double)arg3;	// IMP=0x000000000035392e
- (_Bool)isStatsElementOutOfOrder:(struct VCStatisticsStatsHistoryElement)arg1;	// IMP=0x00000000003538f1
- (double)getRoundTripTimeWithPacketId:(unsigned int)arg1 time:(double)arg2;	// IMP=0x00000000003538b3
- (struct VCStatisticsSendHistoryElement *)getSendHistoryElementWithPacketId:(unsigned int)arg1;	// IMP=0x0000000000353779
- (void)addAndPruneSendHistory:(struct VCStatisticsSendHistoryElement *)arg1 upToTime:(double)arg2;	// IMP=0x00000000003535e4
- (int)getBurstyLossAtTime:(double)arg1 inMostRecentDuration:(double)arg2 withPercentile:(double)arg3;	// IMP=0x000000000035343d
- (double)getServerStatsBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2;	// IMP=0x0000000000353294
- (double)getReceivingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2;	// IMP=0x00000000003530eb
- (double)getSendingBitrateAtTime:(double)arg1 inMostRecentDuration:(double)arg2;	// IMP=0x0000000000352f42
- (double)getPacketLossRateAtTime:(double)arg1 inMostRecentDuration:(double)arg2;	// IMP=0x0000000000352a8d
- (void)addStatsHistory:(struct VCStatisticsStatsHistoryElement)arg1;	// IMP=0x000000000035297a
- (void)dealloc;	// IMP=0x0000000000352919

@end

