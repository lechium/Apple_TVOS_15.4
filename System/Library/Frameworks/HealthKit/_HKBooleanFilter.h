//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _HKBooleanFilter
{
    _Bool _value;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a75e9
+ (id)falseFilter;	// IMP=0x00000000000a74a0
+ (id)trueFilter;	// IMP=0x00000000000a7472
@property(readonly, nonatomic) _Bool value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a76ad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a762f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a75f1
- (unsigned long long)hash;	// IMP=0x00000000000a75d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a7579
- (long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;	// IMP=0x00000000000a7568
- (long long)acceptsActivitySummary:(id)arg1;	// IMP=0x00000000000a7557
- (_Bool)acceptsDataObject:(id)arg1;	// IMP=0x00000000000a7547
- (id)description;	// IMP=0x00000000000a74cb
- (id)initWithValue:(_Bool)arg1;	// IMP=0x00000000000a7430
- (id)init;	// IMP=0x00000000000a73b6

@end
