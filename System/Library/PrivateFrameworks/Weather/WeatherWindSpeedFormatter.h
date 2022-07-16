//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class NSDictionary, NSLocale;

@interface WeatherWindSpeedFormatter : NSFormatter
{
    NSLocale *_locale;	// 8 = 0x8
    NSDictionary *_directionSubstringAttributes;	// 16 = 0x10
}

+ (id)convenienceFormatter;	// IMP=0x00000000000030c2
- (void).cxx_destruct;	// IMP=0x0000000000003e14
@property(retain) NSDictionary *directionSubstringAttributes; // @synthesize directionSubstringAttributes=_directionSubstringAttributes;
@property(retain) NSLocale *locale; // @synthesize locale=_locale;
- (double)speedByConvertingToUserUnit:(double)arg1;	// IMP=0x0000000000003d68
- (int)windSpeedUnit;	// IMP=0x0000000000003b53
- (id)speedStringByConvertingToUserUnits:(float)arg1;	// IMP=0x0000000000003b17
- (id)stringForWindDirection:(float)arg1 shortDescription:(_Bool)arg2;	// IMP=0x00000000000039df
- (id)fallbackUnitString;	// IMP=0x0000000000003961
- (id)fallbackStringForWindSpeed:(float)arg1;	// IMP=0x00000000000038e7
- (id)stringForWindSpeed:(float)arg1;	// IMP=0x0000000000003708
- (id)templateStringForSpeed:(float)arg1 direction:(float)arg2;	// IMP=0x00000000000035a1
- (id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2;	// IMP=0x000000000000333e
- (id)formattedStringForSpeed:(float)arg1 direction:(float)arg2 shortDescription:(_Bool)arg3;	// IMP=0x0000000000003258
- (id)formattedStringForSpeed:(float)arg1 direction:(float)arg2;	// IMP=0x0000000000003241
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x0000000000003239
- (id)stringForObjectValue:(id)arg1;	// IMP=0x0000000000003196
- (id)init;	// IMP=0x0000000000003117

@end

