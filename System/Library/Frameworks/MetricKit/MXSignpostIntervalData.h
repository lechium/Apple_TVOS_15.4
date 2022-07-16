//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@class MXAverage, MXHistogram, NSMeasurement, NSMeasurementFormatter;

@interface MXSignpostIntervalData : NSObject <NSSecureCoding>
{
    MXHistogram *_histogrammedSignpostDuration;	// 8 = 0x8
    NSMeasurement *_cumulativeCPUTime;	// 16 = 0x10
    MXAverage *_averageMemory;	// 24 = 0x18
    NSMeasurement *_cumulativeLogicalWrites;	// 32 = 0x20
    NSMeasurement *_cumulativeHitchTimeRatio;	// 40 = 0x28
    NSMeasurementFormatter *_measurementFormatter;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007313
- (void).cxx_destruct;	// IMP=0x00000000000078bb
@property(retain) NSMeasurementFormatter *measurementFormatter; // @synthesize measurementFormatter=_measurementFormatter;
@property(readonly) NSMeasurement *cumulativeHitchTimeRatio; // @synthesize cumulativeHitchTimeRatio=_cumulativeHitchTimeRatio;
@property(readonly) NSMeasurement *cumulativeLogicalWrites; // @synthesize cumulativeLogicalWrites=_cumulativeLogicalWrites;
@property(readonly) MXAverage *averageMemory; // @synthesize averageMemory=_averageMemory;
@property(readonly) NSMeasurement *cumulativeCPUTime; // @synthesize cumulativeCPUTime=_cumulativeCPUTime;
@property(readonly) MXHistogram *histogrammedSignpostDuration; // @synthesize histogrammedSignpostDuration=_histogrammedSignpostDuration;
- (id)toDictionary;	// IMP=0x00000000000075dd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000073c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000731b
- (id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withPeakMemory:(id)arg3 withAverageMemory:(id)arg4 withCumulativeLogicalWrites:(id)arg5;	// IMP=0x00000000000072fa
- (id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withAverageMemory:(id)arg3 withCumulativeLogicalWrites:(id)arg4 withCumulativeHitchTimeRatio:(id)arg5;	// IMP=0x00000000000071db
- (id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withAverageMemory:(id)arg3 withCumulativeLogicalWrites:(id)arg4;	// IMP=0x0000000000006ff3

@end

