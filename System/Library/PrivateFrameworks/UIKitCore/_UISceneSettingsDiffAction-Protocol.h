//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class FBSScene, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, UIScene;

@protocol _UISceneSettingsDiffAction <NSObject>
- (void)_performActionsForUIScene:(UIScene *)arg1 withUpdatedFBSScene:(FBSScene *)arg2 settingsDiff:(FBSSceneSettingsDiff *)arg3 fromSettings:(FBSSceneSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5 lifecycleActionType:(unsigned int)arg6;
@end

