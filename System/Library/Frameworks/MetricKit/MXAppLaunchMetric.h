//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MXHistogram;

@interface MXAppLaunchMetric
{
    MXHistogram *_histogrammedTimeToFirstDraw;	// 8 = 0x8
    MXHistogram *_histogrammedApplicationResumeTime;	// 16 = 0x10
    MXHistogram *_histogrammedOptimizedTimeToFirstDraw;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000087f9
- (void).cxx_destruct;	// IMP=0x0000000000008b0f
@property(readonly) MXHistogram *histogrammedOptimizedTimeToFirstDraw; // @synthesize histogrammedOptimizedTimeToFirstDraw=_histogrammedOptimizedTimeToFirstDraw;
@property(readonly) MXHistogram *histogrammedApplicationResumeTime; // @synthesize histogrammedApplicationResumeTime=_histogrammedApplicationResumeTime;
@property(readonly) MXHistogram *histogrammedTimeToFirstDraw; // @synthesize histogrammedTimeToFirstDraw=_histogrammedTimeToFirstDraw;
- (id)toDictionary;	// IMP=0x00000000000089bc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008897
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008801
- (id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2 withActivationTimeData:(id)arg3;	// IMP=0x000000000000869e
- (id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2;	// IMP=0x000000000000859d

@end

