//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalPreferences;

@interface CDBPreferences : NSObject
{
    CalPreferences *_preferences;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x000000000002a9eb
- (void).cxx_destruct;	// IMP=0x000000000002b1a5
@property(readonly) _Bool has_privacyPaneHasBeenAcknowledgedVersion;
@property(nonatomic, getter=get_privacyPaneHasBeenAcknowledgedVersion, setter=set_privacyPaneHasBeenAcknowledgedVersion:) long long privacyPaneHasBeenAcknowledgedVersion;
@property(readonly) _Bool has_LastConfirmedSplashScreenVersionViewed;
@property(nonatomic, getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:) long long LastConfirmedSplashScreenVersionViewed;
@property(readonly) _Bool has_kCalRemindersPreferredDaysToSyncKey;
@property(nonatomic, getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:) long long kCalRemindersPreferredDaysToSyncKey;
@property(readonly) _Bool has_kCalPreferredDaysToSyncKey;
@property(nonatomic, getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:) long long kCalPreferredDaysToSyncKey;
@property(readonly) _Bool has_overrideParticipantRoleConstraint;
@property(nonatomic, getter=get_overrideParticipantRoleConstraint, setter=set_overrideParticipantRoleConstraint:) _Bool overrideParticipantRoleConstraint;
@property(readonly) _Bool has_suggestedLocationsTestMode;
@property(nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) _Bool suggestedLocationsTestMode;
@property(readonly) _Bool has_sqlProfileLoggingEnabled;
@property(nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) _Bool sqlProfileLoggingEnabled;
@property(readonly) _Bool has_suggestEventLocations;
@property(nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) _Bool suggestEventLocations;
@property(readonly) _Bool has_enableTravelAdvisoriesForAutomaticBehavior;
@property(nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) _Bool enableTravelAdvisoriesForAutomaticBehavior;
- (void)migrateIfNeededWithOptions:(unsigned long long)arg1;	// IMP=0x000000000002abbb
- (_Bool)needsMigration;	// IMP=0x000000000002aba2
- (void)_setVersion:(unsigned long long)arg1;	// IMP=0x000000000002ab7f
- (unsigned long long)_version;	// IMP=0x000000000002ab60
- (id)init;	// IMP=0x000000000002aa40

@end
