//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPAScaleImageSizePolicy
{
    double _scale;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x00000000000123d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000123b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012335
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000122aa
- (id)description;	// IMP=0x0000000000012261
- (double)transformScaleForSize:(struct CGSize)arg1;	// IMP=0x000000000001224f
- (struct CGSize)transformSize:(struct CGSize)arg1;	// IMP=0x000000000001220c
- (id)initWithScale:(double)arg1;	// IMP=0x0000000000012187

@end

