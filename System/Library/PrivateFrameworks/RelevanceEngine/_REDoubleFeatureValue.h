//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _REDoubleFeatureValue
{
    double _value;	// 8 = 0x8
}

+ (id)featureValueWithDouble:(double)arg1;	// IMP=0x00000000000d074a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d0980
- (unsigned long long)_integralFeatureValue;	// IMP=0x00000000000d096f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d08f4
- (unsigned long long)hash;	// IMP=0x00000000000d089a
- (double)doubleValue;	// IMP=0x00000000000d0888
- (unsigned long long)type;	// IMP=0x00000000000d087d
- (id)initWithValue:(double)arg1;	// IMP=0x00000000000d0700

@end

