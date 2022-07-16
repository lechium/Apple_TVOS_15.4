//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class NSArray, NSLocale, NSString;

@interface CNDateComponentsFormatter : NSFormatter
{
    NSLocale *_locale;	// 8 = 0x8
    NSArray *_lazyFormatterFutures;	// 16 = 0x10
    NSString *_dateFormatPlaceholderString;	// 24 = 0x18
}

+ (id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;	// IMP=0x000000000005ee24
+ (id)chineseCyclicYearMonthDayFormatter;	// IMP=0x000000000005ed79
+ (id)chineseRelatedGregorianYearMonthDayHanidayFormatter;	// IMP=0x000000000005ecef
+ (id)chineseMonthDayHanidayFormatter;	// IMP=0x000000000005ec7e
+ (id)chineseMonthDayFormatter;	// IMP=0x000000000005ec0d
+ (id)chineseRelatedGregorianYearMonthDayFormatter;	// IMP=0x000000000005eb86
+ (id)shortDayMonthYearlessDateFormatterWithLocale:(id)arg1;	// IMP=0x000000000005eb6d
+ (id)shortDayMonthYearDateFormatterWithLocale:(id)arg1;	// IMP=0x000000000005eb4f
+ (id)longDayMonthYearlessDateFormatterWithLocale:(id)arg1;	// IMP=0x000000000005eb33
+ (id)longDayMonthYearDateFormatterWithLocale:(id)arg1;	// IMP=0x000000000005eb12
+ (id)formatterFuturesWithLocale:(id)arg1;	// IMP=0x000000000005e20f
+ (_Bool)shouldUseIslamicSpecificFormattersForLocale:(id)arg1;	// IMP=0x000000000005e0de
+ (_Bool)shouldUseChinaSpecificFormattersForLocale:(id)arg1;	// IMP=0x000000000005e059
+ (id)dateFormatterWithYearFormat:(id)arg1 hasLongFormat:(_Bool)arg2 locale:(id)arg3;	// IMP=0x000000000005de19
+ (id)os_log;	// IMP=0x000000000005d2a5
- (void).cxx_destruct;	// IMP=0x000000000005fc48
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)normalizedComponentsFromDate:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3;	// IMP=0x000000000005fa56
- (unsigned long long)componentsToExtract;	// IMP=0x000000000005fa4b
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;	// IMP=0x000000000005f29c
- (id)stringForObjectValue:(id)arg1;	// IMP=0x000000000005f0a4
- (id)dateComponentsFromString:(id)arg1;	// IMP=0x000000000005f057
- (id)stringFromDateComponents:(id)arg1;	// IMP=0x000000000005f029
- (id)displayFormatterForComponents:(id)arg1;	// IMP=0x000000000005eea6
- (void)regenerateFormatterFutures;	// IMP=0x000000000005df83
- (id)arabicIslamicPlaceholderString;	// IMP=0x000000000005de0c
- (id)arabicGregorianPlaceholderString;	// IMP=0x000000000005ddff
- (_Bool)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)arg1;	// IMP=0x000000000005dd1e
- (_Bool)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)arg1;	// IMP=0x000000000005dc3d
- (id)chinesePlaceholderStringWithDay:(id)arg1 month:(id)arg2 year:(id)arg3;	// IMP=0x000000000005dc0b
- (_Bool)shouldUseChinesePlaceholderString;	// IMP=0x000000000005db65
- (id)placeholderStringWithLocalizedDay:(id)arg1 month:(id)arg2 year:(id)arg3;	// IMP=0x000000000005d9de
- (id)dateFormatPlaceholderStringForLanguage:(id)arg1;	// IMP=0x000000000005d6f0
- (id)dateFormatPlaceholderString;	// IMP=0x000000000005d640
- (id)dmyFormatString;	// IMP=0x000000000005d515
- (id)placeholderSubstitutionStringWithDay:(unsigned long long)arg1 month:(unsigned long long)arg2 year:(unsigned long long)arg3;	// IMP=0x000000000005d383
- (id)init;	// IMP=0x000000000005d301

@end

