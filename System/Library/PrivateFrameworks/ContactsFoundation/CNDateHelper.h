//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNDateHelper : NSObject
{
}

+ (_Bool)isGregorianDerivedCalendarIdentifier:(id)arg1;	// IMP=0x000000000006b82e
+ (_Bool)isGregorianDerivedCalendar:(id)arg1;	// IMP=0x000000000006b7d8
+ (id)dateComponentsFromDateComponents:(id)arg1 preservingUnits:(unsigned long long)arg2;	// IMP=0x000000000006b4ce
+ (id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:(id)arg1 timeZone:(id)arg2;	// IMP=0x000000000006b268
+ (id)gregorianDateComponentsFromDateComponents:(id)arg1;	// IMP=0x000000000006ae54
+ (id)dateComponentsInCalendar:(id)arg1 fromGregorianDateComponents:(id)arg2;	// IMP=0x000000000006abad
+ (id)componentsForJanuary1WithYear:(long long)arg1;	// IMP=0x000000000006aa98
+ (id)componentsFromDate:(id)arg1;	// IMP=0x000000000006aa00
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;	// IMP=0x000000000006a8d0
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;	// IMP=0x000000000006a83c
+ (long long)gregorianYearFromDate:(id)arg1;	// IMP=0x000000000006a7c0
+ (long long)gregorianYearInGMTFromDate:(id)arg1;	// IMP=0x000000000006a744
+ (long long)currentGregorianYearInGMT;	// IMP=0x000000000006a6ea
+ (id)gregorianCalendarInGMT;	// IMP=0x000000000006a619
+ (id)gregorianCalendar;	// IMP=0x000000000006a5aa
+ (_Bool)isComponentsEmpty:(id)arg1;	// IMP=0x000000000006a52c

@end

