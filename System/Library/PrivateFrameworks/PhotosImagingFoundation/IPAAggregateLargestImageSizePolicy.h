//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface IPAAggregateLargestImageSizePolicy
{
    NSArray *_policies;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000010de8
- (unsigned long long)hash;	// IMP=0x0000000000010dcb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010daa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010d2d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010c97
- (id)description;	// IMP=0x0000000000010c4f
- (double)transformScaleForSize:(struct CGSize)arg1;	// IMP=0x0000000000010a5f
- (struct CGSize)transformSize:(struct CGSize)arg1;	// IMP=0x00000000000107ef
- (_Bool)isBestFitPolicy;	// IMP=0x00000000000106ad
- (id)initWithPolicies:(id)arg1;	// IMP=0x00000000000105fe

@end

