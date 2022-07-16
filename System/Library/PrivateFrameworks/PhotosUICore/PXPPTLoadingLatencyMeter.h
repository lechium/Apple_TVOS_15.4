//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PXPPTLoadingLatencyMeter : NSObject
{
    CDStruct_4bbd3430 _lowQualityResults;	// 8 = 0x8
    CDStruct_4bbd3430 _mediumQualityResults;	// 40 = 0x28
    CDStruct_4bbd3430 _highQualityResults;	// 72 = 0x48
    NSString *_outputType;	// 104 = 0x68
    NSString *_measurementsUnit;	// 112 = 0x70
}

+ (void)stopMeasurements;	// IMP=0x00000000003ea150
+ (void)startMeasurementsForOutputType:(id)arg1;	// IMP=0x00000000003ea0ef
+ (id)sharedInstance;	// IMP=0x00000000003ea0de
- (void).cxx_destruct;	// IMP=0x00000000003ea0b6
@property(retain, nonatomic) NSString *measurementsUnit; // @synthesize measurementsUnit=_measurementsUnit;
- (id)_measurementsDictionaryForOutputQuality:(long long)arg1;	// IMP=0x00000000003e9c03
@property(readonly, nonatomic) NSDictionary *measurementsDictionaryRepresentation;
- (CDStruct_4bbd3430)measurementsForOutputQuality:(long long)arg1;	// IMP=0x00000000003e9ae2
- (void)reportLatency:(double)arg1 forOutputQuality:(long long)arg2;	// IMP=0x00000000003e9a8f
- (id)initWithOutputType:(id)arg1;	// IMP=0x00000000003e99ed

@end

