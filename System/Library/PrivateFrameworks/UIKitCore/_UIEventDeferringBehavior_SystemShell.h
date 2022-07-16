//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/BSDebugDescriptionProviding-Protocol.h>

@class NSString;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringBehavior_SystemShell <BSDebugDescriptionProviding>
{
    struct {
        unsigned int hasSystemShellBehaviorDelegate:1;
        unsigned int delegateWantsLocalCompatibilityRules:1;
        unsigned int delegateShouldSuppressRemoteRule:1;
        unsigned int delegateCompareRemoteRules:1;
    } _behaviorDelegateFlags;	// 8 = 0x8
    id <_UIEventDeferringSystemShellBehaviorDelegate> _systemShellBehaviorDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022c8ae
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000022c566
- (long long)compareRemoteRuleOwningElement:(id)arg1 toElement:(id)arg2 inEnvironment:(id)arg3;	// IMP=0x000000000022c4a3
- (_Bool)shouldSuppressRemoteRuleForOwningElement:(id)arg1 inEnvironment:(id)arg2;	// IMP=0x000000000022c402
- (_Bool)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;	// IMP=0x000000000022c3e9
- (_Bool)wantsLocalCompatibilityRules;	// IMP=0x000000000022c30c
- (void)setSystemShellBehaviorDelegate:(id)arg1;	// IMP=0x000000000022c1da
- (id)systemShellBehaviorDelegate;	// IMP=0x000000000022c1c1
- (id)initWithEventDeferringManager:(id)arg1;	// IMP=0x000000000022c0ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
