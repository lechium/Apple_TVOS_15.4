//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MXMSampleTimeSeries
{
    MXMSampleTimeSeries *_time;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000094a7
- (void)_appendAbsoluteTime:(unsigned long long)arg1;	// IMP=0x00000000000093d1
- (id)initWithTimeSeries:(double *)arg1 tag:(id)arg2 unit:(id)arg3 length:(unsigned long long)arg4;	// IMP=0x00000000000092e9
- (id)initWithContinuousTimeSeries:(unsigned long long *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000009162
- (id)initWithAbsoluteTimeSeries:(unsigned long long *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000009026
- (id)init;	// IMP=0x0000000000009010
- (id)timeIndex;	// IMP=0x0000000000008ff7

@end

