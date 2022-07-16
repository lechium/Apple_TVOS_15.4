//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MXMMetric, MXMProbe;

@interface MXMProxyMetric
{
    MXMMetric *__underlyingMetric;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003eaa
- (void).cxx_destruct;	// IMP=0x00000000000044db
@property(readonly, retain) MXMMetric *_underlyingMetric; // @synthesize _underlyingMetric=__underlyingMetric;
- (void)didStopAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 stopDate:(id)arg3;	// IMP=0x000000000000441c
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;	// IMP=0x000000000000437b
- (void)willStop;	// IMP=0x000000000000430e
- (void)didStartAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 startDate:(id)arg3;	// IMP=0x0000000000004265
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;	// IMP=0x00000000000041c4
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;	// IMP=0x000000000000414d
- (_Bool)prepareWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000040a6
- (id)_constructProbe;	// IMP=0x0000000000004045
- (_Bool)_shouldConstructProbe;	// IMP=0x000000000000403d
- (_Bool)_shouldNeverWrapInProxy;	// IMP=0x0000000000004035
- (_Bool)_shouldAlwaysWrapInProxy;	// IMP=0x000000000000402d
- (unsigned long long)_sampleMode;	// IMP=0x0000000000003f40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003eb2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003e0f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003d74
@property(readonly, copy) MXMProbe *_remoteProbe;
@property(readonly, copy) MXMMetric *metric;
- (id)initWithMetric:(id)arg1;	// IMP=0x0000000000003b15

@end
