//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreUI/NSCoding-Protocol.h>

@interface CUIPSDGradientColorStop <NSCoding>
{
    struct _psdGradientColor gradientColor;	// 16 = 0x10
}

+ (id)colorStopWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;	// IMP=0x000000000001bf38
+ (void)initialize;	// IMP=0x000000000001befc
- (id)description;	// IMP=0x000000000001c2a0
- (_Bool)isColorStop;	// IMP=0x000000000001c298
- (double)colorLocation;	// IMP=0x000000000001c286
- (struct _psdGradientColor)gradientColor;	// IMP=0x000000000001c266
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c136
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c023
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bfd4
- (id)initWithLocation:(double)arg1 gradientColor:(struct _psdGradientColor)arg2;	// IMP=0x000000000001bf85

@end

