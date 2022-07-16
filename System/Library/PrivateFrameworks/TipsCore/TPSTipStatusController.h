//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;

@interface TPSTipStatusController : NSObject <NSCopying>
{
    _Bool _isDirty;	// 8 = 0x8
    NSUserDefaults *_appGroupDefaults;	// 16 = 0x10
    NSMutableDictionary *_identifierToTipStatusMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000022e03
@property(retain, nonatomic) NSMutableDictionary *identifierToTipStatusMap; // @synthesize identifierToTipStatusMap=_identifierToTipStatusMap;
@property(retain, nonatomic) NSUserDefaults *appGroupDefaults; // @synthesize appGroupDefaults=_appGroupDefaults;
- (_Bool)unviewedContentAvailable;	// IMP=0x0000000000022d18
- (id)debugDescription;	// IMP=0x0000000000022c22
- (void)removeCacheData;	// IMP=0x0000000000022b73
- (void)updateCacheData;	// IMP=0x0000000000022af5
- (void)removeUserInfoForIdentifier:(id)arg1;	// IMP=0x0000000000022a46
- (void)updateUserInfoForIdentifier:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0000000000022954
- (id)userInfoForIdentifier:(id)arg1;	// IMP=0x0000000000022902
- (id)lastDisplayContextForIdentifier:(id)arg1;	// IMP=0x00000000000228b0
- (unsigned long long)usageFlagsForIdentifier:(id)arg1;	// IMP=0x000000000002286a
- (void)updateOverrideFrequencyControlForIdentifier:(id)arg1 value:(_Bool)arg2;	// IMP=0x00000000000227b6
- (_Bool)isOverrideFrequencyControlForIdentifier:(id)arg1;	// IMP=0x0000000000022770
- (void)updateOverrideHoldoutForIdentifier:(id)arg1 value:(_Bool)arg2;	// IMP=0x00000000000226bc
- (_Bool)isOverrideHoldoutForIdentifier:(id)arg1;	// IMP=0x0000000000022676
- (void)updateLastUsedVersionForIdentifier:(id)arg1 value:(id)arg2;	// IMP=0x000000000002256f
- (id)lastUsedVersionForIdentifier:(id)arg1;	// IMP=0x000000000002251d
- (void)updateExpiredForIdentifier:(id)arg1 value:(_Bool)arg2;	// IMP=0x0000000000022469
- (_Bool)isExpiredForIdentifier:(id)arg1;	// IMP=0x0000000000022423
- (void)addDesiredOutcomePerformedDateForIdentifier:(id)arg1 date:(id)arg2;	// IMP=0x00000000000222fc
- (void)donateDesiredOutcomePerformedForIdentifier:(id)arg1 date:(id)arg2;	// IMP=0x0000000000022110
- (_Bool)isDesiredOutcomePerformedForIdentifier:(id)arg1;	// IMP=0x00000000000220ca
- (id)contentViewedDateForIdentifier:(id)arg1;	// IMP=0x0000000000022078
- (void)updateContentViewedForIdentifier:(id)arg1 value:(_Bool)arg2;	// IMP=0x0000000000021f85
- (_Bool)isContentViewedForIdentifier:(id)arg1;	// IMP=0x0000000000021f3f
- (void)updateHintDismissedForIdentifier:(id)arg1 value:(_Bool)arg2;	// IMP=0x0000000000021e4c
- (_Bool)isHintDismissedForIdentifier:(id)arg1;	// IMP=0x0000000000021e06
- (id)hintNotDisplayedDueToFrequencyControlDatesForIdentifier:(id)arg1;	// IMP=0x0000000000021db4
- (void)addHintNotDisplayedDueToFrequencyControlDateForIdentifier:(id)arg1;	// IMP=0x0000000000021cd8
- (id)firstHintDisplayDateForIdentifier:(id)arg1;	// IMP=0x0000000000021c5c
- (void)addHintDisplayedForIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x0000000000021b55
- (int)hintDisplayedCountForIdentifier:(id)arg1;	// IMP=0x0000000000021ae5
- (_Bool)isHintDisplayedForIdentifier:(id)arg1;	// IMP=0x0000000000021a9f
- (void)updateHintWouldHaveBeenDisplayedDateForIdentifier:(id)arg1 value:(_Bool)arg2;	// IMP=0x0000000000021979
- (id)hintWouldHaveBeenDisplayedDateForIdentifier:(id)arg1;	// IMP=0x0000000000021927
- (void)updateHintEligibleDateForIdentifier:(id)arg1 value:(_Bool)arg2;	// IMP=0x00000000000217da
- (id)hintEligibleDateForIdentifier:(id)arg1;	// IMP=0x0000000000021788
- (void)updatePreconditionMatchedForIdentifier:(id)arg1 value:(_Bool)arg2;	// IMP=0x0000000000021673
- (void)updatePreconditionMatchedForIdentifiers:(id)arg1 value:(_Bool)arg2;	// IMP=0x0000000000021537
- (_Bool)isPreconditionMatchedForIdentifier:(id)arg1;	// IMP=0x00000000000214f1
- (void)updateClonedFromIdentifierForIdentifier:(id)arg1 value:(id)arg2;	// IMP=0x0000000000021424
- (id)clonedFromIdentifierForIdentifier:(id)arg1;	// IMP=0x00000000000213d2
- (void)updateCorrelationIdentifierForIdentifier:(id)arg1 value:(id)arg2;	// IMP=0x0000000000021305
- (id)correlationIdentifierForIdentifier:(id)arg1;	// IMP=0x00000000000212b3
- (void)updatevariantIdentifierForIdentifier:(id)arg1 value:(id)arg2;	// IMP=0x00000000000211e6
- (id)variantIdentifierForIdentifier:(id)arg1;	// IMP=0x0000000000021194
- (void)updateDisplayTypeForIdentifier:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x00000000000210dc
- (unsigned long long)displayTypeForIdentifier:(id)arg1;	// IMP=0x0000000000021096
- (void)updateDateForTriggerRestartTrackingForIdentifier:(id)arg1 date:(id)arg2;	// IMP=0x0000000000020fc6
- (id)dateForTriggerRestartTrackingForIdentifier:(id)arg1;	// IMP=0x0000000000020f74
- (void)updateHintInelgibileForIdentifier:(id)arg1 value:(long long)arg2;	// IMP=0x0000000000020e6f
- (_Bool)isHintInelgibileForReason:(long long)arg1 identifier:(id)arg2;	// IMP=0x0000000000020e16
- (_Bool)isHintInelgibileForIdentifier:(id)arg1;	// IMP=0x0000000000020dd0
- (long long)hintInelgibileReasonForIdentifier:(id)arg1;	// IMP=0x0000000000020d8a
- (_Bool)isDesiredOutcomeTrackingEligibleForIdentifier:(id)arg1;	// IMP=0x0000000000020bf4
- (_Bool)isTriggerTrackingEligibleForIdentifier:(id)arg1 checkForPrecondition:(_Bool)arg2 checkForEligibleDate:(_Bool)arg3;	// IMP=0x00000000000209a8
- (_Bool)isTriggerTrackingEligibleForIdentifier:(id)arg1;	// IMP=0x000000000002098b
- (_Bool)isTipAppDisplayEligibleForIdentifier:(id)arg1;	// IMP=0x00000000000207e0
- (_Bool)isContentNeverVisibleForIdentifier:(id)arg1;	// IMP=0x0000000000020638
- (_Bool)isEligibilityTrackingNeedsRestartForIdentifier:(id)arg1;	// IMP=0x000000000002052f
- (_Bool)isHintMaxDurationExcceededForIdentifier:(id)arg1;	// IMP=0x000000000002034b
- (_Bool)isContextualInfoLifetimeExpiredForIdentifier:(id)arg1;	// IMP=0x000000000002018f
- (_Bool)isLockScreenHintDisplayEligibleForIdentifier:(id)arg1;	// IMP=0x000000000001ffec
- (id)reenrollPreconditionChangeContent;	// IMP=0x000000000001fdb4
- (id)reenrollHoldoutContent;	// IMP=0x000000000001fbc4
- (void)removeAllTipStatus;	// IMP=0x000000000001fb6f
- (id)statusesForCorrelationIdentifier:(id)arg1;	// IMP=0x000000000001f9ad
- (id)statusForIdentifier:(id)arg1;	// IMP=0x000000000001f999
- (void)syncWithIdentifiers:(id)arg1;	// IMP=0x000000000001f86e
- (id)_tipStatusForIdentifier:(id)arg1 addIfMissing:(_Bool)arg2;	// IMP=0x000000000001f776
@property(readonly, nonatomic) NSDictionary *tipStatusMap; // @dynamic tipStatusMap;
- (void)_reloadCacheData;	// IMP=0x000000000001f600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f513
- (id)init;	// IMP=0x000000000001f505
- (id)initWithAppGroupDefaults:(id)arg1;	// IMP=0x000000000001f429

@end

