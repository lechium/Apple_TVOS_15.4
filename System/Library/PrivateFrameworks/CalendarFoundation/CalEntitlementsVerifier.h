//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CalEntitlementsVerifier : NSObject
{
}

+ (_Bool)currentProcessHasTestingEntitlement;	// IMP=0x000000000003f36b
+ (_Bool)currentProcessHasBirthdayModificationEntitlement;	// IMP=0x000000000003f352
+ (_Bool)currentProcessHasSyncClientEntitlement;	// IMP=0x000000000003f339
+ (_Bool)currentProcessHasContactsUIEntitlement;	// IMP=0x000000000003f320
+ (_Bool)currentProcessHasLocationdEffectiveBundleEntitlement;	// IMP=0x0000000000010c0b
+ (_Bool)currentProcessHasWatchOSMutableDatabaseEntitlement;	// IMP=0x000000000003f307
+ (_Bool)currentProcessHasAllowSuggestionsEntitlement;	// IMP=0x0000000000006652
+ (_Bool)currentProcessIsPreferences;	// IMP=0x000000000003f2b5
+ (_Bool)currentProcessIsDataAccess;	// IMP=0x000000000003f29c
+ (_Bool)currentProcessIsCalendarDaemon;	// IMP=0x000000000003f283
+ (_Bool)currentProcessIsFirstPartyCalendarApp;	// IMP=0x000000000003f26a
+ (id)_currentProcessValueForEntitlement:(id)arg1 expectedType:(unsigned long long)arg2;	// IMP=0x000000000003edf9
+ (id)currentProcessGetStringEntitlement:(id)arg1;	// IMP=0x000000000003eda8
+ (_Bool)currentProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x000000000000666b

@end

