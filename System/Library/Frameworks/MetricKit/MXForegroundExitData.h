//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@interface MXForegroundExitData : NSObject <NSSecureCoding>
{
    unsigned long long _cumulativeNormalAppExitCount;	// 8 = 0x8
    unsigned long long _cumulativeMemoryResourceLimitExitCount;	// 16 = 0x10
    unsigned long long _cumulativeBadAccessExitCount;	// 24 = 0x18
    unsigned long long _cumulativeAbnormalExitCount;	// 32 = 0x20
    unsigned long long _cumulativeIllegalInstructionExitCount;	// 40 = 0x28
    unsigned long long _cumulativeAppWatchdogExitCount;	// 48 = 0x30
    unsigned long long _cumulativeCPUResourceLimitExitCount;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001698
@property(readonly) unsigned long long cumulativeCPUResourceLimitExitCount; // @synthesize cumulativeCPUResourceLimitExitCount=_cumulativeCPUResourceLimitExitCount;
@property(readonly) unsigned long long cumulativeAppWatchdogExitCount; // @synthesize cumulativeAppWatchdogExitCount=_cumulativeAppWatchdogExitCount;
@property(readonly) unsigned long long cumulativeIllegalInstructionExitCount; // @synthesize cumulativeIllegalInstructionExitCount=_cumulativeIllegalInstructionExitCount;
@property(readonly) unsigned long long cumulativeAbnormalExitCount; // @synthesize cumulativeAbnormalExitCount=_cumulativeAbnormalExitCount;
@property(readonly) unsigned long long cumulativeBadAccessExitCount; // @synthesize cumulativeBadAccessExitCount=_cumulativeBadAccessExitCount;
@property(readonly) unsigned long long cumulativeMemoryResourceLimitExitCount; // @synthesize cumulativeMemoryResourceLimitExitCount=_cumulativeMemoryResourceLimitExitCount;
@property(readonly) unsigned long long cumulativeNormalAppExitCount; // @synthesize cumulativeNormalAppExitCount=_cumulativeNormalAppExitCount;
- (id)toDictionary;	// IMP=0x0000000000001a7f
- (id)initWithNormalAppExitCount:(unsigned long long)arg1 withMemoryResourceLimitExitCount:(unsigned long long)arg2 withCPUResourceLimitExitCount:(unsigned long long)arg3 withBadAccessExitCount:(unsigned long long)arg4 withAbnormalExitCount:(unsigned long long)arg5 withIllegalInstructionExitCount:(unsigned long long)arg6 withAppWatchDogExitCount:(unsigned long long)arg7;	// IMP=0x0000000000001a09
- (id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 badAccessExitCount:(id)arg4 abnormalExitCount:(id)arg5 illegalInstructionExitCount:(id)arg6 appWatchDogExitCount:(id)arg7;	// IMP=0x000000000000186c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001771
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000016a0

@end

