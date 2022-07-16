//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIDebugLogReport;

__attribute__((visibility("hidden")))
@interface _UIDeepestPreferredEnvironmentSearch : NSObject
{
    _Bool _allowsFocusRestoration;	// 8 = 0x8
    _UIDebugLogReport *_debugReport;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005c1097
@property(retain, nonatomic) _UIDebugLogReport *debugReport; // @synthesize debugReport=_debugReport;
@property(nonatomic) _Bool allowsFocusRestoration; // @synthesize allowsFocusRestoration=_allowsFocusRestoration;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2;	// IMP=0x00000000005c0fa8
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1;	// IMP=0x00000000005c0f1d
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2;	// IMP=0x00000000005c0c1d
- (void)_reportFoundFocusableItem:(id)arg1;	// IMP=0x00000000005c0ba4
- (void)_reportSearchingEnvironment:(id)arg1;	// IMP=0x00000000005c0b18
- (void)_reportStartingSearch;	// IMP=0x00000000005c0a92
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2;	// IMP=0x00000000005c0732
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1;	// IMP=0x00000000005c040b
- (id)deepestPreferredFocusableItemForEnvironment:(id)arg1 withRequest:(id)arg2;	// IMP=0x00000000005bfdc1

@end

