//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@interface _HKActivityStatisticsStandHourInfo : NSObject <NSSecureCoding>
{
    double _timeStamp;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019e6fd
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
- (id)description;	// IMP=0x000000000019e8df
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019e7d7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019e705
- (id)initWithTimeStamp:(double)arg1 state:(long long)arg2;	// IMP=0x0000000000009a7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a24d

@end
