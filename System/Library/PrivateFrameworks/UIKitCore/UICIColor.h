//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIColor, UIColor;

__attribute__((visibility("hidden")))
@interface UICIColor
{
    CIColor *_ciColor;	// 8 = 0x8
    UIColor *_rgbColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000070d6be
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x000000000070d666
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000070d5f7
- (unsigned long long)hash;	// IMP=0x000000000070d5da
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000070d575
- (id)CIColor;	// IMP=0x000000000070d560
- (struct CGColor *)CGColor;	// IMP=0x000000000070d514
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000070d487
- (void)setStroke;	// IMP=0x000000000070d44a
- (void)setFill;	// IMP=0x000000000070d40d
- (void)set;	// IMP=0x000000000070d3d0
- (id)_rgbColor;	// IMP=0x000000000070d1ec
- (id)description;	// IMP=0x000000000070d148
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000070d13d
- (id)initWithCIColor:(id)arg1;	// IMP=0x000000000070d0bd

@end

