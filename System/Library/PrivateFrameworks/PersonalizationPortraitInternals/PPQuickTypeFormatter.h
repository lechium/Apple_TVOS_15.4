//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSDateComponentsFormatter, NSDateFormatter, NSLengthFormatter, NSLocale, NSMeasurementFormatter, NSString, NSURL, PPQuickTypeQuery, _PASLock;

@interface PPQuickTypeFormatter : NSObject
{
    PPQuickTypeQuery *_query;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
    NSString *_desiredLanguage;	// 24 = 0x18
    NSString *_fallbackLanguage;	// 32 = 0x20
    _PASLock *_localizedStrings;	// 40 = 0x28
    NSDateFormatter *_birthdayFormatter;	// 48 = 0x30
    NSDateFormatter *_chineseBirthdayFormatter;	// 56 = 0x38
    NSDateFormatter *_yearlessChineseBirthdayFormatter;	// 64 = 0x40
    NSDateFormatter *_shortEventFormatter;	// 72 = 0x48
    NSDateFormatter *_longEventFormatter;	// 80 = 0x50
    NSCache *_localizedLabelCache;	// 88 = 0x58
    NSCache *_dateFormatCache;	// 96 = 0x60
    NSURL *_labeledValueLocalizationURL;	// 104 = 0x68
    NSCache *_appNameCache;	// 112 = 0x70
    NSMeasurementFormatter *_measurementWholeFormatter;	// 120 = 0x78
    NSMeasurementFormatter *_measurementDecimalFormatter;	// 128 = 0x80
    NSMeasurementFormatter *_measurementUnscaledFormatter;	// 136 = 0x88
    NSLengthFormatter *_lengthFormatter;	// 144 = 0x90
    NSDateComponentsFormatter *_dateComponentFormatter;	// 152 = 0x98
}

+ (id)new;	// IMP=0x00000000000cf832
+ (id)formatterWithQuery:(id)arg1;	// IMP=0x00000000000cf011
- (void).cxx_destruct;	// IMP=0x00000000000ce49e
- (id)inviteLinkLabel;	// IMP=0x00000000000ce3a9
- (id)timeLeftLabel;	// IMP=0x00000000000ce2b4
- (id)streetLabel;	// IMP=0x00000000000ce1bf
- (id)distanceLabel;	// IMP=0x00000000000ce0ca
- (id)destinationLabel;	// IMP=0x00000000000cdfd5
- (id)etaLabel;	// IMP=0x00000000000cdee0
- (id)attributionPattern;	// IMP=0x00000000000cde1a
- (id)navigationItemLabelForTypeLabel:(id)arg1 destination:(id)arg2;	// IMP=0x00000000000cdcf8
- (id)formattedTimeInterval:(double)arg1;	// IMP=0x00000000000cdc96
- (id)makeDateComponentFormatter;	// IMP=0x00000000000cdb5a
- (id)formattedPostalAddress:(id)arg1;	// IMP=0x00000000000cda63
- (id)formattedLengthInMeters:(double)arg1;	// IMP=0x00000000000cda01
- (id)makeLengthFormatter;	// IMP=0x00000000000cd900
- (id)formattedMeasurement:(id)arg1 allowDecimals:(_Bool)arg2 scaleUnits:(_Bool)arg3;	// IMP=0x00000000000cd86b
- (id)makeMeasurementUnscaledFormatter;	// IMP=0x00000000000cd71b
- (id)makeMeasurementDecimalFormatter;	// IMP=0x00000000000cd5c5
- (id)makeMeasurementWholeFormatter;	// IMP=0x00000000000cd481
- (id)localizedAppNameForBundleIdentifier:(id)arg1;	// IMP=0x00000000000cd2af
- (id)formattedStringsForLabels:(id)arg1;	// IMP=0x00000000000ccce5
- (id)formattedStringForLabel:(id)arg1;	// IMP=0x00000000000ccc0a
- (id)formattedEventTime:(id)arg1;	// IMP=0x00000000000ccac9
- (id)formattedBirthday:(id)arg1;	// IMP=0x00000000000cc3cd
- (id)makeBirthdayFormatter;	// IMP=0x00000000000cc21d
- (id)makeChineseBirthdayFormatter;	// IMP=0x00000000000cc04a
- (id)makeYearlessChineseBirthdayFormatter;	// IMP=0x00000000000cbe0f
- (id)makeLongEventFormatter;	// IMP=0x00000000000cbcde
- (id)makeShortEventFormatter;	// IMP=0x00000000000cbbad
- (id)init;	// IMP=0x00000000000cbba7

@end

