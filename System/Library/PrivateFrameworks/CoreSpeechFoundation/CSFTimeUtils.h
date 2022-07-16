//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSFTimeUtils : NSObject
{
}

+ (unsigned long long)hostTimeToNs:(unsigned long long)arg1;	// IMP=0x0000000000010f16
+ (unsigned long long)millisecondsToNs:(float)arg1;	// IMP=0x0000000000010ee1
+ (unsigned long long)secondsToNs:(float)arg1;	// IMP=0x0000000000010eb4
+ (unsigned long long)convertSampleCountToNs:(unsigned long long)arg1 sampleRate:(float)arg2;	// IMP=0x0000000000010e66
+ (_Bool)isReceivedTimeInterval:(double)arg1 matchCurrentTimeInterval:(double)arg2;	// IMP=0x0000000000010e45
+ (unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1;	// IMP=0x0000000000010e0e
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 sampleRate:(float)arg4;	// IMP=0x0000000000010d83
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 sampleRate:(float)arg4;	// IMP=0x0000000000010c82
+ (double)getHostClockFrequency;	// IMP=0x0000000000010c42
+ (double)hostTimeToTimeInterval:(unsigned long long)arg1;	// IMP=0x0000000000010bf5
+ (float)hostTimeToSeconds:(unsigned long long)arg1;	// IMP=0x0000000000010ba5
+ (unsigned long long)secondsToHostTime:(float)arg1;	// IMP=0x0000000000010b56

@end

