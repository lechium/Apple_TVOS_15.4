//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding>
{
    _Bool _capacityValid;	// 8 = 0x8
    NSNumber *_capacityBytes;	// 16 = 0x10
    long long _units;	// 24 = 0x18
    unsigned long long _capacity;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001394
- (void).cxx_destruct;	// IMP=0x00000000000013d4
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) long long units; // @synthesize units=_units;
@property(nonatomic) _Bool capacityValid; // @synthesize capacityValid=_capacityValid;
@property(retain, nonatomic) NSNumber *capacityBytes; // @synthesize capacityBytes=_capacityBytes;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001303
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000012e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000114a
- (id)description;	// IMP=0x0000000000001039
- (id)init;	// IMP=0x0000000000000fe0

@end

