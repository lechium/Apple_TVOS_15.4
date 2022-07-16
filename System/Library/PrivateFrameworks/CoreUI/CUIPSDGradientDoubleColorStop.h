//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreUI/NSCoding-Protocol.h>

@interface CUIPSDGradientDoubleColorStop <NSCoding>
{
    struct _psdGradientColor leadOutColor;	// 48 = 0x30
}

+ (id)doubleColorStopWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;	// IMP=0x000000000001c3af
+ (void)initialize;	// IMP=0x000000000001c373
- (id)description;	// IMP=0x000000000001c75b
- (_Bool)isDoubleStop;	// IMP=0x000000000001c753
- (struct _psdGradientColor)leadOutColor;	// IMP=0x000000000001c733
- (struct _psdGradientColor)leadInColor;	// IMP=0x000000000001c700
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c5d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c4bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c46e
- (id)initWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;	// IMP=0x000000000001c40e

@end
