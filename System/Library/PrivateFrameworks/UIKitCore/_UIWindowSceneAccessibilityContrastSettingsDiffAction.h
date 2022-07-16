//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneSettingsDiffAction-Protocol.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

@interface _UIWindowSceneAccessibilityContrastSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsAccessibilityContrastDiffInspector;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000039f9d8
@property(retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsAccessibilityContrastDiffInspector; // @synthesize sceneSettingsAccessibilityContrastDiffInspector=_sceneSettingsAccessibilityContrastDiffInspector;
- (void)_animateAccessibilityContrastChangeInScene:(id)arg1 transitionContext:(id)arg2 applyChangesBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000039f759
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x000000000039f426

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

