//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIStatisticsDistribution
{
}

- (void)recordTimingForObject:(id)arg1;	// IMP=0x0000000000f0ca14
- (void)cancelTimingForObject:(id)arg1;	// IMP=0x0000000000f0c9fd
- (void)startTimingForObject:(id)arg1;	// IMP=0x0000000000f0c96d
- (_Bool)isTimingForObject:(id)arg1;	// IMP=0x0000000000f0c93c
- (void)recordDistributionValue:(double)arg1;	// IMP=0x0000000000f0c92a
- (void)resetDistributionToValue:(double)arg1;	// IMP=0x0000000000f0c918
- (void)resetDistribution;	// IMP=0x0000000000f0c906

@end

