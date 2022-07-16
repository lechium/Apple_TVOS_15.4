//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSNumber;

@interface HMINMSConfiguration : HMFObject
{
    NSDictionary *_thresholdWithLabels;	// 8 = 0x8
    NSDictionary *_metricWithLabels;	// 16 = 0x10
    NSNumber *_thresholdDefault;	// 24 = 0x18
    NSNumber *_metricDefault;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000032dd0
@property(readonly) NSNumber *metricDefault; // @synthesize metricDefault=_metricDefault;
@property(readonly) NSNumber *thresholdDefault; // @synthesize thresholdDefault=_thresholdDefault;
@property(readonly) NSDictionary *metricWithLabels; // @synthesize metricWithLabels=_metricWithLabels;
@property(readonly) NSDictionary *thresholdWithLabels; // @synthesize thresholdWithLabels=_thresholdWithLabels;
- (long long)metricForLabel:(id)arg1;	// IMP=0x0000000000032c64
- (id)thresholdForLabel:(id)arg1;	// IMP=0x0000000000032bb8
- (id)initWithThresholdWithLabels:(id)arg1 metricWithLabels:(id)arg2 thresholdDefault:(id)arg3 metricDefault:(id)arg4;	// IMP=0x0000000000032ac1

@end
