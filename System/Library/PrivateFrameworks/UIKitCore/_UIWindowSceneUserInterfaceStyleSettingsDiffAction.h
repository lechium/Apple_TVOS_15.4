//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneSettingsDiffAction-Protocol.h>

@class NSString, UIApplicationSceneSettingsDiffInspector;

@interface _UIWindowSceneUserInterfaceStyleSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>
{
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsUserInterfaceStyleDiffInspector;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b04d44
@property(retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsUserInterfaceStyleDiffInspector; // @synthesize sceneSettingsUserInterfaceStyleDiffInspector=_sceneSettingsUserInterfaceStyleDiffInspector;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;	// IMP=0x0000000000b04b49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

