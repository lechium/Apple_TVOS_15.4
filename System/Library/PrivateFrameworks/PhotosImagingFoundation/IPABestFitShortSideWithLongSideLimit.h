//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPABestFitShortSideWithLongSideLimit
{
    long long _nominalShortSide;	// 8 = 0x8
    long long _minLongSide;	// 16 = 0x10
    long long _maxLongSide;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x00000000000105bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001055f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000104a5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000103e5
- (id)description;	// IMP=0x0000000000010382
- (double)transformScaleForSize:(struct CGSize)arg1;	// IMP=0x00000000000102ea
- (struct CGSize)transformSize:(struct CGSize)arg1;	// IMP=0x000000000001026e
- (_Bool)isBestFitPolicy;	// IMP=0x0000000000010266
- (id)initWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3;	// IMP=0x0000000000010192

@end

