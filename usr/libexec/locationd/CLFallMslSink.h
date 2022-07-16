//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLFallMslSink : NSObject
{
    struct list<CMMsl::Item *, std::allocator<CMMsl::Item *>> fOrderedSample;	// 8 = 0x8
    struct ImpactEvent fImpactEvent;	// 32 = 0x20
    _Bool fIncludeDerivedFeatures;	// 223 = 0xdf
}

- (id).cxx_construct;	// IMP=0x002000000054dac1
- (void).cxx_destruct;	// IMP=0x001000000054dab3
- (void)cleanUp;	// IMP=0x001000000054da9f
- (void)cleanUpIncludingDerivedFeatures:(_Bool)arg1;	// IMP=0x001000000054d9ac
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000054d3c1
- (void)logOdometer:(const struct OdometerEntry *)arg1;	// IMP=0x001000000054d139
- (void)logSuppressionFeartures:(const FalsePositiveSuppressionFeatures_8c0e6519 *)arg1;	// IMP=0x001000000054cfa3
- (void)logFallStats:(const struct ImpactEvent *)arg1;	// IMP=0x001000000054ca25
- (void)logFallState:(const struct ImpactEvent *)arg1;	// IMP=0x001000000054c8c9
- (void)logWristState:(const struct WristState *)arg1;	// IMP=0x001000000054c7c4
- (void)logHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x001000000054c644
- (void)logPressure:(const Pressure_df92a120 *)arg1;	// IMP=0x001000000054c562
- (void)logFilteredPressure:(const FilteredPressure_e74e912d *)arg1;	// IMP=0x001000000054c480
- (void)logDeviceMotion:(const struct ImpactData *)arg1;	// IMP=0x001000000054c35f
- (void)logGyro200:(const struct ImpactData *)arg1;	// IMP=0x001000000054c260
- (void)logGyro100:(id)arg1 startTime:(double)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x001000000054c07e
- (void)logHgal:(const struct ImpactData *)arg1;	// IMP=0x001000000054bf86
- (void)logAccel800:(const struct ImpactData *)arg1;	// IMP=0x001000000054be8b
- (void)logAccel100:(id)arg1 startTime:(double)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x001000000054bcad
- (void)dealloc;	// IMP=0x001000000054bc6f
- (id)initInUniverse:(id)arg1;	// IMP=0x001000000054bc34
- (void)_insertSample:(void *)arg1;	// IMP=0x001000000054ba02

@end
