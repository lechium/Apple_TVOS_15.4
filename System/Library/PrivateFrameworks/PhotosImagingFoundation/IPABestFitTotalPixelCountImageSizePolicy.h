//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPABestFitTotalPixelCountImageSizePolicy
{
    long long _totalPixelCount;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x00000000000112fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000112e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011267
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000111e8
- (id)description;	// IMP=0x00000000000111a0
- (double)transformScaleForSize:(struct CGSize)arg1;	// IMP=0x0000000000011174
- (struct CGSize)transformSize:(struct CGSize)arg1;	// IMP=0x0000000000011160
- (struct CGSize)_transformSize:(struct CGSize)arg1 scale:(double *)arg2;	// IMP=0x0000000000011026
- (_Bool)isBestFitPolicy;	// IMP=0x000000000001101e
- (id)initWithTotalPixelCount:(long long)arg1;	// IMP=0x0000000000010fad

@end
