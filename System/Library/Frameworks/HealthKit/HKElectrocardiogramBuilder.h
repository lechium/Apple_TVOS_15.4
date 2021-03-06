//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKQuantity, NSDate;

@interface HKElectrocardiogramBuilder : NSObject
{
    struct map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::less<binarysample::ElectrocardiogramLead_Name>, std::allocator<std::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> _leads;	// 8 = 0x8
    HKQuantity *_averageHeartRate;	// 32 = 0x20
    unsigned long long _classification;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    HKQuantity *_frequency;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000000d384f
- (void).cxx_destruct;	// IMP=0x00000000000d380f
@property(copy, nonatomic) HKQuantity *frequency; // @synthesize frequency=_frequency;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)finishWithDevice:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000d3505
- (void)addClassification:(unsigned long long)arg1;	// IMP=0x00000000000d34fb
- (void)addAverageHeartRate:(id)arg1;	// IMP=0x00000000000d34ea
- (void)addValue:(float)arg1 lead:(long long)arg2;	// IMP=0x00000000000d3347
- (id)initWithStartDate:(id)arg1 frequency:(id)arg2;	// IMP=0x00000000000d3290

@end

