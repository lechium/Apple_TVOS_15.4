//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKInspectableValueCollection, NSString;

@interface HKReferenceRange : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_referenceRangeIdentifier;	// 8 = 0x8
    HKInspectableValueCollection *_valueRange;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a7fd2
+ (id)referenceRangeWithIdentifier:(id)arg1 inspectableValueRange:(id)arg2;	// IMP=0x00000000000a798a
+ (id)referenceRangeWithIdentifier:(id)arg1 maxValue:(id)arg2;	// IMP=0x00000000000a78b9
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2;	// IMP=0x00000000000a77e8
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;	// IMP=0x00000000000a76c8
- (void).cxx_destruct;	// IMP=0x00000000000a805c
@property(readonly, nonatomic) HKInspectableValueCollection *valueRange; // @synthesize valueRange=_valueRange;
@property(readonly, nonatomic) NSString *referenceRangeIdentifier; // @synthesize referenceRangeIdentifier=_referenceRangeIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a7fda
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a7fc7
- (unsigned long long)hash;	// IMP=0x00000000000a7f15
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a7c99
- (id)description;	// IMP=0x00000000000a7b66
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a7a8c

@end
