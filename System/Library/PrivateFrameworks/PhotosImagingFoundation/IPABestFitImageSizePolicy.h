//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPABestFitImageSizePolicy
{
    struct CGSize _fitSize;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x0000000000012120
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000120e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012065
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011fc8
- (id)description;	// IMP=0x0000000000011f43
- (double)transformScaleForSize:(struct CGSize)arg1;	// IMP=0x0000000000011e96
- (struct CGSize)transformSize:(struct CGSize)arg1;	// IMP=0x0000000000011d9f
- (_Bool)isBestFitPolicy;	// IMP=0x0000000000011d97
- (id)initWithFitSize:(struct CGSize)arg1;	// IMP=0x0000000000011cfc

@end
