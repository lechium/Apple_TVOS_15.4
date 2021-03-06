//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableDictionary;

@interface RERecentActionRelevanceProviderManager
{
    NSMutableDictionary *_relevanceProviderMap;	// 8 = 0x8
    NSDate *_lastDateUpdate;	// 16 = 0x10
}

+ (_Bool)_supportsHistoricProviders;	// IMP=0x000000000004ae73
+ (id)_features;	// IMP=0x000000000004aba1
+ (Class)_relevanceProviderClass;	// IMP=0x000000000004ab90
- (void).cxx_destruct;	// IMP=0x000000000004b759
- (void)_prepareForUpdate;	// IMP=0x000000000004b719
- (void)_handleSignificantTimeChange;	// IMP=0x000000000004b661
- (void)pause;	// IMP=0x000000000004b5ed
- (void)resume;	// IMP=0x000000000004b566
- (void)_scheduleUpdatesForActionProvider:(id)arg1;	// IMP=0x000000000004b329
- (void)_removeProvider:(id)arg1;	// IMP=0x000000000004b2d0
- (void)_addedProvider:(id)arg1;	// IMP=0x000000000004b23d
- (void)_handleActionPerformedNotifiction:(id)arg1;	// IMP=0x000000000004b14e
- (float)_relevanceForHistoricProvider:(id)arg1;	// IMP=0x000000000004b010
- (_Bool)_isHistoricProvider:(id)arg1;	// IMP=0x000000000004ae7b
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;	// IMP=0x000000000004ac68
- (void)dealloc;	// IMP=0x000000000004ab1b
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000004aa54

@end

