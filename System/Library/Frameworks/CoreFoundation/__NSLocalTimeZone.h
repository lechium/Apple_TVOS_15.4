//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000133969
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00000000001339d9
- (Class)classForCoder;	// IMP=0x00000000001339cd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001339cc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013396c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000133963
- (id)description;	// IMP=0x000000000013390d
- (id)localizedName:(long long)arg1 locale:(id)arg2;	// IMP=0x00000000001338c6
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;	// IMP=0x000000000013388e
- (double)daylightSavingTimeOffsetForDate:(id)arg1;	// IMP=0x0000000000133856
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;	// IMP=0x000000000013381e
- (id)abbreviationForDate:(id)arg1;	// IMP=0x00000000001337e6
- (long long)secondsFromGMTForDate:(id)arg1;	// IMP=0x00000000001337ae
- (id)data;	// IMP=0x000000000013377c
- (id)name;	// IMP=0x000000000013374a

@end

