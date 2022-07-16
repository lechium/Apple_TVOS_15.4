//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface HKMedicalDate : NSObject <NSSecureCoding, NSCopying>
{
    long long _form;	// 8 = 0x8
    NSString *_originalTimeZoneString;	// 16 = 0x10
    NSDate *_underlyingDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000130c50
+ (id)_descriptionForForm:(long long)arg1;	// IMP=0x0000000000130bd2
+ (unsigned long long)_calendarUnitForForm:(long long)arg1;	// IMP=0x0000000000130bb6
+ (_Bool)_validForm:(long long)arg1;	// IMP=0x0000000000130ba9
+ (id)_adjustDate:(id)arg1 calendar:(id)arg2 form:(long long)arg3;	// IMP=0x000000000013097b
+ (id)_medicalDateWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;	// IMP=0x00000000001308fc
+ (id)medicalDateFromDate:(id)arg1 originalTimeZone:(id)arg2;	// IMP=0x000000000013069b
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 nanosecond:(long long)arg7 originalTimeZoneString:(id)arg8 error:(id *)arg9;	// IMP=0x0000000000130535
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 originalTimeZoneString:(id)arg7 error:(id *)arg8;	// IMP=0x00000000001303e6
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 error:(id *)arg4;	// IMP=0x00000000001302fe
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000013022e
+ (id)medicalDateWithYear:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000130173
+ (id)referenceCalendarWithLocalTimezone;	// IMP=0x000000000013015a
+ (id)referenceCalendar;	// IMP=0x0000000000130141
+ (id)medicalDateFromComponents:(id)arg1 originalTimeZoneString:(id)arg2 form:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000012fff0
- (void).cxx_destruct;	// IMP=0x00000000001311b9
@property(readonly, copy, nonatomic) NSDate *underlyingDate; // @synthesize underlyingDate=_underlyingDate;
@property(readonly, copy, nonatomic) NSString *originalTimeZoneString; // @synthesize originalTimeZoneString=_originalTimeZoneString;
@property(readonly, nonatomic) long long form; // @synthesize form=_form;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000130ec6
- (unsigned long long)hash;	// IMP=0x0000000000130e2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000130e20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000130d4e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000130c58
- (id)_initWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;	// IMP=0x0000000000130a70
- (id)description;	// IMP=0x0000000000130811
@property(readonly, copy, nonatomic) NSDate *dateForUTC;
- (_Bool)isCompatibleWithMedicalDateForm:(long long)arg1;	// IMP=0x00000000001307e0
- (id)adjustedDateForCalendar:(id)arg1;	// IMP=0x0000000000130764

@end
