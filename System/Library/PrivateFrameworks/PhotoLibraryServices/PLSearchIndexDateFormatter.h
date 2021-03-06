//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSString, PLDateRangeFormatter;
@protocol OS_dispatch_queue;

@interface PLSearchIndexDateFormatter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDateFormatter *_dateFormatter;	// 16 = 0x10
    PLDateRangeFormatter *_dateRangeFormatter;	// 24 = 0x18
    NSString *_yearFormat;	// 32 = 0x20
    NSString *_monthFormat;	// 40 = 0x28
    NSString *_displayFormat;	// 48 = 0x30
    NSString *_parseFormat;	// 56 = 0x38
    NSArray *_monthSymbols;	// 64 = 0x40
    _Bool _didSetupLocaleAndFormats;	// 72 = 0x48
}

+ (id)monthFormatForLocale:(id)arg1;	// IMP=0x000000000057a8da
+ (id)yearFormatForLocale:(id)arg1;	// IMP=0x000000000057a8b5
- (void).cxx_destruct;	// IMP=0x000000000057a268
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000000057a12c
- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;	// IMP=0x0000000000579feb
- (id)newLocalizedStringFromDate:(id)arg1;	// IMP=0x0000000000579ede
- (id)_inqNewLocalizedStringFromDate:(id)arg1;	// IMP=0x0000000000579e52
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(_Bool)arg2;	// IMP=0x0000000000579d39
- (id)localizedMonthStringsFromDate:(id)arg1;	// IMP=0x0000000000579c23
- (id)localizedSeasonNameFromDate:(id)arg1;	// IMP=0x0000000000579b73
- (void)_inqUpdateDateFormat:(id)arg1;	// IMP=0x0000000000579a81
- (void)_inqSetupDateFormatter;	// IMP=0x000000000057984a
- (id)_arrangedMonthSymbols;	// IMP=0x00000000005791cf
- (id)init;	// IMP=0x000000000057917c

@end

