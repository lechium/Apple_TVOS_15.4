//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDate;

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding>
{
    NSDate *_date;	// 8 = 0x8
    HKQuantity *_quantity;	// 16 = 0x10
    long long _context;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006e533
- (void).cxx_destruct;	// IMP=0x000000000006eb1c
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) HKQuantity *quantity; // @synthesize quantity=_quantity;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (unsigned long long)hash;	// IMP=0x000000000006ea5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e790
- (id)description;	// IMP=0x000000000006e6b8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e5c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006e53b
- (id)initWithDate:(id)arg1 quantity:(id)arg2;	// IMP=0x000000000006e51e
- (id)initWithDate:(id)arg1 quantity:(id)arg2 context:(long long)arg3;	// IMP=0x000000000006e479

@end

