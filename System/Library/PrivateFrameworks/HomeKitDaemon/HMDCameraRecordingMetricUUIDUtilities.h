//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HMDCameraRecordingMetricUUIDUtilities : HMFObject
{
}

+ (id)ephemeralUUIDWithUUID:(id)arg1 forTimestamp:(unsigned long long)arg2 rotationScheduleDays:(unsigned long long)arg3;	// IMP=0x00000000005b0225
+ (id)currentEphemeralUUIDWithUUID:(id)arg1 rotationScheduleDays:(unsigned long long)arg2;	// IMP=0x00000000005b015f
+ (id)ephemeralUUIDWithUUID:(id)arg1 forTimestamp:(unsigned long long)arg2 rotationSchedule:(unsigned long long)arg3;	// IMP=0x00000000005b001f
+ (id)UUIDRotationSalt;	// IMP=0x00000000005affef

@end

