//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSUnitLength;

__attribute__((visibility("hidden")))
@interface _MNDistanceFormatOptions : NSObject
{
    _Bool _metric;	// 8 = 0x8
    _Bool _yards;	// 9 = 0x9
    _Bool _abbreviateUnits;	// 10 = 0xa
    _Bool _spoken;	// 11 = 0xb
    unsigned long long _minimumFractionDigits;	// 16 = 0x10
    unsigned long long _maximumFractionDigits;	// 24 = 0x18
    long long _rounding;	// 32 = 0x20
    NSUnitLength *_unitLength;	// 40 = 0x28
    NSLocale *_locale;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000166e3
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSUnitLength *unitLength; // @synthesize unitLength=_unitLength;
@property(nonatomic) long long rounding; // @synthesize rounding=_rounding;
@property(nonatomic) _Bool spoken; // @synthesize spoken=_spoken;
@property(nonatomic) _Bool abbreviateUnits; // @synthesize abbreviateUnits=_abbreviateUnits;
@property(nonatomic) _Bool yards; // @synthesize yards=_yards;
@property(nonatomic) _Bool metric; // @synthesize metric=_metric;
@property(nonatomic) unsigned long long maximumFractionDigits; // @synthesize maximumFractionDigits=_maximumFractionDigits;
@property(nonatomic) unsigned long long minimumFractionDigits; // @synthesize minimumFractionDigits=_minimumFractionDigits;
- (unsigned long long)hash;	// IMP=0x0000000000016513
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016280

@end
