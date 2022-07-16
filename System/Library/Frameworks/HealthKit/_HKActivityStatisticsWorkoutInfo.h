//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSource, NSDate;

@interface _HKActivityStatisticsWorkoutInfo : NSObject <NSSecureCoding>
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
    HKSource *_source;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019ef67
- (void).cxx_destruct;	// IMP=0x000000000019f835
@property(retain, nonatomic) HKSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;	// IMP=0x000000000019f6e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019f2a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019f130
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(id)arg3;	// IMP=0x000000000019f051
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019ef6f

@end
