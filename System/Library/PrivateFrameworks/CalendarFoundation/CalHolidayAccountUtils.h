//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CalHolidayAccountUtils : NSObject
{
}

+ (id)_createUnsavedHolidayAccountWithAccountStore:(id)arg1;	// IMP=0x000000000003f849
+ (id)_holidayAccountWithAccountStore:(id)arg1;	// IMP=0x000000000003f6fb
+ (_Bool)_isEnabledWithAccount:(id)arg1;	// IMP=0x000000000003f6d0
+ (id)holidayAccountDescription;	// IMP=0x000000000003f665
+ (void)ensureHolidayAccountExistsWithAccountStore:(id)arg1;	// IMP=0x000000000003f5f2
+ (void)setHolidayCalendarIsEnabled:(_Bool)arg1 withAccountStore:(id)arg2;	// IMP=0x000000000003f433
+ (_Bool)holidayCalendarIsEnabledWithAccountStore:(id)arg1;	// IMP=0x000000000003f3e0
+ (id)logHandle;	// IMP=0x000000000003f384

@end
