//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _UIActivityApplicationExtensionDiscovery;
@protocol _UIActivityHelperDelegate;

@interface _UIActivityHelper : NSObject
{
    _Bool _primed;	// 8 = 0x8
    id <_UIActivityHelperDelegate> _delegate;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    _UIActivityApplicationExtensionDiscovery *_applicationExtensionDiscovery;	// 32 = 0x20
    NSArray *_cachedBuiltinActivities;	// 40 = 0x28
    CDUnknownBlockType _fetchShortcutsBlock;	// 48 = 0x30
}

+ (id)transportImageForBundleIdentifier:(id)arg1;	// IMP=0x000000000005e87a
+ (id)activityTypeForBundleIdentifier:(id)arg1;	// IMP=0x000000000005e74f
+ (id)builtinActivityClasses;	// IMP=0x000000000005e69e
- (void).cxx_destruct;	// IMP=0x00000000000624d0
@property(copy, nonatomic) CDUnknownBlockType fetchShortcutsBlock; // @synthesize fetchShortcutsBlock=_fetchShortcutsBlock;
@property(nonatomic) _Bool primed; // @synthesize primed=_primed;
@property(readonly, nonatomic) NSArray *cachedBuiltinActivities; // @synthesize cachedBuiltinActivities=_cachedBuiltinActivities;
@property(retain, nonatomic) _UIActivityApplicationExtensionDiscovery *applicationExtensionDiscovery; // @synthesize applicationExtensionDiscovery=_applicationExtensionDiscovery;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) __weak id <_UIActivityHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_activitiesByDuetOrderingActivities:(id)arg1;	// IMP=0x0000000000061e02
- (id)_activitiesByApplyingFavoriteOrderingToActivities:(id)arg1 favoriteActivityTypes:(id)arg2;	// IMP=0x0000000000061b63
- (id)_activitiesByTypeOrderingActivities:(id)arg1 activityTypeOrdering:(id)arg2;	// IMP=0x000000000006182c
- (id)_activitiesByApplyingBeforeTypePinningToActivities:(id)arg1 activitiesToBeforeTypePin:(id)arg2;	// IMP=0x0000000000061560
- (id)_defaultSortOrderForOtherActivity:(id)arg1;	// IMP=0x00000000000614da
- (id)_defaultSortOrderForShortcutActivity:(id)arg1;	// IMP=0x00000000000614b5
- (id)_defaultSortOrderForOpenInAppActivity:(id)arg1;	// IMP=0x00000000000613d4
- (id)_defaultSortOrderForApplicationDefinedActivity:(id)arg1;	// IMP=0x000000000006132e
- (id)_defaultSortOrderForExtensionBasedActivity:(id)arg1;	// IMP=0x0000000000061111
- (id)_defaultSortItemForBuiltinActivity:(id)arg1;	// IMP=0x0000000000060fe0
- (id)_defaultSortOrderForBuiltInElevatedActivity:(id)arg1;	// IMP=0x0000000000060eaf
- (id)_defaultOrderingDescriptorForActivity:(id)arg1;	// IMP=0x0000000000060e3f
- (id)_activitiesByApplyingDefaultOrdering:(id)arg1;	// IMP=0x0000000000060b87
- (id)activitiesByOrderingActivities:(id)arg1 applyDefaultOrdering:(_Bool)arg2 applyBeforeTypePinning:(_Bool)arg3 activityTypeOrdering:(id)arg4 bypassDuet:(_Bool)arg5;	// IMP=0x000000000006087d
- (id)orderedAvailableActivitiesForMatchingContext:(id)arg1;	// IMP=0x000000000005fdcd
- (void)preheatAvailableActivitiesForMatchingContext:(id)arg1;	// IMP=0x000000000005fcad
- (void)_enumerateAvailableActivitiesForMatchingContext:(id)arg1 intoMatchingResults:(id)arg2 matchingResultsUpdateBlock:(CDUnknownBlockType)arg3 enumerateActivityBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000005ea83
- (id)reportExtensionsCacheResult;	// IMP=0x000000000005ea33
- (void)primeWithDiscoveryContext:(id)arg1;	// IMP=0x000000000005e977
- (id)initWithDelegate:(id)arg1 sessionID:(id)arg2 fetchShortcutsBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005e5c5

@end

